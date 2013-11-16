/****************************************************************************
** EditFunctionsBase meta object code from reading C++ file 'editfunctions.h'
**
** Created: Wed Oct 9 11:05:05 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../editfunctions.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *EditFunctionsBase::className() const
{
    return "EditFunctionsBase";
}

QMetaObject *EditFunctionsBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EditFunctionsBase( "EditFunctionsBase", &EditFunctionsBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EditFunctionsBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditFunctionsBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EditFunctionsBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditFunctionsBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EditFunctionsBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_1 = {"currentItemChanged", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"currentSpecifierChanged", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"currentTextChanged", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"currentReturnTypeChanged", 1, param_slot_4 };
    static const QUMethod slot_5 = {"destroy", 0, 0 };
    static const QUMethod slot_6 = {"init", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"currentAccessChanged", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"currentTypeChanged", 1, param_slot_8 };
    static const QUMethod slot_9 = {"okClicked", 0, 0 };
    static const QUMethod slot_10 = {"functionAdd", 0, 0 };
    static const QUMethod slot_11 = {"functionRemove", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"displaySlots", 1, param_slot_12 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "currentItemChanged(QListViewItem*)", &slot_1, QMetaData::Protected },
	{ "currentSpecifierChanged(const QString&)", &slot_2, QMetaData::Protected },
	{ "currentTextChanged(const QString&)", &slot_3, QMetaData::Protected },
	{ "currentReturnTypeChanged(const QString&)", &slot_4, QMetaData::Protected },
	{ "destroy()", &slot_5, QMetaData::Protected },
	{ "init()", &slot_6, QMetaData::Protected },
	{ "currentAccessChanged(const QString&)", &slot_7, QMetaData::Protected },
	{ "currentTypeChanged(const QString&)", &slot_8, QMetaData::Protected },
	{ "okClicked()", &slot_9, QMetaData::Protected },
	{ "functionAdd()", &slot_10, QMetaData::Protected },
	{ "functionRemove()", &slot_11, QMetaData::Protected },
	{ "displaySlots(bool)", &slot_12, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"EditFunctionsBase", parentObject,
	slot_tbl, 13,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EditFunctionsBase.setMetaObject( metaObj );
    return metaObj;
}

void* EditFunctionsBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EditFunctionsBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool EditFunctionsBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: currentItemChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 2: currentSpecifierChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: currentTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: currentReturnTypeChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: destroy(); break;
    case 6: init(); break;
    case 7: currentAccessChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: currentTypeChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 9: okClicked(); break;
    case 10: functionAdd(); break;
    case 11: functionRemove(); break;
    case 12: displaySlots((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool EditFunctionsBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool EditFunctionsBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool EditFunctionsBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
