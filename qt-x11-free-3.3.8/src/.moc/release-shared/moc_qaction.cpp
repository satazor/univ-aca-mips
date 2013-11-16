/****************************************************************************
** QAction meta object code from reading C++ file 'qaction.h'
**
** Created: Wed Oct 9 10:52:57 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qaction.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QAction::className() const
{
    return "QAction";
}

QMetaObject *QAction::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QAction( "QAction", &QAction::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QAction::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QAction", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QAction::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QAction", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QAction::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"activate", 0, 0 };
    static const QUMethod slot_1 = {"toggle", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setOn", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setEnabled", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setDisabled", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setVisible", 1, param_slot_5 };
    static const QUMethod slot_6 = {"internalActivation", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"toolButtonToggled", 1, param_slot_7 };
    static const QUMethod slot_8 = {"objectDestroyed", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"menuStatusText", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"showStatusText", 1, param_slot_10 };
    static const QUMethod slot_11 = {"clearStatusText", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "activate()", &slot_0, QMetaData::Public },
	{ "toggle()", &slot_1, QMetaData::Public },
	{ "setOn(bool)", &slot_2, QMetaData::Public },
	{ "setEnabled(bool)", &slot_3, QMetaData::Public },
	{ "setDisabled(bool)", &slot_4, QMetaData::Public },
	{ "setVisible(bool)", &slot_5, QMetaData::Public },
	{ "internalActivation()", &slot_6, QMetaData::Private },
	{ "toolButtonToggled(bool)", &slot_7, QMetaData::Private },
	{ "objectDestroyed()", &slot_8, QMetaData::Private },
	{ "menuStatusText(int)", &slot_9, QMetaData::Private },
	{ "showStatusText(const QString&)", &slot_10, QMetaData::Private },
	{ "clearStatusText()", &slot_11, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"activated", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"toggled", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "activated()", &signal_0, QMetaData::Public },
	{ "toggled(bool)", &signal_1, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[11] = {
 	{ "bool","toggleAction", 0x12000103, &QAction::metaObj, 0, -1 },
	{ "bool","on", 0x12000103, &QAction::metaObj, 0, -1 },
	{ "bool","enabled", 0x12000103, &QAction::metaObj, 0, -1 },
	{ "QIconSet","iconSet", 0xd000103, &QAction::metaObj, 0, -1 },
	{ "QString","text", 0x3000103, &QAction::metaObj, 0, -1 },
	{ "QString","menuText", 0x3000103, &QAction::metaObj, 0, -1 },
	{ "QString","toolTip", 0x3000103, &QAction::metaObj, 0, -1 },
	{ "QString","statusTip", 0x3000103, &QAction::metaObj, 0, -1 },
	{ "QString","whatsThis", 0x3000103, &QAction::metaObj, 0, -1 },
	{ "QKeySequence","accel", 0x1f000103, &QAction::metaObj, 0, -1 },
	{ "bool","visible", 0x12000103, &QAction::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QAction", parentObject,
	slot_tbl, 12,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	props_tbl, 11,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QAction.setMetaObject( metaObj );
    return metaObj;
}

void* QAction::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QAction" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL activated
void QAction::activated()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL toggled
void QAction::toggled( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QAction::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: activate(); break;
    case 1: toggle(); break;
    case 2: setOn((bool)static_QUType_bool.get(_o+1)); break;
    case 3: setEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 4: setDisabled((bool)static_QUType_bool.get(_o+1)); break;
    case 5: setVisible((bool)static_QUType_bool.get(_o+1)); break;
    case 6: internalActivation(); break;
    case 7: toolButtonToggled((bool)static_QUType_bool.get(_o+1)); break;
    case 8: objectDestroyed(); break;
    case 9: menuStatusText((int)static_QUType_int.get(_o+1)); break;
    case 10: showStatusText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 11: clearStatusText(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QAction::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: activated(); break;
    case 1: toggled((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QAction::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setToggleAction(v->asBool()); break;
	case 1: *v = QVariant( this->isToggleAction(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setOn(v->asBool()); break;
	case 1: *v = QVariant( this->isOn(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setIconSet(v->asIconSet()); break;
	case 1: *v = QVariant( this->iconSet() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setText(v->asString()); break;
	case 1: *v = QVariant( this->text() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setMenuText(v->asString()); break;
	case 1: *v = QVariant( this->menuText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setToolTip(v->asString()); break;
	case 1: *v = QVariant( this->toolTip() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setStatusTip(v->asString()); break;
	case 1: *v = QVariant( this->statusTip() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setWhatsThis(v->asString()); break;
	case 1: *v = QVariant( this->whatsThis() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setAccel(v->asKeySequence()); break;
	case 1: *v = QVariant( this->accel() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 0: setVisible(v->asBool()); break;
	case 1: *v = QVariant( this->isVisible(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QObject::qt_property( id, f, v );
    }
    return TRUE;
}

bool QAction::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QActionGroup::className() const
{
    return "QActionGroup";
}

QMetaObject *QActionGroup::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QActionGroup( "QActionGroup", &QActionGroup::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QActionGroup::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QActionGroup", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QActionGroup::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QActionGroup", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QActionGroup::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QAction::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"childToggled", 1, param_slot_0 };
    static const QUMethod slot_1 = {"childDestroyed", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"internalComboBoxActivated", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"internalComboBoxHighlighted", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod slot_4 = {"internalToggle", 1, param_slot_4 };
    static const QUMethod slot_5 = {"objectDestroyed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "childToggled(bool)", &slot_0, QMetaData::Private },
	{ "childDestroyed()", &slot_1, QMetaData::Private },
	{ "internalComboBoxActivated(int)", &slot_2, QMetaData::Private },
	{ "internalComboBoxHighlighted(int)", &slot_3, QMetaData::Private },
	{ "internalToggle(QAction*)", &slot_4, QMetaData::Private },
	{ "objectDestroyed()", &slot_5, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod signal_0 = {"selected", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "selected(QAction*)", &signal_0, QMetaData::Protected }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "bool","exclusive", 0x12000103, &QActionGroup::metaObj, 0, -1 },
	{ "bool","usesDropDown", 0x12000103, &QActionGroup::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QActionGroup", parentObject,
	slot_tbl, 6,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QActionGroup.setMetaObject( metaObj );
    return metaObj;
}

void* QActionGroup::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QActionGroup" ) )
	return this;
    return QAction::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL selected
void QActionGroup::selected( QAction* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool QActionGroup::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: childToggled((bool)static_QUType_bool.get(_o+1)); break;
    case 1: childDestroyed(); break;
    case 2: internalComboBoxActivated((int)static_QUType_int.get(_o+1)); break;
    case 3: internalComboBoxHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 4: internalToggle((QAction*)static_QUType_ptr.get(_o+1)); break;
    case 5: objectDestroyed(); break;
    default:
	return QAction::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QActionGroup::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: selected((QAction*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QAction::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QActionGroup::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setExclusive(v->asBool()); break;
	case 1: *v = QVariant( this->isExclusive(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setUsesDropDown(v->asBool()); break;
	case 1: *v = QVariant( this->usesDropDown(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QAction::qt_property( id, f, v );
    }
    return TRUE;
}

bool QActionGroup::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
