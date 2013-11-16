/****************************************************************************
** MenuExample meta object code from reading C++ file 'menu.h'
**
** Created: Wed Oct 9 11:08:00 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../menu.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MenuExample::className() const
{
    return "MenuExample";
}

QMetaObject *MenuExample::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MenuExample( "MenuExample", &MenuExample::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MenuExample::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MenuExample", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MenuExample::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MenuExample", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MenuExample::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"open", 0, 0 };
    static const QUMethod slot_1 = {"news", 0, 0 };
    static const QUMethod slot_2 = {"save", 0, 0 };
    static const QUMethod slot_3 = {"closeDoc", 0, 0 };
    static const QUMethod slot_4 = {"undo", 0, 0 };
    static const QUMethod slot_5 = {"redo", 0, 0 };
    static const QUMethod slot_6 = {"normal", 0, 0 };
    static const QUMethod slot_7 = {"bold", 0, 0 };
    static const QUMethod slot_8 = {"underline", 0, 0 };
    static const QUMethod slot_9 = {"about", 0, 0 };
    static const QUMethod slot_10 = {"aboutQt", 0, 0 };
    static const QUMethod slot_11 = {"printer", 0, 0 };
    static const QUMethod slot_12 = {"file", 0, 0 };
    static const QUMethod slot_13 = {"fax", 0, 0 };
    static const QUMethod slot_14 = {"printerSetup", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "open()", &slot_0, QMetaData::Public },
	{ "news()", &slot_1, QMetaData::Public },
	{ "save()", &slot_2, QMetaData::Public },
	{ "closeDoc()", &slot_3, QMetaData::Public },
	{ "undo()", &slot_4, QMetaData::Public },
	{ "redo()", &slot_5, QMetaData::Public },
	{ "normal()", &slot_6, QMetaData::Public },
	{ "bold()", &slot_7, QMetaData::Public },
	{ "underline()", &slot_8, QMetaData::Public },
	{ "about()", &slot_9, QMetaData::Public },
	{ "aboutQt()", &slot_10, QMetaData::Public },
	{ "printer()", &slot_11, QMetaData::Public },
	{ "file()", &slot_12, QMetaData::Public },
	{ "fax()", &slot_13, QMetaData::Public },
	{ "printerSetup()", &slot_14, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"explain", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "explain(const QString&)", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MenuExample", parentObject,
	slot_tbl, 15,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MenuExample.setMetaObject( metaObj );
    return metaObj;
}

void* MenuExample::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MenuExample" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL explain
void MenuExample::explain( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool MenuExample::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: open(); break;
    case 1: news(); break;
    case 2: save(); break;
    case 3: closeDoc(); break;
    case 4: undo(); break;
    case 5: redo(); break;
    case 6: normal(); break;
    case 7: bold(); break;
    case 8: underline(); break;
    case 9: about(); break;
    case 10: aboutQt(); break;
    case 11: printer(); break;
    case 12: file(); break;
    case 13: fax(); break;
    case 14: printerSetup(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MenuExample::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: explain((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MenuExample::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool MenuExample::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
