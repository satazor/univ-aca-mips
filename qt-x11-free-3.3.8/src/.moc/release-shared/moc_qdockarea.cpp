/****************************************************************************
** QDockAreaLayout meta object code from reading C++ file 'qdockarea.h'
**
** Created: Wed Oct 9 10:52:40 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qdockarea.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDockAreaLayout::className() const
{
    return "QDockAreaLayout";
}

QMetaObject *QDockAreaLayout::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDockAreaLayout( "QDockAreaLayout", &QDockAreaLayout::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDockAreaLayout::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDockAreaLayout", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDockAreaLayout::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDockAreaLayout", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDockAreaLayout::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLayout::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDockAreaLayout", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDockAreaLayout.setMetaObject( metaObj );
    return metaObj;
}

void* QDockAreaLayout::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDockAreaLayout" ) )
	return this;
    return QLayout::qt_cast( clname );
}

bool QDockAreaLayout::qt_invoke( int _id, QUObject* _o )
{
    return QLayout::qt_invoke(_id,_o);
}

bool QDockAreaLayout::qt_emit( int _id, QUObject* _o )
{
    return QLayout::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDockAreaLayout::qt_property( int id, int f, QVariant* v)
{
    return QLayout::qt_property( id, f, v);
}

bool QDockAreaLayout::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


#include <qvariant.h>
const char *QDockArea::className() const
{
    return "QDockArea";
}

QMetaObject *QDockArea::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDockArea( "QDockArea", &QDockArea::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDockArea::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDockArea", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDockArea::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDockArea", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDockArea::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Normal",  (int) QDockArea::Normal },
	{ "Reverse",  (int) QDockArea::Reverse }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "HandlePosition", 2, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "keepNewLines", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"lineUp", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "lineUp(bool)", &slot_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[4] = {
 	{ "Orientation","orientation", 0x000d, &QDockArea::metaObj, 0, -1 },
	{ "int","count", 0x10000001, &QDockArea::metaObj, 0, -1 },
	{ "bool","empty", 0x12000001, &QDockArea::metaObj, 0, -1 },
	{ "HandlePosition","handlePosition", 0x0005, &QDockArea::metaObj, &enum_tbl[0], -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDockArea", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 4,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDockArea.setMetaObject( metaObj );
    return metaObj;
}

void* QDockArea::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDockArea" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QDockArea::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: lineUp((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDockArea::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDockArea::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( (int)this->orientation() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->count() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->isEmpty(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( (int)this->handlePosition() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDockArea::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
