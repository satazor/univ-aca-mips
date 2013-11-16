/****************************************************************************
** SqlFormWizardBase meta object code from reading C++ file 'sqlformwizard.h'
**
** Created: Wed Oct 9 11:05:31 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sqlformwizard.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SqlFormWizardBase::className() const
{
    return "SqlFormWizardBase";
}

QMetaObject *SqlFormWizardBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SqlFormWizardBase( "SqlFormWizardBase", &SqlFormWizardBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SqlFormWizardBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SqlFormWizardBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SqlFormWizardBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SqlFormWizardBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SqlFormWizardBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWizard::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"addField", 0, 0 };
    static const QUMethod slot_4 = {"addSortField", 0, 0 };
    static const QUMethod slot_5 = {"fieldDown", 0, 0 };
    static const QUMethod slot_6 = {"fieldUp", 0, 0 };
    static const QUMethod slot_7 = {"reSortSortField", 0, 0 };
    static const QUMethod slot_8 = {"removeField", 0, 0 };
    static const QUMethod slot_9 = {"removeSortField", 0, 0 };
    static const QUMethod slot_10 = {"setupDatabaseConnections", 0, 0 };
    static const QUMethod slot_11 = {"sortFieldDown", 0, 0 };
    static const QUMethod slot_12 = {"sortFieldUp", 0, 0 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"connectionSelected", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"tableSelected", 1, param_slot_14 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "addField()", &slot_3, QMetaData::Protected },
	{ "addSortField()", &slot_4, QMetaData::Protected },
	{ "fieldDown()", &slot_5, QMetaData::Protected },
	{ "fieldUp()", &slot_6, QMetaData::Protected },
	{ "reSortSortField()", &slot_7, QMetaData::Protected },
	{ "removeField()", &slot_8, QMetaData::Protected },
	{ "removeSortField()", &slot_9, QMetaData::Protected },
	{ "setupDatabaseConnections()", &slot_10, QMetaData::Protected },
	{ "sortFieldDown()", &slot_11, QMetaData::Protected },
	{ "sortFieldUp()", &slot_12, QMetaData::Protected },
	{ "connectionSelected(const QString&)", &slot_13, QMetaData::Protected },
	{ "tableSelected(const QString&)", &slot_14, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"SqlFormWizardBase", parentObject,
	slot_tbl, 15,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SqlFormWizardBase.setMetaObject( metaObj );
    return metaObj;
}

void* SqlFormWizardBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SqlFormWizardBase" ) )
	return this;
    return QWizard::qt_cast( clname );
}

bool SqlFormWizardBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: addField(); break;
    case 4: addSortField(); break;
    case 5: fieldDown(); break;
    case 6: fieldUp(); break;
    case 7: reSortSortField(); break;
    case 8: removeField(); break;
    case 9: removeSortField(); break;
    case 10: setupDatabaseConnections(); break;
    case 11: sortFieldDown(); break;
    case 12: sortFieldUp(); break;
    case 13: connectionSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 14: tableSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWizard::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SqlFormWizardBase::qt_emit( int _id, QUObject* _o )
{
    return QWizard::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SqlFormWizardBase::qt_property( int id, int f, QVariant* v)
{
    return QWizard::qt_property( id, f, v);
}

bool SqlFormWizardBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
