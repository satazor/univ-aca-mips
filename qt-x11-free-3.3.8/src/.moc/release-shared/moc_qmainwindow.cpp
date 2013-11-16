/****************************************************************************
** QMainWindow meta object code from reading C++ file 'qmainwindow.h'
**
** Created: Wed Oct 9 10:52:46 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qmainwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QMainWindow::className() const
{
    return "QMainWindow";
}

QMetaObject *QMainWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QMainWindow( "QMainWindow", &QMainWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QMainWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QMainWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QMainWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QMainWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QMainWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setRightJustification", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setUsesBigPixmaps", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setUsesTextLabel", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setDockWindowsMovable", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setOpaqueMoving", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setDockMenuEnabled", 1, param_slot_5 };
    static const QUMethod slot_6 = {"whatsThis", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ "dw", &static_QUType_ptr, "QDockWindow", QUParameter::In },
	{ "a", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"setAppropriate", 2, param_slot_7 };
    static const QUMethod slot_8 = {"customize", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"setToolBarsMovable", 1, param_slot_9 };
    static const QUMethod slot_10 = {"setUpLayout", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out },
	{ "globalPos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_11 = {"showDockMenu", 2, param_slot_11 };
    static const QUMethod slot_12 = {"menuAboutToShow", 0, 0 };
    static const QUMethod slot_13 = {"slotPlaceChanged", 0, 0 };
    static const QUMethod slot_14 = {"doLineUp", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setRightJustification(bool)", &slot_0, QMetaData::Public },
	{ "setUsesBigPixmaps(bool)", &slot_1, QMetaData::Public },
	{ "setUsesTextLabel(bool)", &slot_2, QMetaData::Public },
	{ "setDockWindowsMovable(bool)", &slot_3, QMetaData::Public },
	{ "setOpaqueMoving(bool)", &slot_4, QMetaData::Public },
	{ "setDockMenuEnabled(bool)", &slot_5, QMetaData::Public },
	{ "whatsThis()", &slot_6, QMetaData::Public },
	{ "setAppropriate(QDockWindow*,bool)", &slot_7, QMetaData::Public },
	{ "customize()", &slot_8, QMetaData::Public },
	{ "setToolBarsMovable(bool)", &slot_9, QMetaData::Public },
	{ "setUpLayout()", &slot_10, QMetaData::Protected },
	{ "showDockMenu(const QPoint&)", &slot_11, QMetaData::Protected },
	{ "menuAboutToShow()", &slot_12, QMetaData::Protected },
	{ "slotPlaceChanged()", &slot_13, QMetaData::Private },
	{ "doLineUp()", &slot_14, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"pixmapSizeChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"usesTextLabelChanged", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_ptr, "QDockWindow", QUParameter::In }
    };
    static const QUMethod signal_2 = {"dockWindowPositionChanged", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_ptr, "QToolBar", QUParameter::In }
    };
    static const QUMethod signal_3 = {"toolBarPositionChanged", 1, param_signal_3 };
    static const QMetaData signal_tbl[] = {
	{ "pixmapSizeChanged(bool)", &signal_0, QMetaData::Public },
	{ "usesTextLabelChanged(bool)", &signal_1, QMetaData::Public },
	{ "dockWindowPositionChanged(QDockWindow*)", &signal_2, QMetaData::Public },
	{ "toolBarPositionChanged(QToolBar*)", &signal_3, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[5] = {
 	{ "bool","rightJustification", 0x12001103, &QMainWindow::metaObj, 0, -1 },
	{ "bool","usesBigPixmaps", 0x12000103, &QMainWindow::metaObj, 0, -1 },
	{ "bool","usesTextLabel", 0x12000103, &QMainWindow::metaObj, 0, -1 },
	{ "bool","dockWindowsMovable", 0x12000103, &QMainWindow::metaObj, 0, -1 },
	{ "bool","opaqueMoving", 0x12000103, &QMainWindow::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QMainWindow", parentObject,
	slot_tbl, 15,
	signal_tbl, 4,
#ifndef QT_NO_PROPERTIES
	props_tbl, 5,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QMainWindow.setMetaObject( metaObj );
    return metaObj;
}

void* QMainWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QMainWindow" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL pixmapSizeChanged
void QMainWindow::pixmapSizeChanged( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL usesTextLabelChanged
void QMainWindow::usesTextLabelChanged( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 1, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL dockWindowPositionChanged
void QMainWindow::dockWindowPositionChanged( QDockWindow* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL toolBarPositionChanged
void QMainWindow::toolBarPositionChanged( QToolBar* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool QMainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setRightJustification((bool)static_QUType_bool.get(_o+1)); break;
    case 1: setUsesBigPixmaps((bool)static_QUType_bool.get(_o+1)); break;
    case 2: setUsesTextLabel((bool)static_QUType_bool.get(_o+1)); break;
    case 3: setDockWindowsMovable((bool)static_QUType_bool.get(_o+1)); break;
    case 4: setOpaqueMoving((bool)static_QUType_bool.get(_o+1)); break;
    case 5: setDockMenuEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 6: whatsThis(); break;
    case 7: setAppropriate((QDockWindow*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 8: customize(); break;
    case 9: setToolBarsMovable((bool)static_QUType_bool.get(_o+1)); break;
    case 10: setUpLayout(); break;
    case 11: static_QUType_bool.set(_o,showDockMenu((const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+1)))); break;
    case 12: menuAboutToShow(); break;
    case 13: slotPlaceChanged(); break;
    case 14: doLineUp(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QMainWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: pixmapSizeChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 1: usesTextLabelChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 2: dockWindowPositionChanged((QDockWindow*)static_QUType_ptr.get(_o+1)); break;
    case 3: toolBarPositionChanged((QToolBar*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QMainWindow::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setRightJustification(v->asBool()); break;
	case 1: *v = QVariant( this->rightJustification(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setUsesBigPixmaps(v->asBool()); break;
	case 1: *v = QVariant( this->usesBigPixmaps(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setUsesTextLabel(v->asBool()); break;
	case 1: *v = QVariant( this->usesTextLabel(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setDockWindowsMovable(v->asBool()); break;
	case 1: *v = QVariant( this->dockWindowsMovable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setOpaqueMoving(v->asBool()); break;
	case 1: *v = QVariant( this->opaqueMoving(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QMainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
