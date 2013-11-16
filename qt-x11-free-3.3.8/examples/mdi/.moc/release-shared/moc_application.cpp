/****************************************************************************
** MDIWindow meta object code from reading C++ file 'application.h'
**
** Created: Wed Oct 9 11:09:23 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../application.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MDIWindow::className() const
{
    return "MDIWindow";
}

QMetaObject *MDIWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MDIWindow( "MDIWindow", &MDIWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MDIWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MDIWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MDIWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MDIWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MDIWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"message", 2, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "message(const QString&,int)", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MDIWindow", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MDIWindow.setMetaObject( metaObj );
    return metaObj;
}

void* MDIWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MDIWindow" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL message
void MDIWindow::message( const QString& t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

bool MDIWindow::qt_invoke( int _id, QUObject* _o )
{
    return QMainWindow::qt_invoke(_id,_o);
}

bool MDIWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return QMainWindow::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MDIWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MDIWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *ApplicationWindow::className() const
{
    return "ApplicationWindow";
}

QMetaObject *ApplicationWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ApplicationWindow( "ApplicationWindow", &ApplicationWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ApplicationWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ApplicationWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ApplicationWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ApplicationWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ApplicationWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "MDIWindow", QUParameter::Out }
    };
    static const QUMethod slot_0 = {"newDoc", 1, param_slot_0 };
    static const QUMethod slot_1 = {"load", 0, 0 };
    static const QUMethod slot_2 = {"save", 0, 0 };
    static const QUMethod slot_3 = {"saveAs", 0, 0 };
    static const QUMethod slot_4 = {"print", 0, 0 };
    static const QUMethod slot_5 = {"closeWindow", 0, 0 };
    static const QUMethod slot_6 = {"tileHorizontal", 0, 0 };
    static const QUMethod slot_7 = {"about", 0, 0 };
    static const QUMethod slot_8 = {"aboutQt", 0, 0 };
    static const QUMethod slot_9 = {"windowsMenuAboutToShow", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"windowsMenuActivated", 1, param_slot_10 };
    static const QMetaData slot_tbl[] = {
	{ "newDoc()", &slot_0, QMetaData::Private },
	{ "load()", &slot_1, QMetaData::Private },
	{ "save()", &slot_2, QMetaData::Private },
	{ "saveAs()", &slot_3, QMetaData::Private },
	{ "print()", &slot_4, QMetaData::Private },
	{ "closeWindow()", &slot_5, QMetaData::Private },
	{ "tileHorizontal()", &slot_6, QMetaData::Private },
	{ "about()", &slot_7, QMetaData::Private },
	{ "aboutQt()", &slot_8, QMetaData::Private },
	{ "windowsMenuAboutToShow()", &slot_9, QMetaData::Private },
	{ "windowsMenuActivated(int)", &slot_10, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ApplicationWindow", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ApplicationWindow.setMetaObject( metaObj );
    return metaObj;
}

void* ApplicationWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ApplicationWindow" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool ApplicationWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: static_QUType_ptr.set(_o,newDoc()); break;
    case 1: load(); break;
    case 2: save(); break;
    case 3: saveAs(); break;
    case 4: print(); break;
    case 5: closeWindow(); break;
    case 6: tileHorizontal(); break;
    case 7: about(); break;
    case 8: aboutQt(); break;
    case 9: windowsMenuAboutToShow(); break;
    case 10: windowsMenuActivated((int)static_QUType_int.get(_o+1)); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ApplicationWindow::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ApplicationWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool ApplicationWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
