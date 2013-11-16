/****************************************************************************
** QPopupMenu meta object code from reading C++ file 'qpopupmenu.h'
**
** Created: Wed Oct 9 10:52:48 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qpopupmenu.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QPopupMenu::className() const
{
    return "QPopupMenu";
}

QMetaObject *QPopupMenu::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QPopupMenu( "QPopupMenu", &QPopupMenu::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QPopupMenu::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QPopupMenu", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QPopupMenu::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QPopupMenu", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QPopupMenu::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"subActivated", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"subHighlighted", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"accelActivated", 1, param_slot_2 };
    static const QUMethod slot_3 = {"accelDestroyed", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_4 = {"popupDestroyed", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"modalActivation", 1, param_slot_5 };
    static const QUMethod slot_6 = {"subMenuTimer", 0, 0 };
    static const QUMethod slot_7 = {"subScrollTimer", 0, 0 };
    static const QUMethod slot_8 = {"allowAnimation", 0, 0 };
    static const QUMethod slot_9 = {"toggleTearOff", 0, 0 };
    static const QUMethod slot_10 = {"performDelayedChanges", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "subActivated(int)", &slot_0, QMetaData::Private },
	{ "subHighlighted(int)", &slot_1, QMetaData::Private },
	{ "accelActivated(int)", &slot_2, QMetaData::Private },
	{ "accelDestroyed()", &slot_3, QMetaData::Private },
	{ "popupDestroyed(QObject*)", &slot_4, QMetaData::Private },
	{ "modalActivation(int)", &slot_5, QMetaData::Private },
	{ "subMenuTimer()", &slot_6, QMetaData::Private },
	{ "subScrollTimer()", &slot_7, QMetaData::Private },
	{ "allowAnimation()", &slot_8, QMetaData::Private },
	{ "toggleTearOff()", &slot_9, QMetaData::Private },
	{ "performDelayedChanges()", &slot_10, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"activated", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"highlighted", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"activatedRedirect", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"highlightedRedirect", 1, param_signal_3 };
    static const QUMethod signal_4 = {"aboutToShow", 0, 0 };
    static const QUMethod signal_5 = {"aboutToHide", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "activated(int)", &signal_0, QMetaData::Public },
	{ "highlighted(int)", &signal_1, QMetaData::Public },
	{ "activatedRedirect(int)", &signal_2, QMetaData::Public },
	{ "highlightedRedirect(int)", &signal_3, QMetaData::Public },
	{ "aboutToShow()", &signal_4, QMetaData::Public },
	{ "aboutToHide()", &signal_5, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "bool","checkable", 0x12000103, &QPopupMenu::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QPopupMenu", parentObject,
	slot_tbl, 11,
	signal_tbl, 6,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QPopupMenu.setMetaObject( metaObj );
    return metaObj;
}

void* QPopupMenu::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QPopupMenu" ) )
	return this;
    if ( !qstrcmp( clname, "QMenuData" ) )
	return (QMenuData*)this;
    return QFrame::qt_cast( clname );
}

// SIGNAL activated
void QPopupMenu::activated( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL highlighted
void QPopupMenu::highlighted( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL activatedRedirect
void QPopupMenu::activatedRedirect( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL highlightedRedirect
void QPopupMenu::highlightedRedirect( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL aboutToShow
void QPopupMenu::aboutToShow()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

// SIGNAL aboutToHide
void QPopupMenu::aboutToHide()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

bool QPopupMenu::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: subActivated((int)static_QUType_int.get(_o+1)); break;
    case 1: subHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 2: accelActivated((int)static_QUType_int.get(_o+1)); break;
    case 3: accelDestroyed(); break;
    case 4: popupDestroyed((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 5: modalActivation((int)static_QUType_int.get(_o+1)); break;
    case 6: subMenuTimer(); break;
    case 7: subScrollTimer(); break;
    case 8: allowAnimation(); break;
    case 9: toggleTearOff(); break;
    case 10: performDelayedChanges(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QPopupMenu::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: activated((int)static_QUType_int.get(_o+1)); break;
    case 1: highlighted((int)static_QUType_int.get(_o+1)); break;
    case 2: activatedRedirect((int)static_QUType_int.get(_o+1)); break;
    case 3: highlightedRedirect((int)static_QUType_int.get(_o+1)); break;
    case 4: aboutToShow(); break;
    case 5: aboutToHide(); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QPopupMenu::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setCheckable(v->asBool()); break;
	case 1: *v = QVariant( this->isCheckable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QPopupMenu::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
