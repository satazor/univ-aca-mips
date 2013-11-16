/****************************************************************************
** QDns meta object code from reading C++ file 'qdns.h'
**
** Created: Wed Oct 9 10:53:06 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../network/qdns.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDns::className() const
{
    return "QDns";
}

QMetaObject *QDns::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDns( "QDns", &QDns::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDns::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDns", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDns::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDns", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDns::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"startQuery", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "startQuery()", &slot_0, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"resultsReady", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "resultsReady()", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDns", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDns.setMetaObject( metaObj );
    return metaObj;
}

void* QDns::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDns" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL resultsReady
void QDns::resultsReady()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool QDns::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: startQuery(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDns::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: resultsReady(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDns::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QDns::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDnsSocket::className() const
{
    return "QDnsSocket";
}

QMetaObject *QDnsSocket::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDnsSocket( "QDnsSocket", &QDnsSocket::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDnsSocket::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDnsSocket", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDnsSocket::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDnsSocket", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDnsSocket::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"cleanCache", 0, 0 };
    static const QUMethod slot_1 = {"retransmit", 0, 0 };
    static const QUMethod slot_2 = {"answer", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "cleanCache()", &slot_0, QMetaData::Private },
	{ "retransmit()", &slot_1, QMetaData::Private },
	{ "answer()", &slot_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDnsSocket", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDnsSocket.setMetaObject( metaObj );
    return metaObj;
}

void* QDnsSocket::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDnsSocket" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QDnsSocket::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: cleanCache(); break;
    case 1: retransmit(); break;
    case 2: answer(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDnsSocket::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDnsSocket::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QDnsSocket::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
