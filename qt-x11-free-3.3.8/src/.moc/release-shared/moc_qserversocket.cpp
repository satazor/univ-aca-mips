/****************************************************************************
** QServerSocket meta object code from reading C++ file 'qserversocket.h'
**
** Created: Wed Oct 9 10:53:07 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../network/qserversocket.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QServerSocket::className() const
{
    return "QServerSocket";
}

QMetaObject *QServerSocket::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QServerSocket( "QServerSocket", &QServerSocket::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QServerSocket::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QServerSocket", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QServerSocket::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QServerSocket", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QServerSocket::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "socket", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"incomingConnection", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "incomingConnection(int)", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QServerSocket", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QServerSocket.setMetaObject( metaObj );
    return metaObj;
}

void* QServerSocket::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QServerSocket" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QServerSocket::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: incomingConnection((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QServerSocket::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QServerSocket::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QServerSocket::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
