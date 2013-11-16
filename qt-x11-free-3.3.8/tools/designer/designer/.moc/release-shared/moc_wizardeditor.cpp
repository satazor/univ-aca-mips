/****************************************************************************
** WizardEditorBase meta object code from reading C++ file 'wizardeditor.h'
**
** Created: Wed Oct 9 11:05:12 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../wizardeditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *WizardEditorBase::className() const
{
    return "WizardEditorBase";
}

QMetaObject *WizardEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WizardEditorBase( "WizardEditorBase", &WizardEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WizardEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WizardEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WizardEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WizardEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WizardEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"addClicked", 0, 0 };
    static const QUMethod slot_4 = {"applyClicked", 0, 0 };
    static const QUMethod slot_5 = {"cancelClicked", 0, 0 };
    static const QUMethod slot_6 = {"downClicked", 0, 0 };
    static const QUMethod slot_7 = {"helpClicked", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"itemHighlighted", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"itemSelected", 1, param_slot_9 };
    static const QUMethod slot_10 = {"okClicked", 0, 0 };
    static const QUMethod slot_11 = {"removeClicked", 0, 0 };
    static const QUMethod slot_12 = {"upClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "addClicked()", &slot_3, QMetaData::Protected },
	{ "applyClicked()", &slot_4, QMetaData::Protected },
	{ "cancelClicked()", &slot_5, QMetaData::Protected },
	{ "downClicked()", &slot_6, QMetaData::Protected },
	{ "helpClicked()", &slot_7, QMetaData::Protected },
	{ "itemHighlighted(int)", &slot_8, QMetaData::Protected },
	{ "itemSelected(int)", &slot_9, QMetaData::Protected },
	{ "okClicked()", &slot_10, QMetaData::Protected },
	{ "removeClicked()", &slot_11, QMetaData::Protected },
	{ "upClicked()", &slot_12, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"WizardEditorBase", parentObject,
	slot_tbl, 13,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WizardEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* WizardEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WizardEditorBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool WizardEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: addClicked(); break;
    case 4: applyClicked(); break;
    case 5: cancelClicked(); break;
    case 6: downClicked(); break;
    case 7: helpClicked(); break;
    case 8: itemHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 9: itemSelected((int)static_QUType_int.get(_o+1)); break;
    case 10: okClicked(); break;
    case 11: removeClicked(); break;
    case 12: upClicked(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool WizardEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool WizardEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool WizardEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
