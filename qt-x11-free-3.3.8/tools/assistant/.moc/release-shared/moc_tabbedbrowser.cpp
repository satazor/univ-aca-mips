/****************************************************************************
** TabbedBrowser meta object code from reading C++ file 'tabbedbrowser.h'
**
** Created: Wed Oct 9 11:06:08 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../tabbedbrowser.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TabbedBrowser::className() const
{
    return "TabbedBrowser";
}

QMetaObject *TabbedBrowser::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TabbedBrowser( "TabbedBrowser", &TabbedBrowser::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TabbedBrowser::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TabbedBrowser", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TabbedBrowser::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TabbedBrowser", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TabbedBrowser::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"forward", 0, 0 };
    static const QUMethod slot_1 = {"backward", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "ref", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setSource", 1, param_slot_2 };
    static const QUMethod slot_3 = {"reload", 0, 0 };
    static const QUMethod slot_4 = {"home", 0, 0 };
    static const QUMethod slot_5 = {"nextTab", 0, 0 };
    static const QUMethod slot_6 = {"previousTab", 0, 0 };
    static const QUParameter param_slot_7[] = {
	{ "lnk", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"newTab", 1, param_slot_7 };
    static const QUMethod slot_8 = {"zoomIn", 0, 0 };
    static const QUMethod slot_9 = {"zoomOut", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ "title", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"updateTitle", 1, param_slot_10 };
    static const QUMethod slot_11 = {"newTab", 0, 0 };
    static const QUMethod slot_12 = {"transferFocus", 0, 0 };
    static const QUParameter param_slot_13[] = {
	{ "win", &static_QUType_ptr, "HelpWindow", QUParameter::In }
    };
    static const QUMethod slot_13 = {"initHelpWindow", 1, param_slot_13 };
    static const QUMethod slot_14 = {"setup", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ "uline", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"setLinkUnderline", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "pal", &static_QUType_varptr, "\x0b", QUParameter::In }
    };
    static const QUMethod slot_16 = {"setPalette", 1, param_slot_16 };
    static const QUMethod slot_17 = {"copy", 0, 0 };
    static const QUMethod slot_18 = {"closeTab", 0, 0 };
    static const QUMethod slot_19 = {"sourceChanged", 0, 0 };
    static const QUMethod slot_20 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "forward()", &slot_0, QMetaData::Public },
	{ "backward()", &slot_1, QMetaData::Public },
	{ "setSource(const QString&)", &slot_2, QMetaData::Public },
	{ "reload()", &slot_3, QMetaData::Public },
	{ "home()", &slot_4, QMetaData::Public },
	{ "nextTab()", &slot_5, QMetaData::Public },
	{ "previousTab()", &slot_6, QMetaData::Public },
	{ "newTab(const QString&)", &slot_7, QMetaData::Public },
	{ "zoomIn()", &slot_8, QMetaData::Public },
	{ "zoomOut()", &slot_9, QMetaData::Public },
	{ "updateTitle(const QString&)", &slot_10, QMetaData::Public },
	{ "newTab()", &slot_11, QMetaData::Public },
	{ "transferFocus()", &slot_12, QMetaData::Public },
	{ "initHelpWindow(HelpWindow*)", &slot_13, QMetaData::Public },
	{ "setup()", &slot_14, QMetaData::Public },
	{ "setLinkUnderline(bool)", &slot_15, QMetaData::Public },
	{ "setPalette(const QPalette&)", &slot_16, QMetaData::Public },
	{ "copy()", &slot_17, QMetaData::Public },
	{ "closeTab()", &slot_18, QMetaData::Public },
	{ "sourceChanged()", &slot_19, QMetaData::Public },
	{ "languageChange()", &slot_20, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"TabbedBrowser", parentObject,
	slot_tbl, 21,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TabbedBrowser.setMetaObject( metaObj );
    return metaObj;
}

void* TabbedBrowser::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TabbedBrowser" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool TabbedBrowser::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: forward(); break;
    case 1: backward(); break;
    case 2: setSource((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: reload(); break;
    case 4: home(); break;
    case 5: nextTab(); break;
    case 6: previousTab(); break;
    case 7: newTab((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: zoomIn(); break;
    case 9: zoomOut(); break;
    case 10: updateTitle((const QString&)static_QUType_QString.get(_o+1)); break;
    case 11: newTab(); break;
    case 12: transferFocus(); break;
    case 13: initHelpWindow((HelpWindow*)static_QUType_ptr.get(_o+1)); break;
    case 14: setup(); break;
    case 15: setLinkUnderline((bool)static_QUType_bool.get(_o+1)); break;
    case 16: setPalette((const QPalette&)*((const QPalette*)static_QUType_ptr.get(_o+1))); break;
    case 17: copy(); break;
    case 18: closeTab(); break;
    case 19: sourceChanged(); break;
    case 20: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TabbedBrowser::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TabbedBrowser::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool TabbedBrowser::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
