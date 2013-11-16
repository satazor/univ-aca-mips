/****************************************************************************
** ConnectionItem meta object code from reading C++ file 'connectionitems.h'
**
** Created: Wed Oct 9 11:04:59 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../connectionitems.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ConnectionItem::className() const
{
    return "ConnectionItem";
}

QMetaObject *ConnectionItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ConnectionItem( "ConnectionItem", &ConnectionItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ConnectionItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConnectionItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ConnectionItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConnectionItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ConnectionItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "sender", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_0 = {"senderChanged", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "receiver", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_1 = {"receiverChanged", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "sig", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"signalChanged", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "slot", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"slotChanged", 1, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "senderChanged(QObject*)", &slot_0, QMetaData::Public },
	{ "receiverChanged(QObject*)", &slot_1, QMetaData::Public },
	{ "signalChanged(const QString&)", &slot_2, QMetaData::Public },
	{ "slotChanged(const QString&)", &slot_3, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"changed", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "changed()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ConnectionItem", parentObject,
	slot_tbl, 4,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ConnectionItem.setMetaObject( metaObj );
    return metaObj;
}

void* ConnectionItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ConnectionItem" ) )
	return this;
    if ( !qstrcmp( clname, "QComboTableItem" ) )
	return (QComboTableItem*)this;
    return QObject::qt_cast( clname );
}

// SIGNAL changed
void ConnectionItem::changed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool ConnectionItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: senderChanged((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 1: receiverChanged((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 2: signalChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: slotChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ConnectionItem::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: changed(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ConnectionItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool ConnectionItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *SenderItem::className() const
{
    return "SenderItem";
}

QMetaObject *SenderItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SenderItem( "SenderItem", &SenderItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SenderItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SenderItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SenderItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SenderItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SenderItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ConnectionItem::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "sender", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"senderChanged", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "senderChanged(const QString&)", &slot_0, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "sender", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod signal_0 = {"currentSenderChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "currentSenderChanged(QObject*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SenderItem", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SenderItem.setMetaObject( metaObj );
    return metaObj;
}

void* SenderItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SenderItem" ) )
	return this;
    return ConnectionItem::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL currentSenderChanged
void SenderItem::currentSenderChanged( QObject* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool SenderItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: senderChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return ConnectionItem::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SenderItem::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentSenderChanged((QObject*)static_QUType_ptr.get(_o+1)); break;
    default:
	return ConnectionItem::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SenderItem::qt_property( int id, int f, QVariant* v)
{
    return ConnectionItem::qt_property( id, f, v);
}

bool SenderItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *ReceiverItem::className() const
{
    return "ReceiverItem";
}

QMetaObject *ReceiverItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ReceiverItem( "ReceiverItem", &ReceiverItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ReceiverItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReceiverItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ReceiverItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ReceiverItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ReceiverItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ConnectionItem::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "receiver", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"receiverChanged", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "receiverChanged(const QString&)", &slot_0, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "receiver", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod signal_0 = {"currentReceiverChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "currentReceiverChanged(QObject*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ReceiverItem", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ReceiverItem.setMetaObject( metaObj );
    return metaObj;
}

void* ReceiverItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ReceiverItem" ) )
	return this;
    return ConnectionItem::qt_cast( clname );
}

// SIGNAL currentReceiverChanged
void ReceiverItem::currentReceiverChanged( QObject* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool ReceiverItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: receiverChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return ConnectionItem::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ReceiverItem::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentReceiverChanged((QObject*)static_QUType_ptr.get(_o+1)); break;
    default:
	return ConnectionItem::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ReceiverItem::qt_property( int id, int f, QVariant* v)
{
    return ConnectionItem::qt_property( id, f, v);
}

bool ReceiverItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *SignalItem::className() const
{
    return "SignalItem";
}

QMetaObject *SignalItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SignalItem( "SignalItem", &SignalItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SignalItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SignalItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SignalItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SignalItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SignalItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ConnectionItem::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"currentSignalChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "currentSignalChanged(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SignalItem", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SignalItem.setMetaObject( metaObj );
    return metaObj;
}

void* SignalItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SignalItem" ) )
	return this;
    return ConnectionItem::qt_cast( clname );
}

// SIGNAL currentSignalChanged
void SignalItem::currentSignalChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool SignalItem::qt_invoke( int _id, QUObject* _o )
{
    return ConnectionItem::qt_invoke(_id,_o);
}

bool SignalItem::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentSignalChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return ConnectionItem::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SignalItem::qt_property( int id, int f, QVariant* v)
{
    return ConnectionItem::qt_property( id, f, v);
}

bool SignalItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *SlotItem::className() const
{
    return "SlotItem";
}

QMetaObject *SlotItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SlotItem( "SlotItem", &SlotItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SlotItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SlotItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SlotItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SlotItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SlotItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ConnectionItem::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"currentSlotChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "currentSlotChanged(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SlotItem", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SlotItem.setMetaObject( metaObj );
    return metaObj;
}

void* SlotItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SlotItem" ) )
	return this;
    return ConnectionItem::qt_cast( clname );
}

// SIGNAL currentSlotChanged
void SlotItem::currentSlotChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool SlotItem::qt_invoke( int _id, QUObject* _o )
{
    return ConnectionItem::qt_invoke(_id,_o);
}

bool SlotItem::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentSlotChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return ConnectionItem::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SlotItem::qt_property( int id, int f, QVariant* v)
{
    return ConnectionItem::qt_property( id, f, v);
}

bool SlotItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *ConnectionContainer::className() const
{
    return "ConnectionContainer";
}

QMetaObject *ConnectionContainer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ConnectionContainer( "ConnectionContainer", &ConnectionContainer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ConnectionContainer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConnectionContainer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ConnectionContainer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConnectionContainer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ConnectionContainer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"somethingChanged", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "somethingChanged()", &slot_0, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "c", &static_QUType_ptr, "ConnectionContainer", QUParameter::In }
    };
    static const QUMethod signal_0 = {"changed", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "changed(ConnectionContainer*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ConnectionContainer", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ConnectionContainer.setMetaObject( metaObj );
    return metaObj;
}

void* ConnectionContainer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ConnectionContainer" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL changed
void ConnectionContainer::changed( ConnectionContainer* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool ConnectionContainer::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: somethingChanged(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ConnectionContainer::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: changed((ConnectionContainer*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ConnectionContainer::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool ConnectionContainer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
