/****************************************************************************
** QSpinBox meta object code from reading C++ file 'qspinbox.h'
**
** Created: Wed Oct 9 10:52:51 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qspinbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QSpinBox::className() const
{
    return "QSpinBox";
}

QMetaObject *QSpinBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSpinBox( "QSpinBox", &QSpinBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSpinBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSpinBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSpinBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSpinBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSpinBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "UpDownArrows",  (int) QSpinBox::UpDownArrows },
	{ "PlusMinus",  (int) QSpinBox::PlusMinus }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "ButtonSymbols", 2, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setValue", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setPrefix", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setSuffix", 1, param_slot_2 };
    static const QUMethod slot_3 = {"stepUp", 0, 0 };
    static const QUMethod slot_4 = {"stepDown", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "enabled", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setEnabled", 1, param_slot_5 };
    static const QUMethod slot_6 = {"selectAll", 0, 0 };
    static const QUMethod slot_7 = {"textChanged", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue(int)", &slot_0, QMetaData::Public },
	{ "setPrefix(const QString&)", &slot_1, QMetaData::Public },
	{ "setSuffix(const QString&)", &slot_2, QMetaData::Public },
	{ "stepUp()", &slot_3, QMetaData::Public },
	{ "stepDown()", &slot_4, QMetaData::Public },
	{ "setEnabled(bool)", &slot_5, QMetaData::Public },
	{ "selectAll()", &slot_6, QMetaData::Public },
	{ "textChanged()", &slot_7, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"valueChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "valueText", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"valueChanged", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "valueChanged(int)", &signal_0, QMetaData::Public },
	{ "valueChanged(const QString&)", &signal_1, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[11] = {
 	{ "QString","text", 0x3000001, &QSpinBox::metaObj, 0, -1 },
	{ "QString","prefix", 0x3000103, &QSpinBox::metaObj, 0, -1 },
	{ "QString","suffix", 0x3000103, &QSpinBox::metaObj, 0, -1 },
	{ "QString","cleanText", 0x3000001, &QSpinBox::metaObj, 0, -1 },
	{ "QString","specialValueText", 0x3000103, &QSpinBox::metaObj, 0, -1 },
	{ "bool","wrapping", 0x12000103, &QSpinBox::metaObj, 0, -1 },
	{ "ButtonSymbols","buttonSymbols", 0x0107, &QSpinBox::metaObj, &enum_tbl[0], -1 },
	{ "int","maxValue", 0x10000103, &QSpinBox::metaObj, 0, -1 },
	{ "int","minValue", 0x10000103, &QSpinBox::metaObj, 0, -1 },
	{ "int","lineStep", 0x10000103, &QSpinBox::metaObj, 0, -1 },
	{ "int","value", 0x10000103, &QSpinBox::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QSpinBox", parentObject,
	slot_tbl, 8,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	props_tbl, 11,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSpinBox.setMetaObject( metaObj );
    return metaObj;
}

void* QSpinBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSpinBox" ) )
	return this;
    if ( !qstrcmp( clname, "QRangeControl" ) )
	return (QRangeControl*)this;
    return QWidget::qt_cast( clname );
}

// SIGNAL valueChanged
void QSpinBox::valueChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL valueChanged
void QSpinBox::valueChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QSpinBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue((int)static_QUType_int.get(_o+1)); break;
    case 1: setPrefix((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: setSuffix((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: stepUp(); break;
    case 4: stepDown(); break;
    case 5: setEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 6: selectAll(); break;
    case 7: textChanged(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QSpinBox::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: valueChanged((int)static_QUType_int.get(_o+1)); break;
    case 1: valueChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QSpinBox::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->text() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setPrefix(v->asString()); break;
	case 1: *v = QVariant( this->prefix() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setSuffix(v->asString()); break;
	case 1: *v = QVariant( this->suffix() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( this->cleanText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setSpecialValueText(v->asString()); break;
	case 1: *v = QVariant( this->specialValueText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setWrapping(v->asBool()); break;
	case 1: *v = QVariant( this->wrapping(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setButtonSymbols((ButtonSymbols&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->buttonSymbols() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setMaxValue(v->asInt()); break;
	case 1: *v = QVariant( this->maxValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setMinValue(v->asInt()); break;
	case 1: *v = QVariant( this->minValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setLineStep(v->asInt()); break;
	case 1: *v = QVariant( this->lineStep() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
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

bool QSpinBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
