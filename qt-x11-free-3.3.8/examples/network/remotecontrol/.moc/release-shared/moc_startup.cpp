/****************************************************************************
** StartUp meta object code from reading C++ file 'startup.h'
**
** Created: Wed Oct 9 11:09:20 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../startup.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *StartUp::className() const
{
    return "StartUp";
}

QMetaObject *StartUp::metaObj = 0;
static QMetaObjectCleanUp cleanUp_StartUp( "StartUp", &StartUp::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString StartUp::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StartUp", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString StartUp::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StartUp", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* StartUp::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"startRemoteCtrl", 0, 0 };
    static const QUMethod slot_1 = {"startMainDialog", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "startRemoteCtrl()", &slot_0, QMetaData::Private },
	{ "startMainDialog()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"StartUp", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_StartUp.setMetaObject( metaObj );
    return metaObj;
}

void* StartUp::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "StartUp" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool StartUp::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: startRemoteCtrl(); break;
    case 1: startMainDialog(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool StartUp::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool StartUp::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool StartUp::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
