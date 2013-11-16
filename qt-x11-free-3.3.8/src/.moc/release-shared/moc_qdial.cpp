/****************************************************************************
** QDial meta object code from reading C++ file 'qdial.h'
**
** Created: Wed Oct 9 10:52:40 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qdial.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QDial::className() const
{
    return "QDial";
}

QMetaObject *QDial::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDial( "QDial", &QDial::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDial::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDial", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDial::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDial", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDial::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setValue", 1, param_slot_0 };
    static const QUMethod slot_1 = {"addLine", 0, 0 };
    static const QUMethod slot_2 = {"subtractLine", 0, 0 };
    static const QUMethod slot_3 = {"addPage", 0, 0 };
    static const QUMethod slot_4 = {"subtractPage", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setNotchesVisible", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setWrapping", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"setTracking", 1, param_slot_7 };
    static const QMetaData slot_tbl[] = {
	{ "setValue(int)", &slot_0, QMetaData::Public },
	{ "addLine()", &slot_1, QMetaData::Public },
	{ "subtractLine()", &slot_2, QMetaData::Public },
	{ "addPage()", &slot_3, QMetaData::Public },
	{ "subtractPage()", &slot_4, QMetaData::Public },
	{ "setNotchesVisible(bool)", &slot_5, QMetaData::Public },
	{ "setWrapping(bool)", &slot_6, QMetaData::Public },
	{ "setTracking(bool)", &slot_7, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"valueChanged", 1, param_signal_0 };
    static const QUMethod signal_1 = {"dialPressed", 0, 0 };
    static const QUParameter param_signal_2[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"dialMoved", 1, param_signal_2 };
    static const QUMethod signal_3 = {"dialReleased", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "valueChanged(int)", &signal_0, QMetaData::Public },
	{ "dialPressed()", &signal_1, QMetaData::Public },
	{ "dialMoved(int)", &signal_2, QMetaData::Public },
	{ "dialReleased()", &signal_3, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[10] = {
 	{ "bool","tracking", 0x12000103, &QDial::metaObj, 0, -1 },
	{ "bool","wrapping", 0x12000103, &QDial::metaObj, 0, -1 },
	{ "int","notchSize", 0x10000001, &QDial::metaObj, 0, -1 },
	{ "double","notchTarget", 0x13000103, &QDial::metaObj, 0, -1 },
	{ "bool","notchesVisible", 0x12000103, &QDial::metaObj, 0, -1 },
	{ "int","minValue", 0x10000103, &QDial::metaObj, 0, -1 },
	{ "int","maxValue", 0x10000103, &QDial::metaObj, 0, -1 },
	{ "int","lineStep", 0x10000103, &QDial::metaObj, 0, -1 },
	{ "int","pageStep", 0x10000103, &QDial::metaObj, 0, -1 },
	{ "int","value", 0x10000103, &QDial::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDial", parentObject,
	slot_tbl, 8,
	signal_tbl, 4,
#ifndef QT_NO_PROPERTIES
	props_tbl, 10,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDial.setMetaObject( metaObj );
    return metaObj;
}

void* QDial::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDial" ) )
	return this;
    if ( !qstrcmp( clname, "QRangeControl" ) )
	return (QRangeControl*)this;
    return QWidget::qt_cast( clname );
}

// SIGNAL valueChanged
void QDial::valueChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL dialPressed
void QDial::dialPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL dialMoved
void QDial::dialMoved( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL dialReleased
void QDial::dialReleased()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

bool QDial::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue((int)static_QUType_int.get(_o+1)); break;
    case 1: addLine(); break;
    case 2: subtractLine(); break;
    case 3: addPage(); break;
    case 4: subtractPage(); break;
    case 5: setNotchesVisible((bool)static_QUType_bool.get(_o+1)); break;
    case 6: setWrapping((bool)static_QUType_bool.get(_o+1)); break;
    case 7: setTracking((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDial::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: valueChanged((int)static_QUType_int.get(_o+1)); break;
    case 1: dialPressed(); break;
    case 2: dialMoved((int)static_QUType_int.get(_o+1)); break;
    case 3: dialReleased(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDial::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setTracking(v->asBool()); break;
	case 1: *v = QVariant( this->tracking(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setWrapping(v->asBool()); break;
	case 1: *v = QVariant( this->wrapping(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->notchSize() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setNotchTarget(v->asDouble()); break;
	case 1: *v = QVariant( this->notchTarget() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setNotchesVisible(v->asBool()); break;
	case 1: *v = QVariant( this->notchesVisible(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setMinValue(v->asInt()); break;
	case 1: *v = QVariant( this->minValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setMaxValue(v->asInt()); break;
	case 1: *v = QVariant( this->maxValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setLineStep(v->asInt()); break;
	case 1: *v = QVariant( this->lineStep() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setPageStep(v->asInt()); break;
	case 1: *v = QVariant( this->pageStep() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setValue(v->asInt()); break;
	case 1: *v = QVariant( this->value() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDial::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
