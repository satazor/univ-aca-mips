/****************************************************************************
** AnalogClock meta object code from reading C++ file 'aclock.h'
**
** Created: Wed Oct 9 11:07:03 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../aclock.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AnalogClock::className() const
{
    return "AnalogClock";
}

QMetaObject *AnalogClock::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AnalogClock( "AnalogClock", &AnalogClock::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AnalogClock::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AnalogClock", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AnalogClock::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AnalogClock", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AnalogClock::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"timeout", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "t", &static_QUType_varptr, "\x1b", QUParameter::In }
    };
    static const QUMethod slot_1 = {"setTime", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "timeout()", &slot_0, QMetaData::Private },
	{ "setTime(const QTime&)", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"AnalogClock", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AnalogClock.setMetaObject( metaObj );
    return metaObj;
}

void* AnalogClock::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AnalogClock" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool AnalogClock::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: timeout(); break;
    case 1: setTime((const QTime&)*((const QTime*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool AnalogClock::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AnalogClock::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool AnalogClock::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
