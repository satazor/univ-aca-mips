/****************************************************************************
** QLayout meta object code from reading C++ file 'qlayout.h'
**
** Created: Wed Oct 9 10:52:29 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qlayout.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QLayout::className() const
{
    return "QLayout";
}

QMetaObject *QLayout::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QLayout( "QLayout", &QLayout::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QLayout::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLayout", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QLayout::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLayout", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QLayout::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "FreeResize",  (int) QLayout::FreeResize },
	{ "Minimum",  (int) QLayout::Minimum },
	{ "Fixed",  (int) QLayout::Fixed },
	{ "Auto",  (int) QLayout::Auto }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "ResizeMode", 4, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[3] = {
 	{ "int","margin", 0x10000103, &QLayout::metaObj, 0, -1 },
	{ "int","spacing", 0x10000103, &QLayout::metaObj, 0, -1 },
	{ "ResizeMode","resizeMode", 0x0107, &QLayout::metaObj, &enum_tbl[0], -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QLayout", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 3,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QLayout.setMetaObject( metaObj );
    return metaObj;
}

void* QLayout::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QLayout" ) )
	return this;
    if ( !qstrcmp( clname, "QLayoutItem" ) )
	return (QLayoutItem*)this;
    return QObject::qt_cast( clname );
}

bool QLayout::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QLayout::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QLayout::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setMargin(v->asInt()); break;
	case 1: *v = QVariant( this->margin() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setSpacing(v->asInt()); break;
	case 1: *v = QVariant( this->spacing() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setResizeMode((ResizeMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->resizeMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QObject::qt_property( id, f, v );
    }
    return TRUE;
}

bool QLayout::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QGridLayout::className() const
{
    return "QGridLayout";
}

QMetaObject *QGridLayout::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QGridLayout( "QGridLayout", &QGridLayout::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QGridLayout::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGridLayout", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QGridLayout::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGridLayout", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QGridLayout::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLayout::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QGridLayout", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QGridLayout.setMetaObject( metaObj );
    return metaObj;
}

void* QGridLayout::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QGridLayout" ) )
	return this;
    return QLayout::qt_cast( clname );
}

bool QGridLayout::qt_invoke( int _id, QUObject* _o )
{
    return QLayout::qt_invoke(_id,_o);
}

bool QGridLayout::qt_emit( int _id, QUObject* _o )
{
    return QLayout::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QGridLayout::qt_property( int id, int f, QVariant* v)
{
    return QLayout::qt_property( id, f, v);
}

bool QGridLayout::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QBoxLayout::className() const
{
    return "QBoxLayout";
}

QMetaObject *QBoxLayout::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QBoxLayout( "QBoxLayout", &QBoxLayout::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QBoxLayout::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QBoxLayout", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QBoxLayout::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QBoxLayout", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QBoxLayout::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLayout::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QBoxLayout", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QBoxLayout.setMetaObject( metaObj );
    return metaObj;
}

void* QBoxLayout::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QBoxLayout" ) )
	return this;
    return QLayout::qt_cast( clname );
}

bool QBoxLayout::qt_invoke( int _id, QUObject* _o )
{
    return QLayout::qt_invoke(_id,_o);
}

bool QBoxLayout::qt_emit( int _id, QUObject* _o )
{
    return QLayout::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QBoxLayout::qt_property( int id, int f, QVariant* v)
{
    return QLayout::qt_property( id, f, v);
}

bool QBoxLayout::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QHBoxLayout::className() const
{
    return "QHBoxLayout";
}

QMetaObject *QHBoxLayout::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QHBoxLayout( "QHBoxLayout", &QHBoxLayout::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QHBoxLayout::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHBoxLayout", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QHBoxLayout::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHBoxLayout", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QHBoxLayout::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QBoxLayout::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QHBoxLayout", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QHBoxLayout.setMetaObject( metaObj );
    return metaObj;
}

void* QHBoxLayout::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QHBoxLayout" ) )
	return this;
    return QBoxLayout::qt_cast( clname );
}

bool QHBoxLayout::qt_invoke( int _id, QUObject* _o )
{
    return QBoxLayout::qt_invoke(_id,_o);
}

bool QHBoxLayout::qt_emit( int _id, QUObject* _o )
{
    return QBoxLayout::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QHBoxLayout::qt_property( int id, int f, QVariant* v)
{
    return QBoxLayout::qt_property( id, f, v);
}

bool QHBoxLayout::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QVBoxLayout::className() const
{
    return "QVBoxLayout";
}

QMetaObject *QVBoxLayout::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QVBoxLayout( "QVBoxLayout", &QVBoxLayout::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QVBoxLayout::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QVBoxLayout", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QVBoxLayout::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QVBoxLayout", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QVBoxLayout::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QBoxLayout::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QVBoxLayout", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QVBoxLayout.setMetaObject( metaObj );
    return metaObj;
}

void* QVBoxLayout::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QVBoxLayout" ) )
	return this;
    return QBoxLayout::qt_cast( clname );
}

bool QVBoxLayout::qt_invoke( int _id, QUObject* _o )
{
    return QBoxLayout::qt_invoke(_id,_o);
}

bool QVBoxLayout::qt_emit( int _id, QUObject* _o )
{
    return QBoxLayout::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QVBoxLayout::qt_property( int id, int f, QVariant* v)
{
    return QBoxLayout::qt_property( id, f, v);
}

bool QVBoxLayout::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
