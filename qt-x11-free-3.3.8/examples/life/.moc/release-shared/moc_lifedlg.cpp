/****************************************************************************
** LifeTimer meta object code from reading C++ file 'lifedlg.h'
**
** Created: Wed Oct 9 11:07:54 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../lifedlg.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *LifeTimer::className() const
{
    return "LifeTimer";
}

QMetaObject *LifeTimer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_LifeTimer( "LifeTimer", &LifeTimer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString LifeTimer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LifeTimer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString LifeTimer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LifeTimer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* LifeTimer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTimer::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "speed", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setSpeed", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"pause", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "setSpeed(int)", &slot_0, QMetaData::Public },
	{ "pause(bool)", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"LifeTimer", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_LifeTimer.setMetaObject( metaObj );
    return metaObj;
}

void* LifeTimer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "LifeTimer" ) )
	return this;
    return QTimer::qt_cast( clname );
}

bool LifeTimer::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setSpeed((int)static_QUType_int.get(_o+1)); break;
    case 1: pause((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QTimer::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool LifeTimer::qt_emit( int _id, QUObject* _o )
{
    return QTimer::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool LifeTimer::qt_property( int id, int f, QVariant* v)
{
    return QTimer::qt_property( id, f, v);
}

bool LifeTimer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *LifeDialog::className() const
{
    return "LifeDialog";
}

QMetaObject *LifeDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_LifeDialog( "LifeDialog", &LifeDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString LifeDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LifeDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString LifeDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LifeDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* LifeDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"getPattern", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "getPattern(int)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"LifeDialog", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_LifeDialog.setMetaObject( metaObj );
    return metaObj;
}

void* LifeDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "LifeDialog" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool LifeDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: getPattern((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool LifeDialog::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool LifeDialog::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool LifeDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
