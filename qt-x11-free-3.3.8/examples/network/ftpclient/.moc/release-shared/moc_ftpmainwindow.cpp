/****************************************************************************
** FtpMainWindow meta object code from reading C++ file 'ftpmainwindow.h'
**
** Created: Wed Oct 9 11:09:05 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../ftpmainwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FtpMainWindow::className() const
{
    return "FtpMainWindow";
}

QMetaObject *FtpMainWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FtpMainWindow( "FtpMainWindow", &FtpMainWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FtpMainWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FtpMainWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FtpMainWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FtpMainWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FtpMainWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"connectToHost", 0, 0 };
    static const QUMethod slot_1 = {"languageChange", 0, 0 };
    static const QUMethod slot_2 = {"uploadFile", 0, 0 };
    static const QUMethod slot_3 = {"downloadFile", 0, 0 };
    static const QUMethod slot_4 = {"removeFile", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "newPath", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"changePath", 1, param_slot_5 };
    static const QUMethod slot_6 = {"ftp_commandStarted", 0, 0 };
    static const QUMethod slot_7 = {"ftp_commandFinished", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ "error", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"ftp_done", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ "state", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"ftp_stateChanged", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ "i", &static_QUType_ptr, "QUrlInfo", QUParameter::In }
    };
    static const QUMethod slot_10 = {"ftp_listInfo", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "code", &static_QUType_int, 0, QUParameter::In },
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"ftp_rawCommandReply", 2, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_12 = {"changePathOrDownload", 1, param_slot_12 };
    static const QMetaData slot_tbl[] = {
	{ "connectToHost()", &slot_0, QMetaData::Public },
	{ "languageChange()", &slot_1, QMetaData::Protected },
	{ "uploadFile()", &slot_2, QMetaData::Private },
	{ "downloadFile()", &slot_3, QMetaData::Private },
	{ "removeFile()", &slot_4, QMetaData::Private },
	{ "changePath(const QString&)", &slot_5, QMetaData::Private },
	{ "ftp_commandStarted()", &slot_6, QMetaData::Private },
	{ "ftp_commandFinished()", &slot_7, QMetaData::Private },
	{ "ftp_done(bool)", &slot_8, QMetaData::Private },
	{ "ftp_stateChanged(int)", &slot_9, QMetaData::Private },
	{ "ftp_listInfo(const QUrlInfo&)", &slot_10, QMetaData::Private },
	{ "ftp_rawCommandReply(int,const QString&)", &slot_11, QMetaData::Private },
	{ "changePathOrDownload(QListViewItem*)", &slot_12, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"FtpMainWindow", parentObject,
	slot_tbl, 13,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FtpMainWindow.setMetaObject( metaObj );
    return metaObj;
}

void* FtpMainWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FtpMainWindow" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool FtpMainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: connectToHost(); break;
    case 1: languageChange(); break;
    case 2: uploadFile(); break;
    case 3: downloadFile(); break;
    case 4: removeFile(); break;
    case 5: changePath((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: ftp_commandStarted(); break;
    case 7: ftp_commandFinished(); break;
    case 8: ftp_done((bool)static_QUType_bool.get(_o+1)); break;
    case 9: ftp_stateChanged((int)static_QUType_int.get(_o+1)); break;
    case 10: ftp_listInfo((const QUrlInfo&)*((const QUrlInfo*)static_QUType_ptr.get(_o+1))); break;
    case 11: ftp_rawCommandReply((int)static_QUType_int.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 12: changePathOrDownload((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FtpMainWindow::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool FtpMainWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool FtpMainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
