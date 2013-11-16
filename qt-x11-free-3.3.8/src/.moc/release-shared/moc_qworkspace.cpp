/****************************************************************************
** QWorkspace meta object code from reading C++ file 'qworkspace.h'
**
** Created: Wed Oct 9 10:53:06 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../workspace/qworkspace.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QWorkspace::className() const
{
    return "QWorkspace";
}

QMetaObject *QWorkspace::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QWorkspace( "QWorkspace", &QWorkspace::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QWorkspace::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWorkspace", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QWorkspace::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWorkspace", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QWorkspace::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"cascade", 0, 0 };
    static const QUMethod slot_1 = {"tile", 0, 0 };
    static const QUMethod slot_2 = {"closeActiveWindow", 0, 0 };
    static const QUMethod slot_3 = {"closeAllWindows", 0, 0 };
    static const QUMethod slot_4 = {"activateNextWindow", 0, 0 };
    static const QUMethod slot_5 = {"activatePrevWindow", 0, 0 };
    static const QUMethod slot_6 = {"normalizeActiveWindow", 0, 0 };
    static const QUMethod slot_7 = {"minimizeActiveWindow", 0, 0 };
    static const QUMethod slot_8 = {"showOperationMenu", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_9 = {"popupOperationMenu", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"operationMenuActivated", 1, param_slot_10 };
    static const QUMethod slot_11 = {"operationMenuAboutToShow", 0, 0 };
    static const QUMethod slot_12 = {"toolMenuAboutToShow", 0, 0 };
    static const QUMethod slot_13 = {"activatePreviousWindow", 0, 0 };
    static const QUMethod slot_14 = {"dockWindowsShow", 0, 0 };
    static const QUMethod slot_15 = {"scrollBarChanged", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "cascade()", &slot_0, QMetaData::Public },
	{ "tile()", &slot_1, QMetaData::Public },
	{ "closeActiveWindow()", &slot_2, QMetaData::Public },
	{ "closeAllWindows()", &slot_3, QMetaData::Public },
	{ "activateNextWindow()", &slot_4, QMetaData::Public },
	{ "activatePrevWindow()", &slot_5, QMetaData::Public },
	{ "normalizeActiveWindow()", &slot_6, QMetaData::Private },
	{ "minimizeActiveWindow()", &slot_7, QMetaData::Private },
	{ "showOperationMenu()", &slot_8, QMetaData::Private },
	{ "popupOperationMenu(const QPoint&)", &slot_9, QMetaData::Private },
	{ "operationMenuActivated(int)", &slot_10, QMetaData::Private },
	{ "operationMenuAboutToShow()", &slot_11, QMetaData::Private },
	{ "toolMenuAboutToShow()", &slot_12, QMetaData::Private },
	{ "activatePreviousWindow()", &slot_13, QMetaData::Private },
	{ "dockWindowsShow()", &slot_14, QMetaData::Private },
	{ "scrollBarChanged()", &slot_15, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "w", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod signal_0 = {"windowActivated", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "windowActivated(QWidget*)", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "bool","scrollBarsEnabled", 0x12000103, &QWorkspace::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QWorkspace", parentObject,
	slot_tbl, 16,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QWorkspace.setMetaObject( metaObj );
    return metaObj;
}

void* QWorkspace::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QWorkspace" ) )
	return this;
    return QWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL windowActivated
void QWorkspace::windowActivated( QWidget* t0 )
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

bool QWorkspace::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: cascade(); break;
    case 1: tile(); break;
    case 2: closeActiveWindow(); break;
    case 3: closeAllWindows(); break;
    case 4: activateNextWindow(); break;
    case 5: activatePrevWindow(); break;
    case 6: normalizeActiveWindow(); break;
    case 7: minimizeActiveWindow(); break;
    case 8: showOperationMenu(); break;
    case 9: popupOperationMenu((const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+1))); break;
    case 10: operationMenuActivated((int)static_QUType_int.get(_o+1)); break;
    case 11: operationMenuAboutToShow(); break;
    case 12: toolMenuAboutToShow(); break;
    case 13: activatePreviousWindow(); break;
    case 14: dockWindowsShow(); break;
    case 15: scrollBarChanged(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QWorkspace::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: windowActivated((QWidget*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QWorkspace::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setScrollBarsEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->scrollBarsEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QWorkspace::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
