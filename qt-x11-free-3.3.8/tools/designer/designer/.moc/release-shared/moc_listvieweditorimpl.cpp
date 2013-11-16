/****************************************************************************
** ListViewEditor meta object code from reading C++ file 'listvieweditorimpl.h'
**
** Created: Wed Oct 9 11:04:49 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listvieweditorimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ListViewEditor::className() const
{
    return "ListViewEditor";
}

QMetaObject *ListViewEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListViewEditor( "ListViewEditor", &ListViewEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListViewEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListViewEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListViewEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListViewEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListViewEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ListViewEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"applyClicked", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"columnClickable", 1, param_slot_1 };
    static const QUMethod slot_2 = {"columnDownClicked", 0, 0 };
    static const QUMethod slot_3 = {"columnPixmapChosen", 0, 0 };
    static const QUMethod slot_4 = {"columnPixmapDeleted", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"columnResizable", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"columnTextChanged", 1, param_slot_6 };
    static const QUMethod slot_7 = {"columnUpClicked", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_8 = {"currentColumnChanged", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_9 = {"currentItemChanged", 1, param_slot_9 };
    static const QUMethod slot_10 = {"deleteColumnClicked", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"itemColChanged", 1, param_slot_11 };
    static const QUMethod slot_12 = {"itemDeleteClicked", 0, 0 };
    static const QUMethod slot_13 = {"itemDownClicked", 0, 0 };
    static const QUMethod slot_14 = {"itemNewClicked", 0, 0 };
    static const QUMethod slot_15 = {"itemNewSubClicked", 0, 0 };
    static const QUMethod slot_16 = {"itemPixmapChoosen", 0, 0 };
    static const QUMethod slot_17 = {"itemPixmapDeleted", 0, 0 };
    static const QUParameter param_slot_18[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_18 = {"itemTextChanged", 1, param_slot_18 };
    static const QUMethod slot_19 = {"itemUpClicked", 0, 0 };
    static const QUMethod slot_20 = {"itemLeftClicked", 0, 0 };
    static const QUMethod slot_21 = {"itemRightClicked", 0, 0 };
    static const QUMethod slot_22 = {"newColumnClicked", 0, 0 };
    static const QUMethod slot_23 = {"okClicked", 0, 0 };
    static const QUParameter param_slot_24[] = {
	{ "page", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_24 = {"initTabPage", 1, param_slot_24 };
    static const QUParameter param_slot_25[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_25 = {"emitItemRenamed", 3, param_slot_25 };
    static const QMetaData slot_tbl[] = {
	{ "applyClicked()", &slot_0, QMetaData::Protected },
	{ "columnClickable(bool)", &slot_1, QMetaData::Protected },
	{ "columnDownClicked()", &slot_2, QMetaData::Protected },
	{ "columnPixmapChosen()", &slot_3, QMetaData::Protected },
	{ "columnPixmapDeleted()", &slot_4, QMetaData::Protected },
	{ "columnResizable(bool)", &slot_5, QMetaData::Protected },
	{ "columnTextChanged(const QString&)", &slot_6, QMetaData::Protected },
	{ "columnUpClicked()", &slot_7, QMetaData::Protected },
	{ "currentColumnChanged(QListBoxItem*)", &slot_8, QMetaData::Protected },
	{ "currentItemChanged(QListViewItem*)", &slot_9, QMetaData::Protected },
	{ "deleteColumnClicked()", &slot_10, QMetaData::Protected },
	{ "itemColChanged(int)", &slot_11, QMetaData::Protected },
	{ "itemDeleteClicked()", &slot_12, QMetaData::Protected },
	{ "itemDownClicked()", &slot_13, QMetaData::Protected },
	{ "itemNewClicked()", &slot_14, QMetaData::Protected },
	{ "itemNewSubClicked()", &slot_15, QMetaData::Protected },
	{ "itemPixmapChoosen()", &slot_16, QMetaData::Protected },
	{ "itemPixmapDeleted()", &slot_17, QMetaData::Protected },
	{ "itemTextChanged(const QString&)", &slot_18, QMetaData::Protected },
	{ "itemUpClicked()", &slot_19, QMetaData::Protected },
	{ "itemLeftClicked()", &slot_20, QMetaData::Protected },
	{ "itemRightClicked()", &slot_21, QMetaData::Protected },
	{ "newColumnClicked()", &slot_22, QMetaData::Protected },
	{ "okClicked()", &slot_23, QMetaData::Protected },
	{ "initTabPage(const QString&)", &slot_24, QMetaData::Protected },
	{ "emitItemRenamed(QListViewItem*,int,const QString&)", &slot_25, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"itemRenamed", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "itemRenamed(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListViewEditor", parentObject,
	slot_tbl, 26,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListViewEditor.setMetaObject( metaObj );
    return metaObj;
}

void* ListViewEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListViewEditor" ) )
	return this;
    return ListViewEditorBase::qt_cast( clname );
}

// SIGNAL itemRenamed
void ListViewEditor::itemRenamed( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool ListViewEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: applyClicked(); break;
    case 1: columnClickable((bool)static_QUType_bool.get(_o+1)); break;
    case 2: columnDownClicked(); break;
    case 3: columnPixmapChosen(); break;
    case 4: columnPixmapDeleted(); break;
    case 5: columnResizable((bool)static_QUType_bool.get(_o+1)); break;
    case 6: columnTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: columnUpClicked(); break;
    case 8: currentColumnChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 9: currentItemChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 10: deleteColumnClicked(); break;
    case 11: itemColChanged((int)static_QUType_int.get(_o+1)); break;
    case 12: itemDeleteClicked(); break;
    case 13: itemDownClicked(); break;
    case 14: itemNewClicked(); break;
    case 15: itemNewSubClicked(); break;
    case 16: itemPixmapChoosen(); break;
    case 17: itemPixmapDeleted(); break;
    case 18: itemTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 19: itemUpClicked(); break;
    case 20: itemLeftClicked(); break;
    case 21: itemRightClicked(); break;
    case 22: newColumnClicked(); break;
    case 23: okClicked(); break;
    case 24: initTabPage((const QString&)static_QUType_QString.get(_o+1)); break;
    case 25: emitItemRenamed((QListViewItem*)static_QUType_ptr.get(_o+1),(int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    default:
	return ListViewEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListViewEditor::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: itemRenamed((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return ListViewEditorBase::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ListViewEditor::qt_property( int id, int f, QVariant* v)
{
    return ListViewEditorBase::qt_property( id, f, v);
}

bool ListViewEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
