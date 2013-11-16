/****************************************************************************
** HelpWindow meta object code from reading C++ file 'helpwindow.h'
**
** Created: Wed Oct 9 11:06:04 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../helpwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *HelpWindow::className() const
{
    return "HelpWindow";
}

QMetaObject *HelpWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_HelpWindow( "HelpWindow", &HelpWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString HelpWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString HelpWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* HelpWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTextBrowser::staticMetaObject();
    static const QUMethod slot_0 = {"copy", 0, 0 };
    static const QUMethod slot_1 = {"ensureCursorVisible", 0, 0 };
    static const QUMethod slot_2 = {"openLinkInNewWindow", 0, 0 };
    static const QUMethod slot_3 = {"openLinkInNewPage", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"updateForward", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"updateBackward", 1, param_slot_5 };
    static const QMetaData slot_tbl[] = {
	{ "copy()", &slot_0, QMetaData::Public },
	{ "ensureCursorVisible()", &slot_1, QMetaData::Protected },
	{ "openLinkInNewWindow()", &slot_2, QMetaData::Private },
	{ "openLinkInNewPage()", &slot_3, QMetaData::Private },
	{ "updateForward(bool)", &slot_4, QMetaData::Private },
	{ "updateBackward(bool)", &slot_5, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"chooseWebBrowser", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "chooseWebBrowser()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"HelpWindow", parentObject,
	slot_tbl, 6,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_HelpWindow.setMetaObject( metaObj );
    return metaObj;
}

void* HelpWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "HelpWindow" ) )
	return this;
    return QTextBrowser::qt_cast( clname );
}

// SIGNAL chooseWebBrowser
void HelpWindow::chooseWebBrowser()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool HelpWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: copy(); break;
    case 1: ensureCursorVisible(); break;
    case 2: openLinkInNewWindow(); break;
    case 3: openLinkInNewPage(); break;
    case 4: updateForward((bool)static_QUType_bool.get(_o+1)); break;
    case 5: updateBackward((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QTextBrowser::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool HelpWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: chooseWebBrowser(); break;
    default:
	return QTextBrowser::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool HelpWindow::qt_property( int id, int f, QVariant* v)
{
    return QTextBrowser::qt_property( id, f, v);
}

bool HelpWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
