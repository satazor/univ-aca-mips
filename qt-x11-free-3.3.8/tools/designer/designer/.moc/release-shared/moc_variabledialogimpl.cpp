/****************************************************************************
** VariableDialog meta object code from reading C++ file 'variabledialogimpl.h'
**
** Created: Wed Oct 9 11:05:00 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../variabledialogimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *VariableDialog::className() const
{
    return "VariableDialog";
}

QMetaObject *VariableDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_VariableDialog( "VariableDialog", &VariableDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString VariableDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "VariableDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString VariableDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "VariableDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* VariableDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = VariableDialogBase::staticMetaObject();
    static const QUMethod slot_0 = {"okClicked", 0, 0 };
    static const QUMethod slot_1 = {"addVariable", 0, 0 };
    static const QUMethod slot_2 = {"deleteVariable", 0, 0 };
    static const QUMethod slot_3 = {"nameChanged", 0, 0 };
    static const QUMethod slot_4 = {"accessChanged", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"currentItemChanged", 1, param_slot_5 };
    static const QMetaData slot_tbl[] = {
	{ "okClicked()", &slot_0, QMetaData::Protected },
	{ "addVariable()", &slot_1, QMetaData::Protected },
	{ "deleteVariable()", &slot_2, QMetaData::Protected },
	{ "nameChanged()", &slot_3, QMetaData::Protected },
	{ "accessChanged()", &slot_4, QMetaData::Protected },
	{ "currentItemChanged(QListViewItem*)", &slot_5, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"VariableDialog", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_VariableDialog.setMetaObject( metaObj );
    return metaObj;
}

void* VariableDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "VariableDialog" ) )
	return this;
    return VariableDialogBase::qt_cast( clname );
}

bool VariableDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: okClicked(); break;
    case 1: addVariable(); break;
    case 2: deleteVariable(); break;
    case 3: nameChanged(); break;
    case 4: accessChanged(); break;
    case 5: currentItemChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return VariableDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool VariableDialog::qt_emit( int _id, QUObject* _o )
{
    return VariableDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool VariableDialog::qt_property( int id, int f, QVariant* v)
{
    return VariableDialogBase::qt_property( id, f, v);
}

bool VariableDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
