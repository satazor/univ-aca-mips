/****************************************************************************
** QMessageBox meta object code from reading C++ file 'qmessagebox.h'
**
** Created: Wed Oct 9 10:53:02 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dialogs/qmessagebox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QMessageBox::className() const
{
    return "QMessageBox";
}

QMetaObject *QMessageBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QMessageBox( "QMessageBox", &QMessageBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QMessageBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QMessageBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QMessageBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QMessageBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QMessageBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "NoIcon",  (int) QMessageBox::NoIcon },
	{ "Information",  (int) QMessageBox::Information },
	{ "Warning",  (int) QMessageBox::Warning },
	{ "Critical",  (int) QMessageBox::Critical },
	{ "Question",  (int) QMessageBox::Question }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Icon", 5, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUMethod slot_0 = {"buttonClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "buttonClicked()", &slot_0, QMetaData::Private }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[4] = {
 	{ "QString","text", 0x3000103, &QMessageBox::metaObj, 0, -1 },
	{ "Icon","icon", 0x0107, &QMessageBox::metaObj, &enum_tbl[0], -1 },
	{ "QPixmap","iconPixmap", 0x6000103, &QMessageBox::metaObj, 0, -1 },
	{ "TextFormat","textFormat", 0x010f, &QMessageBox::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QMessageBox", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 4,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QMessageBox.setMetaObject( metaObj );
    return metaObj;
}

void* QMessageBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QMessageBox" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool QMessageBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: buttonClicked(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QMessageBox::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QMessageBox::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setText(v->asString()); break;
	case 1: *v = QVariant( this->text() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setIcon((Icon&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->icon() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setIconPixmap(v->asPixmap()); break;
	case 1: if ( this->iconPixmap() ) *v = QVariant( *iconPixmap() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setTextFormat((TextFormat&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->textFormat() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QDialog::qt_property( id, f, v );
    }
    return TRUE;
}

bool QMessageBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
