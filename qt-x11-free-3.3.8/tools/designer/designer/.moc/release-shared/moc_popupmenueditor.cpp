/****************************************************************************
** PopupMenuEditorItem meta object code from reading C++ file 'popupmenueditor.h'
**
** Created: Wed Oct 9 11:05:02 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../popupmenueditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PopupMenuEditorItem::className() const
{
    return "PopupMenuEditorItem";
}

QMetaObject *PopupMenuEditorItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PopupMenuEditorItem( "PopupMenuEditorItem", &PopupMenuEditorItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PopupMenuEditorItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PopupMenuEditorItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PopupMenuEditorItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PopupMenuEditorItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PopupMenuEditorItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"selfDestruct", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "selfDestruct()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"PopupMenuEditorItem", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PopupMenuEditorItem.setMetaObject( metaObj );
    return metaObj;
}

void* PopupMenuEditorItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PopupMenuEditorItem" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool PopupMenuEditorItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: selfDestruct(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PopupMenuEditorItem::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PopupMenuEditorItem::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool PopupMenuEditorItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PopupMenuEditor::className() const
{
    return "PopupMenuEditor";
}

QMetaObject *PopupMenuEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PopupMenuEditor( "PopupMenuEditor", &PopupMenuEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PopupMenuEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PopupMenuEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PopupMenuEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PopupMenuEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PopupMenuEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"cut", 0, 0 };
    static const QUMethod slot_1 = {"copy", 0, 0 };
    static const QUMethod slot_2 = {"paste", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"remove", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "a", &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod slot_4 = {"remove", 1, param_slot_4 };
    static const QUMethod slot_5 = {"resizeToContents", 0, 0 };
    static const QUMethod slot_6 = {"showSubMenu", 0, 0 };
    static const QUMethod slot_7 = {"hideSubMenu", 0, 0 };
    static const QUMethod slot_8 = {"focusOnSubMenu", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "cut()", &slot_0, QMetaData::Public },
	{ "copy()", &slot_1, QMetaData::Public },
	{ "paste()", &slot_2, QMetaData::Public },
	{ "remove(int)", &slot_3, QMetaData::Public },
	{ "remove(QAction*)", &slot_4, QMetaData::Public },
	{ "resizeToContents()", &slot_5, QMetaData::Public },
	{ "showSubMenu()", &slot_6, QMetaData::Public },
	{ "hideSubMenu()", &slot_7, QMetaData::Public },
	{ "focusOnSubMenu()", &slot_8, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod signal_0 = {"inserted", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod signal_1 = {"removed", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "inserted(QAction*)", &signal_0, QMetaData::Public },
	{ "removed(QAction*)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"PopupMenuEditor", parentObject,
	slot_tbl, 9,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PopupMenuEditor.setMetaObject( metaObj );
    return metaObj;
}

void* PopupMenuEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PopupMenuEditor" ) )
	return this;
    return QWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL inserted
void PopupMenuEditor::inserted( QAction* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL removed
void PopupMenuEditor::removed( QAction* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool PopupMenuEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: cut(); break;
    case 1: copy(); break;
    case 2: paste(); break;
    case 3: remove((int)static_QUType_int.get(_o+1)); break;
    case 4: remove((QAction*)static_QUType_ptr.get(_o+1)); break;
    case 5: resizeToContents(); break;
    case 6: showSubMenu(); break;
    case 7: hideSubMenu(); break;
    case 8: focusOnSubMenu(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PopupMenuEditor::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: inserted((QAction*)static_QUType_ptr.get(_o+1)); break;
    case 1: removed((QAction*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool PopupMenuEditor::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool PopupMenuEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
