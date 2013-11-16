/****************************************************************************
** IconViewEditor meta object code from reading C++ file 'iconvieweditorimpl.h'
**
** Created: Wed Oct 9 11:04:50 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../iconvieweditorimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *IconViewEditor::className() const
{
    return "IconViewEditor";
}

QMetaObject *IconViewEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_IconViewEditor( "IconViewEditor", &IconViewEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString IconViewEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IconViewEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString IconViewEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IconViewEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* IconViewEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = IconViewEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"insertNewItem", 0, 0 };
    static const QUMethod slot_1 = {"deleteCurrentItem", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QIconViewItem", QUParameter::In }
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
    static const QUMethod slot_8 = {"deletePixmap", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "insertNewItem()", &slot_0, QMetaData::Protected },
	{ "deleteCurrentItem()", &slot_1, QMetaData::Protected },
	{ "currentItemChanged(QIconViewItem*)", &slot_2, QMetaData::Protected },
	{ "currentTextChanged(const QString&)", &slot_3, QMetaData::Protected },
	{ "okClicked()", &slot_4, QMetaData::Protected },
	{ "cancelClicked()", &slot_5, QMetaData::Protected },
	{ "applyClicked()", &slot_6, QMetaData::Protected },
	{ "choosePixmap()", &slot_7, QMetaData::Protected },
	{ "deletePixmap()", &slot_8, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"IconViewEditor", parentObject,
	slot_tbl, 9,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_IconViewEditor.setMetaObject( metaObj );
    return metaObj;
}

void* IconViewEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "IconViewEditor" ) )
	return this;
    return IconViewEditorBase::qt_cast( clname );
}

bool IconViewEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: insertNewItem(); break;
    case 1: deleteCurrentItem(); break;
    case 2: currentItemChanged((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: currentTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: okClicked(); break;
    case 5: cancelClicked(); break;
    case 6: applyClicked(); break;
    case 7: choosePixmap(); break;
    case 8: deletePixmap(); break;
    default:
	return IconViewEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool IconViewEditor::qt_emit( int _id, QUObject* _o )
{
    return IconViewEditorBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool IconViewEditor::qt_property( int id, int f, QVariant* v)
{
    return IconViewEditorBase::qt_property( id, f, v);
}

bool IconViewEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
