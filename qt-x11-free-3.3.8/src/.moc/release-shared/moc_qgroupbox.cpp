/****************************************************************************
** QGroupBox meta object code from reading C++ file 'qgroupbox.h'
**
** Created: Wed Oct 9 10:52:42 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qgroupbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QGroupBox::className() const
{
    return "QGroupBox";
}

QMetaObject *QGroupBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QGroupBox( "QGroupBox", &QGroupBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QGroupBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGroupBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QGroupBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGroupBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QGroupBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setChecked", 1, param_slot_0 };
    static const QUMethod slot_1 = {"fixFocus", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setChildrenEnabled", 1, param_slot_2 };
    static const QMetaData slot_tbl[] = {
	{ "setChecked(bool)", &slot_0, QMetaData::Public },
	{ "fixFocus()", &slot_1, QMetaData::Private },
	{ "setChildrenEnabled(bool)", &slot_2, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"toggled", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "toggled(bool)", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[7] = {
 	{ "QString","title", 0x3000103, &QGroupBox::metaObj, 0, -1 },
	{ "Alignment","alignment", 0x010f, &QGroupBox::metaObj, 0, -1 },
	{ "Orientation","orientation", 0x110f, &QGroupBox::metaObj, 0, -1 },
	{ "int","columns", 0x10001103, &QGroupBox::metaObj, 0, -1 },
	{ "bool","flat", 0x12000103, &QGroupBox::metaObj, 0, -1 },
	{ "bool","checkable", 0x12000103, &QGroupBox::metaObj, 0, -1 },
	{ "bool","checked", 0x12000103, &QGroupBox::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QGroupBox", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 7,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QGroupBox.setMetaObject( metaObj );
    return metaObj;
}

void* QGroupBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QGroupBox" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL toggled
void QGroupBox::toggled( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 0, t0 );
}

bool QGroupBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setChecked((bool)static_QUType_bool.get(_o+1)); break;
    case 1: fixFocus(); break;
    case 2: setChildrenEnabled((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QGroupBox::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: toggled((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QGroupBox::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setTitle(v->asString()); break;
	case 1: *v = QVariant( this->title() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setAlignment(v->asInt()); break;
	case 1: *v = QVariant( (int)this->alignment() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setOrientation((Orientation&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->orientation() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setColumns(v->asInt()); break;
	case 1: *v = QVariant( this->columns() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setFlat(v->asBool()); break;
	case 1: *v = QVariant( this->isFlat(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setCheckable(v->asBool()); break;
	case 1: *v = QVariant( this->isCheckable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setChecked(v->asBool()); break;
	case 1: *v = QVariant( this->isChecked(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QGroupBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
