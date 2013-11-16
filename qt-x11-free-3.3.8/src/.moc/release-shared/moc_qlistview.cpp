/****************************************************************************
** QListView meta object code from reading C++ file 'qlistview.h'
**
** Created: Wed Oct 9 10:52:46 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qlistview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QListView::className() const
{
    return "QListView";
}

QMetaObject *QListView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QListView( "QListView", &QListView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QListView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QListView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QListView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QListView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QListView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Single",  (int) QListView::Single },
	{ "Multi",  (int) QListView::Multi },
	{ "Extended",  (int) QListView::Extended },
	{ "NoSelection",  (int) QListView::NoSelection }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "NoColumn",  (int) QListView::NoColumn },
	{ "AllColumns",  (int) QListView::AllColumns },
	{ "LastColumn",  (int) QListView::LastColumn }
    };
    static const QMetaEnum::Item enum_2[] = {
	{ "Accept",  (int) QListView::Accept },
	{ "Reject",  (int) QListView::Reject }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "SelectionMode", 4, enum_0, FALSE },
	{ "ResizeMode", 3, enum_1, FALSE },
	{ "RenameAction", 2, enum_2, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUMethod slot_0 = {"clear", 0, 0 };
    static const QUMethod slot_1 = {"invertSelection", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "select", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"selectAll", 1, param_slot_2 };
    static const QUMethod slot_3 = {"triggerUpdate", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setContentsPos", 2, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"adjustColumn", 1, param_slot_5 };
    static const QUMethod slot_6 = {"updateContents", 0, 0 };
    static const QUMethod slot_7 = {"doAutoScroll", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"changeSortColumn", 1, param_slot_8 };
    static const QUMethod slot_9 = {"handleIndexChange", 0, 0 };
    static const QUMethod slot_10 = {"updateDirtyItems", 0, 0 };
    static const QUMethod slot_11 = {"makeVisible", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"handleSizeChange", 3, param_slot_12 };
    static const QUMethod slot_13 = {"startRename", 0, 0 };
    static const QUMethod slot_14 = {"openFocusItem", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "clear()", &slot_0, QMetaData::Public },
	{ "invertSelection()", &slot_1, QMetaData::Public },
	{ "selectAll(bool)", &slot_2, QMetaData::Public },
	{ "triggerUpdate()", &slot_3, QMetaData::Public },
	{ "setContentsPos(int,int)", &slot_4, QMetaData::Public },
	{ "adjustColumn(int)", &slot_5, QMetaData::Public },
	{ "updateContents()", &slot_6, QMetaData::Protected },
	{ "doAutoScroll()", &slot_7, QMetaData::Protected },
	{ "changeSortColumn(int)", &slot_8, QMetaData::Private },
	{ "handleIndexChange()", &slot_9, QMetaData::Private },
	{ "updateDirtyItems()", &slot_10, QMetaData::Private },
	{ "makeVisible()", &slot_11, QMetaData::Private },
	{ "handleSizeChange(int,int,int)", &slot_12, QMetaData::Private },
	{ "startRename()", &slot_13, QMetaData::Private },
	{ "openFocusItem()", &slot_14, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"selectionChanged", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_1 = {"selectionChanged", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_2 = {"currentChanged", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_3 = {"clicked", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"clicked", 3, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_5 = {"pressed", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"pressed", 3, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_7 = {"doubleClicked", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_8 = {"doubleClicked", 3, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_9 = {"returnPressed", 1, param_signal_9 };
    static const QUParameter param_signal_10[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_10 = {"spacePressed", 1, param_signal_10 };
    static const QUParameter param_signal_11[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_11 = {"rightButtonClicked", 3, param_signal_11 };
    static const QUParameter param_signal_12[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_12 = {"rightButtonPressed", 3, param_signal_12 };
    static const QUParameter param_signal_13[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_13 = {"mouseButtonPressed", 4, param_signal_13 };
    static const QUParameter param_signal_14[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_14 = {"mouseButtonClicked", 4, param_signal_14 };
    static const QUParameter param_signal_15[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_15 = {"contextMenuRequested", 3, param_signal_15 };
    static const QUParameter param_signal_16[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_16 = {"onItem", 1, param_signal_16 };
    static const QUMethod signal_17 = {"onViewport", 0, 0 };
    static const QUParameter param_signal_18[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_18 = {"expanded", 1, param_signal_18 };
    static const QUParameter param_signal_19[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_19 = {"collapsed", 1, param_signal_19 };
    static const QUParameter param_signal_20[] = {
	{ "e", &static_QUType_ptr, "QDropEvent", QUParameter::In }
    };
    static const QUMethod signal_20 = {"dropped", 1, param_signal_20 };
    static const QUParameter param_signal_21[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_21 = {"itemRenamed", 3, param_signal_21 };
    static const QUParameter param_signal_22[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_22 = {"itemRenamed", 2, param_signal_22 };
    static const QMetaData signal_tbl[] = {
	{ "selectionChanged()", &signal_0, QMetaData::Public },
	{ "selectionChanged(QListViewItem*)", &signal_1, QMetaData::Public },
	{ "currentChanged(QListViewItem*)", &signal_2, QMetaData::Public },
	{ "clicked(QListViewItem*)", &signal_3, QMetaData::Public },
	{ "clicked(QListViewItem*,const QPoint&,int)", &signal_4, QMetaData::Public },
	{ "pressed(QListViewItem*)", &signal_5, QMetaData::Public },
	{ "pressed(QListViewItem*,const QPoint&,int)", &signal_6, QMetaData::Public },
	{ "doubleClicked(QListViewItem*)", &signal_7, QMetaData::Public },
	{ "doubleClicked(QListViewItem*,const QPoint&,int)", &signal_8, QMetaData::Public },
	{ "returnPressed(QListViewItem*)", &signal_9, QMetaData::Public },
	{ "spacePressed(QListViewItem*)", &signal_10, QMetaData::Public },
	{ "rightButtonClicked(QListViewItem*,const QPoint&,int)", &signal_11, QMetaData::Public },
	{ "rightButtonPressed(QListViewItem*,const QPoint&,int)", &signal_12, QMetaData::Public },
	{ "mouseButtonPressed(int,QListViewItem*,const QPoint&,int)", &signal_13, QMetaData::Public },
	{ "mouseButtonClicked(int,QListViewItem*,const QPoint&,int)", &signal_14, QMetaData::Public },
	{ "contextMenuRequested(QListViewItem*,const QPoint&,int)", &signal_15, QMetaData::Public },
	{ "onItem(QListViewItem*)", &signal_16, QMetaData::Public },
	{ "onViewport()", &signal_17, QMetaData::Public },
	{ "expanded(QListViewItem*)", &signal_18, QMetaData::Public },
	{ "collapsed(QListViewItem*)", &signal_19, QMetaData::Public },
	{ "dropped(QDropEvent*)", &signal_20, QMetaData::Public },
	{ "itemRenamed(QListViewItem*,int,const QString&)", &signal_21, QMetaData::Public },
	{ "itemRenamed(QListViewItem*,int)", &signal_22, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[12] = {
 	{ "int","columns", 0x10000001, &QListView::metaObj, 0, -1 },
	{ "bool","multiSelection", 0x12001103, &QListView::metaObj, 0, -1 },
	{ "SelectionMode","selectionMode", 0x0107, &QListView::metaObj, &enum_tbl[0], -1 },
	{ "int","childCount", 0x10000001, &QListView::metaObj, 0, -1 },
	{ "bool","allColumnsShowFocus", 0x12000103, &QListView::metaObj, 0, -1 },
	{ "bool","showSortIndicator", 0x12000103, &QListView::metaObj, 0, -1 },
	{ "int","itemMargin", 0x10000103, &QListView::metaObj, 0, -1 },
	{ "bool","rootIsDecorated", 0x12000103, &QListView::metaObj, 0, -1 },
	{ "bool","showToolTips", 0x12000103, &QListView::metaObj, 0, -1 },
	{ "ResizeMode","resizeMode", 0x0107, &QListView::metaObj, &enum_tbl[1], -1 },
	{ "int","treeStepSize", 0x10000103, &QListView::metaObj, 0, -1 },
	{ "RenameAction","defaultRenameAction", 0x0107, &QListView::metaObj, &enum_tbl[2], -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QListView", parentObject,
	slot_tbl, 15,
	signal_tbl, 23,
#ifndef QT_NO_PROPERTIES
	props_tbl, 12,
	enum_tbl, 3,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QListView.setMetaObject( metaObj );
    return metaObj;
}

void* QListView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QListView" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

// SIGNAL selectionChanged
void QListView::selectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL selectionChanged
void QListView::selectionChanged( QListViewItem* t0 )
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
void QListView::currentChanged( QListViewItem* t0 )
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
void QListView::clicked( QListViewItem* t0 )
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
void QListView::clicked( QListViewItem* t0, const QPoint& t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL pressed
void QListView::pressed( QListViewItem* t0 )
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
void QListView::pressed( QListViewItem* t0, const QPoint& t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL doubleClicked
void QListView::doubleClicked( QListViewItem* t0 )
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

// SIGNAL doubleClicked
void QListView::doubleClicked( QListViewItem* t0, const QPoint& t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL returnPressed
void QListView::returnPressed( QListViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 9 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL spacePressed
void QListView::spacePressed( QListViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 10 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL rightButtonClicked
void QListView::rightButtonClicked( QListViewItem* t0, const QPoint& t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 11 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL rightButtonPressed
void QListView::rightButtonPressed( QListViewItem* t0, const QPoint& t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 12 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL mouseButtonPressed
void QListView::mouseButtonPressed( int t0, QListViewItem* t1, const QPoint& t2, int t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 13 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_int.set(o+1,t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_varptr.set(o+3,&t2);
    static_QUType_int.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL mouseButtonClicked
void QListView::mouseButtonClicked( int t0, QListViewItem* t1, const QPoint& t2, int t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 14 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_int.set(o+1,t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_varptr.set(o+3,&t2);
    static_QUType_int.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL contextMenuRequested
void QListView::contextMenuRequested( QListViewItem* t0, const QPoint& t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 15 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL onItem
void QListView::onItem( QListViewItem* t0 )
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
void QListView::onViewport()
{
    activate_signal( staticMetaObject()->signalOffset() + 17 );
}

// SIGNAL expanded
void QListView::expanded( QListViewItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 18 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL collapsed
void QListView::collapsed( QListViewItem* t0 )
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

// SIGNAL dropped
void QListView::dropped( QDropEvent* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 20 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL itemRenamed
void QListView::itemRenamed( QListViewItem* t0, int t1, const QString& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 21 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL itemRenamed
void QListView::itemRenamed( QListViewItem* t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 22 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

bool QListView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: clear(); break;
    case 1: invertSelection(); break;
    case 2: selectAll((bool)static_QUType_bool.get(_o+1)); break;
    case 3: triggerUpdate(); break;
    case 4: setContentsPos((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 5: adjustColumn((int)static_QUType_int.get(_o+1)); break;
    case 6: updateContents(); break;
    case 7: doAutoScroll(); break;
    case 8: changeSortColumn((int)static_QUType_int.get(_o+1)); break;
    case 9: handleIndexChange(); break;
    case 10: updateDirtyItems(); break;
    case 11: makeVisible(); break;
    case 12: handleSizeChange((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 13: startRename(); break;
    case 14: openFocusItem(); break;
    default:
	return QScrollView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QListView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: selectionChanged(); break;
    case 1: selectionChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 2: currentChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: clicked((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 4: clicked((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 5: pressed((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: pressed((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 7: doubleClicked((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 8: doubleClicked((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 9: returnPressed((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 10: spacePressed((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 11: rightButtonClicked((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 12: rightButtonPressed((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 13: mouseButtonPressed((int)static_QUType_int.get(_o+1),(QListViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3)),(int)static_QUType_int.get(_o+4)); break;
    case 14: mouseButtonClicked((int)static_QUType_int.get(_o+1),(QListViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3)),(int)static_QUType_int.get(_o+4)); break;
    case 15: contextMenuRequested((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 16: onItem((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 17: onViewport(); break;
    case 18: expanded((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 19: collapsed((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 20: dropped((QDropEvent*)static_QUType_ptr.get(_o+1)); break;
    case 21: itemRenamed((QListViewItem*)static_QUType_ptr.get(_o+1),(int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 22: itemRenamed((QListViewItem*)static_QUType_ptr.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return QScrollView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QListView::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->columns() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setMultiSelection(v->asBool()); break;
	case 1: *v = QVariant( this->isMultiSelection(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setSelectionMode((SelectionMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->selectionMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( this->childCount() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setAllColumnsShowFocus(v->asBool()); break;
	case 1: *v = QVariant( this->allColumnsShowFocus(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setShowSortIndicator(v->asBool()); break;
	case 1: *v = QVariant( this->showSortIndicator(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setItemMargin(v->asInt()); break;
	case 1: *v = QVariant( this->itemMargin() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setRootIsDecorated(v->asBool()); break;
	case 1: *v = QVariant( this->rootIsDecorated(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setShowToolTips(v->asBool()); break;
	case 1: *v = QVariant( this->showToolTips(), 0 ); break;
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
	case 0: setTreeStepSize(v->asInt()); break;
	case 1: *v = QVariant( this->treeStepSize() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 11: switch( f ) {
	case 0: setDefaultRenameAction((RenameAction&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->defaultRenameAction() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QScrollView::qt_property( id, f, v );
    }
    return TRUE;
}

bool QListView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
