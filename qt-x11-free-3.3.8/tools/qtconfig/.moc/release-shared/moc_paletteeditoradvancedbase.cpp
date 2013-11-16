/****************************************************************************
** PaletteEditorAdvancedBase meta object code from reading C++ file 'paletteeditoradvancedbase.h'
**
** Created: Wed Oct 9 11:06:41 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../paletteeditoradvancedbase.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PaletteEditorAdvancedBase::className() const
{
    return "PaletteEditorAdvancedBase";
}

QMetaObject *PaletteEditorAdvancedBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PaletteEditorAdvancedBase( "PaletteEditorAdvancedBase", &PaletteEditorAdvancedBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PaletteEditorAdvancedBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PaletteEditorAdvancedBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PaletteEditorAdvancedBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PaletteEditorAdvancedBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PaletteEditorAdvancedBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"onCentral", 1, param_slot_3 };
    static const QUMethod slot_4 = {"onChooseCentralColor", 0, 0 };
    static const QUMethod slot_5 = {"onChooseEffectColor", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"onEffect", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"onToggleBuildDisabled", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"onToggleBuildEffects", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"onToggleBuildInactive", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"paletteSelected", 1, param_slot_10 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "onCentral(int)", &slot_3, QMetaData::Protected },
	{ "onChooseCentralColor()", &slot_4, QMetaData::Protected },
	{ "onChooseEffectColor()", &slot_5, QMetaData::Protected },
	{ "onEffect(int)", &slot_6, QMetaData::Protected },
	{ "onToggleBuildDisabled(bool)", &slot_7, QMetaData::Protected },
	{ "onToggleBuildEffects(bool)", &slot_8, QMetaData::Protected },
	{ "onToggleBuildInactive(bool)", &slot_9, QMetaData::Protected },
	{ "paletteSelected(int)", &slot_10, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PaletteEditorAdvancedBase", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PaletteEditorAdvancedBase.setMetaObject( metaObj );
    return metaObj;
}

void* PaletteEditorAdvancedBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PaletteEditorAdvancedBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool PaletteEditorAdvancedBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: onCentral((int)static_QUType_int.get(_o+1)); break;
    case 4: onChooseCentralColor(); break;
    case 5: onChooseEffectColor(); break;
    case 6: onEffect((int)static_QUType_int.get(_o+1)); break;
    case 7: onToggleBuildDisabled((bool)static_QUType_bool.get(_o+1)); break;
    case 8: onToggleBuildEffects((bool)static_QUType_bool.get(_o+1)); break;
    case 9: onToggleBuildInactive((bool)static_QUType_bool.get(_o+1)); break;
    case 10: paletteSelected((int)static_QUType_int.get(_o+1)); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PaletteEditorAdvancedBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PaletteEditorAdvancedBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool PaletteEditorAdvancedBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
