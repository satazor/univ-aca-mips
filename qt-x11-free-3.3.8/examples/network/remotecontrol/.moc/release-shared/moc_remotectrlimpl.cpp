/****************************************************************************
** RemoteCtrlImpl meta object code from reading C++ file 'remotectrlimpl.h'
**
** Created: Wed Oct 9 11:09:20 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../remotectrlimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *RemoteCtrlImpl::className() const
{
    return "RemoteCtrlImpl";
}

QMetaObject *RemoteCtrlImpl::metaObj = 0;
static QMetaObjectCleanUp cleanUp_RemoteCtrlImpl( "RemoteCtrlImpl", &RemoteCtrlImpl::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString RemoteCtrlImpl::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RemoteCtrlImpl", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString RemoteCtrlImpl::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RemoteCtrlImpl", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* RemoteCtrlImpl::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = RemoteCtrl::staticMetaObject();
    static const QUMethod slot_0 = {"sendImage", 0, 0 };
    static const QUMethod slot_1 = {"sendText", 0, 0 };
    static const QUMethod slot_2 = {"sendPalette", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "sendImage()", &slot_0, QMetaData::Private },
	{ "sendText()", &slot_1, QMetaData::Private },
	{ "sendPalette()", &slot_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"RemoteCtrlImpl", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_RemoteCtrlImpl.setMetaObject( metaObj );
    return metaObj;
}

void* RemoteCtrlImpl::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "RemoteCtrlImpl" ) )
	return this;
    return RemoteCtrl::qt_cast( clname );
}

bool RemoteCtrlImpl::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: sendImage(); break;
    case 1: sendText(); break;
    case 2: sendPalette(); break;
    default:
	return RemoteCtrl::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool RemoteCtrlImpl::qt_emit( int _id, QUObject* _o )
{
    return RemoteCtrl::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool RemoteCtrlImpl::qt_property( int id, int f, QVariant* v)
{
    return RemoteCtrl::qt_property( id, f, v);
}

bool RemoteCtrlImpl::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
