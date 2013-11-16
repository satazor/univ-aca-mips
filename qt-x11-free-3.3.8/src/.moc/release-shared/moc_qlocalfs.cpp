/****************************************************************************
** QLocalFs meta object code from reading C++ file 'qlocalfs.h'
**
** Created: Wed Oct 9 10:52:35 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qlocalfs.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QLocalFs::className() const
{
    return "QLocalFs";
}

QMetaObject *QLocalFs::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QLocalFs( "QLocalFs", &QLocalFs::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QLocalFs::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLocalFs", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QLocalFs::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLocalFs", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QLocalFs::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QNetworkProtocol::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QLocalFs", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QLocalFs.setMetaObject( metaObj );
    return metaObj;
}

void* QLocalFs::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QLocalFs" ) )
	return this;
    return QNetworkProtocol::qt_cast( clname );
}

bool QLocalFs::qt_invoke( int _id, QUObject* _o )
{
    return QNetworkProtocol::qt_invoke(_id,_o);
}

bool QLocalFs::qt_emit( int _id, QUObject* _o )
{
    return QNetworkProtocol::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QLocalFs::qt_property( int id, int f, QVariant* v)
{
    return QNetworkProtocol::qt_property( id, f, v);
}

bool QLocalFs::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
