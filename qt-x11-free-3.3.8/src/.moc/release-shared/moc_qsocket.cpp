/****************************************************************************
** QSocket meta object code from reading C++ file 'qsocket.h'
**
** Created: Wed Oct 9 10:53:08 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../network/qsocket.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSocket::className() const
{
    return "QSocket";
}

QMetaObject *QSocket::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSocket( "QSocket", &QSocket::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSocket::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSocket", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSocket::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSocket", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSocket::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"sn_read", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "force", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"sn_read", 1, param_slot_1 };
    static const QUMethod slot_2 = {"sn_write", 0, 0 };
    static const QUMethod slot_3 = {"tryConnecting", 0, 0 };
    static const QUMethod slot_4 = {"emitErrorConnectionRefused", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "sn_read()", &slot_0, QMetaData::Protected },
	{ "sn_read(bool)", &slot_1, QMetaData::Protected },
	{ "sn_write()", &slot_2, QMetaData::Protected },
	{ "tryConnecting()", &slot_3, QMetaData::Private },
	{ "emitErrorConnectionRefused()", &slot_4, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"hostFound", 0, 0 };
    static const QUMethod signal_1 = {"connected", 0, 0 };
    static const QUMethod signal_2 = {"connectionClosed", 0, 0 };
    static const QUMethod signal_3 = {"delayedCloseFinished", 0, 0 };
    static const QUMethod signal_4 = {"readyRead", 0, 0 };
    static const QUParameter param_signal_5[] = {
	{ "nbytes", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"bytesWritten", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"error", 1, param_signal_6 };
    static const QMetaData signal_tbl[] = {
	{ "hostFound()", &signal_0, QMetaData::Public },
	{ "connected()", &signal_1, QMetaData::Public },
	{ "connectionClosed()", &signal_2, QMetaData::Public },
	{ "delayedCloseFinished()", &signal_3, QMetaData::Public },
	{ "readyRead()", &signal_4, QMetaData::Public },
	{ "bytesWritten(int)", &signal_5, QMetaData::Public },
	{ "error(int)", &signal_6, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QSocket", parentObject,
	slot_tbl, 5,
	signal_tbl, 7,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSocket.setMetaObject( metaObj );
    return metaObj;
}

void* QSocket::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSocket" ) )
	return this;
    if ( !qstrcmp( clname, "QIODevice" ) )
	return (QIODevice*)this;
    return QObject::qt_cast( clname );
}

// SIGNAL hostFound
void QSocket::hostFound()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL connected
void QSocket::connected()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL connectionClosed
void QSocket::connectionClosed()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL delayedCloseFinished
void QSocket::delayedCloseFinished()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL readyRead
void QSocket::readyRead()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

// SIGNAL bytesWritten
void QSocket::bytesWritten( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 5, t0 );
}

// SIGNAL error
void QSocket::error( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 6, t0 );
}

bool QSocket::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: sn_read(); break;
    case 1: sn_read((bool)static_QUType_bool.get(_o+1)); break;
    case 2: sn_write(); break;
    case 3: tryConnecting(); break;
    case 4: emitErrorConnectionRefused(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QSocket::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: hostFound(); break;
    case 1: connected(); break;
    case 2: connectionClosed(); break;
    case 3: delayedCloseFinished(); break;
    case 4: readyRead(); break;
    case 5: bytesWritten((int)static_QUType_int.get(_o+1)); break;
    case 6: error((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QSocket::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QSocket::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
