/****************************************************************************
** PaletteEditorBase meta object code from reading C++ file 'paletteeditor.h'
**
** Created: Wed Oct 9 11:05:06 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../paletteeditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PaletteEditorBase::className() const
{
    return "PaletteEditorBase";
}

QMetaObject *PaletteEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PaletteEditorBase( "PaletteEditorBase", &PaletteEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PaletteEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PaletteEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PaletteEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PaletteEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PaletteEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"onTune", 0, 0 };
    static const QUMethod slot_4 = {"onChoose2ndMainColor", 0, 0 };
    static const QUMethod slot_5 = {"onChooseMainColor", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"paletteSelected", 1, param_slot_6 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "onTune()", &slot_3, QMetaData::Protected },
	{ "onChoose2ndMainColor()", &slot_4, QMetaData::Protected },
	{ "onChooseMainColor()", &slot_5, QMetaData::Protected },
	{ "paletteSelected(int)", &slot_6, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PaletteEditorBase", parentObject,
	slot_tbl, 7,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PaletteEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* PaletteEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PaletteEditorBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool PaletteEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: onTune(); break;
    case 4: onChoose2ndMainColor(); break;
    case 5: onChooseMainColor(); break;
    case 6: paletteSelected((int)static_QUType_int.get(_o+1)); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PaletteEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PaletteEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool PaletteEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
