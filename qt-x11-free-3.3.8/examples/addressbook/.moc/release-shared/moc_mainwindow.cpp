/****************************************************************************
** ABMainWindow meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Oct 9 11:07:07 2013
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

const char *ABMainWindow::className() const
{
    return "ABMainWindow";
}

QMetaObject *ABMainWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ABMainWindow( "ABMainWindow", &ABMainWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ABMainWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ABMainWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ABMainWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ABMainWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ABMainWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"fileNew", 0, 0 };
    static const QUMethod slot_1 = {"fileOpen", 0, 0 };
    static const QUMethod slot_2 = {"fileSave", 0, 0 };
    static const QUMethod slot_3 = {"fileSaveAs", 0, 0 };
    static const QUMethod slot_4 = {"filePrint", 0, 0 };
    static const QUMethod slot_5 = {"closeWindow", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "fileNew()", &slot_0, QMetaData::Protected },
	{ "fileOpen()", &slot_1, QMetaData::Protected },
	{ "fileSave()", &slot_2, QMetaData::Protected },
	{ "fileSaveAs()", &slot_3, QMetaData::Protected },
	{ "filePrint()", &slot_4, QMetaData::Protected },
	{ "closeWindow()", &slot_5, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ABMainWindow", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ABMainWindow.setMetaObject( metaObj );
    return metaObj;
}

void* ABMainWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ABMainWindow" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool ABMainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: fileNew(); break;
    case 1: fileOpen(); break;
    case 2: fileSave(); break;
    case 3: fileSaveAs(); break;
    case 4: filePrint(); break;
    case 5: closeWindow(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ABMainWindow::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ABMainWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool ABMainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
