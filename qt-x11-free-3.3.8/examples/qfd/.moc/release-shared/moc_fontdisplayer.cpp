/****************************************************************************
** FontRowTable meta object code from reading C++ file 'fontdisplayer.h'
**
** Created: Wed Oct 9 11:08:09 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../fontdisplayer.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FontRowTable::className() const
{
    return "FontRowTable";
}

QMetaObject *FontRowTable::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FontRowTable( "FontRowTable", &FontRowTable::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FontRowTable::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FontRowTable", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FontRowTable::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FontRowTable", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FontRowTable::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setRow", 1, param_slot_0 };
    static const QUMethod slot_1 = {"chooseFont", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setRow(int)", &slot_0, QMetaData::Public },
	{ "chooseFont()", &slot_1, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"fontInformation", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "fontInformation(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"FontRowTable", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FontRowTable.setMetaObject( metaObj );
    return metaObj;
}

void* FontRowTable::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FontRowTable" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL fontInformation
void FontRowTable::fontInformation( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool FontRowTable::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setRow((int)static_QUType_int.get(_o+1)); break;
    case 1: chooseFont(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FontRowTable::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: fontInformation((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool FontRowTable::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool FontRowTable::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *FontDisplayer::className() const
{
    return "FontDisplayer";
}

QMetaObject *FontDisplayer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FontDisplayer( "FontDisplayer", &FontDisplayer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FontDisplayer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FontDisplayer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FontDisplayer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FontDisplayer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FontDisplayer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"FontDisplayer", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FontDisplayer.setMetaObject( metaObj );
    return metaObj;
}

void* FontDisplayer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FontDisplayer" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool FontDisplayer::qt_invoke( int _id, QUObject* _o )
{
    return QMainWindow::qt_invoke(_id,_o);
}

bool FontDisplayer::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool FontDisplayer::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool FontDisplayer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
