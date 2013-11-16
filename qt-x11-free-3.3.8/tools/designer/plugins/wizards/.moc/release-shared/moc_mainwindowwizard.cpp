/****************************************************************************
** MainWindowWizardBase meta object code from reading C++ file 'mainwindowwizard.h'
**
** Created: Wed Oct 9 11:05:32 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../mainwindowwizard.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainWindowWizardBase::className() const
{
    return "MainWindowWizardBase";
}

QMetaObject *MainWindowWizardBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainWindowWizardBase( "MainWindowWizardBase", &MainWindowWizardBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainWindowWizardBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindowWizardBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainWindowWizardBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindowWizardBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainWindowWizardBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWizard::staticMetaObject();
    static const QUMethod slot_0 = {"setupToolbarPage", 0, 0 };
    static const QUMethod slot_1 = {"accept", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "n", &static_QUType_QString, 0, QUParameter::In },
	{ "pix", &static_QUType_varptr, "\x06", QUParameter::InOut }
    };
    static const QUMethod slot_2 = {"getPixmap", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "iface", &static_QUType_iface, "QUnknownInterface", QUParameter::In },
	{ "fw", &static_QUType_ptr, "DesignerFormWindow", QUParameter::In },
	{ "w", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_3 = {"setAppInterface", 3, param_slot_3 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QUMethod slot_5 = {"init", 0, 0 };
    static const QUMethod slot_6 = {"destroy", 0, 0 };
    static const QUMethod slot_7 = {"currentSettingChanged", 0, 0 };
    static const QUMethod slot_8 = {"toolbarActionDown", 0, 0 };
    static const QUMethod slot_9 = {"toolbarActionUp", 0, 0 };
    static const QUMethod slot_10 = {"toolbarAddAction", 0, 0 };
    static const QUMethod slot_11 = {"toolbarRemoveAction", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"currentToolbarChanged", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"pageSelected", 1, param_slot_13 };
    static const QMetaData slot_tbl[] = {
	{ "setupToolbarPage()", &slot_0, QMetaData::Public },
	{ "accept()", &slot_1, QMetaData::Public },
	{ "getPixmap(const QString&,QPixmap&)", &slot_2, QMetaData::Public },
	{ "setAppInterface(QUnknownInterface*,DesignerFormWindow*,QWidget*)", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected },
	{ "init()", &slot_5, QMetaData::Protected },
	{ "destroy()", &slot_6, QMetaData::Protected },
	{ "currentSettingChanged()", &slot_7, QMetaData::Protected },
	{ "toolbarActionDown()", &slot_8, QMetaData::Protected },
	{ "toolbarActionUp()", &slot_9, QMetaData::Protected },
	{ "toolbarAddAction()", &slot_10, QMetaData::Protected },
	{ "toolbarRemoveAction()", &slot_11, QMetaData::Protected },
	{ "currentToolbarChanged(const QString&)", &slot_12, QMetaData::Protected },
	{ "pageSelected(const QString&)", &slot_13, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainWindowWizardBase", parentObject,
	slot_tbl, 14,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainWindowWizardBase.setMetaObject( metaObj );
    return metaObj;
}

void* MainWindowWizardBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainWindowWizardBase" ) )
	return this;
    return QWizard::qt_cast( clname );
}

bool MainWindowWizardBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setupToolbarPage(); break;
    case 1: accept(); break;
    case 2: getPixmap((const QString&)static_QUType_QString.get(_o+1),(QPixmap&)*((QPixmap*)static_QUType_ptr.get(_o+2))); break;
    case 3: setAppInterface((QUnknownInterface*)static_QUType_iface.get(_o+1),(DesignerFormWindow*)static_QUType_ptr.get(_o+2),(QWidget*)static_QUType_ptr.get(_o+3)); break;
    case 4: languageChange(); break;
    case 5: init(); break;
    case 6: destroy(); break;
    case 7: currentSettingChanged(); break;
    case 8: toolbarActionDown(); break;
    case 9: toolbarActionUp(); break;
    case 10: toolbarAddAction(); break;
    case 11: toolbarRemoveAction(); break;
    case 12: currentToolbarChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 13: pageSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWizard::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainWindowWizardBase::qt_emit( int _id, QUObject* _o )
{
    return QWizard::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainWindowWizardBase::qt_property( int id, int f, QVariant* v)
{
    return QWizard::qt_property( id, f, v);
}

bool MainWindowWizardBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
