/****************************************************************************
** ProjectSettingsBase meta object code from reading C++ file 'projectsettings.h'
**
** Created: Wed Oct 9 11:05:09 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../projectsettings.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ProjectSettingsBase::className() const
{
    return "ProjectSettingsBase";
}

QMetaObject *ProjectSettingsBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ProjectSettingsBase( "ProjectSettingsBase", &ProjectSettingsBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ProjectSettingsBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProjectSettingsBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ProjectSettingsBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProjectSettingsBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ProjectSettingsBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"chooseDatabaseFile", 0, 0 };
    static const QUMethod slot_2 = {"chooseProjectFile", 0, 0 };
    static const QUMethod slot_3 = {"destroy", 0, 0 };
    static const QUMethod slot_4 = {"helpClicked", 0, 0 };
    static const QUMethod slot_5 = {"init", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"languageChanged", 1, param_slot_6 };
    static const QUMethod slot_7 = {"okClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "chooseDatabaseFile()", &slot_1, QMetaData::Protected },
	{ "chooseProjectFile()", &slot_2, QMetaData::Protected },
	{ "destroy()", &slot_3, QMetaData::Protected },
	{ "helpClicked()", &slot_4, QMetaData::Protected },
	{ "init()", &slot_5, QMetaData::Protected },
	{ "languageChanged(const QString&)", &slot_6, QMetaData::Protected },
	{ "okClicked()", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ProjectSettingsBase", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ProjectSettingsBase.setMetaObject( metaObj );
    return metaObj;
}

void* ProjectSettingsBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ProjectSettingsBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ProjectSettingsBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: chooseDatabaseFile(); break;
    case 2: chooseProjectFile(); break;
    case 3: destroy(); break;
    case 4: helpClicked(); break;
    case 5: init(); break;
    case 6: languageChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: okClicked(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ProjectSettingsBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ProjectSettingsBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ProjectSettingsBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
