/****************************************************************************
** DigitalClock meta object code from reading C++ file 'dclock.h'
**
** Created: Wed Oct 9 11:07:14 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dclock.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DigitalClock::className() const
{
    return "DigitalClock";
}

QMetaObject *DigitalClock::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DigitalClock( "DigitalClock", &DigitalClock::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DigitalClock::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DigitalClock", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DigitalClock::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DigitalClock", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DigitalClock::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLCDNumber::staticMetaObject();
    static const QUMethod slot_0 = {"stopDate", 0, 0 };
    static const QUMethod slot_1 = {"showTime", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "stopDate()", &slot_0, QMetaData::Private },
	{ "showTime()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"DigitalClock", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DigitalClock.setMetaObject( metaObj );
    return metaObj;
}

void* DigitalClock::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DigitalClock" ) )
	return this;
    return QLCDNumber::qt_cast( clname );
}

bool DigitalClock::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: stopDate(); break;
    case 1: showTime(); break;
    default:
	return QLCDNumber::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DigitalClock::qt_emit( int _id, QUObject* _o )
{
    return QLCDNumber::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DigitalClock::qt_property( int id, int f, QVariant* v)
{
    return QLCDNumber::qt_property( id, f, v);
}

bool DigitalClock::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
