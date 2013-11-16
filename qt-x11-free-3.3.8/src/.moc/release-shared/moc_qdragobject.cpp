/****************************************************************************
** QDragObject meta object code from reading C++ file 'qdragobject.h'
**
** Created: Wed Oct 9 10:52:28 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qdragobject.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDragObject::className() const
{
    return "QDragObject";
}

QMetaObject *QDragObject::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDragObject( "QDragObject", &QDragObject::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDragObject::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDragObject", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDragObject::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDragObject", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDragObject::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDragObject", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDragObject.setMetaObject( metaObj );
    return metaObj;
}

void* QDragObject::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDragObject" ) )
	return this;
    if ( !qstrcmp( clname, "QMimeSource" ) )
	return (QMimeSource*)this;
    return QObject::qt_cast( clname );
}

bool QDragObject::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QDragObject::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDragObject::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QDragObject::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QStoredDrag::className() const
{
    return "QStoredDrag";
}

QMetaObject *QStoredDrag::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QStoredDrag( "QStoredDrag", &QStoredDrag::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QStoredDrag::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QStoredDrag", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QStoredDrag::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QStoredDrag", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QStoredDrag::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDragObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QStoredDrag", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QStoredDrag.setMetaObject( metaObj );
    return metaObj;
}

void* QStoredDrag::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QStoredDrag" ) )
	return this;
    return QDragObject::qt_cast( clname );
}

bool QStoredDrag::qt_invoke( int _id, QUObject* _o )
{
    return QDragObject::qt_invoke(_id,_o);
}

bool QStoredDrag::qt_emit( int _id, QUObject* _o )
{
    return QDragObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QStoredDrag::qt_property( int id, int f, QVariant* v)
{
    return QDragObject::qt_property( id, f, v);
}

bool QStoredDrag::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QTextDrag::className() const
{
    return "QTextDrag";
}

QMetaObject *QTextDrag::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTextDrag( "QTextDrag", &QTextDrag::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTextDrag::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextDrag", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTextDrag::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextDrag", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTextDrag::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDragObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QTextDrag", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTextDrag.setMetaObject( metaObj );
    return metaObj;
}

void* QTextDrag::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTextDrag" ) )
	return this;
    return QDragObject::qt_cast( clname );
}

bool QTextDrag::qt_invoke( int _id, QUObject* _o )
{
    return QDragObject::qt_invoke(_id,_o);
}

bool QTextDrag::qt_emit( int _id, QUObject* _o )
{
    return QDragObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QTextDrag::qt_property( int id, int f, QVariant* v)
{
    return QDragObject::qt_property( id, f, v);
}

bool QTextDrag::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QImageDrag::className() const
{
    return "QImageDrag";
}

QMetaObject *QImageDrag::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QImageDrag( "QImageDrag", &QImageDrag::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QImageDrag::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QImageDrag", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QImageDrag::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QImageDrag", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QImageDrag::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDragObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QImageDrag", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QImageDrag.setMetaObject( metaObj );
    return metaObj;
}

void* QImageDrag::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QImageDrag" ) )
	return this;
    return QDragObject::qt_cast( clname );
}

bool QImageDrag::qt_invoke( int _id, QUObject* _o )
{
    return QDragObject::qt_invoke(_id,_o);
}

bool QImageDrag::qt_emit( int _id, QUObject* _o )
{
    return QDragObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QImageDrag::qt_property( int id, int f, QVariant* v)
{
    return QDragObject::qt_property( id, f, v);
}

bool QImageDrag::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QUriDrag::className() const
{
    return "QUriDrag";
}

QMetaObject *QUriDrag::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QUriDrag( "QUriDrag", &QUriDrag::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QUriDrag::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QUriDrag", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QUriDrag::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QUriDrag", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QUriDrag::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QStoredDrag::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QUriDrag", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QUriDrag.setMetaObject( metaObj );
    return metaObj;
}

void* QUriDrag::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QUriDrag" ) )
	return this;
    return QStoredDrag::qt_cast( clname );
}

bool QUriDrag::qt_invoke( int _id, QUObject* _o )
{
    return QStoredDrag::qt_invoke(_id,_o);
}

bool QUriDrag::qt_emit( int _id, QUObject* _o )
{
    return QStoredDrag::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QUriDrag::qt_property( int id, int f, QVariant* v)
{
    return QStoredDrag::qt_property( id, f, v);
}

bool QUriDrag::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QColorDrag::className() const
{
    return "QColorDrag";
}

QMetaObject *QColorDrag::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QColorDrag( "QColorDrag", &QColorDrag::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QColorDrag::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QColorDrag", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QColorDrag::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QColorDrag", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QColorDrag::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QStoredDrag::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QColorDrag", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QColorDrag.setMetaObject( metaObj );
    return metaObj;
}

void* QColorDrag::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QColorDrag" ) )
	return this;
    return QStoredDrag::qt_cast( clname );
}

bool QColorDrag::qt_invoke( int _id, QUObject* _o )
{
    return QStoredDrag::qt_invoke(_id,_o);
}

bool QColorDrag::qt_emit( int _id, QUObject* _o )
{
    return QStoredDrag::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QColorDrag::qt_property( int id, int f, QVariant* v)
{
    return QStoredDrag::qt_property( id, f, v);
}

bool QColorDrag::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDragManager::className() const
{
    return "QDragManager";
}

QMetaObject *QDragManager::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDragManager( "QDragManager", &QDragManager::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDragManager::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDragManager", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDragManager::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDragManager", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDragManager::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDragManager", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDragManager.setMetaObject( metaObj );
    return metaObj;
}

void* QDragManager::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDragManager" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QDragManager::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QDragManager::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDragManager::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QDragManager::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
