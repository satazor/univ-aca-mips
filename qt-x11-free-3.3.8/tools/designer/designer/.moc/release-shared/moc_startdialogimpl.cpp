/****************************************************************************
** FileDialog meta object code from reading C++ file 'startdialogimpl.h'
**
** Created: Wed Oct 9 11:04:58 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../startdialogimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FileDialog::className() const
{
    return "FileDialog";
}

QMetaObject *FileDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FileDialog( "FileDialog", &FileDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FileDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FileDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FileDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FileDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FileDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFileDialog::staticMetaObject();
    static const QUMethod slot_0 = {"accept", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "accept()", &slot_0, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"fileSelected", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "fileSelected()", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"FileDialog", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FileDialog.setMetaObject( metaObj );
    return metaObj;
}

void* FileDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FileDialog" ) )
	return this;
    return QFileDialog::qt_cast( clname );
}

// SIGNAL fileSelected
void FileDialog::fileSelected()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool FileDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: accept(); break;
    default:
	return QFileDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FileDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: fileSelected(); break;
    default:
	return QFileDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool FileDialog::qt_property( int id, int f, QVariant* v)
{
    return QFileDialog::qt_property( id, f, v);
}

bool FileDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *StartDialog::className() const
{
    return "StartDialog";
}

QMetaObject *StartDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_StartDialog( "StartDialog", &StartDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString StartDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StartDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString StartDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StartDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* StartDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = StartDialogBase::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"recentItemChanged", 1, param_slot_0 };
    static const QUMethod slot_1 = {"clearFileInfo", 0, 0 };
    static const QUMethod slot_2 = {"accept", 0, 0 };
    static const QUMethod slot_3 = {"reject", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "recentItemChanged(QIconViewItem*)", &slot_0, QMetaData::Protected },
	{ "clearFileInfo()", &slot_1, QMetaData::Protected },
	{ "accept()", &slot_2, QMetaData::Protected },
	{ "reject()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"StartDialog", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_StartDialog.setMetaObject( metaObj );
    return metaObj;
}

void* StartDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "StartDialog" ) )
	return this;
    return StartDialogBase::qt_cast( clname );
}

bool StartDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: recentItemChanged((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: clearFileInfo(); break;
    case 2: accept(); break;
    case 3: reject(); break;
    default:
	return StartDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool StartDialog::qt_emit( int _id, QUObject* _o )
{
    return StartDialogBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool StartDialog::qt_property( int id, int f, QVariant* v)
{
    return StartDialogBase::qt_property( id, f, v);
}

bool StartDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
