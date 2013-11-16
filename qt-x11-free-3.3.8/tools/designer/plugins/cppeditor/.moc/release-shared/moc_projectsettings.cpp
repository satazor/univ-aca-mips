/****************************************************************************
** CppProjectSettings meta object code from reading C++ file 'projectsettings.h'
**
** Created: Wed Oct 9 11:05:41 2013
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

const char *CppProjectSettings::className() const
{
    return "CppProjectSettings";
}

QMetaObject *CppProjectSettings::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CppProjectSettings( "CppProjectSettings", &CppProjectSettings::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CppProjectSettings::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CppProjectSettings", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CppProjectSettings::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CppProjectSettings", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CppProjectSettings::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "iface", &static_QUType_iface, "QUnknownInterface", QUParameter::In }
    };
    static const QUMethod slot_0 = {"reInit", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "iface", &static_QUType_iface, "QUnknownInterface", QUParameter::In }
    };
    static const QUMethod slot_1 = {"save", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"configChanged", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"libsChanged", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"definesChanged", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"includesChanged", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "plat", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"configPlatformChanged", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "plat", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"libsPlatformChanged", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "plat", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"definesPlatformChanged", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "plat", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"includesPlatformChanged", 1, param_slot_9 };
    static const QUMethod slot_10 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "reInit(QUnknownInterface*)", &slot_0, QMetaData::Public },
	{ "save(QUnknownInterface*)", &slot_1, QMetaData::Public },
	{ "configChanged(const QString&)", &slot_2, QMetaData::Public },
	{ "libsChanged(const QString&)", &slot_3, QMetaData::Public },
	{ "definesChanged(const QString&)", &slot_4, QMetaData::Public },
	{ "includesChanged(const QString&)", &slot_5, QMetaData::Public },
	{ "configPlatformChanged(const QString&)", &slot_6, QMetaData::Public },
	{ "libsPlatformChanged(const QString&)", &slot_7, QMetaData::Public },
	{ "definesPlatformChanged(const QString&)", &slot_8, QMetaData::Public },
	{ "includesPlatformChanged(const QString&)", &slot_9, QMetaData::Public },
	{ "languageChange()", &slot_10, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CppProjectSettings", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CppProjectSettings.setMetaObject( metaObj );
    return metaObj;
}

void* CppProjectSettings::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CppProjectSettings" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool CppProjectSettings::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: reInit((QUnknownInterface*)static_QUType_iface.get(_o+1)); break;
    case 1: save((QUnknownInterface*)static_QUType_iface.get(_o+1)); break;
    case 2: configChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: libsChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: definesChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: includesChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: configPlatformChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: libsPlatformChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: definesPlatformChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 9: includesPlatformChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 10: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CppProjectSettings::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CppProjectSettings::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool CppProjectSettings::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
