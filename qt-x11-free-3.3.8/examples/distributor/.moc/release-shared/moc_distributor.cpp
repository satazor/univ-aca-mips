/****************************************************************************
** Distributor meta object code from reading C++ file 'distributor.h'
**
** Created: Wed Oct 9 11:07:37 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../distributor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Distributor::className() const
{
    return "Distributor";
}

QMetaObject *Distributor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Distributor( "Distributor", &Distributor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Distributor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Distributor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Distributor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Distributor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Distributor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWizard::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "filename", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"checkLibFilename", 1, param_slot_0 };
    static const QUMethod slot_1 = {"browseLibFilename", 0, 0 };
    static const QUMethod slot_2 = {"checkLibData", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "filename", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"checkInstallationPrefix", 1, param_slot_3 };
    static const QUMethod slot_4 = {"browseInstallationPrefix", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "autoset", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"toggleAutoSet", 1, param_slot_5 };
    static const QUMethod slot_6 = {"accept", 0, 0 };
    static const QUMethod slot_7 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "checkLibFilename(const QString&)", &slot_0, QMetaData::Public },
	{ "browseLibFilename()", &slot_1, QMetaData::Public },
	{ "checkLibData()", &slot_2, QMetaData::Public },
	{ "checkInstallationPrefix(const QString&)", &slot_3, QMetaData::Public },
	{ "browseInstallationPrefix()", &slot_4, QMetaData::Public },
	{ "toggleAutoSet(bool)", &slot_5, QMetaData::Public },
	{ "accept()", &slot_6, QMetaData::Public },
	{ "languageChange()", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Distributor", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Distributor.setMetaObject( metaObj );
    return metaObj;
}

void* Distributor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Distributor" ) )
	return this;
    return QWizard::qt_cast( clname );
}

bool Distributor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: checkLibFilename((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: browseLibFilename(); break;
    case 2: checkLibData(); break;
    case 3: checkInstallationPrefix((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: browseInstallationPrefix(); break;
    case 5: toggleAutoSet((bool)static_QUType_bool.get(_o+1)); break;
    case 6: accept(); break;
    case 7: languageChange(); break;
    default:
	return QWizard::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Distributor::qt_emit( int _id, QUObject* _o )
{
    return QWizard::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Distributor::qt_property( int id, int f, QVariant* v)
{
    return QWizard::qt_property( id, f, v);
}

bool Distributor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
