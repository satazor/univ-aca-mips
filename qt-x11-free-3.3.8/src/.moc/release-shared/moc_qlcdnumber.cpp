/****************************************************************************
** QLCDNumber meta object code from reading C++ file 'qlcdnumber.h'
**
** Created: Wed Oct 9 10:52:44 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qlcdnumber.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QLCDNumber::className() const
{
    return "QLCDNumber";
}

QMetaObject *QLCDNumber::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QLCDNumber( "QLCDNumber", &QLCDNumber::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QLCDNumber::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLCDNumber", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QLCDNumber::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLCDNumber", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QLCDNumber::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Hex",  (int) QLCDNumber::Hex },
	{ "Dec",  (int) QLCDNumber::Dec },
	{ "Oct",  (int) QLCDNumber::Oct },
	{ "Bin",  (int) QLCDNumber::Bin },
	{ "HEX",  (int) QLCDNumber::HEX },
	{ "DEC",  (int) QLCDNumber::DEC },
	{ "OCT",  (int) QLCDNumber::OCT },
	{ "BIN",  (int) QLCDNumber::BIN }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "Outline",  (int) QLCDNumber::Outline },
	{ "Filled",  (int) QLCDNumber::Filled },
	{ "Flat",  (int) QLCDNumber::Flat }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Mode", 8, enum_0, FALSE },
	{ "SegmentStyle", 3, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"display", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "num", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"display", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "num", &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"display", 1, param_slot_2 };
    static const QUMethod slot_3 = {"setHexMode", 0, 0 };
    static const QUMethod slot_4 = {"setDecMode", 0, 0 };
    static const QUMethod slot_5 = {"setOctMode", 0, 0 };
    static const QUMethod slot_6 = {"setBinMode", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"setSmallDecimalPoint", 1, param_slot_7 };
    static const QMetaData slot_tbl[] = {
	{ "display(const QString&)", &slot_0, QMetaData::Public },
	{ "display(int)", &slot_1, QMetaData::Public },
	{ "display(double)", &slot_2, QMetaData::Public },
	{ "setHexMode()", &slot_3, QMetaData::Public },
	{ "setDecMode()", &slot_4, QMetaData::Public },
	{ "setOctMode()", &slot_5, QMetaData::Public },
	{ "setBinMode()", &slot_6, QMetaData::Public },
	{ "setSmallDecimalPoint(bool)", &slot_7, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"overflow", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "overflow()", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[6] = {
 	{ "bool","smallDecimalPoint", 0x12000103, &QLCDNumber::metaObj, 0, -1 },
	{ "int","numDigits", 0x10000103, &QLCDNumber::metaObj, 0, -1 },
	{ "Mode","mode", 0x0107, &QLCDNumber::metaObj, &enum_tbl[0], -1 },
	{ "SegmentStyle","segmentStyle", 0x0107, &QLCDNumber::metaObj, &enum_tbl[1], -1 },
	{ "double","value", 0x13000003, &QLCDNumber::metaObj, 0, -1 },
	{ "int","intValue", 0x10000003, &QLCDNumber::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QLCDNumber", parentObject,
	slot_tbl, 8,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 6,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QLCDNumber.setMetaObject( metaObj );
    return metaObj;
}

void* QLCDNumber::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QLCDNumber" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL overflow
void QLCDNumber::overflow()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool QLCDNumber::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: display((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: display((int)static_QUType_int.get(_o+1)); break;
    case 2: display((double)static_QUType_double.get(_o+1)); break;
    case 3: setHexMode(); break;
    case 4: setDecMode(); break;
    case 5: setOctMode(); break;
    case 6: setBinMode(); break;
    case 7: setSmallDecimalPoint((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QLCDNumber::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: overflow(); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QLCDNumber::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setSmallDecimalPoint(v->asBool()); break;
	case 1: *v = QVariant( this->smallDecimalPoint(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setNumDigits(v->asInt()); break;
	case 1: *v = QVariant( this->numDigits() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setMode((Mode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->mode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setSegmentStyle((SegmentStyle&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->segmentStyle() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: display(v->asDouble()); break;
	case 1: *v = QVariant( this->value() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: display(v->asInt()); break;
	case 1: *v = QVariant( this->intValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QLCDNumber::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
