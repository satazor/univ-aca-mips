/****************************************************************************
** ListBoxEditor meta object code from reading C++ file 'listboxeditorimpl.h'
**
** Created: Wed Oct 9 11:04:47 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listboxeditorimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ListBoxEditor::className() const
{
    return "ListBoxEditor";
}

QMetaObject *ListBoxEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListBoxEditor( "ListBoxEditor", &ListBoxEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListBoxEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListBoxEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListBoxEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ListBoxEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"insertNewItem", 0, 0 };
    static const QUMethod slot_1 = {"deleteCurrentItem", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"currentItemChanged", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"currentTextChanged", 1, param_slot_3 };
    static const QUMethod slot_4 = {"okClicked", 0, 0 };
    static const QUMethod slot_5 = {"cancelClicked", 0, 0 };
    static const QUMethod slot_6 = {"applyClicked", 0, 0 };
    static const QUMethod slot_7 = {"choosePixmap", 0, 0 };
    static const QUMethod slot_8 = {"moveItemUp", 0, 0 };
    static const QUMethod slot_9 = {"moveItemDown", 0, 0 };
    static const QUMethod slot_10 = {"deletePixmap", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "insertNewItem()", &slot_0, QMetaData::Protected },
	{ "deleteCurrentItem()", &slot_1, QMetaData::Protected },
	{ "currentItemChanged(QListBoxItem*)", &slot_2, QMetaData::Protected },
	{ "currentTextChanged(const QString&)", &slot_3, QMetaData::Protected },
	{ "okClicked()", &slot_4, QMetaData::Protected },
	{ "cancelClicked()", &slot_5, QMetaData::Protected },
	{ "applyClicked()", &slot_6, QMetaData::Protected },
	{ "choosePixmap()", &slot_7, QMetaData::Protected },
	{ "moveItemUp()", &slot_8, QMetaData::Protected },
	{ "moveItemDown()", &slot_9, QMetaData::Protected },
	{ "deletePixmap()", &slot_10, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListBoxEditor", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListBoxEditor.setMetaObject( metaObj );
    return metaObj;
}

void* ListBoxEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListBoxEditor" ) )
	return this;
    return ListBoxEditorBase::qt_cast( clname );
}

bool ListBoxEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: insertNewItem(); break;
    case 1: deleteCurrentItem(); break;
    case 2: currentItemChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: currentTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: okClicked(); break;
    case 5: cancelClicked(); break;
    case 6: applyClicked(); break;
    case 7: choosePixmap(); break;
    case 8: moveItemUp(); break;
    case 9: moveItemDown(); break;
    case 10: deletePixmap(); break;
    default:
	return ListBoxEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListBoxEditor::qt_emit( int _id, QUObject* _o )
{
    return ListBoxEditorBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ListBoxEditor::qt_property( int id, int f, QVariant* v)
{
    return ListBoxEditorBase::qt_property( id, f, v);
}

bool ListBoxEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
