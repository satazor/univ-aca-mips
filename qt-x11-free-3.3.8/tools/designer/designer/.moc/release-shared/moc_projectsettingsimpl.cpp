/****************************************************************************
** ProjectSettings meta object code from reading C++ file 'projectsettingsimpl.h'
**
** Created: Wed Oct 9 11:04:54 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../projectsettingsimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ProjectSettings::className() const
{
    return "ProjectSettings";
}

QMetaObject *ProjectSettings::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ProjectSettings( "ProjectSettings", &ProjectSettings::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ProjectSettings::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProjectSettings", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ProjectSettings::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProjectSettings", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ProjectSettings::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ProjectSettingsBase::staticMetaObject();
    static const QUMethod slot_0 = {"chooseDatabaseFile", 0, 0 };
    static const QUMethod slot_1 = {"chooseProjectFile", 0, 0 };
    static const QUMethod slot_2 = {"helpClicked", 0, 0 };
    static const QUMethod slot_3 = {"okClicked", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "lang", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"languageChanged", 1, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "chooseDatabaseFile()", &slot_0, QMetaData::Protected },
	{ "chooseProjectFile()", &slot_1, QMetaData::Protected },
	{ "helpClicked()", &slot_2, QMetaData::Protected },
	{ "okClicked()", &slot_3, QMetaData::Protected },
	{ "languageChanged(const QString&)", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ProjectSettings", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ProjectSettings.setMetaObject( metaObj );
    return metaObj;
}

void* ProjectSettings::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ProjectSettings" ) )
	return this;
    return ProjectSettingsBase::qt_cast( clname );
}

bool ProjectSettings::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: chooseDatabaseFile(); break;
    case 1: chooseProjectFile(); break;
    case 2: helpClicked(); break;
    case 3: okClicked(); break;
    case 4: languageChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return ProjectSettingsBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ProjectSettings::qt_emit( int _id, QUObject* _o )
{
    return ProjectSettingsBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ProjectSettings::qt_property( int id, int f, QVariant* v)
{
    return ProjectSettingsBase::qt_property( id, f, v);
}

bool ProjectSettings::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
