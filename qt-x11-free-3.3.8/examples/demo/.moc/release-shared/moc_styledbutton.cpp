/****************************************************************************
** StyledButton meta object code from reading C++ file 'styledbutton.h'
**
** Created: Wed Oct 9 11:07:29 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dnd/styledbutton.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *StyledButton::className() const
{
    return "StyledButton";
}

QMetaObject *StyledButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_StyledButton( "StyledButton", &StyledButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString StyledButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StyledButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString StyledButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StyledButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* StyledButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QButton::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "ColorEditor",  (int) StyledButton::ColorEditor },
	{ "PixmapEditor",  (int) StyledButton::PixmapEditor }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "EditorType", 2, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUMethod slot_0 = {"onEditor", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "onEditor()", &slot_0, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"changed", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "changed()", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[4] = {
 	{ "QColor","color", 0xa000103, &StyledButton::metaObj, 0, -1 },
	{ "QPixmap","pixmap", 0x6000103, &StyledButton::metaObj, 0, -1 },
	{ "EditorType","editor", 0x0107, &StyledButton::metaObj, &enum_tbl[0], -1 },
	{ "bool","scale", 0x12000103, &StyledButton::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"StyledButton", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 4,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_StyledButton.setMetaObject( metaObj );
    return metaObj;
}

void* StyledButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "StyledButton" ) )
	return this;
    return QButton::qt_cast( clname );
}

// SIGNAL changed
void StyledButton::changed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool StyledButton::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: onEditor(); break;
    default:
	return QButton::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool StyledButton::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: changed(); break;
    default:
	return QButton::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool StyledButton::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setColor(v->asColor()); break;
	case 1: *v = QVariant( this->color() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setPixmap(v->asPixmap()); break;
	case 1: if ( this->pixmap() ) *v = QVariant( *pixmap() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setEditor((EditorType&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->editor() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setScale(v->asBool()); break;
	case 1: *v = QVariant( this->scale(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QButton::qt_property( id, f, v );
    }
    return TRUE;
}

bool StyledButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
