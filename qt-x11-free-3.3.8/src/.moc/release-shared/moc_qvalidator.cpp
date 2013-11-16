/****************************************************************************
** QValidator meta object code from reading C++ file 'qvalidator.h'
**
** Created: Wed Oct 9 10:52:55 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qvalidator.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QValidator::className() const
{
    return "QValidator";
}

QMetaObject *QValidator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QValidator( "QValidator", &QValidator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QValidator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QValidator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QValidator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QValidator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QValidator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QValidator", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QValidator.setMetaObject( metaObj );
    return metaObj;
}

void* QValidator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QValidator" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QValidator::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QValidator::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QValidator::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QValidator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


#include <qvariant.h>
const char *QIntValidator::className() const
{
    return "QIntValidator";
}

QMetaObject *QIntValidator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QIntValidator( "QIntValidator", &QIntValidator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QIntValidator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QIntValidator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QIntValidator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QIntValidator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QIntValidator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QValidator::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "int","bottom", 0x10000103, &QIntValidator::metaObj, 0, -1 },
	{ "int","top", 0x10000103, &QIntValidator::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QIntValidator", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QIntValidator.setMetaObject( metaObj );
    return metaObj;
}

void* QIntValidator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QIntValidator" ) )
	return this;
    return QValidator::qt_cast( clname );
}

bool QIntValidator::qt_invoke( int _id, QUObject* _o )
{
    return QValidator::qt_invoke(_id,_o);
}

bool QIntValidator::qt_emit( int _id, QUObject* _o )
{
    return QValidator::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QIntValidator::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setBottom(v->asInt()); break;
	case 1: *v = QVariant( this->bottom() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setTop(v->asInt()); break;
	case 1: *v = QVariant( this->top() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QValidator::qt_property( id, f, v );
    }
    return TRUE;
}

bool QIntValidator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDoubleValidator::className() const
{
    return "QDoubleValidator";
}

QMetaObject *QDoubleValidator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDoubleValidator( "QDoubleValidator", &QDoubleValidator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDoubleValidator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDoubleValidator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDoubleValidator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDoubleValidator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDoubleValidator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QValidator::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[3] = {
 	{ "double","bottom", 0x13000103, &QDoubleValidator::metaObj, 0, -1 },
	{ "double","top", 0x13000103, &QDoubleValidator::metaObj, 0, -1 },
	{ "int","decimals", 0x10000103, &QDoubleValidator::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDoubleValidator", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 3,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDoubleValidator.setMetaObject( metaObj );
    return metaObj;
}

void* QDoubleValidator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDoubleValidator" ) )
	return this;
    return QValidator::qt_cast( clname );
}

bool QDoubleValidator::qt_invoke( int _id, QUObject* _o )
{
    return QValidator::qt_invoke(_id,_o);
}

bool QDoubleValidator::qt_emit( int _id, QUObject* _o )
{
    return QValidator::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDoubleValidator::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setBottom(v->asDouble()); break;
	case 1: *v = QVariant( this->bottom() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setTop(v->asDouble()); break;
	case 1: *v = QVariant( this->top() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setDecimals(v->asInt()); break;
	case 1: *v = QVariant( this->decimals() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QValidator::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDoubleValidator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QRegExpValidator::className() const
{
    return "QRegExpValidator";
}

QMetaObject *QRegExpValidator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QRegExpValidator( "QRegExpValidator", &QRegExpValidator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QRegExpValidator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QRegExpValidator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QRegExpValidator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QRegExpValidator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QRegExpValidator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QValidator::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QRegExpValidator", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QRegExpValidator.setMetaObject( metaObj );
    return metaObj;
}

void* QRegExpValidator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QRegExpValidator" ) )
	return this;
    return QValidator::qt_cast( clname );
}

bool QRegExpValidator::qt_invoke( int _id, QUObject* _o )
{
    return QValidator::qt_invoke(_id,_o);
}

bool QRegExpValidator::qt_emit( int _id, QUObject* _o )
{
    return QValidator::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QRegExpValidator::qt_property( int id, int f, QVariant* v)
{
    return QValidator::qt_property( id, f, v);
}

bool QRegExpValidator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
