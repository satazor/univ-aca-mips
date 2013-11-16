/****************************************************************************
** ActionListView meta object code from reading C++ file 'actionlistview.h'
**
** Created: Wed Oct 9 11:04:52 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../actionlistview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ActionListView::className() const
{
    return "ActionListView";
}

QMetaObject *ActionListView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ActionListView( "ActionListView", &ActionListView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ActionListView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ActionListView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ActionListView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ActionListView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ActionListView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "p", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_0 = {"rmbMenu", 2, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "rmbMenu(QListViewItem*,const QPoint&)", &slot_0, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"insertAction", 0, 0 };
    static const QUMethod signal_1 = {"insertActionGroup", 0, 0 };
    static const QUMethod signal_2 = {"insertDropDownActionGroup", 0, 0 };
    static const QUMethod signal_3 = {"deleteAction", 0, 0 };
    static const QUMethod signal_4 = {"connectAction", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "insertAction()", &signal_0, QMetaData::Private },
	{ "insertActionGroup()", &signal_1, QMetaData::Private },
	{ "insertDropDownActionGroup()", &signal_2, QMetaData::Private },
	{ "deleteAction()", &signal_3, QMetaData::Private },
	{ "connectAction()", &signal_4, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ActionListView", parentObject,
	slot_tbl, 1,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ActionListView.setMetaObject( metaObj );
    return metaObj;
}

void* ActionListView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ActionListView" ) )
	return this;
    return QListView::qt_cast( clname );
}

// SIGNAL insertAction
void ActionListView::insertAction()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL insertActionGroup
void ActionListView::insertActionGroup()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL insertDropDownActionGroup
void ActionListView::insertDropDownActionGroup()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL deleteAction
void ActionListView::deleteAction()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL connectAction
void ActionListView::connectAction()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

bool ActionListView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: rmbMenu((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    default:
	return QListView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ActionListView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: insertAction(); break;
    case 1: insertActionGroup(); break;
    case 2: insertDropDownActionGroup(); break;
    case 3: deleteAction(); break;
    case 4: connectAction(); break;
    default:
	return QListView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ActionListView::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool ActionListView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
