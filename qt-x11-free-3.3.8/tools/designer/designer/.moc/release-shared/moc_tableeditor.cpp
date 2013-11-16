/****************************************************************************
** TableEditorBase meta object code from reading C++ file 'tableeditor.h'
**
** Created: Wed Oct 9 11:05:15 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../tableeditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TableEditorBase::className() const
{
    return "TableEditorBase";
}

QMetaObject *TableEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TableEditorBase( "TableEditorBase", &TableEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TableEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TableEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TableEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TableEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TableEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"applyClicked", 0, 0 };
    static const QUMethod slot_4 = {"chooseRowPixmapClicked", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"columnTextChanged", 1, param_slot_5 };
    static const QUMethod slot_6 = {"columnUpClicked", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_7 = {"currentColumnChanged", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"currentFieldChanged", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_9 = {"currentRowChanged", 1, param_slot_9 };
    static const QUMethod slot_10 = {"deleteColPixmapClicked", 0, 0 };
    static const QUMethod slot_11 = {"deleteColumnClicked", 0, 0 };
    static const QUMethod slot_12 = {"deleteRowClicked", 0, 0 };
    static const QUMethod slot_13 = {"deleteRowPixmapClicked", 0, 0 };
    static const QUMethod slot_14 = {"newColumnClicked", 0, 0 };
    static const QUMethod slot_15 = {"newRowClicked", 0, 0 };
    static const QUMethod slot_16 = {"chooseColPixmapClicked", 0, 0 };
    static const QUMethod slot_17 = {"okClicked", 0, 0 };
    static const QUMethod slot_18 = {"rowDownClicked", 0, 0 };
    static const QUParameter param_slot_19[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"rowTextChanged", 1, param_slot_19 };
    static const QUMethod slot_20 = {"rowUpClicked", 0, 0 };
    static const QUMethod slot_21 = {"columnDownClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "applyClicked()", &slot_3, QMetaData::Protected },
	{ "chooseRowPixmapClicked()", &slot_4, QMetaData::Protected },
	{ "columnTextChanged(const QString&)", &slot_5, QMetaData::Protected },
	{ "columnUpClicked()", &slot_6, QMetaData::Protected },
	{ "currentColumnChanged(QListBoxItem*)", &slot_7, QMetaData::Protected },
	{ "currentFieldChanged(const QString&)", &slot_8, QMetaData::Protected },
	{ "currentRowChanged(QListBoxItem*)", &slot_9, QMetaData::Protected },
	{ "deleteColPixmapClicked()", &slot_10, QMetaData::Protected },
	{ "deleteColumnClicked()", &slot_11, QMetaData::Protected },
	{ "deleteRowClicked()", &slot_12, QMetaData::Protected },
	{ "deleteRowPixmapClicked()", &slot_13, QMetaData::Protected },
	{ "newColumnClicked()", &slot_14, QMetaData::Protected },
	{ "newRowClicked()", &slot_15, QMetaData::Protected },
	{ "chooseColPixmapClicked()", &slot_16, QMetaData::Protected },
	{ "okClicked()", &slot_17, QMetaData::Protected },
	{ "rowDownClicked()", &slot_18, QMetaData::Protected },
	{ "rowTextChanged(const QString&)", &slot_19, QMetaData::Protected },
	{ "rowUpClicked()", &slot_20, QMetaData::Protected },
	{ "columnDownClicked()", &slot_21, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"TableEditorBase", parentObject,
	slot_tbl, 22,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TableEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* TableEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TableEditorBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool TableEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: applyClicked(); break;
    case 4: chooseRowPixmapClicked(); break;
    case 5: columnTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: columnUpClicked(); break;
    case 7: currentColumnChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 8: currentFieldChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 9: currentRowChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 10: deleteColPixmapClicked(); break;
    case 11: deleteColumnClicked(); break;
    case 12: deleteRowClicked(); break;
    case 13: deleteRowPixmapClicked(); break;
    case 14: newColumnClicked(); break;
    case 15: newRowClicked(); break;
    case 16: chooseColPixmapClicked(); break;
    case 17: okClicked(); break;
    case 18: rowDownClicked(); break;
    case 19: rowTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 20: rowUpClicked(); break;
    case 21: columnDownClicked(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TableEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TableEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool TableEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
