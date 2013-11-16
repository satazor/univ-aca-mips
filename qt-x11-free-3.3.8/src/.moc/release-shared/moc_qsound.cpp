/****************************************************************************
** QSound meta object code from reading C++ file 'qsound.h'
**
** Created: Wed Oct 9 10:52:33 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qsound.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSound::className() const
{
    return "QSound";
}

QMetaObject *QSound::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSound( "QSound", &QSound::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSound::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSound", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSound::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSound", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSound::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"play", 0, 0 };
    static const QUMethod slot_1 = {"stop", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "play()", &slot_0, QMetaData::Public },
	{ "stop()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QSound", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSound.setMetaObject( metaObj );
    return metaObj;
}

void* QSound::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSound" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QSound::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: play(); break;
    case 1: stop(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QSound::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QSound::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QSound::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QAuServer::className() const
{
    return "QAuServer";
}

QMetaObject *QAuServer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QAuServer( "QAuServer", &QAuServer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QAuServer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QAuServer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QAuServer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QAuServer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QAuServer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QAuServer", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QAuServer.setMetaObject( metaObj );
    return metaObj;
}

void* QAuServer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QAuServer" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QAuServer::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QAuServer::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QAuServer::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QAuServer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
