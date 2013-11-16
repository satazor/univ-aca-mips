/****************************************************************************
** Qip meta object code from reading C++ file 'qip.h'
**
** Created: Wed Oct 9 11:09:13 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qip.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Qip::className() const
{
    return "Qip";
}

QMetaObject *Qip::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Qip( "Qip", &Qip::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Qip::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Qip", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Qip::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Qip", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Qip::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QNetworkProtocol::staticMetaObject();
    static const QUMethod slot_0 = {"socketConnected", 0, 0 };
    static const QUMethod slot_1 = {"socketReadyRead", 0, 0 };
    static const QUMethod slot_2 = {"socketConnectionClosed", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "code", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"socketError", 1, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "socketConnected()", &slot_0, QMetaData::Private },
	{ "socketReadyRead()", &slot_1, QMetaData::Private },
	{ "socketConnectionClosed()", &slot_2, QMetaData::Private },
	{ "socketError(int)", &slot_3, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Qip", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Qip.setMetaObject( metaObj );
    return metaObj;
}

void* Qip::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Qip" ) )
	return this;
    return QNetworkProtocol::qt_cast( clname );
}

bool Qip::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: socketConnected(); break;
    case 1: socketReadyRead(); break;
    case 2: socketConnectionClosed(); break;
    case 3: socketError((int)static_QUType_int.get(_o+1)); break;
    default:
	return QNetworkProtocol::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Qip::qt_emit( int _id, QUObject* _o )
{
    return QNetworkProtocol::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Qip::qt_property( int id, int f, QVariant* v)
{
    return QNetworkProtocol::qt_property( id, f, v);
}

bool Qip::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
