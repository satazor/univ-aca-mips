/****************************************************************************
** FileMainWindow meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Oct 9 11:08:57 2013
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

const char *FileMainWindow::className() const
{
    return "FileMainWindow";
}

QMetaObject *FileMainWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FileMainWindow( "FileMainWindow", &FileMainWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FileMainWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FileMainWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FileMainWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FileMainWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FileMainWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"directoryChanged", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "dirs", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"slotStartReadDir", 1, param_slot_1 };
    static const QUMethod slot_2 = {"slotReadNextDir", 0, 0 };
    static const QUMethod slot_3 = {"slotReadDirDone", 0, 0 };
    static const QUMethod slot_4 = {"cdUp", 0, 0 };
    static const QUMethod slot_5 = {"newFolder", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "path", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"changePath", 1, param_slot_6 };
    static const QUMethod slot_7 = {"enableUp", 0, 0 };
    static const QUMethod slot_8 = {"disableUp", 0, 0 };
    static const QUMethod slot_9 = {"enableMkdir", 0, 0 };
    static const QUMethod slot_10 = {"disableMkdir", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "directoryChanged(const QString&)", &slot_0, QMetaData::Protected },
	{ "slotStartReadDir(int)", &slot_1, QMetaData::Protected },
	{ "slotReadNextDir()", &slot_2, QMetaData::Protected },
	{ "slotReadDirDone()", &slot_3, QMetaData::Protected },
	{ "cdUp()", &slot_4, QMetaData::Protected },
	{ "newFolder()", &slot_5, QMetaData::Protected },
	{ "changePath(const QString&)", &slot_6, QMetaData::Protected },
	{ "enableUp()", &slot_7, QMetaData::Protected },
	{ "disableUp()", &slot_8, QMetaData::Protected },
	{ "enableMkdir()", &slot_9, QMetaData::Protected },
	{ "disableMkdir()", &slot_10, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"FileMainWindow", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FileMainWindow.setMetaObject( metaObj );
    return metaObj;
}

void* FileMainWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FileMainWindow" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool FileMainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: directoryChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: slotStartReadDir((int)static_QUType_int.get(_o+1)); break;
    case 2: slotReadNextDir(); break;
    case 3: slotReadDirDone(); break;
    case 4: cdUp(); break;
    case 5: newFolder(); break;
    case 6: changePath((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: enableUp(); break;
    case 8: disableUp(); break;
    case 9: enableMkdir(); break;
    case 10: disableMkdir(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FileMainWindow::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool FileMainWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool FileMainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
