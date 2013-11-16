/****************************************************************************
** ArchiveDialog meta object code from reading C++ file 'archivedialog.h'
**
** Created: Wed Oct 9 11:09:01 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../archivedialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ArchiveDialog::className() const
{
    return "ArchiveDialog";
}

QMetaObject *ArchiveDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ArchiveDialog( "ArchiveDialog", &ArchiveDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ArchiveDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ArchiveDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ArchiveDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ArchiveDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ArchiveDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "it", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"fetch", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "error", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"fetchDone", 1, param_slot_1 };
    static const QUMethod slot_2 = {"search", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "error", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"searchDone", 1, param_slot_3 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "fetch(QListViewItem*)", &slot_0, QMetaData::Public },
	{ "fetchDone(bool)", &slot_1, QMetaData::Public },
	{ "search()", &slot_2, QMetaData::Public },
	{ "searchDone(bool)", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ArchiveDialog", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ArchiveDialog.setMetaObject( metaObj );
    return metaObj;
}

void* ArchiveDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ArchiveDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ArchiveDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: fetch((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: fetchDone((bool)static_QUType_bool.get(_o+1)); break;
    case 2: search(); break;
    case 3: searchDone((bool)static_QUType_bool.get(_o+1)); break;
    case 4: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ArchiveDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ArchiveDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ArchiveDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
