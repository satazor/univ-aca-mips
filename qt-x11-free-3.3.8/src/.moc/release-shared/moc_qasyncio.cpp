/****************************************************************************
** QDataPump meta object code from reading C++ file 'qasyncio.h'
**
** Created: Wed Oct 9 10:52:26 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qasyncio.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDataPump::className() const
{
    return "QDataPump";
}

QMetaObject *QDataPump::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDataPump( "QDataPump", &QDataPump::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDataPump::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDataPump", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDataPump::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDataPump", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDataPump::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"kickStart", 0, 0 };
    static const QUMethod slot_1 = {"tryToPump", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "kickStart()", &slot_0, QMetaData::Private },
	{ "tryToPump()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDataPump", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDataPump.setMetaObject( metaObj );
    return metaObj;
}

void* QDataPump::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDataPump" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QDataPump::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: kickStart(); break;
    case 1: tryToPump(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDataPump::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDataPump::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QDataPump::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
