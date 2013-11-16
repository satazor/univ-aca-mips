/****************************************************************************
** QApplication meta object code from reading C++ file 'qapplication.h'
**
** Created: Wed Oct 9 10:52:26 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qapplication.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QApplication::className() const
{
    return "QApplication";
}

QMetaObject *QApplication::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QApplication( "QApplication", &QApplication::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QApplication::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QApplication", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QApplication::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QApplication", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QApplication::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"quit", 0, 0 };
    static const QUMethod slot_1 = {"closeAllWindows", 0, 0 };
    static const QUMethod slot_2 = {"aboutQt", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "quit()", &slot_0, QMetaData::Public },
	{ "closeAllWindows()", &slot_1, QMetaData::Public },
	{ "aboutQt()", &slot_2, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"lastWindowClosed", 0, 0 };
    static const QUMethod signal_1 = {"aboutToQuit", 0, 0 };
    static const QUMethod signal_2 = {"guiThreadAwake", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "lastWindowClosed()", &signal_0, QMetaData::Public },
	{ "aboutToQuit()", &signal_1, QMetaData::Public },
	{ "guiThreadAwake()", &signal_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QApplication", parentObject,
	slot_tbl, 3,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QApplication.setMetaObject( metaObj );
    return metaObj;
}

void* QApplication::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QApplication" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL lastWindowClosed
void QApplication::lastWindowClosed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL aboutToQuit
void QApplication::aboutToQuit()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL guiThreadAwake
void QApplication::guiThreadAwake()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

bool QApplication::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: quit(); break;
    case 1: closeAllWindows(); break;
    case 2: aboutQt(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QApplication::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: lastWindowClosed(); break;
    case 1: aboutToQuit(); break;
    case 2: guiThreadAwake(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QApplication::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QApplication::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
