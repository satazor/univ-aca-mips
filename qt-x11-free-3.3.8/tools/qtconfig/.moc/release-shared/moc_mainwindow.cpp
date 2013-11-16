/****************************************************************************
** MainWindow meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Oct 9 11:06:40 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../mainwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainWindow::className() const
{
    return "MainWindow";
}

QMetaObject *MainWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainWindow( "MainWindow", &MainWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = MainWindowBase::staticMetaObject();
    static const QUMethod slot_0 = {"buildPalette", 0, 0 };
    static const QUMethod slot_1 = {"buildFont", 0, 0 };
    static const QUMethod slot_2 = {"tunePalette", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"paletteSelected", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"styleSelected", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"familySelected", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"substituteSelected", 1, param_slot_6 };
    static const QUMethod slot_7 = {"removeSubstitute", 0, 0 };
    static const QUMethod slot_8 = {"addSubstitute", 0, 0 };
    static const QUMethod slot_9 = {"downSubstitute", 0, 0 };
    static const QUMethod slot_10 = {"upSubstitute", 0, 0 };
    static const QUMethod slot_11 = {"removeLibpath", 0, 0 };
    static const QUMethod slot_12 = {"addLibpath", 0, 0 };
    static const QUMethod slot_13 = {"downLibpath", 0, 0 };
    static const QUMethod slot_14 = {"upLibpath", 0, 0 };
    static const QUMethod slot_15 = {"browseLibpath", 0, 0 };
    static const QUMethod slot_16 = {"removeFontpath", 0, 0 };
    static const QUMethod slot_17 = {"addFontpath", 0, 0 };
    static const QUMethod slot_18 = {"downFontpath", 0, 0 };
    static const QUMethod slot_19 = {"upFontpath", 0, 0 };
    static const QUMethod slot_20 = {"browseFontpath", 0, 0 };
    static const QUMethod slot_21 = {"fileSave", 0, 0 };
    static const QUMethod slot_22 = {"fileExit", 0, 0 };
    static const QUMethod slot_23 = {"somethingModified", 0, 0 };
    static const QUMethod slot_24 = {"helpAbout", 0, 0 };
    static const QUMethod slot_25 = {"helpAboutQt", 0, 0 };
    static const QUParameter param_slot_26[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_26 = {"pageChanged", 1, param_slot_26 };
    static const QMetaData slot_tbl[] = {
	{ "buildPalette()", &slot_0, QMetaData::Public },
	{ "buildFont()", &slot_1, QMetaData::Public },
	{ "tunePalette()", &slot_2, QMetaData::Public },
	{ "paletteSelected(int)", &slot_3, QMetaData::Public },
	{ "styleSelected(const QString&)", &slot_4, QMetaData::Public },
	{ "familySelected(const QString&)", &slot_5, QMetaData::Public },
	{ "substituteSelected(const QString&)", &slot_6, QMetaData::Public },
	{ "removeSubstitute()", &slot_7, QMetaData::Public },
	{ "addSubstitute()", &slot_8, QMetaData::Public },
	{ "downSubstitute()", &slot_9, QMetaData::Public },
	{ "upSubstitute()", &slot_10, QMetaData::Public },
	{ "removeLibpath()", &slot_11, QMetaData::Public },
	{ "addLibpath()", &slot_12, QMetaData::Public },
	{ "downLibpath()", &slot_13, QMetaData::Public },
	{ "upLibpath()", &slot_14, QMetaData::Public },
	{ "browseLibpath()", &slot_15, QMetaData::Public },
	{ "removeFontpath()", &slot_16, QMetaData::Public },
	{ "addFontpath()", &slot_17, QMetaData::Public },
	{ "downFontpath()", &slot_18, QMetaData::Public },
	{ "upFontpath()", &slot_19, QMetaData::Public },
	{ "browseFontpath()", &slot_20, QMetaData::Public },
	{ "fileSave()", &slot_21, QMetaData::Public },
	{ "fileExit()", &slot_22, QMetaData::Public },
	{ "somethingModified()", &slot_23, QMetaData::Public },
	{ "helpAbout()", &slot_24, QMetaData::Public },
	{ "helpAboutQt()", &slot_25, QMetaData::Public },
	{ "pageChanged(QWidget*)", &slot_26, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainWindow", parentObject,
	slot_tbl, 27,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainWindow.setMetaObject( metaObj );
    return metaObj;
}

void* MainWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainWindow" ) )
	return this;
    return MainWindowBase::qt_cast( clname );
}

bool MainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: buildPalette(); break;
    case 1: buildFont(); break;
    case 2: tunePalette(); break;
    case 3: paletteSelected((int)static_QUType_int.get(_o+1)); break;
    case 4: styleSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: familySelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: substituteSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: removeSubstitute(); break;
    case 8: addSubstitute(); break;
    case 9: downSubstitute(); break;
    case 10: upSubstitute(); break;
    case 11: removeLibpath(); break;
    case 12: addLibpath(); break;
    case 13: downLibpath(); break;
    case 14: upLibpath(); break;
    case 15: browseLibpath(); break;
    case 16: removeFontpath(); break;
    case 17: addFontpath(); break;
    case 18: downFontpath(); break;
    case 19: upFontpath(); break;
    case 20: browseFontpath(); break;
    case 21: fileSave(); break;
    case 22: fileExit(); break;
    case 23: somethingModified(); break;
    case 24: helpAbout(); break;
    case 25: helpAboutQt(); break;
    case 26: pageChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    default:
	return MainWindowBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainWindow::qt_emit( int _id, QUObject* _o )
{
    return MainWindowBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainWindow::qt_property( int id, int f, QVariant* v)
{
    return MainWindowBase::qt_property( id, f, v);
}

bool MainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
