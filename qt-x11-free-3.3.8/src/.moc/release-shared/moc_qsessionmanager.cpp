/****************************************************************************
** QSessionManager meta object code from reading C++ file 'qsessionmanager.h'
**
** Created: Wed Oct 9 10:52:32 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qsessionmanager.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSessionManager::className() const
{
    return "QSessionManager";
}

QMetaObject *QSessionManager::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSessionManager( "QSessionManager", &QSessionManager::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSessionManager::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSessionManager", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSessionManager::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSessionManager", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSessionManager::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QSessionManager", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSessionManager.setMetaObject( metaObj );
    return metaObj;
}

void* QSessionManager::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSessionManager" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QSessionManager::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QSessionManager::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QSessionManager::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QSessionManager::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
