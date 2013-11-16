/****************************************************************************
** QPushButton meta object code from reading C++ file 'qpushbutton.h'
**
** Created: Wed Oct 9 10:52:48 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qpushbutton.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QPushButton::className() const
{
    return "QPushButton";
}

QMetaObject *QPushButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QPushButton( "QPushButton", &QPushButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QPushButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QPushButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QPushButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QPushButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QPushButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QButton::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setOn", 1, param_slot_0 };
    static const QUMethod slot_1 = {"popupPressed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setOn(bool)", &slot_0, QMetaData::Public },
	{ "popupPressed()", &slot_1, QMetaData::Private }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[8] = {
 	{ "bool","autoDefault", 0x12000103, &QPushButton::metaObj, 0, -1 },
	{ "bool","default", 0x12000103, &QPushButton::metaObj, 0, -1 },
	{ "bool","menuButton", 0x12001001, &QPushButton::metaObj, 0, -1 },
	{ "QIconSet","iconSet", 0xd000103, &QPushButton::metaObj, 0, -1 },
	{ "bool","toggleButton", 0x1202a302, &QPushButton::metaObj, 0, -1 },
	{ "bool","on", 0x1202a302, &QPushButton::metaObj, 0, -1 },
	{ "bool","flat", 0x12000103, &QPushButton::metaObj, 0, -1 },
	{ "bool","autoMask", 0x12020200, &QPushButton::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QPushButton", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 8,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QPushButton.setMetaObject( metaObj );
    return metaObj;
}

void* QPushButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QPushButton" ) )
	return this;
    return QButton::qt_cast( clname );
}

bool QPushButton::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setOn((bool)static_QUType_bool.get(_o+1)); break;
    case 1: popupPressed(); break;
    default:
	return QButton::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QPushButton::qt_emit( int _id, QUObject* _o )
{
    return QButton::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QPushButton::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setAutoDefault(v->asBool()); break;
	case 1: *v = QVariant( this->autoDefault(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setDefault(v->asBool()); break;
	case 1: *v = QVariant( this->isDefault(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->isMenuButton(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setIconSet(v->asIconSet()); break;
	case 1: if ( this->iconSet() ) *v = QVariant( *iconSet() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setToggleButton(v->asBool()); break;
	case 1: case 3: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setOn(v->asBool()); break;
	case 1: case 3: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setFlat(v->asBool()); break;
	case 1: *v = QVariant( this->isFlat(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    default:
	return QButton::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QButton::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QPushButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
