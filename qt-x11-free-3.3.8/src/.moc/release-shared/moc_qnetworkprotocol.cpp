/****************************************************************************
** QNetworkProtocol meta object code from reading C++ file 'qnetworkprotocol.h'
**
** Created: Wed Oct 9 10:52:30 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qnetworkprotocol.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QNetworkProtocol::className() const
{
    return "QNetworkProtocol";
}

QMetaObject *QNetworkProtocol::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QNetworkProtocol( "QNetworkProtocol", &QNetworkProtocol::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QNetworkProtocol::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QNetworkProtocol", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QNetworkProtocol::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QNetworkProtocol", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QNetworkProtocol::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "old", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_0 = {"processNextOperation", 1, param_slot_0 };
    static const QUMethod slot_1 = {"startOps", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "i", &static_QUType_ptr, "QUrlInfo", QUParameter::In },
	{ "op", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_2 = {"emitNewChildren", 2, param_slot_2 };
    static const QUMethod slot_3 = {"removeMe", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "processNextOperation(QNetworkOperation*)", &slot_0, QMetaData::Private },
	{ "startOps()", &slot_1, QMetaData::Private },
	{ "emitNewChildren(const QUrlInfo&,QNetworkOperation*)", &slot_2, QMetaData::Private },
	{ "removeMe()", &slot_3, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_varptr, "\x1d", QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_0 = {"data", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "state", &static_QUType_int, 0, QUParameter::In },
	{ "data", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"connectionStateChanged", 2, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_2 = {"finished", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_3 = {"start", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_ptr, "QValueList<QUrlInfo>", QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_4 = {"newChildren", 2, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_ptr, "QUrlInfo", QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_5 = {"newChild", 2, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_ptr, "QUrlInfo", QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_6 = {"createdDirectory", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_7 = {"removed", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_8 = {"itemChanged", 1, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ "bytesDone", &static_QUType_int, 0, QUParameter::In },
	{ "bytesTotal", &static_QUType_int, 0, QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_9 = {"dataTransferProgress", 3, param_signal_9 };
    static const QMetaData signal_tbl[] = {
	{ "data(const QByteArray&,QNetworkOperation*)", &signal_0, QMetaData::Public },
	{ "connectionStateChanged(int,const QString&)", &signal_1, QMetaData::Public },
	{ "finished(QNetworkOperation*)", &signal_2, QMetaData::Public },
	{ "start(QNetworkOperation*)", &signal_3, QMetaData::Public },
	{ "newChildren(const QValueList<QUrlInfo>&,QNetworkOperation*)", &signal_4, QMetaData::Public },
	{ "newChild(const QUrlInfo&,QNetworkOperation*)", &signal_5, QMetaData::Public },
	{ "createdDirectory(const QUrlInfo&,QNetworkOperation*)", &signal_6, QMetaData::Public },
	{ "removed(QNetworkOperation*)", &signal_7, QMetaData::Public },
	{ "itemChanged(QNetworkOperation*)", &signal_8, QMetaData::Public },
	{ "dataTransferProgress(int,int,QNetworkOperation*)", &signal_9, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QNetworkProtocol", parentObject,
	slot_tbl, 4,
	signal_tbl, 10,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QNetworkProtocol.setMetaObject( metaObj );
    return metaObj;
}

void* QNetworkProtocol::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QNetworkProtocol" ) )
	return this;
    return QObject::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL data
void QNetworkProtocol::data( const QByteArray& t0, QNetworkOperation* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_varptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL connectionStateChanged
void QNetworkProtocol::connectionStateChanged( int t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL finished
void QNetworkProtocol::finished( QNetworkOperation* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL start
void QNetworkProtocol::start( QNetworkOperation* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL newChildren
void QNetworkProtocol::newChildren( const QValueList<QUrlInfo>& t0, QNetworkOperation* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL newChild
void QNetworkProtocol::newChild( const QUrlInfo& t0, QNetworkOperation* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL createdDirectory
void QNetworkProtocol::createdDirectory( const QUrlInfo& t0, QNetworkOperation* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL removed
void QNetworkProtocol::removed( QNetworkOperation* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL itemChanged
void QNetworkProtocol::itemChanged( QNetworkOperation* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL dataTransferProgress
void QNetworkProtocol::dataTransferProgress( int t0, int t1, QNetworkOperation* t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 9 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_ptr.set(o+3,t2);
    activate_signal( clist, o );
}

bool QNetworkProtocol::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: processNextOperation((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 1: startOps(); break;
    case 2: emitNewChildren((const QUrlInfo&)*((const QUrlInfo*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 3: removeMe(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QNetworkProtocol::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: data((const QByteArray&)*((const QByteArray*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 1: connectionStateChanged((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 2: finished((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 3: start((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 4: newChildren((const QValueList<QUrlInfo>&)*((const QValueList<QUrlInfo>*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 5: newChild((const QUrlInfo&)*((const QUrlInfo*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 6: createdDirectory((const QUrlInfo&)*((const QUrlInfo*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 7: removed((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 8: itemChanged((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 9: dataTransferProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(QNetworkOperation*)static_QUType_ptr.get(_o+3)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QNetworkProtocol::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QNetworkProtocol::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QNetworkOperation::className() const
{
    return "QNetworkOperation";
}

QMetaObject *QNetworkOperation::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QNetworkOperation( "QNetworkOperation", &QNetworkOperation::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QNetworkOperation::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QNetworkOperation", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QNetworkOperation::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QNetworkOperation", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QNetworkOperation::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"deleteMe", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "deleteMe()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QNetworkOperation", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QNetworkOperation.setMetaObject( metaObj );
    return metaObj;
}

void* QNetworkOperation::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QNetworkOperation" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QNetworkOperation::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: deleteMe(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QNetworkOperation::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QNetworkOperation::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QNetworkOperation::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
