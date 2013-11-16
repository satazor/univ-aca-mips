/****************************************************************************
** QSqlDriverPlugin meta object code from reading C++ file 'qsqldriverplugin.h'
**
** Created: Wed Oct 9 10:53:11 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sql/qsqldriverplugin.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSqlDriverPlugin::className() const
{
    return "QSqlDriverPlugin";
}

QMetaObject *QSqlDriverPlugin::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSqlDriverPlugin( "QSqlDriverPlugin", &QSqlDriverPlugin::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSqlDriverPlugin::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSqlDriverPlugin", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSqlDriverPlugin::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSqlDriverPlugin", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSqlDriverPlugin::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QGPlugin::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QSqlDriverPlugin", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSqlDriverPlugin.setMetaObject( metaObj );
    return metaObj;
}

void* QSqlDriverPlugin::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSqlDriverPlugin" ) )
	return this;
    return QGPlugin::qt_cast( clname );
}

bool QSqlDriverPlugin::qt_invoke( int _id, QUObject* _o )
{
    return QGPlugin::qt_invoke(_id,_o);
}

bool QSqlDriverPlugin::qt_emit( int _id, QUObject* _o )
{
    return QGPlugin::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QSqlDriverPlugin::qt_property( int id, int f, QVariant* v)
{
    return QGPlugin::qt_property( id, f, v);
}

bool QSqlDriverPlugin::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
