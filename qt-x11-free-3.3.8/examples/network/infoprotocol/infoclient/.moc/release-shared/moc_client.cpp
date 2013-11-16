/****************************************************************************
** ClientInfo meta object code from reading C++ file 'client.h'
**
** Created: Wed Oct 9 11:09:07 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../client.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ClientInfo::className() const
{
    return "ClientInfo";
}

QMetaObject *ClientInfo::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ClientInfo( "ClientInfo", &ClientInfo::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ClientInfo::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClientInfo", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ClientInfo::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ClientInfo", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ClientInfo::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ClientInfoBase::staticMetaObject();
    static const QUMethod slot_0 = {"connectToServer", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "item", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"selectItem", 1, param_slot_1 };
    static const QUMethod slot_2 = {"stepBack", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "op", &static_QUType_ptr, "Operation", QUParameter::In },
	{ "location", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"sendToServer", 2, param_slot_3 };
    static const QUMethod slot_4 = {"socketConnected", 0, 0 };
    static const QUMethod slot_5 = {"socketReadyRead", 0, 0 };
    static const QUMethod slot_6 = {"socketConnectionClosed", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ "code", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"socketError", 1, param_slot_7 };
    static const QMetaData slot_tbl[] = {
	{ "connectToServer()", &slot_0, QMetaData::Private },
	{ "selectItem(const QString&)", &slot_1, QMetaData::Private },
	{ "stepBack()", &slot_2, QMetaData::Private },
	{ "sendToServer(Operation,const QString&)", &slot_3, QMetaData::Private },
	{ "socketConnected()", &slot_4, QMetaData::Private },
	{ "socketReadyRead()", &slot_5, QMetaData::Private },
	{ "socketConnectionClosed()", &slot_6, QMetaData::Private },
	{ "socketError(int)", &slot_7, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ClientInfo", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ClientInfo.setMetaObject( metaObj );
    return metaObj;
}

void* ClientInfo::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ClientInfo" ) )
	return this;
    return ClientInfoBase::qt_cast( clname );
}

bool ClientInfo::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: connectToServer(); break;
    case 1: selectItem((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: stepBack(); break;
    case 3: sendToServer((Operation)(*((Operation*)static_QUType_ptr.get(_o+1))),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 4: socketConnected(); break;
    case 5: socketReadyRead(); break;
    case 6: socketConnectionClosed(); break;
    case 7: socketError((int)static_QUType_int.get(_o+1)); break;
    default:
	return ClientInfoBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ClientInfo::qt_emit( int _id, QUObject* _o )
{
    return ClientInfoBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ClientInfo::qt_property( int id, int f, QVariant* v)
{
    return ClientInfoBase::qt_property( id, f, v);
}

bool ClientInfo::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
