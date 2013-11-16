/****************************************************************************
** QButton meta object code from reading C++ file 'qbutton.h'
**
** Created: Wed Oct 9 10:52:38 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qbutton.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QButton::className() const
{
    return "QButton";
}

QMetaObject *QButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QButton( "QButton", &QButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "SingleShot",  (int) QButton::SingleShot },
	{ "Toggle",  (int) QButton::Toggle },
	{ "Tristate",  (int) QButton::Tristate }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "Off",  (int) QButton::Off },
	{ "NoChange",  (int) QButton::NoChange },
	{ "On",  (int) QButton::On }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "ToggleType", 3, enum_0, FALSE },
	{ "ToggleState", 3, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUMethod slot_0 = {"animateClick", 0, 0 };
    static const QUMethod slot_1 = {"toggle", 0, 0 };
    static const QUMethod slot_2 = {"animateTimeout", 0, 0 };
    static const QUMethod slot_3 = {"autoRepeatTimeout", 0, 0 };
    static const QUMethod slot_4 = {"emulateClick", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "animateClick()", &slot_0, QMetaData::Public },
	{ "toggle()", &slot_1, QMetaData::Public },
	{ "animateTimeout()", &slot_2, QMetaData::Private },
	{ "autoRepeatTimeout()", &slot_3, QMetaData::Private },
	{ "emulateClick()", &slot_4, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"pressed", 0, 0 };
    static const QUMethod signal_1 = {"released", 0, 0 };
    static const QUMethod signal_2 = {"clicked", 0, 0 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"toggled", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"stateChanged", 1, param_signal_4 };
    static const QMetaData signal_tbl[] = {
	{ "pressed()", &signal_0, QMetaData::Public },
	{ "released()", &signal_1, QMetaData::Public },
	{ "clicked()", &signal_2, QMetaData::Public },
	{ "toggled(bool)", &signal_3, QMetaData::Public },
	{ "stateChanged(int)", &signal_4, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[11] = {
 	{ "QString","text", 0x3000103, &QButton::metaObj, 0, -1 },
	{ "QPixmap","pixmap", 0x6000103, &QButton::metaObj, 0, -1 },
	{ "QKeySequence","accel", 0x1f000103, &QButton::metaObj, 0, -1 },
	{ "bool","toggleButton", 0x12000001, &QButton::metaObj, 0, -1 },
	{ "ToggleType","toggleType", 0x0005, &QButton::metaObj, &enum_tbl[0], -1 },
	{ "bool","down", 0x12001103, &QButton::metaObj, 0, -1 },
	{ "bool","on", 0x12000001, &QButton::metaObj, 0, -1 },
	{ "ToggleState","toggleState", 0x0005, &QButton::metaObj, &enum_tbl[1], -1 },
	{ "bool","autoResize", 0x12001103, &QButton::metaObj, 0, -1 },
	{ "bool","autoRepeat", 0x12000103, &QButton::metaObj, 0, -1 },
	{ "bool","exclusiveToggle", 0x12000001, &QButton::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QButton", parentObject,
	slot_tbl, 5,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	props_tbl, 11,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QButton.setMetaObject( metaObj );
    return metaObj;
}

void* QButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QButton" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL pressed
void QButton::pressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL released
void QButton::released()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL clicked
void QButton::clicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL toggled
void QButton::toggled( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL stateChanged
void QButton::stateChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 4, t0 );
}

bool QButton::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: animateClick(); break;
    case 1: toggle(); break;
    case 2: animateTimeout(); break;
    case 3: autoRepeatTimeout(); break;
    case 4: emulateClick(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QButton::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: pressed(); break;
    case 1: released(); break;
    case 2: clicked(); break;
    case 3: toggled((bool)static_QUType_bool.get(_o+1)); break;
    case 4: stateChanged((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QButton::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setText(v->asString()); break;
	case 1: *v = QVariant( this->text() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setPixmap(v->asPixmap()); break;
	case 1: if ( this->pixmap() ) *v = QVariant( *pixmap() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setAccel(v->asKeySequence()); break;
	case 1: *v = QVariant( this->accel() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( this->isToggleButton(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 1: *v = QVariant( (int)this->toggleType() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setDown(v->asBool()); break;
	case 1: *v = QVariant( this->isDown(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 1: *v = QVariant( this->isOn(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 1: *v = QVariant( (int)this->state() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setAutoResize(v->asBool()); break;
	case 1: *v = QVariant( this->autoResize(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setAutoRepeat(v->asBool()); break;
	case 1: *v = QVariant( this->autoRepeat(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 1: *v = QVariant( this->isExclusiveToggle(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
