/****************************************************************************
** MainWindow meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Oct 9 11:06:06 2013
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
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUMethod slot_1 = {"setup", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"about", 0, 0 };
    static const QUMethod slot_4 = {"aboutApplication", 0, 0 };
    static const QUMethod slot_5 = {"find", 0, 0 };
    static const QUMethod slot_6 = {"findAgain", 0, 0 };
    static const QUMethod slot_7 = {"findAgainPrev", 0, 0 };
    static const QUMethod slot_8 = {"goHome", 0, 0 };
    static const QUMethod slot_9 = {"print", 0, 0 };
    static const QUMethod slot_10 = {"updateBookmarkMenu", 0, 0 };
    static const QUMethod slot_11 = {"setupBookmarkMenu", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"showBookmark", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "link", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"showLinkFromClient", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ "link", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"showLink", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ "links", &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod slot_15 = {"showLinks", 1, param_slot_15 };
    static const QUMethod slot_16 = {"showQtHelp", 0, 0 };
    static const QUMethod slot_17 = {"showSettingsDialog", 0, 0 };
    static const QUMethod slot_18 = {"showWebBrowserSettings", 0, 0 };
    static const QUParameter param_slot_19[] = {
	{ "page", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"showSettingsDialog", 1, param_slot_19 };
    static const QUMethod slot_20 = {"hide", 0, 0 };
    static const QUParameter param_slot_21[] = {
	{ 0, &static_QUType_ptr, "MainWindow", QUParameter::Out }
    };
    static const QUMethod slot_21 = {"newWindow", 1, param_slot_21 };
    static const QUMethod slot_22 = {"saveSettings", 0, 0 };
    static const QUMethod slot_23 = {"saveToolbarSettings", 0, 0 };
    static const QUParameter param_slot_24[] = {
	{ "link", &static_QUType_QString, 0, QUParameter::In },
	{ "terms", &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod slot_24 = {"showSearchLink", 2, param_slot_24 };
    static const QUMethod slot_25 = {"showGoActionLink", 0, 0 };
    static const QUMethod slot_26 = {"showAssistantHelp", 0, 0 };
    static const QUMethod slot_27 = {"updateProfileSettings", 0, 0 };
    static const QUParameter param_slot_28[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_28 = {"backwardAvailable", 1, param_slot_28 };
    static const QUParameter param_slot_29[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_29 = {"forwardAvailable", 1, param_slot_29 };
    static const QUMethod slot_30 = {"browserTabChanged", 0, 0 };
    static const QUMethod slot_31 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "setup()", &slot_1, QMetaData::Public },
	{ "destroy()", &slot_2, QMetaData::Public },
	{ "about()", &slot_3, QMetaData::Public },
	{ "aboutApplication()", &slot_4, QMetaData::Public },
	{ "find()", &slot_5, QMetaData::Public },
	{ "findAgain()", &slot_6, QMetaData::Public },
	{ "findAgainPrev()", &slot_7, QMetaData::Public },
	{ "goHome()", &slot_8, QMetaData::Public },
	{ "print()", &slot_9, QMetaData::Public },
	{ "updateBookmarkMenu()", &slot_10, QMetaData::Public },
	{ "setupBookmarkMenu()", &slot_11, QMetaData::Public },
	{ "showBookmark(int)", &slot_12, QMetaData::Public },
	{ "showLinkFromClient(const QString&)", &slot_13, QMetaData::Public },
	{ "showLink(const QString&)", &slot_14, QMetaData::Public },
	{ "showLinks(const QStringList&)", &slot_15, QMetaData::Public },
	{ "showQtHelp()", &slot_16, QMetaData::Public },
	{ "showSettingsDialog()", &slot_17, QMetaData::Public },
	{ "showWebBrowserSettings()", &slot_18, QMetaData::Public },
	{ "showSettingsDialog(int)", &slot_19, QMetaData::Public },
	{ "hide()", &slot_20, QMetaData::Public },
	{ "newWindow()", &slot_21, QMetaData::Public },
	{ "saveSettings()", &slot_22, QMetaData::Public },
	{ "saveToolbarSettings()", &slot_23, QMetaData::Public },
	{ "showSearchLink(const QString&,const QStringList&)", &slot_24, QMetaData::Public },
	{ "showGoActionLink()", &slot_25, QMetaData::Public },
	{ "showAssistantHelp()", &slot_26, QMetaData::Public },
	{ "updateProfileSettings()", &slot_27, QMetaData::Public },
	{ "backwardAvailable(bool)", &slot_28, QMetaData::Public },
	{ "forwardAvailable(bool)", &slot_29, QMetaData::Public },
	{ "browserTabChanged()", &slot_30, QMetaData::Public },
	{ "languageChange()", &slot_31, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainWindow", parentObject,
	slot_tbl, 32,
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
    return QMainWindow::qt_cast( clname );
}

bool MainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: init(); break;
    case 1: setup(); break;
    case 2: destroy(); break;
    case 3: about(); break;
    case 4: aboutApplication(); break;
    case 5: find(); break;
    case 6: findAgain(); break;
    case 7: findAgainPrev(); break;
    case 8: goHome(); break;
    case 9: print(); break;
    case 10: updateBookmarkMenu(); break;
    case 11: setupBookmarkMenu(); break;
    case 12: showBookmark((int)static_QUType_int.get(_o+1)); break;
    case 13: showLinkFromClient((const QString&)static_QUType_QString.get(_o+1)); break;
    case 14: showLink((const QString&)static_QUType_QString.get(_o+1)); break;
    case 15: showLinks((const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+1))); break;
    case 16: showQtHelp(); break;
    case 17: showSettingsDialog(); break;
    case 18: showWebBrowserSettings(); break;
    case 19: showSettingsDialog((int)static_QUType_int.get(_o+1)); break;
    case 20: hide(); break;
    case 21: static_QUType_ptr.set(_o,newWindow()); break;
    case 22: saveSettings(); break;
    case 23: saveToolbarSettings(); break;
    case 24: showSearchLink((const QString&)static_QUType_QString.get(_o+1),(const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+2))); break;
    case 25: showGoActionLink(); break;
    case 26: showAssistantHelp(); break;
    case 27: updateProfileSettings(); break;
    case 28: backwardAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 29: forwardAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 30: browserTabChanged(); break;
    case 31: languageChange(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainWindow::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MainWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
