/****************************************************************************
** QUrlOperator meta object code from reading C++ file 'qurloperator.h'
**
** Created: Wed Oct 9 10:52:35 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qurloperator.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QUrlOperator::className() const
{
    return "QUrlOperator";
}

QMetaObject *QUrlOperator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QUrlOperator( "QUrlOperator", &QUrlOperator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QUrlOperator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QUrlOperator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QUrlOperator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QUrlOperator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QUrlOperator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QNetworkOperation", QUParameter::Out },
	{ "op", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_0 = {"startOperation", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "data", &static_QUType_varptr, "\x1d", QUParameter::In },
	{ "op", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_1 = {"copyGotData", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "op", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_2 = {"continueCopy", 1, param_slot_2 };
    static const QUMethod slot_3 = {"finishedCopy", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "i", &static_QUType_ptr, "QValueList<QUrlInfo>", QUParameter::In }
    };
    static const QUMethod slot_4 = {"addEntry", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "op", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_5 = {"slotItemChanged", 1, param_slot_5 };
    static const QMetaData slot_tbl[] = {
	{ "startOperation(QNetworkOperation*)", &slot_0, QMetaData::Private },
	{ "copyGotData(const QByteArray&,QNetworkOperation*)", &slot_1, QMetaData::Private },
	{ "continueCopy(QNetworkOperation*)", &slot_2, QMetaData::Private },
	{ "finishedCopy()", &slot_3, QMetaData::Private },
	{ "addEntry(const QValueList<QUrlInfo>&)", &slot_4, QMetaData::Private },
	{ "slotItemChanged(QNetworkOperation*)", &slot_5, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "QValueList<QUrlInfo>", QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_0 = {"newChildren", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_1 = {"finished", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_2 = {"start", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_ptr, "QUrlInfo", QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_3 = {"createdDirectory", 2, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_4 = {"removed", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_5 = {"itemChanged", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_varptr, "\x1d", QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_6 = {"data", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "bytesDone", &static_QUType_int, 0, QUParameter::In },
	{ "bytesTotal", &static_QUType_int, 0, QUParameter::In },
	{ "res", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod signal_7 = {"dataTransferProgress", 3, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ "lst", &static_QUType_ptr, "QPtrList<QNetworkOperation>", QUParameter::In }
    };
    static const QUMethod signal_8 = {"startedNextCopy", 1, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ "state", &static_QUType_int, 0, QUParameter::In },
	{ "data", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_9 = {"connectionStateChanged", 2, param_signal_9 };
    static const QMetaData signal_tbl[] = {
	{ "newChildren(const QValueList<QUrlInfo>&,QNetworkOperation*)", &signal_0, QMetaData::Public },
	{ "finished(QNetworkOperation*)", &signal_1, QMetaData::Public },
	{ "start(QNetworkOperation*)", &signal_2, QMetaData::Public },
	{ "createdDirectory(const QUrlInfo&,QNetworkOperation*)", &signal_3, QMetaData::Public },
	{ "removed(QNetworkOperation*)", &signal_4, QMetaData::Public },
	{ "itemChanged(QNetworkOperation*)", &signal_5, QMetaData::Public },
	{ "data(const QByteArray&,QNetworkOperation*)", &signal_6, QMetaData::Public },
	{ "dataTransferProgress(int,int,QNetworkOperation*)", &signal_7, QMetaData::Public },
	{ "startedNextCopy(const QPtrList<QNetworkOperation>&)", &signal_8, QMetaData::Public },
	{ "connectionStateChanged(int,const QString&)", &signal_9, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QUrlOperator", parentObject,
	slot_tbl, 6,
	signal_tbl, 10,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QUrlOperator.setMetaObject( metaObj );
    return metaObj;
}

void* QUrlOperator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QUrlOperator" ) )
	return this;
    if ( !qstrcmp( clname, "QUrl" ) )
	return (QUrl*)this;
    return QObject::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL newChildren
void QUrlOperator::newChildren( const QValueList<QUrlInfo>& t0, QNetworkOperation* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL finished
void QUrlOperator::finished( QNetworkOperation* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL start
void QUrlOperator::start( QNetworkOperation* t0 )
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

// SIGNAL createdDirectory
void QUrlOperator::createdDirectory( const QUrlInfo& t0, QNetworkOperation* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL removed
void QUrlOperator::removed( QNetworkOperation* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL itemChanged
void QUrlOperator::itemChanged( QNetworkOperation* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL data
void QUrlOperator::data( const QByteArray& t0, QNetworkOperation* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_varptr.set(o+1,&t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL dataTransferProgress
void QUrlOperator::dataTransferProgress( int t0, int t1, QNetworkOperation* t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_ptr.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL startedNextCopy
void QUrlOperator::startedNextCopy( const QPtrList<QNetworkOperation>& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL connectionStateChanged
void QUrlOperator::connectionStateChanged( int t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 9 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

bool QUrlOperator::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: static_QUType_ptr.set(_o,startOperation((QNetworkOperation*)static_QUType_ptr.get(_o+1))); break;
    case 1: copyGotData((const QByteArray&)*((const QByteArray*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 2: continueCopy((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 3: finishedCopy(); break;
    case 4: addEntry((const QValueList<QUrlInfo>&)*((const QValueList<QUrlInfo>*)static_QUType_ptr.get(_o+1))); break;
    case 5: slotItemChanged((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QUrlOperator::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: newChildren((const QValueList<QUrlInfo>&)*((const QValueList<QUrlInfo>*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 1: finished((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 2: start((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 3: createdDirectory((const QUrlInfo&)*((const QUrlInfo*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 4: removed((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 5: itemChanged((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 6: data((const QByteArray&)*((const QByteArray*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 7: dataTransferProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(QNetworkOperation*)static_QUType_ptr.get(_o+3)); break;
    case 8: startedNextCopy((const QPtrList<QNetworkOperation>&)*((const QPtrList<QNetworkOperation>*)static_QUType_ptr.get(_o+1))); break;
    case 9: connectionStateChanged((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QUrlOperator::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QUrlOperator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
