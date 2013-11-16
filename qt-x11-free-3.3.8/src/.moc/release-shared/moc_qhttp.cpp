/****************************************************************************
** QHttp meta object code from reading C++ file 'qhttp.h'
**
** Created: Wed Oct 9 10:53:07 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../network/qhttp.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QHttp::className() const
{
    return "QHttp";
}

QMetaObject *QHttp::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QHttp( "QHttp", &QHttp::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QHttp::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHttp", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QHttp::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHttp", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QHttp::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QNetworkProtocol::staticMetaObject();
    static const QUMethod slot_0 = {"abort", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "rep", &static_QUType_ptr, "QHttpResponseHeader", QUParameter::In }
    };
    static const QUMethod slot_1 = {"clientReply", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"clientDone", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"clientStateChanged", 1, param_slot_3 };
    static const QUMethod slot_4 = {"startNextRequest", 0, 0 };
    static const QUMethod slot_5 = {"slotReadyRead", 0, 0 };
    static const QUMethod slot_6 = {"slotConnected", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"slotError", 1, param_slot_7 };
    static const QUMethod slot_8 = {"slotClosed", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"slotBytesWritten", 1, param_slot_9 };
    static const QMetaData slot_tbl[] = {
	{ "abort()", &slot_0, QMetaData::Public },
	{ "clientReply(const QHttpResponseHeader&)", &slot_1, QMetaData::Private },
	{ "clientDone(bool)", &slot_2, QMetaData::Private },
	{ "clientStateChanged(int)", &slot_3, QMetaData::Private },
	{ "startNextRequest()", &slot_4, QMetaData::Private },
	{ "slotReadyRead()", &slot_5, QMetaData::Private },
	{ "slotConnected()", &slot_6, QMetaData::Private },
	{ "slotError(int)", &slot_7, QMetaData::Private },
	{ "slotClosed()", &slot_8, QMetaData::Private },
	{ "slotBytesWritten(int)", &slot_9, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"stateChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "resp", &static_QUType_ptr, "QHttpResponseHeader", QUParameter::In }
    };
    static const QUMethod signal_1 = {"responseHeaderReceived", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "resp", &static_QUType_ptr, "QHttpResponseHeader", QUParameter::In }
    };
    static const QUMethod signal_2 = {"readyRead", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"dataSendProgress", 2, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"dataReadProgress", 2, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"requestStarted", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"requestFinished", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_7 = {"done", 1, param_signal_7 };
    static const QMetaData signal_tbl[] = {
	{ "stateChanged(int)", &signal_0, QMetaData::Public },
	{ "responseHeaderReceived(const QHttpResponseHeader&)", &signal_1, QMetaData::Public },
	{ "readyRead(const QHttpResponseHeader&)", &signal_2, QMetaData::Public },
	{ "dataSendProgress(int,int)", &signal_3, QMetaData::Public },
	{ "dataReadProgress(int,int)", &signal_4, QMetaData::Public },
	{ "requestStarted(int)", &signal_5, QMetaData::Public },
	{ "requestFinished(int,bool)", &signal_6, QMetaData::Public },
	{ "done(bool)", &signal_7, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QHttp", parentObject,
	slot_tbl, 10,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QHttp.setMetaObject( metaObj );
    return metaObj;
}

void* QHttp::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QHttp" ) )
	return this;
    return QNetworkProtocol::qt_cast( clname );
}

// SIGNAL stateChanged
void QHttp::stateChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL responseHeaderReceived
void QHttp::responseHeaderReceived( const QHttpResponseHeader& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL readyRead
void QHttp::readyRead( const QHttpResponseHeader& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL dataSendProgress
void QHttp::dataSendProgress( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL dataReadProgress
void QHttp::dataReadProgress( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL requestStarted
void QHttp::requestStarted( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 5, t0 );
}

// SIGNAL requestFinished
void QHttp::requestFinished( int t0, bool t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL done
void QHttp::done( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 7, t0 );
}

bool QHttp::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: abort(); break;
    case 1: clientReply((const QHttpResponseHeader&)*((const QHttpResponseHeader*)static_QUType_ptr.get(_o+1))); break;
    case 2: clientDone((bool)static_QUType_bool.get(_o+1)); break;
    case 3: clientStateChanged((int)static_QUType_int.get(_o+1)); break;
    case 4: startNextRequest(); break;
    case 5: slotReadyRead(); break;
    case 6: slotConnected(); break;
    case 7: slotError((int)static_QUType_int.get(_o+1)); break;
    case 8: slotClosed(); break;
    case 9: slotBytesWritten((int)static_QUType_int.get(_o+1)); break;
    default:
	return QNetworkProtocol::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QHttp::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: stateChanged((int)static_QUType_int.get(_o+1)); break;
    case 1: responseHeaderReceived((const QHttpResponseHeader&)*((const QHttpResponseHeader*)static_QUType_ptr.get(_o+1))); break;
    case 2: readyRead((const QHttpResponseHeader&)*((const QHttpResponseHeader*)static_QUType_ptr.get(_o+1))); break;
    case 3: dataSendProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 4: dataReadProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 5: requestStarted((int)static_QUType_int.get(_o+1)); break;
    case 6: requestFinished((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 7: done((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QNetworkProtocol::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QHttp::qt_property( int id, int f, QVariant* v)
{
    return QNetworkProtocol::qt_property( id, f, v);
}

bool QHttp::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
