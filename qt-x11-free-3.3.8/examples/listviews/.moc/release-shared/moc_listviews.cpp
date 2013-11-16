/****************************************************************************
** Folder meta object code from reading C++ file 'listviews.h'
**
** Created: Wed Oct 9 11:07:59 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listviews.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Folder::className() const
{
    return "Folder";
}

QMetaObject *Folder::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Folder( "Folder", &Folder::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Folder::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Folder", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Folder::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Folder", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Folder::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Folder", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Folder.setMetaObject( metaObj );
    return metaObj;
}

void* Folder::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Folder" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool Folder::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool Folder::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Folder::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool Folder::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *ListViews::className() const
{
    return "ListViews";
}

QMetaObject *ListViews::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListViews( "ListViews", &ListViews::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListViews::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListViews", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListViews::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListViews", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListViews::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QSplitter::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"slotFolderChanged", 1, param_slot_0 };
    static const QUMethod slot_1 = {"slotMessageChanged", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"slotRMB", 3, param_slot_2 };
    static const QMetaData slot_tbl[] = {
	{ "slotFolderChanged(QListViewItem*)", &slot_0, QMetaData::Protected },
	{ "slotMessageChanged()", &slot_1, QMetaData::Protected },
	{ "slotRMB(QListViewItem*,const QPoint&,int)", &slot_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListViews", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListViews.setMetaObject( metaObj );
    return metaObj;
}

void* ListViews::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListViews" ) )
	return this;
    return QSplitter::qt_cast( clname );
}

bool ListViews::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotFolderChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: slotMessageChanged(); break;
    case 2: slotRMB((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    default:
	return QSplitter::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListViews::qt_emit( int _id, QUObject* _o )
{
    return QSplitter::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ListViews::qt_property( int id, int f, QVariant* v)
{
    return QSplitter::qt_property( id, f, v);
}

bool ListViews::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
