/****************************************************************************
** QSlider meta object code from reading C++ file 'qslider.h'
**
** Created: Wed Oct 9 10:52:50 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qslider.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QSlider::className() const
{
    return "QSlider";
}

QMetaObject *QSlider::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSlider( "QSlider", &QSlider::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSlider::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSlider", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSlider::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSlider", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSlider::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "NoMarks",  (int) QSlider::NoMarks },
	{ "Above",  (int) QSlider::Above },
	{ "Left",  (int) QSlider::Left },
	{ "Below",  (int) QSlider::Below },
	{ "Right",  (int) QSlider::Right },
	{ "Both",  (int) QSlider::Both }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "TickSetting", 6, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setValue", 1, param_slot_0 };
    static const QUMethod slot_1 = {"addStep", 0, 0 };
    static const QUMethod slot_2 = {"subtractStep", 0, 0 };
    static const QUMethod slot_3 = {"addLine", 0, 0 };
    static const QUMethod slot_4 = {"subtractLine", 0, 0 };
    static const QUMethod slot_5 = {"repeatTimeout", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue(int)", &slot_0, QMetaData::Public },
	{ "addStep()", &slot_1, QMetaData::Public },
	{ "subtractStep()", &slot_2, QMetaData::Public },
	{ "addLine()", &slot_3, QMetaData::Public },
	{ "subtractLine()", &slot_4, QMetaData::Public },
	{ "repeatTimeout()", &slot_5, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"valueChanged", 1, param_signal_0 };
    static const QUMethod signal_1 = {"sliderPressed", 0, 0 };
    static const QUParameter param_signal_2[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"sliderMoved", 1, param_signal_2 };
    static const QUMethod signal_3 = {"sliderReleased", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "valueChanged(int)", &signal_0, QMetaData::Public },
	{ "sliderPressed()", &signal_1, QMetaData::Public },
	{ "sliderMoved(int)", &signal_2, QMetaData::Public },
	{ "sliderReleased()", &signal_3, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[9] = {
 	{ "int","minValue", 0x10000103, &QSlider::metaObj, 0, -1 },
	{ "int","maxValue", 0x10000103, &QSlider::metaObj, 0, -1 },
	{ "int","lineStep", 0x10000103, &QSlider::metaObj, 0, -1 },
	{ "int","pageStep", 0x10000103, &QSlider::metaObj, 0, -1 },
	{ "int","value", 0x10000103, &QSlider::metaObj, 0, -1 },
	{ "bool","tracking", 0x12000103, &QSlider::metaObj, 0, -1 },
	{ "Orientation","orientation", 0x010f, &QSlider::metaObj, 0, -1 },
	{ "TickSetting","tickmarks", 0x0107, &QSlider::metaObj, &enum_tbl[0], -1 },
	{ "int","tickInterval", 0x10000103, &QSlider::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QSlider", parentObject,
	slot_tbl, 6,
	signal_tbl, 4,
#ifndef QT_NO_PROPERTIES
	props_tbl, 9,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSlider.setMetaObject( metaObj );
    return metaObj;
}

void* QSlider::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSlider" ) )
	return this;
    if ( !qstrcmp( clname, "QRangeControl" ) )
	return (QRangeControl*)this;
    return QWidget::qt_cast( clname );
}

// SIGNAL valueChanged
void QSlider::valueChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL sliderPressed
void QSlider::sliderPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL sliderMoved
void QSlider::sliderMoved( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL sliderReleased
void QSlider::sliderReleased()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

bool QSlider::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue((int)static_QUType_int.get(_o+1)); break;
    case 1: addStep(); break;
    case 2: subtractStep(); break;
    case 3: addLine(); break;
    case 4: subtractLine(); break;
    case 5: repeatTimeout(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QSlider::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: valueChanged((int)static_QUType_int.get(_o+1)); break;
    case 1: sliderPressed(); break;
    case 2: sliderMoved((int)static_QUType_int.get(_o+1)); break;
    case 3: sliderReleased(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QSlider::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setMinValue(v->asInt()); break;
	case 1: *v = QVariant( this->minValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setMaxValue(v->asInt()); break;
	case 1: *v = QVariant( this->maxValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setLineStep(v->asInt()); break;
	case 1: *v = QVariant( this->lineStep() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setPageStep(v->asInt()); break;
	case 1: *v = QVariant( this->pageStep() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setValue(v->asInt()); break;
	case 1: *v = QVariant( this->value() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setTracking(v->asBool()); break;
	case 1: *v = QVariant( this->tracking(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setOrientation((Orientation&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->orientation() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setTickmarks((TickSetting&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->tickmarks() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setTickInterval(v->asInt()); break;
	case 1: *v = QVariant( this->tickInterval() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QSlider::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
