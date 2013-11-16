/****************************************************************************
** QAssistantClient meta object code from reading C++ file 'qassistantclient.h'
**
** Created: Wed Oct 9 11:02:57 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qassistantclient.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QAssistantClient::className() const
{
    return "QAssistantClient";
}

QMetaObject *QAssistantClient::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QAssistantClient( "QAssistantClient", &QAssistantClient::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QAssistantClient::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QAssistantClient", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QAssistantClient::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QAssistantClient", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QAssistantClient::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"openAssistant", 0, 0 };
    static const QUMethod slot_1 = {"closeAssistant", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "page", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"showPage", 1, param_slot_2 };
    static const QUMethod slot_3 = {"socketConnected", 0, 0 };
    static const QUMethod slot_4 = {"socketConnectionClosed", 0, 0 };
    static const QUMethod slot_5 = {"readPort", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"socketError", 1, param_slot_6 };
    static const QUMethod slot_7 = {"readStdError", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "openAssistant()", &slot_0, QMetaData::Public },
	{ "closeAssistant()", &slot_1, QMetaData::Public },
	{ "showPage(const QString&)", &slot_2, QMetaData::Public },
	{ "socketConnected()", &slot_3, QMetaData::Private },
	{ "socketConnectionClosed()", &slot_4, QMetaData::Private },
	{ "readPort()", &slot_5, QMetaData::Private },
	{ "socketError(int)", &slot_6, QMetaData::Private },
	{ "readStdError()", &slot_7, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"assistantOpened", 0, 0 };
    static const QUMethod signal_1 = {"assistantClosed", 0, 0 };
    static const QUParameter param_signal_2[] = {
	{ "msg", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"error", 1, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "assistantOpened()", &signal_0, QMetaData::Public },
	{ "assistantClosed()", &signal_1, QMetaData::Public },
	{ "error(const QString&)", &signal_2, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "bool","open", 0x12000001, &QAssistantClient::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QAssistantClient", parentObject,
	slot_tbl, 8,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QAssistantClient.setMetaObject( metaObj );
    return metaObj;
}

void* QAssistantClient::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QAssistantClient" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL assistantOpened
void QAssistantClient::assistantOpened()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL assistantClosed
void QAssistantClient::assistantClosed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL error
void QAssistantClient::error( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

bool QAssistantClient::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: openAssistant(); break;
    case 1: closeAssistant(); break;
    case 2: showPage((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: socketConnected(); break;
    case 4: socketConnectionClosed(); break;
    case 5: readPort(); break;
    case 6: socketError((int)static_QUType_int.get(_o+1)); break;
    case 7: readStdError(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QAssistantClient::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: assistantOpened(); break;
    case 1: assistantClosed(); break;
    case 2: error((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QAssistantClient::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->isOpen(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QObject::qt_property( id, f, v );
    }
    return TRUE;
}

bool QAssistantClient::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
