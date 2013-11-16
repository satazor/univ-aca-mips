/****************************************************************************
** TimeStamp meta object code from reading C++ file 'timestamp.h'
**
** Created: Wed Oct 9 11:04:57 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../timestamp.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TimeStamp::className() const
{
    return "TimeStamp";
}

QMetaObject *TimeStamp::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TimeStamp( "TimeStamp", &TimeStamp::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TimeStamp::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TimeStamp", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TimeStamp::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TimeStamp", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TimeStamp::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"autoCheckTimeStamp", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "autoCheckTimeStamp()", &slot_0, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"timeStampChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "timeStampChanged()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TimeStamp", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TimeStamp.setMetaObject( metaObj );
    return metaObj;
}

void* TimeStamp::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TimeStamp" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL timeStampChanged
void TimeStamp::timeStampChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool TimeStamp::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: autoCheckTimeStamp(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TimeStamp::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: timeStampChanged(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool TimeStamp::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool TimeStamp::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
