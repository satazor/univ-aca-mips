/****************************************************************************
** QMultiLineEdit meta object code from reading C++ file 'qmultilineedit.h'
**
** Created: Wed Oct 9 10:52:47 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qmultilineedit.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QMultiLineEdit::className() const
{
    return "QMultiLineEdit";
}

QMetaObject *QMultiLineEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QMultiLineEdit( "QMultiLineEdit", &QMultiLineEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QMultiLineEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QMultiLineEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QMultiLineEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QMultiLineEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QMultiLineEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTextEdit::staticMetaObject();
    static const QUMethod slot_0 = {"deselect", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "deselect()", &slot_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[5] = {
 	{ "int","numLines", 0x10000001, &QMultiLineEdit::metaObj, 0, -1 },
	{ "bool","atBeginning", 0x12000001, &QMultiLineEdit::metaObj, 0, -1 },
	{ "bool","atEnd", 0x12000001, &QMultiLineEdit::metaObj, 0, -1 },
	{ "Alignment","alignment", 0x010f, &QMultiLineEdit::metaObj, 0, -1 },
	{ "bool","edited", 0x12001103, &QMultiLineEdit::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QMultiLineEdit", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 5,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QMultiLineEdit.setMetaObject( metaObj );
    return metaObj;
}

void* QMultiLineEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QMultiLineEdit" ) )
	return this;
    return QTextEdit::qt_cast( clname );
}

bool QMultiLineEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: deselect(); break;
    default:
	return QTextEdit::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QMultiLineEdit::qt_emit( int _id, QUObject* _o )
{
    return QTextEdit::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QMultiLineEdit::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->numLines() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->atBeginning(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->atEnd(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setAlignment(v->asInt()); break;
	case 1: *v = QVariant( (int)this->alignment() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setEdited(v->asBool()); break;
	case 1: *v = QVariant( this->edited(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QTextEdit::qt_property( id, f, v );
    }
    return TRUE;
}

bool QMultiLineEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
