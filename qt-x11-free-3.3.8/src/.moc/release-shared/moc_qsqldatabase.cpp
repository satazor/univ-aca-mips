/****************************************************************************
** QSqlDatabase meta object code from reading C++ file 'qsqldatabase.h'
**
** Created: Wed Oct 9 10:53:09 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sql/qsqldatabase.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QSqlDatabase::className() const
{
    return "QSqlDatabase";
}

QMetaObject *QSqlDatabase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSqlDatabase( "QSqlDatabase", &QSqlDatabase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSqlDatabase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSqlDatabase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSqlDatabase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSqlDatabase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSqlDatabase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[6] = {
 	{ "QString","databaseName", 0x3000103, &QSqlDatabase::metaObj, 0, -1 },
	{ "QString","userName", 0x3000103, &QSqlDatabase::metaObj, 0, -1 },
	{ "QString","password", 0x3000103, &QSqlDatabase::metaObj, 0, -1 },
	{ "QString","hostName", 0x3000103, &QSqlDatabase::metaObj, 0, -1 },
	{ "int","port", 0x10000103, &QSqlDatabase::metaObj, 0, -1 },
	{ "QString","connectOptions", 0x3000103, &QSqlDatabase::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QSqlDatabase", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 6,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSqlDatabase.setMetaObject( metaObj );
    return metaObj;
}

void* QSqlDatabase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSqlDatabase" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QSqlDatabase::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QSqlDatabase::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QSqlDatabase::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setDatabaseName(v->asString()); break;
	case 1: *v = QVariant( this->databaseName() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setUserName(v->asString()); break;
	case 1: *v = QVariant( this->userName() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setPassword(v->asString()); break;
	case 1: *v = QVariant( this->password() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setHostName(v->asString()); break;
	case 1: *v = QVariant( this->hostName() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setPort(v->asInt()); break;
	case 1: *v = QVariant( this->port() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setConnectOptions(v->asString()); break;
	case 1: *v = QVariant( this->connectOptions() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QObject::qt_property( id, f, v );
    }
    return TRUE;
}

bool QSqlDatabase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
