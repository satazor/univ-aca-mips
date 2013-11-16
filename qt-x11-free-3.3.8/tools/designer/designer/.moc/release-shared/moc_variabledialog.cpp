/****************************************************************************
** VariableDialogBase meta object code from reading C++ file 'variabledialog.h'
**
** Created: Wed Oct 9 11:05:14 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../variabledialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *VariableDialogBase::className() const
{
    return "VariableDialogBase";
}

QMetaObject *VariableDialogBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_VariableDialogBase( "VariableDialogBase", &VariableDialogBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString VariableDialogBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "VariableDialogBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString VariableDialogBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "VariableDialogBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* VariableDialogBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"addVariable", 0, 0 };
    static const QUMethod slot_1 = {"deleteVariable", 0, 0 };
    static const QUMethod slot_2 = {"accessChanged", 0, 0 };
    static const QUMethod slot_3 = {"nameChanged", 0, 0 };
    static const QUMethod slot_4 = {"okClicked", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"currentItemChanged", 1, param_slot_5 };
    static const QUMethod slot_6 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "addVariable()", &slot_0, QMetaData::Public },
	{ "deleteVariable()", &slot_1, QMetaData::Public },
	{ "accessChanged()", &slot_2, QMetaData::Public },
	{ "nameChanged()", &slot_3, QMetaData::Public },
	{ "okClicked()", &slot_4, QMetaData::Public },
	{ "currentItemChanged(QListViewItem*)", &slot_5, QMetaData::Public },
	{ "languageChange()", &slot_6, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"VariableDialogBase", parentObject,
	slot_tbl, 7,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_VariableDialogBase.setMetaObject( metaObj );
    return metaObj;
}

void* VariableDialogBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "VariableDialogBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool VariableDialogBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addVariable(); break;
    case 1: deleteVariable(); break;
    case 2: accessChanged(); break;
    case 3: nameChanged(); break;
    case 4: okClicked(); break;
    case 5: currentItemChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool VariableDialogBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool VariableDialogBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool VariableDialogBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
