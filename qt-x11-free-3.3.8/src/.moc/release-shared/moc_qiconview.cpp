/****************************************************************************
** QIconDrag meta object code from reading C++ file 'qiconview.h'
**
** Created: Wed Oct 9 10:53:05 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../iconview/qiconview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QIconDrag::className() const
{
    return "QIconDrag";
}

QMetaObject *QIconDrag::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QIconDrag( "QIconDrag", &QIconDrag::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QIconDrag::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QIconDrag", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QIconDrag::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QIconDrag", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QIconDrag::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDragObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QIconDrag", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QIconDrag.setMetaObject( metaObj );
    return metaObj;
}

void* QIconDrag::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QIconDrag" ) )
	return this;
    return QDragObject::qt_cast( clname );
}

bool QIconDrag::qt_invoke( int _id, QUObject* _o )
{
    return QDragObject::qt_invoke(_id,_o);
}

bool QIconDrag::qt_emit( int _id, QUObject* _o )
{
    return QDragObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QIconDrag::qt_property( int id, int f, QVariant* v)
{
    return QDragObject::qt_property( id, f, v);
}

bool QIconDrag::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


#include <qvariant.h>
const char *QIconView::className() const
{
    return "QIconView";
}

QMetaObject *QIconView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QIconView( "QIconView", &QIconView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QIconView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QIconView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QIconView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QIconView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QIconView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Single",  (int) QIconView::Single },
	{ "Multi",  (int) QIconView::Multi },
	{ "Extended",  (int) QIconView::Extended },
	{ "NoSelection",  (int) QIconView::NoSelection }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "LeftToRight",  (int) QIconView::LeftToRight },
	{ "TopToBottom",  (int) QIconView::TopToBottom }
    };
    static const QMetaEnum::Item enum_2[] = {
	{ "Fixed",  (int) QIconView::Fixed },
	{ "Adjust",  (int) QIconView::Adjust }
    };
    static const QMetaEnum::Item enum_3[] = {
	{ "Bottom",  (int) QIconView::Bottom },
	{ "Right",  (int) QIconView::Right }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "SelectionMode", 4, enum_0, FALSE },
	{ "Arrangement", 2, enum_1, FALSE },
	{ "ResizeMode", 2, enum_2, FALSE },
	{ "ItemTextPos", 2, enum_3, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "grid", &static_QUType_varptr, "\x09", QUParameter::In }
    };
    static const QUMethod slot_0 = {"arrangeItemsInGrid", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "grid", &static_QUType_varptr, "\x09", QUParameter::In },
	{ "update", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"arrangeItemsInGrid", 2, param_slot_1 };
    static const QUMethod slot_2 = {"arrangeItemsInGrid", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "update", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"arrangeItemsInGrid", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setContentsPos", 2, param_slot_4 };
    static const QUMethod slot_5 = {"updateContents", 0, 0 };
    static const QUMethod slot_6 = {"doAutoScroll", 0, 0 };
    static const QUMethod slot_7 = {"adjustItems", 0, 0 };
    static const QUMethod slot_8 = {"slotUpdate", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ "dx", &static_QUType_int, 0, QUParameter::In },
	{ "dy", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"movedContents", 2, param_slot_9 };
    static const QMetaData slot_tbl[] = {
	{ "arrangeItemsInGrid(const QSize&)", &slot_0, QMetaData::Public },
	{ "arrangeItemsInGrid(const QSize&,bool)", &slot_1, QMetaData::Public },
	{ "arrangeItemsInGrid()", &slot_2, QMetaData::Public },
	{ "arrangeItemsInGrid(bool)", &slot_3, QMetaData::Public },
	{ "setContentsPos(int,int)", &slot_4, QMetaData::Public },
	{ "updateContents()", &slot_5, QMetaData::Public },
	{ "doAutoScroll()", &slot_6, QMetaData::Protected },
	{ "adjustItems()", &slot_7, QMetaData::Protected },
	{ "slotUpdate()", &slot_8, QMetaData::Protected },
	{ "movedContents(int,int)", &slot_9, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"selectionChanged", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod signal_1 = {"selectionChanged", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod signal_2 = {"currentChanged", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod signal_3 = {"clicked", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_ptr, "QIconViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_4 = {"clicked", 2, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod signal_5 = {"pressed", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_ptr, "QIconViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_6 = {"pressed", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod signal_7 = {"doubleClicked", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod signal_8 = {"returnPressed", 1, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_9 = {"rightButtonClicked", 2, param_signal_9 };
    static const QUParameter param_signal_10[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_10 = {"rightButtonPressed", 2, param_signal_10 };
    static const QUParameter param_signal_11[] = {
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_11 = {"mouseButtonPressed", 3, param_signal_11 };
    static const QUParameter param_signal_12[] = {
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_12 = {"mouseButtonClicked", 3, param_signal_12 };
    static const QUParameter param_signal_13[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_13 = {"contextMenuRequested", 2, param_signal_13 };
    static const QUParameter param_signal_14[] = {
	{ "e", &static_QUType_ptr, "QDropEvent", QUParameter::In },
	{ "lst", &static_QUType_ptr, "QValueList<QIconDragItem>", QUParameter::In }
    };
    static const QUMethod signal_14 = {"dropped", 2, param_signal_14 };
    static const QUMethod signal_15 = {"moved", 0, 0 };
    static const QUParameter param_signal_16[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod signal_16 = {"onItem", 1, param_signal_16 };
    static const QUMethod signal_17 = {"onViewport", 0, 0 };
    static const QUParameter param_signal_18[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_18 = {"itemRenamed", 2, param_signal_18 };
    static const QUParameter param_signal_19[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod signal_19 = {"itemRenamed", 1, param_signal_19 };
    static const QMetaData signal_tbl[] = {
	{ "selectionChanged()", &signal_0, QMetaData::Public },
	{ "selectionChanged(QIconViewItem*)", &signal_1, QMetaData::Public },
	{ "currentChanged(QIconViewItem*)", &signal_2, QMetaData::Public },
	{ "clicked(QIconViewItem*)", &signal_3, QMetaData::Public },
	{ "clicked(QIconViewItem*,const QPoint&)", &signal_4, QMetaData::Public },
	{ "pressed(QIconViewItem*)", &signal_5, QMetaData::Public },
	{ "pressed(QIconViewItem*,const QPoint&)", &signal_6, QMetaData::Public },
	{ "doubleClicked(QIconViewItem*)", &signal_7, QMetaData::Public },
	{ "returnPressed(QIconViewItem*)", &signal_8, QMetaData::Public },
	{ "rightButtonClicked(QIconViewItem*,const QPoint&)", &signal_9, QMetaData::Public },
	{ "rightButtonPressed(QIconViewItem*,const QPoint&)", &signal_10, QMetaData::Public },
	{ "mouseButtonPressed(int,QIconViewItem*,const QPoint&)", &signal_11, QMetaData::Public },
	{ "mouseButtonClicked(int,QIconViewItem*,const QPoint&)", &signal_12, QMetaData::Public },
	{ "contextMenuRequested(QIconViewItem*,const QPoint&)", &signal_13, QMetaData::Public },
	{ "dropped(QDropEvent*,const QValueList<QIconDragItem>&)", &signal_14, QMetaData::Public },
	{ "moved()", &signal_15, QMetaData::Public },
	{ "onItem(QIconViewItem*)", &signal_16, QMetaData::Public },
	{ "onViewport()", &signal_17, QMetaData::Public },
	{ "itemRenamed(QIconViewItem*,const QString&)", &signal_18, QMetaData::Public },
	{ "itemRenamed(QIconViewItem*)", &signal_19, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[17] = {
 	{ "bool","sorting", 0x12000001, &QIconView::metaObj, 0, -1 },
	{ "bool","sortDirection", 0x12000001, &QIconView::metaObj, 0, -1 },
	{ "SelectionMode","selectionMode", 0x0107, &QIconView::metaObj, &enum_tbl[0], -1 },
	{ "int","gridX", 0x10000103, &QIconView::metaObj, 0, -1 },
	{ "int","gridY", 0x10000103, &QIconView::metaObj, 0, -1 },
	{ "int","spacing", 0x10000103, &QIconView::metaObj, 0, -1 },
	{ "ItemTextPos","itemTextPos", 0x0107, &QIconView::metaObj, &enum_tbl[3], -1 },
	{ "QBrush","itemTextBackground", 0x7000103, &QIconView::metaObj, 0, -1 },
	{ "Arrangement","arrangement", 0x0107, &QIconView::metaObj, &enum_tbl[1], -1 },
	{ "ResizeMode","resizeMode", 0x0107, &QIconView::metaObj, &enum_tbl[2], -1 },
	{ "int","maxItemWidth", 0x10000103, &QIconView::metaObj, 0, -1 },
	{ "int","maxItemTextLength", 0x10000103, &QIconView::metaObj, 0, -1 },
	{ "bool","autoArrange", 0x12000103, &QIconView::metaObj, 0, -1 },
	{ "bool","itemsMovable", 0x12000103, &QIconView::metaObj, 0, -1 },
	{ "bool","wordWrapIconText", 0x12000103, &QIconView::metaObj, 0, -1 },
	{ "bool","showToolTips", 0x12000103, &QIconView::metaObj, 0, -1 },
	{ "uint","count", 0x11000001, &QIconView::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QIconView", parentObject,
	slot_tbl, 10,
	signal_tbl, 20,
#ifndef QT_NO_PROPERTIES
	props_tbl, 17,
	enum_tbl, 4,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QIconView.setMetaObject( metaObj );
    return metaObj;
}

void* QIconView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QIconView" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

// SIGNAL selectionChanged
void QIconView::selectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL selectionChanged
void QIconView::selectionChanged( QIconViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL currentChanged
void QIconView::currentChanged( QIconViewItem* t0 )
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

// SIGNAL clicked
void QIconView::clicked( QIconViewItem* t0 )
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

// SIGNAL clicked
void QIconView::clicked( QIconViewItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL pressed
void QIconView::pressed( QIconViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL pressed
void QIconView::pressed( QIconViewItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL doubleClicked
void QIconView::doubleClicked( QIconViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL returnPressed
void QIconView::returnPressed( QIconViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL rightButtonClicked
void QIconView::rightButtonClicked( QIconViewItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 9 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL rightButtonPressed
void QIconView::rightButtonPressed( QIconViewItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 10 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL mouseButtonPressed
void QIconView::mouseButtonPressed( int t0, QIconViewItem* t1, const QPoint& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 11 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_varptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL mouseButtonClicked
void QIconView::mouseButtonClicked( int t0, QIconViewItem* t1, const QPoint& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 12 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_varptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL contextMenuRequested
void QIconView::contextMenuRequested( QIconViewItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 13 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL dropped
void QIconView::dropped( QDropEvent* t0, const QValueList<QIconDragItem>& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 14 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_ptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL moved
void QIconView::moved()
{
    activate_signal( staticMetaObject()->signalOffset() + 15 );
}

// SIGNAL onItem
void QIconView::onItem( QIconViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 16 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL onViewport
void QIconView::onViewport()
{
    activate_signal( staticMetaObject()->signalOffset() + 17 );
}

// SIGNAL itemRenamed
void QIconView::itemRenamed( QIconViewItem* t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 18 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL itemRenamed
void QIconView::itemRenamed( QIconViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 19 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool QIconView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: arrangeItemsInGrid((const QSize&)*((const QSize*)static_QUType_ptr.get(_o+1))); break;
    case 1: arrangeItemsInGrid((const QSize&)*((const QSize*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 2: arrangeItemsInGrid(); break;
    case 3: arrangeItemsInGrid((bool)static_QUType_bool.get(_o+1)); break;
    case 4: setContentsPos((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 5: updateContents(); break;
    case 6: doAutoScroll(); break;
    case 7: adjustItems(); break;
    case 8: slotUpdate(); break;
    case 9: movedContents((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return QScrollView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QIconView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: selectionChanged(); break;
    case 1: selectionChanged((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 2: currentChanged((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: clicked((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 4: clicked((QIconViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 5: pressed((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: pressed((QIconViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 7: doubleClicked((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 8: returnPressed((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 9: rightButtonClicked((QIconViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 10: rightButtonPressed((QIconViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 11: mouseButtonPressed((int)static_QUType_int.get(_o+1),(QIconViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 12: mouseButtonClicked((int)static_QUType_int.get(_o+1),(QIconViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 13: contextMenuRequested((QIconViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 14: dropped((QDropEvent*)static_QUType_ptr.get(_o+1),(const QValueList<QIconDragItem>&)*((const QValueList<QIconDragItem>*)static_QUType_ptr.get(_o+2))); break;
    case 15: moved(); break;
    case 16: onItem((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 17: onViewport(); break;
    case 18: itemRenamed((QIconViewItem*)static_QUType_ptr.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 19: itemRenamed((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QScrollView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QIconView::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->sorting(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->sortDirection(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setSelectionMode((SelectionMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->selectionMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setGridX(v->asInt()); break;
	case 1: *v = QVariant( this->gridX() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setGridY(v->asInt()); break;
	case 1: *v = QVariant( this->gridY() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setSpacing(v->asInt()); break;
	case 1: *v = QVariant( this->spacing() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setItemTextPos((ItemTextPos&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->itemTextPos() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setItemTextBackground(v->asBrush()); break;
	case 1: *v = QVariant( this->itemTextBackground() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setArrangement((Arrangement&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->arrangement() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setResizeMode((ResizeMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->resizeMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 0: setMaxItemWidth(v->asInt()); break;
	case 1: *v = QVariant( this->maxItemWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 11: switch( f ) {
	case 0: setMaxItemTextLength(v->asInt()); break;
	case 1: *v = QVariant( this->maxItemTextLength() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 12: switch( f ) {
	case 0: setAutoArrange(v->asBool()); break;
	case 1: *v = QVariant( this->autoArrange(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 13: switch( f ) {
	case 0: setItemsMovable(v->asBool()); break;
	case 1: *v = QVariant( this->itemsMovable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 14: switch( f ) {
	case 0: setWordWrapIconText(v->asBool()); break;
	case 1: *v = QVariant( this->wordWrapIconText(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 15: switch( f ) {
	case 0: setShowToolTips(v->asBool()); break;
	case 1: *v = QVariant( this->showToolTips(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 16: switch( f ) {
	case 1: *v = QVariant( this->count() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QScrollView::qt_property( id, f, v );
    }
    return TRUE;
}

bool QIconView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
