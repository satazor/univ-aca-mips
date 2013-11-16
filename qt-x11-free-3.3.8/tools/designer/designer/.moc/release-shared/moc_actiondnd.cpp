/****************************************************************************
** ActionDrag meta object code from reading C++ file 'actiondnd.h'
**
** Created: Wed Oct 9 11:04:53 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../actiondnd.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ActionDrag::className() const
{
    return "ActionDrag";
}

QMetaObject *ActionDrag::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ActionDrag( "ActionDrag", &ActionDrag::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ActionDrag::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ActionDrag", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ActionDrag::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ActionDrag", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ActionDrag::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QStoredDrag::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"ActionDrag", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ActionDrag.setMetaObject( metaObj );
    return metaObj;
}

void* ActionDrag::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ActionDrag" ) )
	return this;
    return QStoredDrag::qt_cast( clname );
}

bool ActionDrag::qt_invoke( int _id, QUObject* _o )
{
    return QStoredDrag::qt_invoke(_id,_o);
}

bool ActionDrag::qt_emit( int _id, QUObject* _o )
{
    return QStoredDrag::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ActionDrag::qt_property( int id, int f, QVariant* v)
{
    return QStoredDrag::qt_property( id, f, v);
}

bool ActionDrag::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerActionGroup::className() const
{
    return "QDesignerActionGroup";
}

QMetaObject *QDesignerActionGroup::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerActionGroup( "QDesignerActionGroup", &QDesignerActionGroup::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerActionGroup::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerActionGroup", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerActionGroup::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerActionGroup", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerActionGroup::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QActionGroup::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDesignerActionGroup", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerActionGroup.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerActionGroup::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerActionGroup" ) )
	return this;
    return QActionGroup::qt_cast( clname );
}

bool QDesignerActionGroup::qt_invoke( int _id, QUObject* _o )
{
    return QActionGroup::qt_invoke(_id,_o);
}

bool QDesignerActionGroup::qt_emit( int _id, QUObject* _o )
{
    return QActionGroup::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerActionGroup::qt_property( int id, int f, QVariant* v)
{
    return QActionGroup::qt_property( id, f, v);
}

bool QDesignerActionGroup::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerAction::className() const
{
    return "QDesignerAction";
}

QMetaObject *QDesignerAction::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerAction( "QDesignerAction", &QDesignerAction::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerAction::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerAction", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerAction::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerAction", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerAction::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QAction::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDesignerAction", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerAction.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerAction::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerAction" ) )
	return this;
    return QAction::qt_cast( clname );
}

bool QDesignerAction::qt_invoke( int _id, QUObject* _o )
{
    return QAction::qt_invoke(_id,_o);
}

bool QDesignerAction::qt_emit( int _id, QUObject* _o )
{
    return QAction::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerAction::qt_property( int id, int f, QVariant* v)
{
    return QAction::qt_property( id, f, v);
}

bool QDesignerAction::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerToolBarSeparator::className() const
{
    return "QDesignerToolBarSeparator";
}

QMetaObject *QDesignerToolBarSeparator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerToolBarSeparator( "QDesignerToolBarSeparator", &QDesignerToolBarSeparator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerToolBarSeparator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerToolBarSeparator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerToolBarSeparator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerToolBarSeparator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerToolBarSeparator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "Orientation", QUParameter::In }
    };
    static const QUMethod slot_0 = {"setOrientation", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "setOrientation(Orientation)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDesignerToolBarSeparator", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerToolBarSeparator.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerToolBarSeparator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerToolBarSeparator" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QDesignerToolBarSeparator::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setOrientation((Orientation)(*((Orientation*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDesignerToolBarSeparator::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerToolBarSeparator::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QDesignerToolBarSeparator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QSeparatorAction::className() const
{
    return "QSeparatorAction";
}

QMetaObject *QSeparatorAction::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSeparatorAction( "QSeparatorAction", &QSeparatorAction::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSeparatorAction::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSeparatorAction", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSeparatorAction::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSeparatorAction", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSeparatorAction::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QAction::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QSeparatorAction", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSeparatorAction.setMetaObject( metaObj );
    return metaObj;
}

void* QSeparatorAction::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSeparatorAction" ) )
	return this;
    return QAction::qt_cast( clname );
}

bool QSeparatorAction::qt_invoke( int _id, QUObject* _o )
{
    return QAction::qt_invoke(_id,_o);
}

bool QSeparatorAction::qt_emit( int _id, QUObject* _o )
{
    return QAction::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QSeparatorAction::qt_property( int id, int f, QVariant* v)
{
    return QAction::qt_property( id, f, v);
}

bool QSeparatorAction::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerToolBar::className() const
{
    return "QDesignerToolBar";
}

QMetaObject *QDesignerToolBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerToolBar( "QDesignerToolBar", &QDesignerToolBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerToolBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerToolBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerToolBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerToolBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerToolBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QToolBar::staticMetaObject();
    static const QUMethod slot_0 = {"actionRemoved", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "actionRemoved()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDesignerToolBar", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerToolBar.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerToolBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerToolBar" ) )
	return this;
    return QToolBar::qt_cast( clname );
}

bool QDesignerToolBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: actionRemoved(); break;
    default:
	return QToolBar::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDesignerToolBar::qt_emit( int _id, QUObject* _o )
{
    return QToolBar::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerToolBar::qt_property( int id, int f, QVariant* v)
{
    return QToolBar::qt_property( id, f, v);
}

bool QDesignerToolBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
