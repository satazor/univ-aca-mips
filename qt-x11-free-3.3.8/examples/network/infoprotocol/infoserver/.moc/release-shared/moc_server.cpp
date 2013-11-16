/****************************************************************************
** ServerInfo meta object code from reading C++ file 'server.h'
**
** Created: Wed Oct 9 11:09:10 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../server.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ServerInfo::className() const
{
    return "ServerInfo";
}

QMetaObject *ServerInfo::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ServerInfo( "ServerInfo", &ServerInfo::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ServerInfo::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ServerInfo", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ServerInfo::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ServerInfo", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ServerInfo::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ServerInfoBase::staticMetaObject();
    static const QUMethod slot_0 = {"newConnect", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "newConnect()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ServerInfo", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ServerInfo.setMetaObject( metaObj );
    return metaObj;
}

void* ServerInfo::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ServerInfo" ) )
	return this;
    return ServerInfoBase::qt_cast( clname );
}

bool ServerInfo::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: newConnect(); break;
    default:
	return ServerInfoBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ServerInfo::qt_emit( int _id, QUObject* _o )
{
    return ServerInfoBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ServerInfo::qt_property( int id, int f, QVariant* v)
{
    return ServerInfoBase::qt_property( id, f, v);
}

bool ServerInfo::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *SimpleServer::className() const
{
    return "SimpleServer";
}

QMetaObject *SimpleServer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SimpleServer( "SimpleServer", &SimpleServer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SimpleServer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SimpleServer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SimpleServer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SimpleServer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SimpleServer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QServerSocket::staticMetaObject();
    static const QUMethod signal_0 = {"newConnect", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "newConnect()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SimpleServer", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SimpleServer.setMetaObject( metaObj );
    return metaObj;
}

void* SimpleServer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SimpleServer" ) )
	return this;
    return QServerSocket::qt_cast( clname );
}

// SIGNAL newConnect
void SimpleServer::newConnect()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool SimpleServer::qt_invoke( int _id, QUObject* _o )
{
    return QServerSocket::qt_invoke(_id,_o);
}

bool SimpleServer::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: newConnect(); break;
    default:
	return QServerSocket::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SimpleServer::qt_property( int id, int f, QVariant* v)
{
    return QServerSocket::qt_property( id, f, v);
}

bool SimpleServer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *ClientSocket::className() const
{
    return "ClientSocket";
}

QMetaObject *ClientSocket::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ClientSocket( "ClientSocket", &ClientSocket::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ClientSocket::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClientSocket", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ClientSocket::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClientSocket", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ClientSocket::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QSocket::staticMetaObject();
    static const QUMethod slot_0 = {"readClient", 0, 0 };
    static const QUMethod slot_1 = {"connectionClosed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "readClient()", &slot_0, QMetaData::Private },
	{ "connectionClosed()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ClientSocket", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ClientSocket.setMetaObject( metaObj );
    return metaObj;
}

void* ClientSocket::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ClientSocket" ) )
	return this;
    return QSocket::qt_cast( clname );
}

bool ClientSocket::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: readClient(); break;
    case 1: connectionClosed(); break;
    default:
	return QSocket::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ClientSocket::qt_emit( int _id, QUObject* _o )
{
    return QSocket::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ClientSocket::qt_property( int id, int f, QVariant* v)
{
    return QSocket::qt_property( id, f, v);
}

bool ClientSocket::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
