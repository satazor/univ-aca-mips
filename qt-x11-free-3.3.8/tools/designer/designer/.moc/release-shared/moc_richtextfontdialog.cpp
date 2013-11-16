/****************************************************************************
** RichTextFontDialog meta object code from reading C++ file 'richtextfontdialog.h'
**
** Created: Wed Oct 9 11:05:13 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../richtextfontdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *RichTextFontDialog::className() const
{
    return "RichTextFontDialog";
}

QMetaObject *RichTextFontDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_RichTextFontDialog( "RichTextFontDialog", &RichTextFontDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString RichTextFontDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RichTextFontDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString RichTextFontDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RichTextFontDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* RichTextFontDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUMethod slot_1 = {"selectColor", 0, 0 };
    static const QUMethod slot_2 = {"accept", 0, 0 };
    static const QUMethod slot_3 = {"reject", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::Out }
    };
    static const QUMethod slot_4 = {"getSize", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::Out }
    };
    static const QUMethod slot_5 = {"getColor", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::Out }
    };
    static const QUMethod slot_6 = {"getFont", 1, param_slot_6 };
    static const QUMethod slot_7 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "selectColor()", &slot_1, QMetaData::Public },
	{ "accept()", &slot_2, QMetaData::Public },
	{ "reject()", &slot_3, QMetaData::Public },
	{ "getSize()", &slot_4, QMetaData::Public },
	{ "getColor()", &slot_5, QMetaData::Public },
	{ "getFont()", &slot_6, QMetaData::Public },
	{ "languageChange()", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"RichTextFontDialog", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_RichTextFontDialog.setMetaObject( metaObj );
    return metaObj;
}

void* RichTextFontDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "RichTextFontDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool RichTextFontDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: init(); break;
    case 1: selectColor(); break;
    case 2: accept(); break;
    case 3: reject(); break;
    case 4: static_QUType_QString.set(_o,getSize()); break;
    case 5: static_QUType_QString.set(_o,getColor()); break;
    case 6: static_QUType_QString.set(_o,getFont()); break;
    case 7: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool RichTextFontDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool RichTextFontDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool RichTextFontDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
