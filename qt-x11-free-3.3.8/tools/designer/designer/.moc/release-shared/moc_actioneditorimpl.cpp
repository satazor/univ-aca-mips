/****************************************************************************
** ActionEditor meta object code from reading C++ file 'actioneditorimpl.h'
**
** Created: Wed Oct 9 11:04:52 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../actioneditorimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ActionEditor::className() const
{
    return "ActionEditor";
}

QMetaObject *ActionEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ActionEditor( "ActionEditor", &ActionEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ActionEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ActionEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ActionEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ActionEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ActionEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ActionEditorBase::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"currentActionChanged", 1, param_slot_0 };
    static const QUMethod slot_1 = {"deleteAction", 0, 0 };
    static const QUMethod slot_2 = {"newAction", 0, 0 };
    static const QUMethod slot_3 = {"newActionGroup", 0, 0 };
    static const QUMethod slot_4 = {"newDropDownActionGroup", 0, 0 };
    static const QUMethod slot_5 = {"connectionsClicked", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "o", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_6 = {"removeConnections", 1, param_slot_6 };
    static const QMetaData slot_tbl[] = {
	{ "currentActionChanged(QListViewItem*)", &slot_0, QMetaData::Protected },
	{ "deleteAction()", &slot_1, QMetaData::Protected },
	{ "newAction()", &slot_2, QMetaData::Protected },
	{ "newActionGroup()", &slot_3, QMetaData::Protected },
	{ "newDropDownActionGroup()", &slot_4, QMetaData::Protected },
	{ "connectionsClicked()", &slot_5, QMetaData::Protected },
	{ "removeConnections(QObject*)", &slot_6, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"hidden", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod signal_1 = {"removing", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "hidden()", &signal_0, QMetaData::Protected },
	{ "removing(QAction*)", &signal_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ActionEditor", parentObject,
	slot_tbl, 7,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ActionEditor.setMetaObject( metaObj );
    return metaObj;
}

void* ActionEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ActionEditor" ) )
	return this;
    return ActionEditorBase::qt_cast( clname );
}

// SIGNAL hidden
void ActionEditor::hidden()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL removing
void ActionEditor::removing( QAction* t0 )
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

bool ActionEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: currentActionChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: deleteAction(); break;
    case 2: newAction(); break;
    case 3: newActionGroup(); break;
    case 4: newDropDownActionGroup(); break;
    case 5: connectionsClicked(); break;
    case 6: removeConnections((QObject*)static_QUType_ptr.get(_o+1)); break;
    default:
	return ActionEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ActionEditor::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: hidden(); break;
    case 1: removing((QAction*)static_QUType_ptr.get(_o+1)); break;
    default:
	return ActionEditorBase::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ActionEditor::qt_property( int id, int f, QVariant* v)
{
    return ActionEditorBase::qt_property( id, f, v);
}

bool ActionEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
