/****************************************************************************
** QToolButton meta object code from reading C++ file 'qtoolbutton.h'
**
** Created: Wed Oct 9 10:52:54 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtoolbutton.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QToolButton::className() const
{
    return "QToolButton";
}

QMetaObject *QToolButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QToolButton( "QToolButton", &QToolButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QToolButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QToolButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QToolButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QToolButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QToolButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QButton::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "BesideIcon",  (int) QToolButton::BesideIcon },
	{ "BelowIcon",  (int) QToolButton::BelowIcon },
	{ "Right",  (int) QToolButton::Right },
	{ "Under",  (int) QToolButton::Under }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "TextPosition", 4, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setUsesBigPixmap", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setUsesTextLabel", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setTextLabel", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setToggleButton", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setOn", 1, param_slot_4 };
    static const QUMethod slot_5 = {"toggle", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setTextLabel", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "pos", &static_QUType_enum, 
#ifndef QT_NO_PROPERTIES
	  &enum_tbl[0]
#else
	  0
#endif // QT_NO_PROPERTIES
	  , QUParameter::In }
    };
    static const QUMethod slot_7 = {"setTextPosition", 1, param_slot_7 };
    static const QUMethod slot_8 = {"popupTimerDone", 0, 0 };
    static const QUMethod slot_9 = {"popupPressed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setUsesBigPixmap(bool)", &slot_0, QMetaData::Public },
	{ "setUsesTextLabel(bool)", &slot_1, QMetaData::Public },
	{ "setTextLabel(const QString&,bool)", &slot_2, QMetaData::Public },
	{ "setToggleButton(bool)", &slot_3, QMetaData::Public },
	{ "setOn(bool)", &slot_4, QMetaData::Public },
	{ "toggle()", &slot_5, QMetaData::Public },
	{ "setTextLabel(const QString&)", &slot_6, QMetaData::Public },
	{ "setTextPosition(TextPosition)", &slot_7, QMetaData::Public },
	{ "popupTimerDone()", &slot_8, QMetaData::Private },
	{ "popupPressed()", &slot_9, QMetaData::Private }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[13] = {
 	{ "QIconSet","iconSet", 0xd000103, &QToolButton::metaObj, 0, -1 },
	{ "QIconSet","onIconSet", 0xd011103, &QToolButton::metaObj, 0, -1 },
	{ "QIconSet","offIconSet", 0xd011103, &QToolButton::metaObj, 0, -1 },
	{ "bool","usesBigPixmap", 0x12000103, &QToolButton::metaObj, 0, -1 },
	{ "bool","usesTextLabel", 0x12000103, &QToolButton::metaObj, 0, -1 },
	{ "QString","textLabel", 0x3000103, &QToolButton::metaObj, 0, -1 },
	{ "int","popupDelay", 0x10000103, &QToolButton::metaObj, 0, -1 },
	{ "bool","autoRaise", 0x12000103, &QToolButton::metaObj, 0, -1 },
	{ "TextPosition","textPosition", 0x0107, &QToolButton::metaObj, &enum_tbl[0], -1 },
	{ "bool","toggleButton", 0x1202a302, &QToolButton::metaObj, 0, -1 },
	{ "bool","on", 0x1202a302, &QToolButton::metaObj, 0, -1 },
	{ "QPixmap","pixmap", 0x6019200, &QToolButton::metaObj, 0, -1 },
	{ "BackgroundMode","backgroundMode", 0x2820c, &QToolButton::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QToolButton", parentObject,
	slot_tbl, 10,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 13,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QToolButton.setMetaObject( metaObj );
    return metaObj;
}

void* QToolButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QToolButton" ) )
	return this;
    return QButton::qt_cast( clname );
}

bool QToolButton::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setUsesBigPixmap((bool)static_QUType_bool.get(_o+1)); break;
    case 1: setUsesTextLabel((bool)static_QUType_bool.get(_o+1)); break;
    case 2: setTextLabel((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 3: setToggleButton((bool)static_QUType_bool.get(_o+1)); break;
    case 4: setOn((bool)static_QUType_bool.get(_o+1)); break;
    case 5: toggle(); break;
    case 6: setTextLabel((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: setTextPosition((TextPosition)static_QUType_enum.get(_o+1)); break;
    case 8: popupTimerDone(); break;
    case 9: popupPressed(); break;
    default:
	return QButton::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QToolButton::qt_emit( int _id, QUObject* _o )
{
    return QButton::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QToolButton::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setIconSet(v->asIconSet()); break;
	case 1: *v = QVariant( this->iconSet() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setOnIconSet(v->asIconSet()); break;
	case 1: *v = QVariant( this->onIconSet() ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setOffIconSet(v->asIconSet()); break;
	case 1: *v = QVariant( this->offIconSet() ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setUsesBigPixmap(v->asBool()); break;
	case 1: *v = QVariant( this->usesBigPixmap(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setUsesTextLabel(v->asBool()); break;
	case 1: *v = QVariant( this->usesTextLabel(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setTextLabel(v->asString()); break;
	case 1: *v = QVariant( this->textLabel() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setPopupDelay(v->asInt()); break;
	case 1: *v = QVariant( this->popupDelay() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setAutoRaise(v->asBool()); break;
	case 1: *v = QVariant( this->autoRaise(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setTextPosition((TextPosition&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->textPosition() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setToggleButton(v->asBool()); break;
	case 1: case 3: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 0: setOn(v->asBool()); break;
	case 1: case 3: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 11: switch( f ) {
	case 0: case 1: case 4: goto resolve;
	default: return FALSE;
    } break;
    case 12: switch( f ) {
	case 0: case 1: case 4: case 5: goto resolve;
	case 3: break;
	default: return FALSE;
    } break;
    default:
	return QButton::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QButton::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QToolButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
