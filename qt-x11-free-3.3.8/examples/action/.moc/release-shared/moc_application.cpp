/****************************************************************************
** ApplicationWindow meta object code from reading C++ file 'application.h'
**
** Created: Wed Oct 9 11:07:04 2013
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
    static const QUMethod slot_0 = {"newDoc", 0, 0 };
    static const QUMethod slot_1 = {"choose", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "fileName", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"load", 1, param_slot_2 };
    static const QUMethod slot_3 = {"save", 0, 0 };
    static const QUMethod slot_4 = {"saveAs", 0, 0 };
    static const QUMethod slot_5 = {"print", 0, 0 };
    static const QUMethod slot_6 = {"about", 0, 0 };
    static const QUMethod slot_7 = {"aboutQt", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "newDoc()", &slot_0, QMetaData::Private },
	{ "choose()", &slot_1, QMetaData::Private },
	{ "load(const QString&)", &slot_2, QMetaData::Private },
	{ "save()", &slot_3, QMetaData::Private },
	{ "saveAs()", &slot_4, QMetaData::Private },
	{ "print()", &slot_5, QMetaData::Private },
	{ "about()", &slot_6, QMetaData::Private },
	{ "aboutQt()", &slot_7, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ApplicationWindow", parentObject,
	slot_tbl, 8,
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
    case 0: newDoc(); break;
    case 1: choose(); break;
    case 2: load((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: save(); break;
    case 4: saveAs(); break;
    case 5: print(); break;
    case 6: about(); break;
    case 7: aboutQt(); break;
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
