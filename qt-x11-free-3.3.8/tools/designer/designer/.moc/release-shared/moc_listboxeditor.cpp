/****************************************************************************
** ListBoxEditorBase meta object code from reading C++ file 'listboxeditor.h'
**
** Created: Wed Oct 9 11:05:04 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listboxeditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ListBoxEditorBase::className() const
{
    return "ListBoxEditorBase";
}

QMetaObject *ListBoxEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListBoxEditorBase( "ListBoxEditorBase", &ListBoxEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListBoxEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListBoxEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListBoxEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"insertNewItem", 0, 0 };
    static const QUMethod slot_4 = {"deleteCurrentItem", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"currentItemChanged", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"currentTextChanged", 1, param_slot_6 };
    static const QUMethod slot_7 = {"okClicked", 0, 0 };
    static const QUMethod slot_8 = {"cancelClicked", 0, 0 };
    static const QUMethod slot_9 = {"applyClicked", 0, 0 };
    static const QUMethod slot_10 = {"choosePixmap", 0, 0 };
    static const QUMethod slot_11 = {"deletePixmap", 0, 0 };
    static const QUMethod slot_12 = {"moveItemUp", 0, 0 };
    static const QUMethod slot_13 = {"moveItemDown", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "insertNewItem()", &slot_3, QMetaData::Protected },
	{ "deleteCurrentItem()", &slot_4, QMetaData::Protected },
	{ "currentItemChanged(QListBoxItem*)", &slot_5, QMetaData::Protected },
	{ "currentTextChanged(const QString&)", &slot_6, QMetaData::Protected },
	{ "okClicked()", &slot_7, QMetaData::Protected },
	{ "cancelClicked()", &slot_8, QMetaData::Protected },
	{ "applyClicked()", &slot_9, QMetaData::Protected },
	{ "choosePixmap()", &slot_10, QMetaData::Protected },
	{ "deletePixmap()", &slot_11, QMetaData::Protected },
	{ "moveItemUp()", &slot_12, QMetaData::Protected },
	{ "moveItemDown()", &slot_13, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListBoxEditorBase", parentObject,
	slot_tbl, 14,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListBoxEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* ListBoxEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListBoxEditorBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ListBoxEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: insertNewItem(); break;
    case 4: deleteCurrentItem(); break;
    case 5: currentItemChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: currentTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: okClicked(); break;
    case 8: cancelClicked(); break;
    case 9: applyClicked(); break;
    case 10: choosePixmap(); break;
    case 11: deletePixmap(); break;
    case 12: moveItemUp(); break;
    case 13: moveItemDown(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListBoxEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ListBoxEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ListBoxEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
