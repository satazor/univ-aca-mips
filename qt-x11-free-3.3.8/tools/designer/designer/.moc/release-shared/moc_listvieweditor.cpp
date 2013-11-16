/****************************************************************************
** ListViewEditorBase meta object code from reading C++ file 'listvieweditor.h'
**
** Created: Wed Oct 9 11:05:05 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listvieweditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ListViewEditorBase::className() const
{
    return "ListViewEditorBase";
}

QMetaObject *ListViewEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListViewEditorBase( "ListViewEditorBase", &ListViewEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListViewEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListViewEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListViewEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListViewEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListViewEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"applyClicked", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"columnClickable", 1, param_slot_4 };
    static const QUMethod slot_5 = {"columnDownClicked", 0, 0 };
    static const QUMethod slot_6 = {"columnPixmapChosen", 0, 0 };
    static const QUMethod slot_7 = {"columnPixmapDeleted", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"columnResizable", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"columnTextChanged", 1, param_slot_9 };
    static const QUMethod slot_10 = {"columnUpClicked", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_11 = {"currentColumnChanged", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_12 = {"currentItemChanged", 1, param_slot_12 };
    static const QUMethod slot_13 = {"deleteColumnClicked", 0, 0 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"initTabPage", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"itemColChanged", 1, param_slot_15 };
    static const QUMethod slot_16 = {"itemDeleteClicked", 0, 0 };
    static const QUMethod slot_17 = {"itemDownClicked", 0, 0 };
    static const QUMethod slot_18 = {"itemLeftClicked", 0, 0 };
    static const QUMethod slot_19 = {"itemNewClicked", 0, 0 };
    static const QUMethod slot_20 = {"itemNewSubClicked", 0, 0 };
    static const QUMethod slot_21 = {"itemPixmapChoosen", 0, 0 };
    static const QUMethod slot_22 = {"itemPixmapDeleted", 0, 0 };
    static const QUParameter param_slot_23[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_23 = {"itemTextChanged", 1, param_slot_23 };
    static const QUMethod slot_24 = {"itemUpClicked", 0, 0 };
    static const QUMethod slot_25 = {"newColumnClicked", 0, 0 };
    static const QUMethod slot_26 = {"itemRightClicked", 0, 0 };
    static const QUMethod slot_27 = {"okClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "applyClicked()", &slot_3, QMetaData::Protected },
	{ "columnClickable(bool)", &slot_4, QMetaData::Protected },
	{ "columnDownClicked()", &slot_5, QMetaData::Protected },
	{ "columnPixmapChosen()", &slot_6, QMetaData::Protected },
	{ "columnPixmapDeleted()", &slot_7, QMetaData::Protected },
	{ "columnResizable(bool)", &slot_8, QMetaData::Protected },
	{ "columnTextChanged(const QString&)", &slot_9, QMetaData::Protected },
	{ "columnUpClicked()", &slot_10, QMetaData::Protected },
	{ "currentColumnChanged(QListBoxItem*)", &slot_11, QMetaData::Protected },
	{ "currentItemChanged(QListViewItem*)", &slot_12, QMetaData::Protected },
	{ "deleteColumnClicked()", &slot_13, QMetaData::Protected },
	{ "initTabPage(const QString&)", &slot_14, QMetaData::Protected },
	{ "itemColChanged(int)", &slot_15, QMetaData::Protected },
	{ "itemDeleteClicked()", &slot_16, QMetaData::Protected },
	{ "itemDownClicked()", &slot_17, QMetaData::Protected },
	{ "itemLeftClicked()", &slot_18, QMetaData::Protected },
	{ "itemNewClicked()", &slot_19, QMetaData::Protected },
	{ "itemNewSubClicked()", &slot_20, QMetaData::Protected },
	{ "itemPixmapChoosen()", &slot_21, QMetaData::Protected },
	{ "itemPixmapDeleted()", &slot_22, QMetaData::Protected },
	{ "itemTextChanged(const QString&)", &slot_23, QMetaData::Protected },
	{ "itemUpClicked()", &slot_24, QMetaData::Protected },
	{ "newColumnClicked()", &slot_25, QMetaData::Protected },
	{ "itemRightClicked()", &slot_26, QMetaData::Protected },
	{ "okClicked()", &slot_27, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListViewEditorBase", parentObject,
	slot_tbl, 28,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListViewEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* ListViewEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListViewEditorBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ListViewEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: applyClicked(); break;
    case 4: columnClickable((bool)static_QUType_bool.get(_o+1)); break;
    case 5: columnDownClicked(); break;
    case 6: columnPixmapChosen(); break;
    case 7: columnPixmapDeleted(); break;
    case 8: columnResizable((bool)static_QUType_bool.get(_o+1)); break;
    case 9: columnTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 10: columnUpClicked(); break;
    case 11: currentColumnChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 12: currentItemChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 13: deleteColumnClicked(); break;
    case 14: initTabPage((const QString&)static_QUType_QString.get(_o+1)); break;
    case 15: itemColChanged((int)static_QUType_int.get(_o+1)); break;
    case 16: itemDeleteClicked(); break;
    case 17: itemDownClicked(); break;
    case 18: itemLeftClicked(); break;
    case 19: itemNewClicked(); break;
    case 20: itemNewSubClicked(); break;
    case 21: itemPixmapChoosen(); break;
    case 22: itemPixmapDeleted(); break;
    case 23: itemTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 24: itemUpClicked(); break;
    case 25: newColumnClicked(); break;
    case 26: itemRightClicked(); break;
    case 27: okClicked(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListViewEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ListViewEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ListViewEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
