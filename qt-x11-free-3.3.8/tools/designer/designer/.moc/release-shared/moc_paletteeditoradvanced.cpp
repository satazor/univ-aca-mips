/****************************************************************************
** PaletteEditorAdvancedBase meta object code from reading C++ file 'paletteeditoradvanced.h'
**
** Created: Wed Oct 9 11:05:11 2013
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
    static const QUMethod slot_0 = {"showHelp", 0, 0 };
    static const QUMethod slot_1 = {"languageChange", 0, 0 };
    static const QUMethod slot_2 = {"init", 0, 0 };
    static const QUMethod slot_3 = {"destroy", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"onToggleBuildDisabled", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"onCentral", 1, param_slot_5 };
    static const QUMethod slot_6 = {"onChooseCentralColor", 0, 0 };
    static const QUMethod slot_7 = {"onChooseEffectColor", 0, 0 };
    static const QUMethod slot_8 = {"onChoosePixmap", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"onEffect", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"onToggleBuildEffects", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"onToggleBuildInactive", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"paletteSelected", 1, param_slot_12 };
    static const QMetaData slot_tbl[] = {
	{ "showHelp()", &slot_0, QMetaData::Public },
	{ "languageChange()", &slot_1, QMetaData::Protected },
	{ "init()", &slot_2, QMetaData::Protected },
	{ "destroy()", &slot_3, QMetaData::Protected },
	{ "onToggleBuildDisabled(bool)", &slot_4, QMetaData::Protected },
	{ "onCentral(int)", &slot_5, QMetaData::Protected },
	{ "onChooseCentralColor()", &slot_6, QMetaData::Protected },
	{ "onChooseEffectColor()", &slot_7, QMetaData::Protected },
	{ "onChoosePixmap()", &slot_8, QMetaData::Protected },
	{ "onEffect(int)", &slot_9, QMetaData::Protected },
	{ "onToggleBuildEffects(bool)", &slot_10, QMetaData::Protected },
	{ "onToggleBuildInactive(bool)", &slot_11, QMetaData::Protected },
	{ "paletteSelected(int)", &slot_12, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PaletteEditorAdvancedBase", parentObject,
	slot_tbl, 13,
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
    case 0: showHelp(); break;
    case 1: languageChange(); break;
    case 2: init(); break;
    case 3: destroy(); break;
    case 4: onToggleBuildDisabled((bool)static_QUType_bool.get(_o+1)); break;
    case 5: onCentral((int)static_QUType_int.get(_o+1)); break;
    case 6: onChooseCentralColor(); break;
    case 7: onChooseEffectColor(); break;
    case 8: onChoosePixmap(); break;
    case 9: onEffect((int)static_QUType_int.get(_o+1)); break;
    case 10: onToggleBuildEffects((bool)static_QUType_bool.get(_o+1)); break;
    case 11: onToggleBuildInactive((bool)static_QUType_bool.get(_o+1)); break;
    case 12: paletteSelected((int)static_QUType_int.get(_o+1)); break;
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
