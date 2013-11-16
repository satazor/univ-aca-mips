/****************************************************************************
** WizardEditor meta object code from reading C++ file 'wizardeditorimpl.h'
**
** Created: Wed Oct 9 11:04:56 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../wizardeditorimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *WizardEditor::className() const
{
    return "WizardEditor";
}

QMetaObject *WizardEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WizardEditor( "WizardEditor", &WizardEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WizardEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WizardEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WizardEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WizardEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WizardEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = WizardEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"okClicked", 0, 0 };
    static const QUMethod slot_1 = {"applyClicked", 0, 0 };
    static const QUMethod slot_2 = {"cancelClicked", 0, 0 };
    static const QUMethod slot_3 = {"helpClicked", 0, 0 };
    static const QUMethod slot_4 = {"addClicked", 0, 0 };
    static const QUMethod slot_5 = {"removeClicked", 0, 0 };
    static const QUMethod slot_6 = {"upClicked", 0, 0 };
    static const QUMethod slot_7 = {"downClicked", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"itemHighlighted", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"itemSelected", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_10 = {"itemDragged", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_11 = {"itemDropped", 1, param_slot_11 };
    static const QMetaData slot_tbl[] = {
	{ "okClicked()", &slot_0, QMetaData::Protected },
	{ "applyClicked()", &slot_1, QMetaData::Protected },
	{ "cancelClicked()", &slot_2, QMetaData::Protected },
	{ "helpClicked()", &slot_3, QMetaData::Protected },
	{ "addClicked()", &slot_4, QMetaData::Protected },
	{ "removeClicked()", &slot_5, QMetaData::Protected },
	{ "upClicked()", &slot_6, QMetaData::Protected },
	{ "downClicked()", &slot_7, QMetaData::Protected },
	{ "itemHighlighted(int)", &slot_8, QMetaData::Protected },
	{ "itemSelected(int)", &slot_9, QMetaData::Protected },
	{ "itemDragged(QListBoxItem*)", &slot_10, QMetaData::Protected },
	{ "itemDropped(QListBoxItem*)", &slot_11, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"WizardEditor", parentObject,
	slot_tbl, 12,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WizardEditor.setMetaObject( metaObj );
    return metaObj;
}

void* WizardEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WizardEditor" ) )
	return this;
    return WizardEditorBase::qt_cast( clname );
}

bool WizardEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: okClicked(); break;
    case 1: applyClicked(); break;
    case 2: cancelClicked(); break;
    case 3: helpClicked(); break;
    case 4: addClicked(); break;
    case 5: removeClicked(); break;
    case 6: upClicked(); break;
    case 7: downClicked(); break;
    case 8: itemHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 9: itemSelected((int)static_QUType_int.get(_o+1)); break;
    case 10: itemDragged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 11: itemDropped((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return WizardEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool WizardEditor::qt_emit( int _id, QUObject* _o )
{
    return WizardEditorBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool WizardEditor::qt_property( int id, int f, QVariant* v)
{
    return WizardEditorBase::qt_property( id, f, v);
}

bool WizardEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
