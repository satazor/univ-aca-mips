/****************************************************************************
** PreferencesBase meta object code from reading C++ file 'preferences.h'
**
** Created: Wed Oct 9 11:05:27 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../preferences.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PreferencesBase::className() const
{
    return "PreferencesBase";
}

QMetaObject *PreferencesBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PreferencesBase( "PreferencesBase", &PreferencesBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PreferencesBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreferencesBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PreferencesBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreferencesBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PreferencesBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUMethod slot_1 = {"destroy", 0, 0 };
    static const QUMethod slot_2 = {"colorClicked", 0, 0 };
    static const QUMethod slot_3 = {"reInit", 0, 0 };
    static const QUMethod slot_4 = {"save", 0, 0 };
    static const QUMethod slot_5 = {"updatePreview", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"boldChanged", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "element", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"elementChanged", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "f", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"familyChanged", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"italicChanged", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ "c", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_10 = {"setColorPixmap", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "p", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"setPath", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "s", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"sizeChanged", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"underlineChanged", 1, param_slot_13 };
    static const QUMethod slot_14 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "destroy()", &slot_1, QMetaData::Public },
	{ "colorClicked()", &slot_2, QMetaData::Public },
	{ "reInit()", &slot_3, QMetaData::Public },
	{ "save()", &slot_4, QMetaData::Public },
	{ "updatePreview()", &slot_5, QMetaData::Public },
	{ "boldChanged(bool)", &slot_6, QMetaData::Public },
	{ "elementChanged(const QString&)", &slot_7, QMetaData::Public },
	{ "familyChanged(const QString&)", &slot_8, QMetaData::Public },
	{ "italicChanged(bool)", &slot_9, QMetaData::Public },
	{ "setColorPixmap(const QColor&)", &slot_10, QMetaData::Public },
	{ "setPath(const QString&)", &slot_11, QMetaData::Public },
	{ "sizeChanged(int)", &slot_12, QMetaData::Public },
	{ "underlineChanged(bool)", &slot_13, QMetaData::Public },
	{ "languageChange()", &slot_14, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PreferencesBase", parentObject,
	slot_tbl, 15,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PreferencesBase.setMetaObject( metaObj );
    return metaObj;
}

void* PreferencesBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PreferencesBase" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool PreferencesBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: init(); break;
    case 1: destroy(); break;
    case 2: colorClicked(); break;
    case 3: reInit(); break;
    case 4: save(); break;
    case 5: updatePreview(); break;
    case 6: boldChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 7: elementChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: familyChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 9: italicChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 10: setColorPixmap((const QColor&)*((const QColor*)static_QUType_ptr.get(_o+1))); break;
    case 11: setPath((const QString&)static_QUType_QString.get(_o+1)); break;
    case 12: sizeChanged((int)static_QUType_int.get(_o+1)); break;
    case 13: underlineChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 14: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PreferencesBase::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PreferencesBase::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool PreferencesBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
