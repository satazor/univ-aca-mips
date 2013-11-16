/****************************************************************************
** MenuBarEditorItem meta object code from reading C++ file 'menubareditor.h'
**
** Created: Wed Oct 9 11:05:02 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../menubareditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MenuBarEditorItem::className() const
{
    return "MenuBarEditorItem";
}

QMetaObject *MenuBarEditorItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MenuBarEditorItem( "MenuBarEditorItem", &MenuBarEditorItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MenuBarEditorItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MenuBarEditorItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MenuBarEditorItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MenuBarEditorItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MenuBarEditorItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"MenuBarEditorItem", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MenuBarEditorItem.setMetaObject( metaObj );
    return metaObj;
}

void* MenuBarEditorItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MenuBarEditorItem" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool MenuBarEditorItem::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool MenuBarEditorItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MenuBarEditorItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool MenuBarEditorItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *MenuBarEditor::className() const
{
    return "MenuBarEditor";
}

QMetaObject *MenuBarEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MenuBarEditor( "MenuBarEditor", &MenuBarEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MenuBarEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MenuBarEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MenuBarEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MenuBarEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MenuBarEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMenuBar::staticMetaObject();
    static const QUMethod slot_0 = {"cut", 0, 0 };
    static const QUMethod slot_1 = {"copy", 0, 0 };
    static const QUMethod slot_2 = {"paste", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "cut()", &slot_0, QMetaData::Public },
	{ "copy()", &slot_1, QMetaData::Public },
	{ "paste()", &slot_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MenuBarEditor", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MenuBarEditor.setMetaObject( metaObj );
    return metaObj;
}

void* MenuBarEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MenuBarEditor" ) )
	return this;
    return QMenuBar::qt_cast( clname );
}

bool MenuBarEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: cut(); break;
    case 1: copy(); break;
    case 2: paste(); break;
    default:
	return QMenuBar::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MenuBarEditor::qt_emit( int _id, QUObject* _o )
{
    return QMenuBar::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MenuBarEditor::qt_property( int id, int f, QVariant* v)
{
    return QMenuBar::qt_property( id, f, v);
}

bool MenuBarEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
