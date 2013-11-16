/****************************************************************************
** PropertyTextItem meta object code from reading C++ file 'propertyeditor.h'
**
** Created: Wed Oct 9 11:04:45 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../propertyeditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PropertyTextItem::className() const
{
    return "PropertyTextItem";
}

QMetaObject *PropertyTextItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyTextItem( "PropertyTextItem", &PropertyTextItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyTextItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyTextItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyTextItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyTextItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyTextItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QUMethod slot_1 = {"getText", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private },
	{ "getText()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyTextItem", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyTextItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyTextItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyTextItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyTextItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    case 1: getText(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyTextItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyTextItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyTextItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyBoolItem::className() const
{
    return "PropertyBoolItem";
}

QMetaObject *PropertyBoolItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyBoolItem( "PropertyBoolItem", &PropertyBoolItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyBoolItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyBoolItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyBoolItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyBoolItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyBoolItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyBoolItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyBoolItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyBoolItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyBoolItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyBoolItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyBoolItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyBoolItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyBoolItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyIntItem::className() const
{
    return "PropertyIntItem";
}

QMetaObject *PropertyIntItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyIntItem( "PropertyIntItem", &PropertyIntItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyIntItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyIntItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyIntItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyIntItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyIntItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyIntItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyIntItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyIntItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyIntItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyIntItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyIntItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyIntItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyIntItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyLayoutItem::className() const
{
    return "PropertyLayoutItem";
}

QMetaObject *PropertyLayoutItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyLayoutItem( "PropertyLayoutItem", &PropertyLayoutItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyLayoutItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyLayoutItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyLayoutItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyLayoutItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyLayoutItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyLayoutItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyLayoutItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyLayoutItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyLayoutItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyLayoutItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyLayoutItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyLayoutItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyLayoutItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyDoubleItem::className() const
{
    return "PropertyDoubleItem";
}

QMetaObject *PropertyDoubleItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyDoubleItem( "PropertyDoubleItem", &PropertyDoubleItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyDoubleItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyDoubleItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyDoubleItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyDoubleItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyDoubleItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyDoubleItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyDoubleItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyDoubleItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyDoubleItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyDoubleItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyDoubleItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyDoubleItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyDoubleItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyListItem::className() const
{
    return "PropertyListItem";
}

QMetaObject *PropertyListItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyListItem( "PropertyListItem", &PropertyListItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyListItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyListItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyListItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyListItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyListItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyListItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyListItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyListItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyListItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyListItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyListItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyListItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyListItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyFontItem::className() const
{
    return "PropertyFontItem";
}

QMetaObject *PropertyFontItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyFontItem( "PropertyFontItem", &PropertyFontItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyFontItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyFontItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyFontItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyFontItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyFontItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"getFont", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "getFont()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyFontItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyFontItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyFontItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyFontItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyFontItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: getFont(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyFontItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyFontItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyFontItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyCoordItem::className() const
{
    return "PropertyCoordItem";
}

QMetaObject *PropertyCoordItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyCoordItem( "PropertyCoordItem", &PropertyCoordItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyCoordItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyCoordItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyCoordItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyCoordItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyCoordItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PropertyCoordItem", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyCoordItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyCoordItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyCoordItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyCoordItem::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool PropertyCoordItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyCoordItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyCoordItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyColorItem::className() const
{
    return "PropertyColorItem";
}

QMetaObject *PropertyColorItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyColorItem( "PropertyColorItem", &PropertyColorItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyColorItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyColorItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyColorItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyColorItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyColorItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"getColor", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "getColor()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyColorItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyColorItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyColorItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyColorItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyColorItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: getColor(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyColorItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyColorItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyColorItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyPixmapItem::className() const
{
    return "PropertyPixmapItem";
}

QMetaObject *PropertyPixmapItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyPixmapItem( "PropertyPixmapItem", &PropertyPixmapItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyPixmapItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyPixmapItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyPixmapItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyPixmapItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyPixmapItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"getPixmap", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "getPixmap()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyPixmapItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyPixmapItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyPixmapItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyPixmapItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyPixmapItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: getPixmap(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyPixmapItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyPixmapItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyPixmapItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertySizePolicyItem::className() const
{
    return "PropertySizePolicyItem";
}

QMetaObject *PropertySizePolicyItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertySizePolicyItem( "PropertySizePolicyItem", &PropertySizePolicyItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertySizePolicyItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertySizePolicyItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertySizePolicyItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertySizePolicyItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertySizePolicyItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PropertySizePolicyItem", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertySizePolicyItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertySizePolicyItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertySizePolicyItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertySizePolicyItem::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool PropertySizePolicyItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertySizePolicyItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertySizePolicyItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyPaletteItem::className() const
{
    return "PropertyPaletteItem";
}

QMetaObject *PropertyPaletteItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyPaletteItem( "PropertyPaletteItem", &PropertyPaletteItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyPaletteItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyPaletteItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyPaletteItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyPaletteItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyPaletteItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"getPalette", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "getPalette()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyPaletteItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyPaletteItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyPaletteItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyPaletteItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyPaletteItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: getPalette(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyPaletteItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyPaletteItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyPaletteItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyCursorItem::className() const
{
    return "PropertyCursorItem";
}

QMetaObject *PropertyCursorItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyCursorItem( "PropertyCursorItem", &PropertyCursorItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyCursorItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyCursorItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyCursorItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyCursorItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyCursorItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyCursorItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyCursorItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyCursorItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyCursorItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyCursorItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyCursorItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyCursorItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyCursorItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyKeysequenceItem::className() const
{
    return "PropertyKeysequenceItem";
}

QMetaObject *PropertyKeysequenceItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyKeysequenceItem( "PropertyKeysequenceItem", &PropertyKeysequenceItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyKeysequenceItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyKeysequenceItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyKeysequenceItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyKeysequenceItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyKeysequenceItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyKeysequenceItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyKeysequenceItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyKeysequenceItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyKeysequenceItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyKeysequenceItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyKeysequenceItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyKeysequenceItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyKeysequenceItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyDatabaseItem::className() const
{
    return "PropertyDatabaseItem";
}

QMetaObject *PropertyDatabaseItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyDatabaseItem( "PropertyDatabaseItem", &PropertyDatabaseItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyDatabaseItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyDatabaseItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyDatabaseItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyDatabaseItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyDatabaseItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PropertyDatabaseItem", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyDatabaseItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyDatabaseItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyDatabaseItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyDatabaseItem::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool PropertyDatabaseItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyDatabaseItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyDatabaseItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *EnumPopup::className() const
{
    return "EnumPopup";
}

QMetaObject *EnumPopup::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EnumPopup( "EnumPopup", &EnumPopup::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EnumPopup::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EnumPopup", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EnumPopup::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EnumPopup", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EnumPopup::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUMethod signal_0 = {"closed", 0, 0 };
    static const QUMethod signal_1 = {"hidden", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "closed()", &signal_0, QMetaData::Public },
	{ "hidden()", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"EnumPopup", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EnumPopup.setMetaObject( metaObj );
    return metaObj;
}

void* EnumPopup::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EnumPopup" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL closed
void EnumPopup::closed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL hidden
void EnumPopup::hidden()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool EnumPopup::qt_invoke( int _id, QUObject* _o )
{
    return QFrame::qt_invoke(_id,_o);
}

bool EnumPopup::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: closed(); break;
    case 1: hidden(); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool EnumPopup::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool EnumPopup::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *EnumBox::className() const
{
    return "EnumBox";
}

QMetaObject *EnumBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EnumBox( "EnumBox", &EnumBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EnumBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EnumBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EnumBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EnumBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EnumBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QComboBox::staticMetaObject();
    static const QUMethod slot_0 = {"restoreArrow", 0, 0 };
    static const QUMethod slot_1 = {"popupHidden", 0, 0 };
    static const QUMethod slot_2 = {"popupClosed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "restoreArrow()", &slot_0, QMetaData::Protected },
	{ "popupHidden()", &slot_1, QMetaData::Protected },
	{ "popupClosed()", &slot_2, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"aboutToShowPopup", 0, 0 };
    static const QUMethod signal_1 = {"valueChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "aboutToShowPopup()", &signal_0, QMetaData::Public },
	{ "valueChanged()", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"EnumBox", parentObject,
	slot_tbl, 3,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EnumBox.setMetaObject( metaObj );
    return metaObj;
}

void* EnumBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EnumBox" ) )
	return this;
    return QComboBox::qt_cast( clname );
}

// SIGNAL aboutToShowPopup
void EnumBox::aboutToShowPopup()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL valueChanged
void EnumBox::valueChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool EnumBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: restoreArrow(); break;
    case 1: popupHidden(); break;
    case 2: popupClosed(); break;
    default:
	return QComboBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool EnumBox::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: aboutToShowPopup(); break;
    case 1: valueChanged(); break;
    default:
	return QComboBox::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool EnumBox::qt_property( int id, int f, QVariant* v)
{
    return QComboBox::qt_property( id, f, v);
}

bool EnumBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyEnumItem::className() const
{
    return "PropertyEnumItem";
}

QMetaObject *PropertyEnumItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyEnumItem( "PropertyEnumItem", &PropertyEnumItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyEnumItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyEnumItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyEnumItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyEnumItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyEnumItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QUMethod slot_1 = {"insertEnums", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private },
	{ "insertEnums()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyEnumItem", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyEnumItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyEnumItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyEnumItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyEnumItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    case 1: insertEnums(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyEnumItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyEnumItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyEnumItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyList::className() const
{
    return "PropertyList";
}

QMetaObject *PropertyList::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyList( "PropertyList", &PropertyList::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyList::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyList", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyList::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyList", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyList::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    static const QUMethod slot_0 = {"updateEditorSize", 0, 0 };
    static const QUMethod slot_1 = {"resetProperty", 0, 0 };
    static const QUMethod slot_2 = {"toggleSort", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "p", &static_QUType_varptr, "\x0e", QUParameter::In },
	{ "c", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"itemPressed", 3, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"toggleOpen", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out },
	{ "o", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "e", &static_QUType_ptr, "QEvent", QUParameter::In }
    };
    static const QUMethod slot_5 = {"eventFilter", 3, param_slot_5 };
    static const QMetaData slot_tbl[] = {
	{ "updateEditorSize()", &slot_0, QMetaData::Public },
	{ "resetProperty()", &slot_1, QMetaData::Public },
	{ "toggleSort()", &slot_2, QMetaData::Public },
	{ "itemPressed(QListViewItem*,const QPoint&,int)", &slot_3, QMetaData::Private },
	{ "toggleOpen(QListViewItem*)", &slot_4, QMetaData::Private },
	{ "eventFilter(QObject*,QEvent*)", &slot_5, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyList", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyList.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyList::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyList" ) )
	return this;
    return QListView::qt_cast( clname );
}

bool PropertyList::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateEditorSize(); break;
    case 1: resetProperty(); break;
    case 2: toggleSort(); break;
    case 3: itemPressed((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 4: toggleOpen((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: static_QUType_bool.set(_o,eventFilter((QObject*)static_QUType_ptr.get(_o+1),(QEvent*)static_QUType_ptr.get(_o+2))); break;
    default:
	return QListView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyList::qt_emit( int _id, QUObject* _o )
{
    return QListView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyList::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool PropertyList::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *EventList::className() const
{
    return "EventList";
}

QMetaObject *EventList::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EventList( "EventList", &EventList::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EventList::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EventList", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EventList::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EventList", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EventList::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = HierarchyList::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"objectClicked", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_1 = {"showRMBMenu", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"renamed", 1, param_slot_2 };
    static const QMetaData slot_tbl[] = {
	{ "objectClicked(QListViewItem*)", &slot_0, QMetaData::Private },
	{ "showRMBMenu(QListViewItem*,const QPoint&)", &slot_1, QMetaData::Private },
	{ "renamed(QListViewItem*)", &slot_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"EventList", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EventList.setMetaObject( metaObj );
    return metaObj;
}

void* EventList::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EventList" ) )
	return this;
    return HierarchyList::qt_cast( clname );
}

bool EventList::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: objectClicked((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: showRMBMenu((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 2: renamed((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return HierarchyList::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool EventList::qt_emit( int _id, QUObject* _o )
{
    return HierarchyList::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool EventList::qt_property( int id, int f, QVariant* v)
{
    return HierarchyList::qt_property( id, f, v);
}

bool EventList::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyEditor::className() const
{
    return "PropertyEditor";
}

QMetaObject *PropertyEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyEditor( "PropertyEditor", &PropertyEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTabWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "w", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "fw", &static_QUType_ptr, "FormWindow", QUParameter::In }
    };
    static const QUMethod slot_0 = {"setWidget", 2, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "setWidget(QObject*,FormWindow*)", &slot_0, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"hidden", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "hidden()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyEditor", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyEditor.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyEditor" ) )
	return this;
    return QTabWidget::qt_cast( clname );
}

// SIGNAL hidden
void PropertyEditor::hidden()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool PropertyEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setWidget((QObject*)static_QUType_ptr.get(_o+1),(FormWindow*)static_QUType_ptr.get(_o+2)); break;
    default:
	return QTabWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyEditor::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: hidden(); break;
    default:
	return QTabWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool PropertyEditor::qt_property( int id, int f, QVariant* v)
{
    return QTabWidget::qt_property( id, f, v);
}

bool PropertyEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyDateItem::className() const
{
    return "PropertyDateItem";
}

QMetaObject *PropertyDateItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyDateItem( "PropertyDateItem", &PropertyDateItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyDateItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyDateItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyDateItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyDateItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyDateItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyDateItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyDateItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyDateItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyDateItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyDateItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyDateItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyDateItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyDateItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyTimeItem::className() const
{
    return "PropertyTimeItem";
}

QMetaObject *PropertyTimeItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyTimeItem( "PropertyTimeItem", &PropertyTimeItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyTimeItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyTimeItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyTimeItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyTimeItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyTimeItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyTimeItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyTimeItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyTimeItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyTimeItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyTimeItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyTimeItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyTimeItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyTimeItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PropertyDateTimeItem::className() const
{
    return "PropertyDateTimeItem";
}

QMetaObject *PropertyDateTimeItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PropertyDateTimeItem( "PropertyDateTimeItem", &PropertyDateTimeItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PropertyDateTimeItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyDateTimeItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PropertyDateTimeItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PropertyDateTimeItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PropertyDateTimeItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setValue", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PropertyDateTimeItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PropertyDateTimeItem.setMetaObject( metaObj );
    return metaObj;
}

void* PropertyDateTimeItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PropertyDateTimeItem" ) )
	return this;
    if ( !qstrcmp( clname, "PropertyItem" ) )
	return (PropertyItem*)this;
    return QObject::qt_cast( clname );
}

bool PropertyDateTimeItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PropertyDateTimeItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PropertyDateTimeItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PropertyDateTimeItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
