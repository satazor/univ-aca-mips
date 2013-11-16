/****************************************************************************
** ConfigToolboxDialog meta object code from reading C++ file 'configtoolboxdialog.h'
**
** Created: Wed Oct 9 11:05:14 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../configtoolboxdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ConfigToolboxDialog::className() const
{
    return "ConfigToolboxDialog";
}

QMetaObject *ConfigToolboxDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ConfigToolboxDialog( "ConfigToolboxDialog", &ConfigToolboxDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ConfigToolboxDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConfigToolboxDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ConfigToolboxDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConfigToolboxDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ConfigToolboxDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"addTool", 0, 0 };
    static const QUMethod slot_1 = {"removeTool", 0, 0 };
    static const QUMethod slot_2 = {"moveToolUp", 0, 0 };
    static const QUMethod slot_3 = {"moveToolDown", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"currentToolChanged", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"currentCommonToolChanged", 1, param_slot_5 };
    static const QUMethod slot_6 = {"ok", 0, 0 };
    static const QUMethod slot_7 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "addTool()", &slot_0, QMetaData::Public },
	{ "removeTool()", &slot_1, QMetaData::Public },
	{ "moveToolUp()", &slot_2, QMetaData::Public },
	{ "moveToolDown()", &slot_3, QMetaData::Public },
	{ "currentToolChanged(QListViewItem*)", &slot_4, QMetaData::Public },
	{ "currentCommonToolChanged(QListViewItem*)", &slot_5, QMetaData::Public },
	{ "ok()", &slot_6, QMetaData::Public },
	{ "languageChange()", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ConfigToolboxDialog", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ConfigToolboxDialog.setMetaObject( metaObj );
    return metaObj;
}

void* ConfigToolboxDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ConfigToolboxDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ConfigToolboxDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addTool(); break;
    case 1: removeTool(); break;
    case 2: moveToolUp(); break;
    case 3: moveToolDown(); break;
    case 4: currentToolChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: currentCommonToolChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: ok(); break;
    case 7: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ConfigToolboxDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ConfigToolboxDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ConfigToolboxDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
