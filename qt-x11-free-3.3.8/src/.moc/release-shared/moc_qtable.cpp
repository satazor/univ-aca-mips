/****************************************************************************
** QTable meta object code from reading C++ file 'qtable.h'
**
** Created: Wed Oct 9 10:53:09 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../table/qtable.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QTable::className() const
{
    return "QTable";
}

QMetaObject *QTable::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTable( "QTable", &QTable::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTable::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTable", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTable::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTable", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTable::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Single",  (int) QTable::Single },
	{ "Multi",  (int) QTable::Multi },
	{ "SingleRow",  (int) QTable::SingleRow },
	{ "MultiRow",  (int) QTable::MultiRow },
	{ "NoSelection",  (int) QTable::NoSelection }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "FollowStyle",  (int) QTable::FollowStyle },
	{ "SpreadSheet",  (int) QTable::SpreadSheet }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "SelectionMode", 5, enum_0, FALSE },
	{ "FocusStyle", 2, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "r", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setNumRows", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "r", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setNumCols", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setShowGrid", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"hideRow", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"hideColumn", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"showRow", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"showColumn", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out },
	{ "row", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"isRowHidden", 2, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"isColumnHidden", 2, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "w", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"setColumnWidth", 2, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "h", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"setRowHeight", 2, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"adjustColumn", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"adjustRow", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "stretch", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"setColumnStretchable", 2, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "stretch", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"setRowStretchable", 2, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"isColumnStretchable", 2, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out },
	{ "row", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"isRowStretchable", 2, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"setSorting", 1, param_slot_17 };
    static const QUParameter param_slot_18[] = {
	{ "row1", &static_QUType_int, 0, QUParameter::In },
	{ "row2", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_18 = {"swapRows", 2, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ "row1", &static_QUType_int, 0, QUParameter::In },
	{ "row2", &static_QUType_int, 0, QUParameter::In },
	{ "swapHeader", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"swapRows", 3, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ "col1", &static_QUType_int, 0, QUParameter::In },
	{ "col2", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_20 = {"swapColumns", 2, param_slot_20 };
    static const QUParameter param_slot_21[] = {
	{ "col1", &static_QUType_int, 0, QUParameter::In },
	{ "col2", &static_QUType_int, 0, QUParameter::In },
	{ "swapHeader", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_21 = {"swapColumns", 3, param_slot_21 };
    static const QUParameter param_slot_22[] = {
	{ "row1", &static_QUType_int, 0, QUParameter::In },
	{ "col1", &static_QUType_int, 0, QUParameter::In },
	{ "row2", &static_QUType_int, 0, QUParameter::In },
	{ "col2", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"swapCells", 4, param_slot_22 };
    static const QUParameter param_slot_23[] = {
	{ "m", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_23 = {"setLeftMargin", 1, param_slot_23 };
    static const QUParameter param_slot_24[] = {
	{ "m", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_24 = {"setTopMargin", 1, param_slot_24 };
    static const QUParameter param_slot_25[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_25 = {"setCurrentCell", 2, param_slot_25 };
    static const QUMethod slot_26 = {"clearSelection", 0, 0 };
    static const QUParameter param_slot_27[] = {
	{ "repaint", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_27 = {"clearSelection", 1, param_slot_27 };
    static const QUParameter param_slot_28[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_28 = {"setColumnMovingEnabled", 1, param_slot_28 };
    static const QUParameter param_slot_29[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_29 = {"setRowMovingEnabled", 1, param_slot_29 };
    static const QUParameter param_slot_30[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_30 = {"setReadOnly", 1, param_slot_30 };
    static const QUParameter param_slot_31[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "ro", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_31 = {"setRowReadOnly", 2, param_slot_31 };
    static const QUParameter param_slot_32[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "ro", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_32 = {"setColumnReadOnly", 2, param_slot_32 };
    static const QUParameter param_slot_33[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_33 = {"setDragEnabled", 1, param_slot_33 };
    static const QUParameter param_slot_34[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_34 = {"dragEnabled", 1, param_slot_34 };
    static const QUParameter param_slot_35[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_35 = {"insertRows", 1, param_slot_35 };
    static const QUParameter param_slot_36[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "count", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_36 = {"insertRows", 2, param_slot_36 };
    static const QUParameter param_slot_37[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_37 = {"insertColumns", 1, param_slot_37 };
    static const QUParameter param_slot_38[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "count", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_38 = {"insertColumns", 2, param_slot_38 };
    static const QUParameter param_slot_39[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_39 = {"removeRow", 1, param_slot_39 };
    static const QUParameter param_slot_40[] = {
	{ "rows", &static_QUType_ptr, "QMemArray<int>", QUParameter::In }
    };
    static const QUMethod slot_40 = {"removeRows", 1, param_slot_40 };
    static const QUParameter param_slot_41[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_41 = {"removeColumn", 1, param_slot_41 };
    static const QUParameter param_slot_42[] = {
	{ "cols", &static_QUType_ptr, "QMemArray<int>", QUParameter::In }
    };
    static const QUMethod slot_42 = {"removeColumns", 1, param_slot_42 };
    static const QUParameter param_slot_43[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_43 = {"editCell", 2, param_slot_43 };
    static const QUParameter param_slot_44[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "replace", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_44 = {"editCell", 3, param_slot_44 };
    static const QUParameter param_slot_45[] = {
	{ "labels", &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod slot_45 = {"setRowLabels", 1, param_slot_45 };
    static const QUParameter param_slot_46[] = {
	{ "labels", &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod slot_46 = {"setColumnLabels", 1, param_slot_46 };
    static const QUParameter param_slot_47[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_47 = {"columnWidthChanged", 1, param_slot_47 };
    static const QUParameter param_slot_48[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_48 = {"rowHeightChanged", 1, param_slot_48 };
    static const QUParameter param_slot_49[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In },
	{ "fromIndex", &static_QUType_int, 0, QUParameter::In },
	{ "toIndex", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_49 = {"columnIndexChanged", 3, param_slot_49 };
    static const QUParameter param_slot_50[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In },
	{ "fromIndex", &static_QUType_int, 0, QUParameter::In },
	{ "toIndex", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_50 = {"rowIndexChanged", 3, param_slot_50 };
    static const QUParameter param_slot_51[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_51 = {"columnClicked", 1, param_slot_51 };
    static const QUMethod slot_52 = {"doAutoScroll", 0, 0 };
    static const QUMethod slot_53 = {"doValueChanged", 0, 0 };
    static const QUMethod slot_54 = {"updateGeometriesSlot", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setNumRows(int)", &slot_0, QMetaData::Public },
	{ "setNumCols(int)", &slot_1, QMetaData::Public },
	{ "setShowGrid(bool)", &slot_2, QMetaData::Public },
	{ "hideRow(int)", &slot_3, QMetaData::Public },
	{ "hideColumn(int)", &slot_4, QMetaData::Public },
	{ "showRow(int)", &slot_5, QMetaData::Public },
	{ "showColumn(int)", &slot_6, QMetaData::Public },
	{ "isRowHidden(int)", &slot_7, QMetaData::Public },
	{ "isColumnHidden(int)", &slot_8, QMetaData::Public },
	{ "setColumnWidth(int,int)", &slot_9, QMetaData::Public },
	{ "setRowHeight(int,int)", &slot_10, QMetaData::Public },
	{ "adjustColumn(int)", &slot_11, QMetaData::Public },
	{ "adjustRow(int)", &slot_12, QMetaData::Public },
	{ "setColumnStretchable(int,bool)", &slot_13, QMetaData::Public },
	{ "setRowStretchable(int,bool)", &slot_14, QMetaData::Public },
	{ "isColumnStretchable(int)", &slot_15, QMetaData::Public },
	{ "isRowStretchable(int)", &slot_16, QMetaData::Public },
	{ "setSorting(bool)", &slot_17, QMetaData::Public },
	{ "swapRows(int,int)", &slot_18, QMetaData::Public },
	{ "swapRows(int,int,bool)", &slot_19, QMetaData::Public },
	{ "swapColumns(int,int)", &slot_20, QMetaData::Public },
	{ "swapColumns(int,int,bool)", &slot_21, QMetaData::Public },
	{ "swapCells(int,int,int,int)", &slot_22, QMetaData::Public },
	{ "setLeftMargin(int)", &slot_23, QMetaData::Public },
	{ "setTopMargin(int)", &slot_24, QMetaData::Public },
	{ "setCurrentCell(int,int)", &slot_25, QMetaData::Public },
	{ "clearSelection()", &slot_26, QMetaData::Public },
	{ "clearSelection(bool)", &slot_27, QMetaData::Public },
	{ "setColumnMovingEnabled(bool)", &slot_28, QMetaData::Public },
	{ "setRowMovingEnabled(bool)", &slot_29, QMetaData::Public },
	{ "setReadOnly(bool)", &slot_30, QMetaData::Public },
	{ "setRowReadOnly(int,bool)", &slot_31, QMetaData::Public },
	{ "setColumnReadOnly(int,bool)", &slot_32, QMetaData::Public },
	{ "setDragEnabled(bool)", &slot_33, QMetaData::Public },
	{ "dragEnabled()", &slot_34, QMetaData::Public },
	{ "insertRows(int)", &slot_35, QMetaData::Public },
	{ "insertRows(int,int)", &slot_36, QMetaData::Public },
	{ "insertColumns(int)", &slot_37, QMetaData::Public },
	{ "insertColumns(int,int)", &slot_38, QMetaData::Public },
	{ "removeRow(int)", &slot_39, QMetaData::Public },
	{ "removeRows(const QMemArray<int>&)", &slot_40, QMetaData::Public },
	{ "removeColumn(int)", &slot_41, QMetaData::Public },
	{ "removeColumns(const QMemArray<int>&)", &slot_42, QMetaData::Public },
	{ "editCell(int,int)", &slot_43, QMetaData::Public },
	{ "editCell(int,int,bool)", &slot_44, QMetaData::Public },
	{ "setRowLabels(const QStringList&)", &slot_45, QMetaData::Public },
	{ "setColumnLabels(const QStringList&)", &slot_46, QMetaData::Public },
	{ "columnWidthChanged(int)", &slot_47, QMetaData::Protected },
	{ "rowHeightChanged(int)", &slot_48, QMetaData::Protected },
	{ "columnIndexChanged(int,int,int)", &slot_49, QMetaData::Protected },
	{ "rowIndexChanged(int,int,int)", &slot_50, QMetaData::Protected },
	{ "columnClicked(int)", &slot_51, QMetaData::Protected },
	{ "doAutoScroll()", &slot_52, QMetaData::Private },
	{ "doValueChanged()", &slot_53, QMetaData::Private },
	{ "updateGeometriesSlot()", &slot_54, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"currentChanged", 2, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "mousePos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_1 = {"clicked", 4, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "mousePos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_2 = {"doubleClicked", 4, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "mousePos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_3 = {"pressed", 4, param_signal_3 };
    static const QUMethod signal_4 = {"selectionChanged", 0, 0 };
    static const QUParameter param_signal_5[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"valueChanged", 2, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_6 = {"contextMenuRequested", 3, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "e", &static_QUType_ptr, "QDropEvent", QUParameter::In }
    };
    static const QUMethod signal_7 = {"dropped", 1, param_signal_7 };
    static const QMetaData signal_tbl[] = {
	{ "currentChanged(int,int)", &signal_0, QMetaData::Protected },
	{ "clicked(int,int,int,const QPoint&)", &signal_1, QMetaData::Protected },
	{ "doubleClicked(int,int,int,const QPoint&)", &signal_2, QMetaData::Protected },
	{ "pressed(int,int,int,const QPoint&)", &signal_3, QMetaData::Protected },
	{ "selectionChanged()", &signal_4, QMetaData::Protected },
	{ "valueChanged(int,int)", &signal_5, QMetaData::Protected },
	{ "contextMenuRequested(int,int,const QPoint&)", &signal_6, QMetaData::Protected },
	{ "dropped(QDropEvent*)", &signal_7, QMetaData::Protected }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[10] = {
 	{ "int","numRows", 0x10000103, &QTable::metaObj, 0, -1 },
	{ "int","numCols", 0x10000103, &QTable::metaObj, 0, -1 },
	{ "bool","showGrid", 0x12000103, &QTable::metaObj, 0, -1 },
	{ "bool","rowMovingEnabled", 0x12000103, &QTable::metaObj, 0, -1 },
	{ "bool","columnMovingEnabled", 0x12000103, &QTable::metaObj, 0, -1 },
	{ "bool","readOnly", 0x12000103, &QTable::metaObj, 0, -1 },
	{ "bool","sorting", 0x12000103, &QTable::metaObj, 0, -1 },
	{ "SelectionMode","selectionMode", 0x0107, &QTable::metaObj, &enum_tbl[0], -1 },
	{ "FocusStyle","focusStyle", 0x0107, &QTable::metaObj, &enum_tbl[1], -1 },
	{ "int","numSelections", 0x10000001, &QTable::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QTable", parentObject,
	slot_tbl, 55,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	props_tbl, 10,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTable.setMetaObject( metaObj );
    return metaObj;
}

void* QTable::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTable" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL currentChanged
void QTable::currentChanged( int t0, int t1 )
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

// SIGNAL clicked
void QTable::clicked( int t0, int t1, int t2, const QPoint& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    static_QUType_varptr.set(o+4,&t3);
    activate_signal( clist, o );
}

// SIGNAL doubleClicked
void QTable::doubleClicked( int t0, int t1, int t2, const QPoint& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    static_QUType_varptr.set(o+4,&t3);
    activate_signal( clist, o );
}

// SIGNAL pressed
void QTable::pressed( int t0, int t1, int t2, const QPoint& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    static_QUType_varptr.set(o+4,&t3);
    activate_signal( clist, o );
}

// SIGNAL selectionChanged
void QTable::selectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

// SIGNAL valueChanged
void QTable::valueChanged( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL contextMenuRequested
void QTable::contextMenuRequested( int t0, int t1, const QPoint& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_varptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL dropped
void QTable::dropped( QDropEvent* t0 )
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

bool QTable::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setNumRows((int)static_QUType_int.get(_o+1)); break;
    case 1: setNumCols((int)static_QUType_int.get(_o+1)); break;
    case 2: setShowGrid((bool)static_QUType_bool.get(_o+1)); break;
    case 3: hideRow((int)static_QUType_int.get(_o+1)); break;
    case 4: hideColumn((int)static_QUType_int.get(_o+1)); break;
    case 5: showRow((int)static_QUType_int.get(_o+1)); break;
    case 6: showColumn((int)static_QUType_int.get(_o+1)); break;
    case 7: static_QUType_bool.set(_o,isRowHidden((int)static_QUType_int.get(_o+1))); break;
    case 8: static_QUType_bool.set(_o,isColumnHidden((int)static_QUType_int.get(_o+1))); break;
    case 9: setColumnWidth((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 10: setRowHeight((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 11: adjustColumn((int)static_QUType_int.get(_o+1)); break;
    case 12: adjustRow((int)static_QUType_int.get(_o+1)); break;
    case 13: setColumnStretchable((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 14: setRowStretchable((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 15: static_QUType_bool.set(_o,isColumnStretchable((int)static_QUType_int.get(_o+1))); break;
    case 16: static_QUType_bool.set(_o,isRowStretchable((int)static_QUType_int.get(_o+1))); break;
    case 17: setSorting((bool)static_QUType_bool.get(_o+1)); break;
    case 18: swapRows((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 19: swapRows((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 20: swapColumns((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 21: swapColumns((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 22: swapCells((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4)); break;
    case 23: setLeftMargin((int)static_QUType_int.get(_o+1)); break;
    case 24: setTopMargin((int)static_QUType_int.get(_o+1)); break;
    case 25: setCurrentCell((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 26: clearSelection(); break;
    case 27: clearSelection((bool)static_QUType_bool.get(_o+1)); break;
    case 28: setColumnMovingEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 29: setRowMovingEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 30: setReadOnly((bool)static_QUType_bool.get(_o+1)); break;
    case 31: setRowReadOnly((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 32: setColumnReadOnly((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 33: setDragEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 34: static_QUType_bool.set(_o,dragEnabled()); break;
    case 35: insertRows((int)static_QUType_int.get(_o+1)); break;
    case 36: insertRows((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 37: insertColumns((int)static_QUType_int.get(_o+1)); break;
    case 38: insertColumns((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 39: removeRow((int)static_QUType_int.get(_o+1)); break;
    case 40: removeRows((const QMemArray<int>&)*((const QMemArray<int>*)static_QUType_ptr.get(_o+1))); break;
    case 41: removeColumn((int)static_QUType_int.get(_o+1)); break;
    case 42: removeColumns((const QMemArray<int>&)*((const QMemArray<int>*)static_QUType_ptr.get(_o+1))); break;
    case 43: editCell((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 44: editCell((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 45: setRowLabels((const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+1))); break;
    case 46: setColumnLabels((const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+1))); break;
    case 47: columnWidthChanged((int)static_QUType_int.get(_o+1)); break;
    case 48: rowHeightChanged((int)static_QUType_int.get(_o+1)); break;
    case 49: columnIndexChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 50: rowIndexChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 51: columnClicked((int)static_QUType_int.get(_o+1)); break;
    case 52: doAutoScroll(); break;
    case 53: doValueChanged(); break;
    case 54: updateGeometriesSlot(); break;
    default:
	return QScrollView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTable::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 1: clicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+4))); break;
    case 2: doubleClicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+4))); break;
    case 3: pressed((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+4))); break;
    case 4: selectionChanged(); break;
    case 5: valueChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 6: contextMenuRequested((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 7: dropped((QDropEvent*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QScrollView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTable::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setNumRows(v->asInt()); break;
	case 1: *v = QVariant( this->numRows() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setNumCols(v->asInt()); break;
	case 1: *v = QVariant( this->numCols() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setShowGrid(v->asBool()); break;
	case 1: *v = QVariant( this->showGrid(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setRowMovingEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->rowMovingEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setColumnMovingEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->columnMovingEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setReadOnly(v->asBool()); break;
	case 1: *v = QVariant( this->isReadOnly(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setSorting(v->asBool()); break;
	case 1: *v = QVariant( this->sorting(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setSelectionMode((SelectionMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->selectionMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setFocusStyle((FocusStyle&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->focusStyle() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 1: *v = QVariant( this->numSelections() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QScrollView::qt_property( id, f, v );
    }
    return TRUE;
}

bool QTable::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
