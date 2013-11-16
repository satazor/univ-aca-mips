/****************************************************************************
** QScrollView meta object code from reading C++ file 'qscrollview.h'
**
** Created: Wed Oct 9 10:52:50 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qscrollview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QScrollView::className() const
{
    return "QScrollView";
}

QMetaObject *QScrollView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QScrollView( "QScrollView", &QScrollView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QScrollView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QScrollView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QScrollView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QScrollView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QScrollView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Default",  (int) QScrollView::Default },
	{ "Manual",  (int) QScrollView::Manual },
	{ "AutoOne",  (int) QScrollView::AutoOne },
	{ "AutoOneFit",  (int) QScrollView::AutoOneFit }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "Auto",  (int) QScrollView::Auto },
	{ "AlwaysOff",  (int) QScrollView::AlwaysOff },
	{ "AlwaysOn",  (int) QScrollView::AlwaysOn }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "ResizePolicy", 4, enum_0, FALSE },
	{ "ScrollBarMode", 3, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "w", &static_QUType_int, 0, QUParameter::In },
	{ "h", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"resizeContents", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "dx", &static_QUType_int, 0, QUParameter::In },
	{ "dy", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"scrollBy", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setContentsPos", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"ensureVisible", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In },
	{ "xmargin", &static_QUType_int, 0, QUParameter::In },
	{ "ymargin", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"ensureVisible", 4, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"center", 2, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In },
	{ "xmargin", &static_QUType_ptr, "float", QUParameter::In },
	{ "ymargin", &static_QUType_ptr, "float", QUParameter::In }
    };
    static const QUMethod slot_6 = {"center", 4, param_slot_6 };
    static const QUMethod slot_7 = {"updateScrollBars", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"setEnabled", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"hslide", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"vslide", 1, param_slot_10 };
    static const QUMethod slot_11 = {"hbarIsPressed", 0, 0 };
    static const QUMethod slot_12 = {"hbarIsReleased", 0, 0 };
    static const QUMethod slot_13 = {"vbarIsPressed", 0, 0 };
    static const QUMethod slot_14 = {"vbarIsReleased", 0, 0 };
    static const QUMethod slot_15 = {"doDragAutoScroll", 0, 0 };
    static const QUMethod slot_16 = {"startDragAutoScroll", 0, 0 };
    static const QUMethod slot_17 = {"stopDragAutoScroll", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "resizeContents(int,int)", &slot_0, QMetaData::Public },
	{ "scrollBy(int,int)", &slot_1, QMetaData::Public },
	{ "setContentsPos(int,int)", &slot_2, QMetaData::Public },
	{ "ensureVisible(int,int)", &slot_3, QMetaData::Public },
	{ "ensureVisible(int,int,int,int)", &slot_4, QMetaData::Public },
	{ "center(int,int)", &slot_5, QMetaData::Public },
	{ "center(int,int,float,float)", &slot_6, QMetaData::Public },
	{ "updateScrollBars()", &slot_7, QMetaData::Public },
	{ "setEnabled(bool)", &slot_8, QMetaData::Public },
	{ "hslide(int)", &slot_9, QMetaData::Private },
	{ "vslide(int)", &slot_10, QMetaData::Private },
	{ "hbarIsPressed()", &slot_11, QMetaData::Private },
	{ "hbarIsReleased()", &slot_12, QMetaData::Private },
	{ "vbarIsPressed()", &slot_13, QMetaData::Private },
	{ "vbarIsReleased()", &slot_14, QMetaData::Private },
	{ "doDragAutoScroll()", &slot_15, QMetaData::Private },
	{ "startDragAutoScroll()", &slot_16, QMetaData::Private },
	{ "stopDragAutoScroll()", &slot_17, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"contentsMoving", 2, param_signal_0 };
    static const QUMethod signal_1 = {"horizontalSliderPressed", 0, 0 };
    static const QUMethod signal_2 = {"horizontalSliderReleased", 0, 0 };
    static const QUMethod signal_3 = {"verticalSliderPressed", 0, 0 };
    static const QUMethod signal_4 = {"verticalSliderReleased", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "contentsMoving(int,int)", &signal_0, QMetaData::Public },
	{ "horizontalSliderPressed()", &signal_1, QMetaData::Public },
	{ "horizontalSliderReleased()", &signal_2, QMetaData::Public },
	{ "verticalSliderPressed()", &signal_3, QMetaData::Public },
	{ "verticalSliderReleased()", &signal_4, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[10] = {
 	{ "ResizePolicy","resizePolicy", 0x0107, &QScrollView::metaObj, &enum_tbl[0], -1 },
	{ "ScrollBarMode","vScrollBarMode", 0x0107, &QScrollView::metaObj, &enum_tbl[1], -1 },
	{ "ScrollBarMode","hScrollBarMode", 0x0107, &QScrollView::metaObj, &enum_tbl[1], -1 },
	{ "int","visibleWidth", 0x10000001, &QScrollView::metaObj, 0, -1 },
	{ "int","visibleHeight", 0x10000001, &QScrollView::metaObj, 0, -1 },
	{ "int","contentsWidth", 0x10000001, &QScrollView::metaObj, 0, -1 },
	{ "int","contentsHeight", 0x10000001, &QScrollView::metaObj, 0, -1 },
	{ "int","contentsX", 0x10000001, &QScrollView::metaObj, 0, -1 },
	{ "int","contentsY", 0x10000001, &QScrollView::metaObj, 0, -1 },
	{ "bool","dragAutoScroll", 0x12000103, &QScrollView::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QScrollView", parentObject,
	slot_tbl, 18,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	props_tbl, 10,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QScrollView.setMetaObject( metaObj );
    return metaObj;
}

void* QScrollView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QScrollView" ) )
	return this;
    return QFrame::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL contentsMoving
void QScrollView::contentsMoving( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL horizontalSliderPressed
void QScrollView::horizontalSliderPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL horizontalSliderReleased
void QScrollView::horizontalSliderReleased()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL verticalSliderPressed
void QScrollView::verticalSliderPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL verticalSliderReleased
void QScrollView::verticalSliderReleased()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

bool QScrollView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: resizeContents((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 1: scrollBy((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 2: setContentsPos((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 3: ensureVisible((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 4: ensureVisible((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4)); break;
    case 5: center((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 6: center((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(float)(*((float*)static_QUType_ptr.get(_o+3))),(float)(*((float*)static_QUType_ptr.get(_o+4)))); break;
    case 7: updateScrollBars(); break;
    case 8: setEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 9: hslide((int)static_QUType_int.get(_o+1)); break;
    case 10: vslide((int)static_QUType_int.get(_o+1)); break;
    case 11: hbarIsPressed(); break;
    case 12: hbarIsReleased(); break;
    case 13: vbarIsPressed(); break;
    case 14: vbarIsReleased(); break;
    case 15: doDragAutoScroll(); break;
    case 16: startDragAutoScroll(); break;
    case 17: stopDragAutoScroll(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QScrollView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: contentsMoving((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 1: horizontalSliderPressed(); break;
    case 2: horizontalSliderReleased(); break;
    case 3: verticalSliderPressed(); break;
    case 4: verticalSliderReleased(); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QScrollView::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setResizePolicy((ResizePolicy&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->resizePolicy() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setVScrollBarMode((ScrollBarMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->vScrollBarMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setHScrollBarMode((ScrollBarMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->hScrollBarMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( this->visibleWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 1: *v = QVariant( this->visibleHeight() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 1: *v = QVariant( this->contentsWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 1: *v = QVariant( this->contentsHeight() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 1: *v = QVariant( this->contentsX() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 1: *v = QVariant( this->contentsY() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setDragAutoScroll(v->asBool()); break;
	case 1: *v = QVariant( this->dragAutoScroll(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QScrollView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
