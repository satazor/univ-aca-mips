/****************************************************************************
** HierarchyList meta object code from reading C++ file 'hierarchyview.h'
**
** Created: Wed Oct 9 11:04:47 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../hierarchyview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *HierarchyList::className() const
{
    return "HierarchyList";
}

QMetaObject *HierarchyList::metaObj = 0;
static QMetaObjectCleanUp cleanUp_HierarchyList( "HierarchyList", &HierarchyList::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString HierarchyList::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HierarchyList", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString HierarchyList::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HierarchyList", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* HierarchyList::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    static const QUMethod slot_0 = {"addTabPage", 0, 0 };
    static const QUMethod slot_1 = {"removeTabPage", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"objectClicked", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_3 = {"objectDoubleClicked", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_4 = {"showRMBMenu", 2, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "addTabPage()", &slot_0, QMetaData::Public },
	{ "removeTabPage()", &slot_1, QMetaData::Public },
	{ "objectClicked(QListViewItem*)", &slot_2, QMetaData::Private },
	{ "objectDoubleClicked(QListViewItem*)", &slot_3, QMetaData::Private },
	{ "showRMBMenu(QListViewItem*,const QPoint&)", &slot_4, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"HierarchyList", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_HierarchyList.setMetaObject( metaObj );
    return metaObj;
}

void* HierarchyList::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "HierarchyList" ) )
	return this;
    return QListView::qt_cast( clname );
}

bool HierarchyList::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addTabPage(); break;
    case 1: removeTabPage(); break;
    case 2: objectClicked((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: objectDoubleClicked((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 4: showRMBMenu((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    default:
	return QListView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool HierarchyList::qt_emit( int _id, QUObject* _o )
{
    return QListView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool HierarchyList::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool HierarchyList::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *FormDefinitionView::className() const
{
    return "FormDefinitionView";
}

QMetaObject *FormDefinitionView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FormDefinitionView( "FormDefinitionView", &FormDefinitionView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FormDefinitionView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FormDefinitionView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FormDefinitionView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FormDefinitionView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FormDefinitionView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = HierarchyList::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"objectClicked", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_1 = {"showRMBMenu", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"renamed", 1, param_slot_2 };
    static const QMetaData slot_tbl[] = {
	{ "objectClicked(QListViewItem*)", &slot_0, QMetaData::Private },
	{ "showRMBMenu(QListViewItem*,const QPoint&)", &slot_1, QMetaData::Private },
	{ "renamed(QListViewItem*)", &slot_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"FormDefinitionView", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FormDefinitionView.setMetaObject( metaObj );
    return metaObj;
}

void* FormDefinitionView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FormDefinitionView" ) )
	return this;
    return HierarchyList::qt_cast( clname );
}

bool FormDefinitionView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: objectClicked((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: showRMBMenu((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 2: renamed((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return HierarchyList::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FormDefinitionView::qt_emit( int _id, QUObject* _o )
{
    return HierarchyList::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool FormDefinitionView::qt_property( int id, int f, QVariant* v)
{
    return HierarchyList::qt_property( id, f, v);
}

bool FormDefinitionView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *HierarchyView::className() const
{
    return "HierarchyView";
}

QMetaObject *HierarchyView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_HierarchyView( "HierarchyView", &HierarchyView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString HierarchyView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HierarchyView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString HierarchyView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HierarchyView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* HierarchyView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTabWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "func", &static_QUType_QString, 0, QUParameter::In },
	{ "clss", &static_QUType_QString, 0, QUParameter::In },
	{ "type", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"jumpTo", 3, param_slot_0 };
    static const QUMethod slot_1 = {"showClassesTimeout", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "jumpTo(const QString&,const QString&,int)", &slot_0, QMetaData::Protected },
	{ "showClassesTimeout()", &slot_1, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"hidden", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "hidden()", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"HierarchyView", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_HierarchyView.setMetaObject( metaObj );
    return metaObj;
}

void* HierarchyView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "HierarchyView" ) )
	return this;
    return QTabWidget::qt_cast( clname );
}

// SIGNAL hidden
void HierarchyView::hidden()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool HierarchyView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: jumpTo((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 1: showClassesTimeout(); break;
    default:
	return QTabWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool HierarchyView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: hidden(); break;
    default:
	return QTabWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool HierarchyView::qt_property( int id, int f, QVariant* v)
{
    return QTabWidget::qt_property( id, f, v);
}

bool HierarchyView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
