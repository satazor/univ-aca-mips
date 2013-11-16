/****************************************************************************
** ImageTextEditor meta object code from reading C++ file 'imagetexteditor.h'
**
** Created: Wed Oct 9 11:08:20 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../imagetexteditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ImageTextEditor::className() const
{
    return "ImageTextEditor";
}

QMetaObject *ImageTextEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ImageTextEditor( "ImageTextEditor", &ImageTextEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ImageTextEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ImageTextEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ImageTextEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ImageTextEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ImageTextEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"imageChanged", 0, 0 };
    static const QUMethod slot_1 = {"updateText", 0, 0 };
    static const QUMethod slot_2 = {"addText", 0, 0 };
    static const QUMethod slot_3 = {"removeText", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "imageChanged()", &slot_0, QMetaData::Public },
	{ "updateText()", &slot_1, QMetaData::Public },
	{ "addText()", &slot_2, QMetaData::Public },
	{ "removeText()", &slot_3, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ImageTextEditor", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ImageTextEditor.setMetaObject( metaObj );
    return metaObj;
}

void* ImageTextEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ImageTextEditor" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ImageTextEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: imageChanged(); break;
    case 1: updateText(); break;
    case 2: addText(); break;
    case 3: removeText(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ImageTextEditor::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ImageTextEditor::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ImageTextEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
