/****************************************************************************
** ConnectionDialog meta object code from reading C++ file 'connectiondialog.h'
**
** Created: Wed Oct 9 11:05:13 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../connectiondialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ConnectionDialog::className() const
{
    return "ConnectionDialog";
}

QMetaObject *ConnectionDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ConnectionDialog( "ConnectionDialog", &ConnectionDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ConnectionDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConnectionDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ConnectionDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConnectionDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ConnectionDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUMethod slot_1 = {"addConnection", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "ConnectionContainer", QUParameter::Out },
	{ "sender", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "receiver", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "signal", &static_QUType_QString, 0, QUParameter::In },
	{ "slot", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"addConnection", 5, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "c", &static_QUType_ptr, "ConnectionContainer", QUParameter::In }
    };
    static const QUMethod slot_3 = {"updateConnectionState", 1, param_slot_3 };
    static const QUMethod slot_4 = {"okClicked", 0, 0 };
    static const QUMethod slot_5 = {"cancelClicked", 0, 0 };
    static const QUMethod slot_6 = {"deleteClicked", 0, 0 };
    static const QUMethod slot_7 = {"editSlots", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ "sender", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "receiver", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_8 = {"setDefault", 2, param_slot_8 };
    static const QUMethod slot_9 = {"updateEditSlotsButton", 0, 0 };
    static const QUMethod slot_10 = {"updateConnectionContainers", 0, 0 };
    static const QUMethod slot_11 = {"ensureConnectionVisible", 0, 0 };
    static const QUMethod slot_12 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "addConnection()", &slot_1, QMetaData::Public },
	{ "addConnection(QObject*,QObject*,const QString&,const QString&)", &slot_2, QMetaData::Public },
	{ "updateConnectionState(ConnectionContainer*)", &slot_3, QMetaData::Public },
	{ "okClicked()", &slot_4, QMetaData::Public },
	{ "cancelClicked()", &slot_5, QMetaData::Public },
	{ "deleteClicked()", &slot_6, QMetaData::Public },
	{ "editSlots()", &slot_7, QMetaData::Public },
	{ "setDefault(QObject*,QObject*)", &slot_8, QMetaData::Public },
	{ "updateEditSlotsButton()", &slot_9, QMetaData::Public },
	{ "updateConnectionContainers()", &slot_10, QMetaData::Public },
	{ "ensureConnectionVisible()", &slot_11, QMetaData::Public },
	{ "languageChange()", &slot_12, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ConnectionDialog", parentObject,
	slot_tbl, 13,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ConnectionDialog.setMetaObject( metaObj );
    return metaObj;
}

void* ConnectionDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ConnectionDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ConnectionDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: init(); break;
    case 1: addConnection(); break;
    case 2: static_QUType_ptr.set(_o,addConnection((QObject*)static_QUType_ptr.get(_o+1),(QObject*)static_QUType_ptr.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4))); break;
    case 3: updateConnectionState((ConnectionContainer*)static_QUType_ptr.get(_o+1)); break;
    case 4: okClicked(); break;
    case 5: cancelClicked(); break;
    case 6: deleteClicked(); break;
    case 7: editSlots(); break;
    case 8: setDefault((QObject*)static_QUType_ptr.get(_o+1),(QObject*)static_QUType_ptr.get(_o+2)); break;
    case 9: updateEditSlotsButton(); break;
    case 10: updateConnectionContainers(); break;
    case 11: ensureConnectionVisible(); break;
    case 12: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ConnectionDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ConnectionDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ConnectionDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
