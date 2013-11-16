/****************************************************************************
** Layout meta object code from reading C++ file 'layout.h'
**
** Created: Wed Oct 9 11:04:43 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../layout.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Layout::className() const
{
    return "Layout";
}

QMetaObject *Layout::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Layout( "Layout", &Layout::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Layout::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Layout", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Layout::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Layout", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Layout::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"widgetDestroyed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "widgetDestroyed()", &slot_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Layout", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Layout.setMetaObject( metaObj );
    return metaObj;
}

void* Layout::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Layout" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool Layout::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: widgetDestroyed(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Layout::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Layout::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool Layout::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


#include <qvariant.h>
const char *Spacer::className() const
{
    return "Spacer";
}

QMetaObject *Spacer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Spacer( "Spacer", &Spacer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Spacer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Spacer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Spacer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Spacer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Spacer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Fixed",  (int) Spacer::Fixed },
	{ "Minimum",  (int) Spacer::Minimum },
	{ "Maximum",  (int) Spacer::Maximum },
	{ "Preferred",  (int) Spacer::Preferred },
	{ "MinimumExpanding",  (int) Spacer::MinimumExpanding },
	{ "Expanding",  (int) Spacer::Expanding }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "SizeType", 6, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[5] = {
 	{ "QCString","name", 0x1402a200, &Spacer::metaObj, 0, -1 },
	{ "Orientation","orientation", 0x010f, &Spacer::metaObj, 0, -1 },
	{ "SizeType","sizeType", 0x0107, &Spacer::metaObj, &enum_tbl[0], -1 },
	{ "QSize","sizeHint", 0x9000103, &Spacer::metaObj, 0, -1 },
	{ "QRect","geometry", 0x8029200, &Spacer::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"Spacer", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 5,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Spacer.setMetaObject( metaObj );
    return metaObj;
}

void* Spacer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Spacer" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Spacer::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool Spacer::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Spacer::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: case 1: case 3: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setOrientation((Orientation&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->orientation() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setSizeType((SizeType&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->sizeType() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setSizeHint(v->asSize()); break;
	case 1: *v = QVariant( this->sizeHint() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: case 1: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QWidget::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool Spacer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerGridLayout::className() const
{
    return "QDesignerGridLayout";
}

QMetaObject *QDesignerGridLayout::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerGridLayout( "QDesignerGridLayout", &QDesignerGridLayout::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerGridLayout::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerGridLayout", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerGridLayout::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerGridLayout", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerGridLayout::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QGridLayout::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDesignerGridLayout", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerGridLayout.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerGridLayout::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerGridLayout" ) )
	return this;
    return QGridLayout::qt_cast( clname );
}

bool QDesignerGridLayout::qt_invoke( int _id, QUObject* _o )
{
    return QGridLayout::qt_invoke(_id,_o);
}

bool QDesignerGridLayout::qt_emit( int _id, QUObject* _o )
{
    return QGridLayout::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerGridLayout::qt_property( int id, int f, QVariant* v)
{
    return QGridLayout::qt_property( id, f, v);
}

bool QDesignerGridLayout::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
