/****************************************************************************
** QFtp meta object code from reading C++ file 'qftp.h'
**
** Created: Wed Oct 9 10:53:06 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../network/qftp.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QFtp::className() const
{
    return "QFtp";
}

QMetaObject *QFtp::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QFtp( "QFtp", &QFtp::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QFtp::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFtp", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QFtp::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFtp", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QFtp::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QNetworkProtocol::staticMetaObject();
    static const QUMethod slot_0 = {"abort", 0, 0 };
    static const QUMethod slot_1 = {"startNextCommand", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"piFinished", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"piError", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"piConnectState", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"piFtpReply", 2, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_ptr, "QUrlInfo", QUParameter::In }
    };
    static const QUMethod slot_6 = {"npListInfo", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"npDone", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"npStateChanged", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"npDataTransferProgress", 2, param_slot_9 };
    static const QUMethod slot_10 = {"npReadyRead", 0, 0 };
    static const QUMethod slot_11 = {"hostFound", 0, 0 };
    static const QUMethod slot_12 = {"connected", 0, 0 };
    static const QUMethod slot_13 = {"closed", 0, 0 };
    static const QUMethod slot_14 = {"dataHostFound", 0, 0 };
    static const QUMethod slot_15 = {"dataConnected", 0, 0 };
    static const QUMethod slot_16 = {"dataClosed", 0, 0 };
    static const QUMethod slot_17 = {"dataReadyRead", 0, 0 };
    static const QUParameter param_slot_18[] = {
	{ "nbytes", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_18 = {"dataBytesWritten", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"error", 1, param_slot_19 };
    static const QMetaData slot_tbl[] = {
	{ "abort()", &slot_0, QMetaData::Public },
	{ "startNextCommand()", &slot_1, QMetaData::Private },
	{ "piFinished(const QString&)", &slot_2, QMetaData::Private },
	{ "piError(int,const QString&)", &slot_3, QMetaData::Private },
	{ "piConnectState(int)", &slot_4, QMetaData::Private },
	{ "piFtpReply(int,const QString&)", &slot_5, QMetaData::Private },
	{ "npListInfo(const QUrlInfo&)", &slot_6, QMetaData::Private },
	{ "npDone(bool)", &slot_7, QMetaData::Private },
	{ "npStateChanged(int)", &slot_8, QMetaData::Private },
	{ "npDataTransferProgress(int,int)", &slot_9, QMetaData::Private },
	{ "npReadyRead()", &slot_10, QMetaData::Private },
	{ "hostFound()", &slot_11, QMetaData::Protected },
	{ "connected()", &slot_12, QMetaData::Protected },
	{ "closed()", &slot_13, QMetaData::Protected },
	{ "dataHostFound()", &slot_14, QMetaData::Protected },
	{ "dataConnected()", &slot_15, QMetaData::Protected },
	{ "dataClosed()", &slot_16, QMetaData::Protected },
	{ "dataReadyRead()", &slot_17, QMetaData::Protected },
	{ "dataBytesWritten(int)", &slot_18, QMetaData::Protected },
	{ "error(int)", &slot_19, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"stateChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "QUrlInfo", QUParameter::In }
    };
    static const QUMethod signal_1 = {"listInfo", 1, param_signal_1 };
    static const QUMethod signal_2 = {"readyRead", 0, 0 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"dataTransferProgress", 2, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"rawCommandReply", 2, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"commandStarted", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"commandFinished", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_7 = {"done", 1, param_signal_7 };
    static const QMetaData signal_tbl[] = {
	{ "stateChanged(int)", &signal_0, QMetaData::Public },
	{ "listInfo(const QUrlInfo&)", &signal_1, QMetaData::Public },
	{ "readyRead()", &signal_2, QMetaData::Public },
	{ "dataTransferProgress(int,int)", &signal_3, QMetaData::Public },
	{ "rawCommandReply(int,const QString&)", &signal_4, QMetaData::Public },
	{ "commandStarted(int)", &signal_5, QMetaData::Public },
	{ "commandFinished(int,bool)", &signal_6, QMetaData::Public },
	{ "done(bool)", &signal_7, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QFtp", parentObject,
	slot_tbl, 20,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QFtp.setMetaObject( metaObj );
    return metaObj;
}

void* QFtp::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QFtp" ) )
	return this;
    return QNetworkProtocol::qt_cast( clname );
}

// SIGNAL stateChanged
void QFtp::stateChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL listInfo
void QFtp::listInfo( const QUrlInfo& t0 )
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
void QFtp::readyRead()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL dataTransferProgress
void QFtp::dataTransferProgress( int t0, int t1 )
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

// SIGNAL rawCommandReply
void QFtp::rawCommandReply( int t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL commandStarted
void QFtp::commandStarted( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 5, t0 );
}

// SIGNAL commandFinished
void QFtp::commandFinished( int t0, bool t1 )
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
void QFtp::done( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 7, t0 );
}

bool QFtp::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: abort(); break;
    case 1: startNextCommand(); break;
    case 2: piFinished((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: piError((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 4: piConnectState((int)static_QUType_int.get(_o+1)); break;
    case 5: piFtpReply((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 6: npListInfo((const QUrlInfo&)*((const QUrlInfo*)static_QUType_ptr.get(_o+1))); break;
    case 7: npDone((bool)static_QUType_bool.get(_o+1)); break;
    case 8: npStateChanged((int)static_QUType_int.get(_o+1)); break;
    case 9: npDataTransferProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 10: npReadyRead(); break;
    case 11: hostFound(); break;
    case 12: connected(); break;
    case 13: closed(); break;
    case 14: dataHostFound(); break;
    case 15: dataConnected(); break;
    case 16: dataClosed(); break;
    case 17: dataReadyRead(); break;
    case 18: dataBytesWritten((int)static_QUType_int.get(_o+1)); break;
    case 19: error((int)static_QUType_int.get(_o+1)); break;
    default:
	return QNetworkProtocol::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QFtp::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: stateChanged((int)static_QUType_int.get(_o+1)); break;
    case 1: listInfo((const QUrlInfo&)*((const QUrlInfo*)static_QUType_ptr.get(_o+1))); break;
    case 2: readyRead(); break;
    case 3: dataTransferProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 4: rawCommandReply((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 5: commandStarted((int)static_QUType_int.get(_o+1)); break;
    case 6: commandFinished((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 7: done((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QNetworkProtocol::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QFtp::qt_property( int id, int f, QVariant* v)
{
    return QNetworkProtocol::qt_property( id, f, v);
}

bool QFtp::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
