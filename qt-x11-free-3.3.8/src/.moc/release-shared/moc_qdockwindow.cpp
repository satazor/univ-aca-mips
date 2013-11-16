/****************************************************************************
** QDockWindow meta object code from reading C++ file 'qdockwindow.h'
**
** Created: Wed Oct 9 10:52:40 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qdockwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QDockWindow::className() const
{
    return "QDockWindow";
}

QMetaObject *QDockWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDockWindow( "QDockWindow", &QDockWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDockWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDockWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDockWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDockWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDockWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "InDock",  (int) QDockWindow::InDock },
	{ "OutsideDock",  (int) QDockWindow::OutsideDock }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "Never",  (int) QDockWindow::Never },
	{ "Docked",  (int) QDockWindow::Docked },
	{ "Undocked",  (int) QDockWindow::Undocked },
	{ "Always",  (int) QDockWindow::Always }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Place", 2, enum_0, FALSE },
	{ "CloseMode", 4, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "w", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_0 = {"undock", 1, param_slot_0 };
    static const QUMethod slot_1 = {"undock", 0, 0 };
    static const QUMethod slot_2 = {"dock", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "o", &static_QUType_ptr, "Orientation", QUParameter::In }
    };
    static const QUMethod slot_3 = {"setOrientation", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setCaption", 1, param_slot_4 };
    static const QUMethod slot_5 = {"toggleVisible", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "undock(QWidget*)", &slot_0, QMetaData::Public },
	{ "undock()", &slot_1, QMetaData::Public },
	{ "dock()", &slot_2, QMetaData::Public },
	{ "setOrientation(Orientation)", &slot_3, QMetaData::Public },
	{ "setCaption(const QString&)", &slot_4, QMetaData::Public },
	{ "toggleVisible()", &slot_5, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "o", &static_QUType_ptr, "Orientation", QUParameter::In }
    };
    static const QUMethod signal_0 = {"orientationChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "p", &static_QUType_ptr, "QDockWindow::Place", QUParameter::In }
    };
    static const QUMethod signal_1 = {"placeChanged", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"visibilityChanged", 1, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "orientationChanged(Orientation)", &signal_0, QMetaData::Public },
	{ "placeChanged(QDockWindow::Place)", &signal_1, QMetaData::Public },
	{ "visibilityChanged(bool)", &signal_2, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[10] = {
 	{ "int","closeMode", 0x10000103, &QDockWindow::metaObj, 0, -1 },
	{ "bool","resizeEnabled", 0x12000103, &QDockWindow::metaObj, 0, -1 },
	{ "bool","movingEnabled", 0x12000103, &QDockWindow::metaObj, 0, -1 },
	{ "bool","horizontallyStretchable", 0x12000103, &QDockWindow::metaObj, 0, -1 },
	{ "bool","verticallyStretchable", 0x12000103, &QDockWindow::metaObj, 0, -1 },
	{ "bool","stretchable", 0x12000001, &QDockWindow::metaObj, 0, -1 },
	{ "bool","newLine", 0x12000103, &QDockWindow::metaObj, 0, -1 },
	{ "bool","opaqueMoving", 0x12000103, &QDockWindow::metaObj, 0, -1 },
	{ "int","offset", 0x10000103, &QDockWindow::metaObj, 0, -1 },
	{ "Place","place", 0x0005, &QDockWindow::metaObj, &enum_tbl[0], -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDockWindow", parentObject,
	slot_tbl, 6,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	props_tbl, 10,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDockWindow.setMetaObject( metaObj );
    return metaObj;
}

void* QDockWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDockWindow" ) )
	return this;
    return QFrame::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL orientationChanged
void QDockWindow::orientationChanged( Orientation t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL placeChanged
void QDockWindow::placeChanged( QDockWindow::Place t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL visibilityChanged
void QDockWindow::visibilityChanged( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 2, t0 );
}

bool QDockWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: undock((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 1: undock(); break;
    case 2: dock(); break;
    case 3: setOrientation((Orientation)(*((Orientation*)static_QUType_ptr.get(_o+1)))); break;
    case 4: setCaption((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: toggleVisible(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDockWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: orientationChanged((Orientation)(*((Orientation*)static_QUType_ptr.get(_o+1)))); break;
    case 1: placeChanged((QDockWindow::Place)(*((QDockWindow::Place*)static_QUType_ptr.get(_o+1)))); break;
    case 2: visibilityChanged((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDockWindow::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setCloseMode(v->asInt()); break;
	case 1: *v = QVariant( this->closeMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setResizeEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isResizeEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setMovingEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isMovingEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setHorizontallyStretchable(v->asBool()); break;
	case 1: *v = QVariant( this->isHorizontallyStretchable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setVerticallyStretchable(v->asBool()); break;
	case 1: *v = QVariant( this->isVerticallyStretchable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 1: *v = QVariant( this->isStretchable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setNewLine(v->asBool()); break;
	case 1: *v = QVariant( this->newLine(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setOpaqueMoving(v->asBool()); break;
	case 1: *v = QVariant( this->opaqueMoving(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setOffset(v->asInt()); break;
	case 1: *v = QVariant( this->offset() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 1: *v = QVariant( (int)this->place() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDockWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
