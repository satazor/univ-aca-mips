/****************************************************************************
** DirectoryView meta object code from reading C++ file 'dirview.h'
**
** Created: Wed Oct 9 11:08:07 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../dirview/dirview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DirectoryView::className() const
{
    return "DirectoryView";
}

QMetaObject *DirectoryView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DirectoryView( "DirectoryView", &DirectoryView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DirectoryView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DirectoryView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DirectoryView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DirectoryView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DirectoryView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setDir", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_1 = {"slotFolderSelected", 1, param_slot_1 };
    static const QUMethod slot_2 = {"openFolder", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setDir(const QString&)", &slot_0, QMetaData::Public },
	{ "slotFolderSelected(QListViewItem*)", &slot_1, QMetaData::Protected },
	{ "openFolder()", &slot_2, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"folderSelected", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "folderSelected(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"DirectoryView", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DirectoryView.setMetaObject( metaObj );
    return metaObj;
}

void* DirectoryView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DirectoryView" ) )
	return this;
    return QListView::qt_cast( clname );
}

// SIGNAL folderSelected
void DirectoryView::folderSelected( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool DirectoryView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setDir((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: slotFolderSelected((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 2: openFolder(); break;
    default:
	return QListView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DirectoryView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: folderSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QListView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool DirectoryView::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool DirectoryView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
