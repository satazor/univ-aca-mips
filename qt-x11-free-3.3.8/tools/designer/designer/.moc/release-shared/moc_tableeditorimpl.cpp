/****************************************************************************
** TableEditor meta object code from reading C++ file 'tableeditorimpl.h'
**
** Created: Wed Oct 9 11:05:04 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../tableeditorimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TableEditor::className() const
{
    return "TableEditor";
}

QMetaObject *TableEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TableEditor( "TableEditor", &TableEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TableEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TableEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TableEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TableEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TableEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = TableEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"columnDownClicked", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"columnTextChanged", 1, param_slot_1 };
    static const QUMethod slot_2 = {"columnUpClicked", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_3 = {"currentColumnChanged", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"currentFieldChanged", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"currentRowChanged", 1, param_slot_5 };
    static const QUMethod slot_6 = {"deleteColumnClicked", 0, 0 };
    static const QUMethod slot_7 = {"deleteRowClicked", 0, 0 };
    static const QUMethod slot_8 = {"newColumnClicked", 0, 0 };
    static const QUMethod slot_9 = {"newRowClicked", 0, 0 };
    static const QUMethod slot_10 = {"okClicked", 0, 0 };
    static const QUMethod slot_11 = {"rowDownClicked", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"rowTextChanged", 1, param_slot_12 };
    static const QUMethod slot_13 = {"rowUpClicked", 0, 0 };
    static const QUMethod slot_14 = {"applyClicked", 0, 0 };
    static const QUMethod slot_15 = {"chooseRowPixmapClicked", 0, 0 };
    static const QUMethod slot_16 = {"deleteRowPixmapClicked", 0, 0 };
    static const QUMethod slot_17 = {"chooseColPixmapClicked", 0, 0 };
    static const QUMethod slot_18 = {"deleteColPixmapClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "columnDownClicked()", &slot_0, QMetaData::Protected },
	{ "columnTextChanged(const QString&)", &slot_1, QMetaData::Protected },
	{ "columnUpClicked()", &slot_2, QMetaData::Protected },
	{ "currentColumnChanged(QListBoxItem*)", &slot_3, QMetaData::Protected },
	{ "currentFieldChanged(const QString&)", &slot_4, QMetaData::Protected },
	{ "currentRowChanged(QListBoxItem*)", &slot_5, QMetaData::Protected },
	{ "deleteColumnClicked()", &slot_6, QMetaData::Protected },
	{ "deleteRowClicked()", &slot_7, QMetaData::Protected },
	{ "newColumnClicked()", &slot_8, QMetaData::Protected },
	{ "newRowClicked()", &slot_9, QMetaData::Protected },
	{ "okClicked()", &slot_10, QMetaData::Protected },
	{ "rowDownClicked()", &slot_11, QMetaData::Protected },
	{ "rowTextChanged(const QString&)", &slot_12, QMetaData::Protected },
	{ "rowUpClicked()", &slot_13, QMetaData::Protected },
	{ "applyClicked()", &slot_14, QMetaData::Protected },
	{ "chooseRowPixmapClicked()", &slot_15, QMetaData::Protected },
	{ "deleteRowPixmapClicked()", &slot_16, QMetaData::Protected },
	{ "chooseColPixmapClicked()", &slot_17, QMetaData::Protected },
	{ "deleteColPixmapClicked()", &slot_18, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"TableEditor", parentObject,
	slot_tbl, 19,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TableEditor.setMetaObject( metaObj );
    return metaObj;
}

void* TableEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TableEditor" ) )
	return this;
    return TableEditorBase::qt_cast( clname );
}

bool TableEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: columnDownClicked(); break;
    case 1: columnTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: columnUpClicked(); break;
    case 3: currentColumnChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 4: currentFieldChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: currentRowChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: deleteColumnClicked(); break;
    case 7: deleteRowClicked(); break;
    case 8: newColumnClicked(); break;
    case 9: newRowClicked(); break;
    case 10: okClicked(); break;
    case 11: rowDownClicked(); break;
    case 12: rowTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 13: rowUpClicked(); break;
    case 14: applyClicked(); break;
    case 15: chooseRowPixmapClicked(); break;
    case 16: deleteRowPixmapClicked(); break;
    case 17: chooseColPixmapClicked(); break;
    case 18: deleteColPixmapClicked(); break;
    default:
	return TableEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TableEditor::qt_emit( int _id, QUObject* _o )
{
    return TableEditorBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TableEditor::qt_property( int id, int f, QVariant* v)
{
    return TableEditorBase::qt_property( id, f, v);
}

bool TableEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
