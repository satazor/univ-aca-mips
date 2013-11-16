/****************************************************************************
** MainWindowBase meta object code from reading C++ file 'mainwindowbase.h'
**
** Created: Wed Oct 9 11:06:41 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../mainwindowbase.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainWindowBase::className() const
{
    return "MainWindowBase";
}

QMetaObject *MainWindowBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainWindowBase( "MainWindowBase", &MainWindowBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainWindowBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindowBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainWindowBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindowBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainWindowBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"addFontpath", 0, 0 };
    static const QUMethod slot_1 = {"addLibpath", 0, 0 };
    static const QUMethod slot_2 = {"addSubstitute", 0, 0 };
    static const QUMethod slot_3 = {"browseFontpath", 0, 0 };
    static const QUMethod slot_4 = {"browseLibpath", 0, 0 };
    static const QUMethod slot_5 = {"buildFont", 0, 0 };
    static const QUMethod slot_6 = {"buildPalette", 0, 0 };
    static const QUMethod slot_7 = {"downFontpath", 0, 0 };
    static const QUMethod slot_8 = {"downLibpath", 0, 0 };
    static const QUMethod slot_9 = {"downSubstitute", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"familySelected", 1, param_slot_10 };
    static const QUMethod slot_11 = {"fileExit", 0, 0 };
    static const QUMethod slot_12 = {"fileSave", 0, 0 };
    static const QUMethod slot_13 = {"helpAbout", 0, 0 };
    static const QUMethod slot_14 = {"helpAboutQt", 0, 0 };
    static const QUMethod slot_15 = {"new_slot", 0, 0 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_16 = {"pageChanged", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"paletteSelected", 1, param_slot_17 };
    static const QUMethod slot_18 = {"removeFontpath", 0, 0 };
    static const QUMethod slot_19 = {"removeLibpath", 0, 0 };
    static const QUMethod slot_20 = {"removeSubstitute", 0, 0 };
    static const QUMethod slot_21 = {"somethingModified", 0, 0 };
    static const QUParameter param_slot_22[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"styleSelected", 1, param_slot_22 };
    static const QUParameter param_slot_23[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_23 = {"substituteSelected", 1, param_slot_23 };
    static const QUMethod slot_24 = {"tunePalette", 0, 0 };
    static const QUMethod slot_25 = {"upFontpath", 0, 0 };
    static const QUMethod slot_26 = {"upLibpath", 0, 0 };
    static const QUMethod slot_27 = {"upSubstitute", 0, 0 };
    static const QUMethod slot_28 = {"languageChange", 0, 0 };
    static const QUMethod slot_29 = {"init", 0, 0 };
    static const QUMethod slot_30 = {"destroy", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "addFontpath()", &slot_0, QMetaData::Public },
	{ "addLibpath()", &slot_1, QMetaData::Public },
	{ "addSubstitute()", &slot_2, QMetaData::Public },
	{ "browseFontpath()", &slot_3, QMetaData::Public },
	{ "browseLibpath()", &slot_4, QMetaData::Public },
	{ "buildFont()", &slot_5, QMetaData::Public },
	{ "buildPalette()", &slot_6, QMetaData::Public },
	{ "downFontpath()", &slot_7, QMetaData::Public },
	{ "downLibpath()", &slot_8, QMetaData::Public },
	{ "downSubstitute()", &slot_9, QMetaData::Public },
	{ "familySelected(const QString&)", &slot_10, QMetaData::Public },
	{ "fileExit()", &slot_11, QMetaData::Public },
	{ "fileSave()", &slot_12, QMetaData::Public },
	{ "helpAbout()", &slot_13, QMetaData::Public },
	{ "helpAboutQt()", &slot_14, QMetaData::Public },
	{ "new_slot()", &slot_15, QMetaData::Public },
	{ "pageChanged(QWidget*)", &slot_16, QMetaData::Public },
	{ "paletteSelected(int)", &slot_17, QMetaData::Public },
	{ "removeFontpath()", &slot_18, QMetaData::Public },
	{ "removeLibpath()", &slot_19, QMetaData::Public },
	{ "removeSubstitute()", &slot_20, QMetaData::Public },
	{ "somethingModified()", &slot_21, QMetaData::Public },
	{ "styleSelected(const QString&)", &slot_22, QMetaData::Public },
	{ "substituteSelected(const QString&)", &slot_23, QMetaData::Public },
	{ "tunePalette()", &slot_24, QMetaData::Public },
	{ "upFontpath()", &slot_25, QMetaData::Public },
	{ "upLibpath()", &slot_26, QMetaData::Public },
	{ "upSubstitute()", &slot_27, QMetaData::Public },
	{ "languageChange()", &slot_28, QMetaData::Protected },
	{ "init()", &slot_29, QMetaData::Protected },
	{ "destroy()", &slot_30, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainWindowBase", parentObject,
	slot_tbl, 31,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainWindowBase.setMetaObject( metaObj );
    return metaObj;
}

void* MainWindowBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainWindowBase" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool MainWindowBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addFontpath(); break;
    case 1: addLibpath(); break;
    case 2: addSubstitute(); break;
    case 3: browseFontpath(); break;
    case 4: browseLibpath(); break;
    case 5: buildFont(); break;
    case 6: buildPalette(); break;
    case 7: downFontpath(); break;
    case 8: downLibpath(); break;
    case 9: downSubstitute(); break;
    case 10: familySelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 11: fileExit(); break;
    case 12: fileSave(); break;
    case 13: helpAbout(); break;
    case 14: helpAboutQt(); break;
    case 15: new_slot(); break;
    case 16: pageChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 17: paletteSelected((int)static_QUType_int.get(_o+1)); break;
    case 18: removeFontpath(); break;
    case 19: removeLibpath(); break;
    case 20: removeSubstitute(); break;
    case 21: somethingModified(); break;
    case 22: styleSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 23: substituteSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 24: tunePalette(); break;
    case 25: upFontpath(); break;
    case 26: upLibpath(); break;
    case 27: upSubstitute(); break;
    case 28: languageChange(); break;
    case 29: init(); break;
    case 30: destroy(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainWindowBase::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainWindowBase::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MainWindowBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
