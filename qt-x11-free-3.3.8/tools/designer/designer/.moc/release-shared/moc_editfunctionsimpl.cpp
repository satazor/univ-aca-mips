/****************************************************************************
** EditFunctions meta object code from reading C++ file 'editfunctionsimpl.h'
**
** Created: Wed Oct 9 11:04:59 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../editfunctionsimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *EditFunctions::className() const
{
    return "EditFunctions";
}

QMetaObject *EditFunctions::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EditFunctions( "EditFunctions", &EditFunctions::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EditFunctions::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditFunctions", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EditFunctions::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditFunctions", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EditFunctions::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = EditFunctionsBase::staticMetaObject();
    static const QUMethod slot_0 = {"okClicked", 0, 0 };
    static const QUMethod slot_1 = {"functionRemove", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"currentItemChanged", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "txt", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"currentTextChanged", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"currentSpecifierChanged", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "a", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"currentAccessChanged", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "type", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"currentReturnTypeChanged", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "type", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"currentTypeChanged", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "justSlots", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"displaySlots", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"emitItemRenamed", 3, param_slot_9 };
    static const QMetaData slot_tbl[] = {
	{ "okClicked()", &slot_0, QMetaData::Protected },
	{ "functionRemove()", &slot_1, QMetaData::Protected },
	{ "currentItemChanged(QListViewItem*)", &slot_2, QMetaData::Protected },
	{ "currentTextChanged(const QString&)", &slot_3, QMetaData::Protected },
	{ "currentSpecifierChanged(const QString&)", &slot_4, QMetaData::Protected },
	{ "currentAccessChanged(const QString&)", &slot_5, QMetaData::Protected },
	{ "currentReturnTypeChanged(const QString&)", &slot_6, QMetaData::Protected },
	{ "currentTypeChanged(const QString&)", &slot_7, QMetaData::Protected },
	{ "displaySlots(bool)", &slot_8, QMetaData::Protected },
	{ "emitItemRenamed(QListViewItem*,int,const QString&)", &slot_9, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"itemRenamed", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "itemRenamed(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"EditFunctions", parentObject,
	slot_tbl, 10,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EditFunctions.setMetaObject( metaObj );
    return metaObj;
}

void* EditFunctions::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EditFunctions" ) )
	return this;
    return EditFunctionsBase::qt_cast( clname );
}

// SIGNAL itemRenamed
void EditFunctions::itemRenamed( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool EditFunctions::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: okClicked(); break;
    case 1: functionRemove(); break;
    case 2: currentItemChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: currentTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: currentSpecifierChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: currentAccessChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: currentReturnTypeChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: currentTypeChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: displaySlots((bool)static_QUType_bool.get(_o+1)); break;
    case 9: emitItemRenamed((QListViewItem*)static_QUType_ptr.get(_o+1),(int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    default:
	return EditFunctionsBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool EditFunctions::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: itemRenamed((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return EditFunctionsBase::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool EditFunctions::qt_property( int id, int f, QVariant* v)
{
    return EditFunctionsBase::qt_property( id, f, v);
}

bool EditFunctions::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
