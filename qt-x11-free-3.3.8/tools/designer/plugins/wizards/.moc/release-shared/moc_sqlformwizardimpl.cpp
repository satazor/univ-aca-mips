/****************************************************************************
** SqlFormWizard meta object code from reading C++ file 'sqlformwizardimpl.h'
**
** Created: Wed Oct 9 11:05:31 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sqlformwizardimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SqlFormWizard::className() const
{
    return "SqlFormWizard";
}

QMetaObject *SqlFormWizard::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SqlFormWizard( "SqlFormWizard", &SqlFormWizard::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SqlFormWizard::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SqlFormWizard", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SqlFormWizard::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SqlFormWizard", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SqlFormWizard::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = SqlFormWizardBase::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"connectionSelected", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"tableSelected", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "populate", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"autoPopulate", 1, param_slot_2 };
    static const QUMethod slot_3 = {"fieldDown", 0, 0 };
    static const QUMethod slot_4 = {"fieldUp", 0, 0 };
    static const QUMethod slot_5 = {"removeField", 0, 0 };
    static const QUMethod slot_6 = {"addField", 0, 0 };
    static const QUMethod slot_7 = {"setupDatabaseConnections", 0, 0 };
    static const QUMethod slot_8 = {"accept", 0, 0 };
    static const QUMethod slot_9 = {"addSortField", 0, 0 };
    static const QUMethod slot_10 = {"reSortSortField", 0, 0 };
    static const QUMethod slot_11 = {"removeSortField", 0, 0 };
    static const QUMethod slot_12 = {"sortFieldUp", 0, 0 };
    static const QUMethod slot_13 = {"sortFieldDown", 0, 0 };
    static const QUMethod slot_14 = {"nextPageClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "connectionSelected(const QString&)", &slot_0, QMetaData::Protected },
	{ "tableSelected(const QString&)", &slot_1, QMetaData::Protected },
	{ "autoPopulate(bool)", &slot_2, QMetaData::Protected },
	{ "fieldDown()", &slot_3, QMetaData::Protected },
	{ "fieldUp()", &slot_4, QMetaData::Protected },
	{ "removeField()", &slot_5, QMetaData::Protected },
	{ "addField()", &slot_6, QMetaData::Protected },
	{ "setupDatabaseConnections()", &slot_7, QMetaData::Protected },
	{ "accept()", &slot_8, QMetaData::Protected },
	{ "addSortField()", &slot_9, QMetaData::Protected },
	{ "reSortSortField()", &slot_10, QMetaData::Protected },
	{ "removeSortField()", &slot_11, QMetaData::Protected },
	{ "sortFieldUp()", &slot_12, QMetaData::Protected },
	{ "sortFieldDown()", &slot_13, QMetaData::Protected },
	{ "nextPageClicked()", &slot_14, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"SqlFormWizard", parentObject,
	slot_tbl, 15,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SqlFormWizard.setMetaObject( metaObj );
    return metaObj;
}

void* SqlFormWizard::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SqlFormWizard" ) )
	return this;
    return SqlFormWizardBase::qt_cast( clname );
}

bool SqlFormWizard::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: connectionSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: tableSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: autoPopulate((bool)static_QUType_bool.get(_o+1)); break;
    case 3: fieldDown(); break;
    case 4: fieldUp(); break;
    case 5: removeField(); break;
    case 6: addField(); break;
    case 7: setupDatabaseConnections(); break;
    case 8: accept(); break;
    case 9: addSortField(); break;
    case 10: reSortSortField(); break;
    case 11: removeSortField(); break;
    case 12: sortFieldUp(); break;
    case 13: sortFieldDown(); break;
    case 14: nextPageClicked(); break;
    default:
	return SqlFormWizardBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SqlFormWizard::qt_emit( int _id, QUObject* _o )
{
    return SqlFormWizardBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SqlFormWizard::qt_property( int id, int f, QVariant* v)
{
    return SqlFormWizardBase::qt_property( id, f, v);
}

bool SqlFormWizard::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
