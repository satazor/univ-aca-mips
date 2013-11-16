/****************************************************************************
** PaletteEditor meta object code from reading C++ file 'paletteeditorimpl.h'
**
** Created: Wed Oct 9 11:04:49 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../paletteeditorimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PaletteEditor::className() const
{
    return "PaletteEditor";
}

QMetaObject *PaletteEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PaletteEditor( "PaletteEditor", &PaletteEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PaletteEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PaletteEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PaletteEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PaletteEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PaletteEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = PaletteEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"onChooseMainColor", 0, 0 };
    static const QUMethod slot_1 = {"onChoose2ndMainColor", 0, 0 };
    static const QUMethod slot_2 = {"onTune", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"paletteSelected", 1, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "onChooseMainColor()", &slot_0, QMetaData::Protected },
	{ "onChoose2ndMainColor()", &slot_1, QMetaData::Protected },
	{ "onTune()", &slot_2, QMetaData::Protected },
	{ "paletteSelected(int)", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PaletteEditor", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PaletteEditor.setMetaObject( metaObj );
    return metaObj;
}

void* PaletteEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PaletteEditor" ) )
	return this;
    return PaletteEditorBase::qt_cast( clname );
}

bool PaletteEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: onChooseMainColor(); break;
    case 1: onChoose2ndMainColor(); break;
    case 2: onTune(); break;
    case 3: paletteSelected((int)static_QUType_int.get(_o+1)); break;
    default:
	return PaletteEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PaletteEditor::qt_emit( int _id, QUObject* _o )
{
    return PaletteEditorBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PaletteEditor::qt_property( int id, int f, QVariant* v)
{
    return PaletteEditorBase::qt_property( id, f, v);
}

bool PaletteEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
