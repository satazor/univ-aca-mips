/****************************************************************************
** IpcServer meta object code from reading C++ file 'ipcserver.h'
**
** Created: Wed Oct 9 11:09:21 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../ipcserver.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *IpcServer::className() const
{
    return "IpcServer";
}

QMetaObject *IpcServer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_IpcServer( "IpcServer", &IpcServer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString IpcServer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IpcServer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString IpcServer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IpcServer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* IpcServer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QServerSocket::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"receivedText", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_varptr, "\x06", QUParameter::In }
    };
    static const QUMethod signal_1 = {"receivedPixmap", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "receivedText(const QString&)", &signal_0, QMetaData::Public },
	{ "receivedPixmap(const QPixmap&)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"IpcServer", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_IpcServer.setMetaObject( metaObj );
    return metaObj;
}

void* IpcServer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "IpcServer" ) )
	return this;
    return QServerSocket::qt_cast( clname );
}

// SIGNAL receivedText
void IpcServer::receivedText( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL receivedPixmap
void IpcServer::receivedPixmap( const QPixmap& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool IpcServer::qt_invoke( int _id, QUObject* _o )
{
    return QServerSocket::qt_invoke(_id,_o);
}

bool IpcServer::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: receivedText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: receivedPixmap((const QPixmap&)*((const QPixmap*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QServerSocket::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool IpcServer::qt_property( int id, int f, QVariant* v)
{
    return QServerSocket::qt_property( id, f, v);
}

bool IpcServer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
