/****************************************************************************
** PaletteEditorAdvanced meta object code from reading C++ file 'paletteeditoradvanced.h'
**
** Created: Wed Oct 9 11:06:41 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../paletteeditoradvanced.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PaletteEditorAdvanced::className() const
{
    return "PaletteEditorAdvanced";
}

QMetaObject *PaletteEditorAdvanced::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PaletteEditorAdvanced( "PaletteEditorAdvanced", &PaletteEditorAdvanced::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PaletteEditorAdvanced::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PaletteEditorAdvanced", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PaletteEditorAdvanced::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PaletteEditorAdvanced", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PaletteEditorAdvanced::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = PaletteEditorAdvancedBase::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"paletteSelected", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"onCentral", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"onEffect", 1, param_slot_2 };
    static const QUMethod slot_3 = {"onChooseCentralColor", 0, 0 };
    static const QUMethod slot_4 = {"onChooseEffectColor", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"onToggleBuildEffects", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"onToggleBuildInactive", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"onToggleBuildDisabled", 1, param_slot_7 };
    static const QMetaData slot_tbl[] = {
	{ "paletteSelected(int)", &slot_0, QMetaData::Protected },
	{ "onCentral(int)", &slot_1, QMetaData::Protected },
	{ "onEffect(int)", &slot_2, QMetaData::Protected },
	{ "onChooseCentralColor()", &slot_3, QMetaData::Protected },
	{ "onChooseEffectColor()", &slot_4, QMetaData::Protected },
	{ "onToggleBuildEffects(bool)", &slot_5, QMetaData::Protected },
	{ "onToggleBuildInactive(bool)", &slot_6, QMetaData::Protected },
	{ "onToggleBuildDisabled(bool)", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PaletteEditorAdvanced", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PaletteEditorAdvanced.setMetaObject( metaObj );
    return metaObj;
}

void* PaletteEditorAdvanced::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PaletteEditorAdvanced" ) )
	return this;
    return PaletteEditorAdvancedBase::qt_cast( clname );
}

bool PaletteEditorAdvanced::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: paletteSelected((int)static_QUType_int.get(_o+1)); break;
    case 1: onCentral((int)static_QUType_int.get(_o+1)); break;
    case 2: onEffect((int)static_QUType_int.get(_o+1)); break;
    case 3: onChooseCentralColor(); break;
    case 4: onChooseEffectColor(); break;
    case 5: onToggleBuildEffects((bool)static_QUType_bool.get(_o+1)); break;
    case 6: onToggleBuildInactive((bool)static_QUType_bool.get(_o+1)); break;
    case 7: onToggleBuildDisabled((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return PaletteEditorAdvancedBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PaletteEditorAdvanced::qt_emit( int _id, QUObject* _o )
{
    return PaletteEditorAdvancedBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PaletteEditorAdvanced::qt_property( int id, int f, QVariant* v)
{
    return PaletteEditorAdvancedBase::qt_property( id, f, v);
}

bool PaletteEditorAdvanced::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
