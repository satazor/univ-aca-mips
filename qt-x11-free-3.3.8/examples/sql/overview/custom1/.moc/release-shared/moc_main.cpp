/****************************************************************************
** CustomEdit meta object code from reading C++ file 'main.h'
**
** Created: Wed Oct 9 11:09:34 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../main.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *CustomEdit::className() const
{
    return "CustomEdit";
}

QMetaObject *CustomEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CustomEdit( "CustomEdit", &CustomEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CustomEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CustomEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CustomEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLineEdit::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "line", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"changed", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "changed(const QString&)", &slot_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "QString","upperLine", 0x3000103, &CustomEdit::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"CustomEdit", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CustomEdit.setMetaObject( metaObj );
    return metaObj;
}

void* CustomEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CustomEdit" ) )
	return this;
    return QLineEdit::qt_cast( clname );
}

bool CustomEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: changed((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QLineEdit::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CustomEdit::qt_emit( int _id, QUObject* _o )
{
    return QLineEdit::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CustomEdit::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setUpperLine(v->asString()); break;
	case 1: *v = QVariant( this->upperLine() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QLineEdit::qt_property( id, f, v );
    }
    return TRUE;
}

bool CustomEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *FormDialog::className() const
{
    return "FormDialog";
}

QMetaObject *FormDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FormDialog( "FormDialog", &FormDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FormDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FormDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FormDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FormDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FormDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"save", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "save()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"FormDialog", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FormDialog.setMetaObject( metaObj );
    return metaObj;
}

void* FormDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FormDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool FormDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: save(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FormDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool FormDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool FormDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
