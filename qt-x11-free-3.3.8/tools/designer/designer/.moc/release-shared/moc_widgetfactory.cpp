/****************************************************************************
** QDesignerTabWidget meta object code from reading C++ file 'widgetfactory.h'
**
** Created: Wed Oct 9 11:04:46 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgetfactory.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QDesignerTabWidget::className() const
{
    return "QDesignerTabWidget";
}

QMetaObject *QDesignerTabWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerTabWidget( "QDesignerTabWidget", &QDesignerTabWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerTabWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerTabWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerTabWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerTabWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerTabWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTabWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[3] = {
 	{ "int","currentPage", 0x10010103, &QDesignerTabWidget::metaObj, 0, -1 },
	{ "QString","pageTitle", 0x3010103, &QDesignerTabWidget::metaObj, 0, -1 },
	{ "QCString","pageName", 0x14010103, &QDesignerTabWidget::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerTabWidget", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 3,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerTabWidget.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerTabWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerTabWidget" ) )
	return this;
    return QTabWidget::qt_cast( clname );
}

bool QDesignerTabWidget::qt_invoke( int _id, QUObject* _o )
{
    return QTabWidget::qt_invoke(_id,_o);
}

bool QDesignerTabWidget::qt_emit( int _id, QUObject* _o )
{
    return QTabWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerTabWidget::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setCurrentPage(v->asInt()); break;
	case 1: *v = QVariant( this->currentPage() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setPageTitle(v->asString()); break;
	case 1: *v = QVariant( this->pageTitle() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setPageName(v->asCString()); break;
	case 1: *v = QVariant( this->pageName() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    default:
	return QTabWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDesignerTabWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerWidgetStack::className() const
{
    return "QDesignerWidgetStack";
}

QMetaObject *QDesignerWidgetStack::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerWidgetStack( "QDesignerWidgetStack", &QDesignerWidgetStack::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerWidgetStack::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerWidgetStack", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerWidgetStack::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerWidgetStack", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerWidgetStack::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidgetStack::staticMetaObject();
    static const QUMethod slot_0 = {"updateButtons", 0, 0 };
    static const QUMethod slot_1 = {"prevPage", 0, 0 };
    static const QUMethod slot_2 = {"nextPage", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateButtons()", &slot_0, QMetaData::Public },
	{ "prevPage()", &slot_1, QMetaData::Private },
	{ "nextPage()", &slot_2, QMetaData::Private }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "int","currentPage", 0x10010103, &QDesignerWidgetStack::metaObj, 0, -1 },
	{ "QCString","pageName", 0x14010103, &QDesignerWidgetStack::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerWidgetStack", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerWidgetStack.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerWidgetStack::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerWidgetStack" ) )
	return this;
    return QWidgetStack::qt_cast( clname );
}

bool QDesignerWidgetStack::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateButtons(); break;
    case 1: prevPage(); break;
    case 2: nextPage(); break;
    default:
	return QWidgetStack::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDesignerWidgetStack::qt_emit( int _id, QUObject* _o )
{
    return QWidgetStack::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerWidgetStack::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setCurrentPage(v->asInt()); break;
	case 1: *v = QVariant( this->currentPage() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setPageName(v->asCString()); break;
	case 1: *v = QVariant( this->pageName() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    default:
	return QWidgetStack::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDesignerWidgetStack::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerWizard::className() const
{
    return "QDesignerWizard";
}

QMetaObject *QDesignerWizard::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerWizard( "QDesignerWizard", &QDesignerWizard::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerWizard::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerWizard", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerWizard::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerWizard", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerWizard::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWizard::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[4] = {
 	{ "int","currentPage", 0x10010103, &QDesignerWizard::metaObj, 0, -1 },
	{ "QString","pageTitle", 0x3010103, &QDesignerWizard::metaObj, 0, -1 },
	{ "QCString","pageName", 0x14010103, &QDesignerWizard::metaObj, 0, -1 },
	{ "bool","modal", 0x1202a303, &QDesignerWizard::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerWizard", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 4,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerWizard.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerWizard::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerWizard" ) )
	return this;
    return QWizard::qt_cast( clname );
}

bool QDesignerWizard::qt_invoke( int _id, QUObject* _o )
{
    return QWizard::qt_invoke(_id,_o);
}

bool QDesignerWizard::qt_emit( int _id, QUObject* _o )
{
    return QWizard::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerWizard::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setCurrentPage(v->asInt()); break;
	case 1: *v = QVariant( this->currentPageNum() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setPageTitle(v->asString()); break;
	case 1: *v = QVariant( this->pageTitle() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setPageName(v->asCString()); break;
	case 1: *v = QVariant( this->pageName() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setModal(v->asBool()); break;
	case 1: *v = QVariant( this->isModal(), 0 ); break;
	case 3: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    default:
	return QWizard::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QWizard::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QDesignerWizard::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QLayoutWidget::className() const
{
    return "QLayoutWidget";
}

QMetaObject *QLayoutWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QLayoutWidget( "QLayoutWidget", &QLayoutWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QLayoutWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLayoutWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QLayoutWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLayoutWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QLayoutWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QLayoutWidget", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QLayoutWidget.setMetaObject( metaObj );
    return metaObj;
}

void* QLayoutWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QLayoutWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QLayoutWidget::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool QLayoutWidget::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QLayoutWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QLayoutWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *CustomWidget::className() const
{
    return "CustomWidget";
}

QMetaObject *CustomWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CustomWidget( "CustomWidget", &CustomWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CustomWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CustomWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CustomWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"CustomWidget", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CustomWidget.setMetaObject( metaObj );
    return metaObj;
}

void* CustomWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CustomWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool CustomWidget::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool CustomWidget::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CustomWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool CustomWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *Line::className() const
{
    return "Line";
}

QMetaObject *Line::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Line( "Line", &Line::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Line::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Line", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Line::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Line", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Line::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[5] = {
 	{ "Orientation","orientation", 0x010f, &Line::metaObj, 0, -1 },
	{ "int","frameWidth", 0x10029200, &Line::metaObj, 0, -1 },
	{ "Shape","frameShape", 0x2920c, &Line::metaObj, 0, -1 },
	{ "QRect","frameRect", 0x8029200, &Line::metaObj, 0, -1 },
	{ "QRect","contentsRect", 0x8029200, &Line::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"Line", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 5,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Line.setMetaObject( metaObj );
    return metaObj;
}

void* Line::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Line" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool Line::qt_invoke( int _id, QUObject* _o )
{
    return QFrame::qt_invoke(_id,_o);
}

bool Line::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Line::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setOrientation((Orientation&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->orientation() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: case 1: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: case 1: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: case 1: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: case 1: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QFrame::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool Line::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerLabel::className() const
{
    return "QDesignerLabel";
}

QMetaObject *QDesignerLabel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerLabel( "QDesignerLabel", &QDesignerLabel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerLabel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerLabel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerLabel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerLabel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerLabel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLabel::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "QCString","buddy", 0x14000003, &QDesignerLabel::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerLabel", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerLabel.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerLabel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerLabel" ) )
	return this;
    return QLabel::qt_cast( clname );
}

bool QDesignerLabel::qt_invoke( int _id, QUObject* _o )
{
    return QLabel::qt_invoke(_id,_o);
}

bool QDesignerLabel::qt_emit( int _id, QUObject* _o )
{
    return QLabel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerLabel::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setBuddyWidget(v->asCString()); break;
	case 1: *v = QVariant( this->buddyWidget() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QLabel::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDesignerLabel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerWidget::className() const
{
    return "QDesignerWidget";
}

QMetaObject *QDesignerWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerWidget( "QDesignerWidget", &QDesignerWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDesignerWidget", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerWidget.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QDesignerWidget::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool QDesignerWidget::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QDesignerWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerDialog::className() const
{
    return "QDesignerDialog";
}

QMetaObject *QDesignerDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerDialog( "QDesignerDialog", &QDesignerDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "bool","modal", 0x1202a303, &QDesignerDialog::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerDialog", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerDialog.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool QDesignerDialog::qt_invoke( int _id, QUObject* _o )
{
    return QDialog::qt_invoke(_id,_o);
}

bool QDesignerDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerDialog::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setModal(v->asBool()); break;
	case 1: *v = QVariant( this->isModal(), 0 ); break;
	case 3: case 4: case 5: goto resolve;
	default: return FALSE;
    } break;
    default:
	return QDialog::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QDialog::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QDesignerDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerToolButton::className() const
{
    return "QDesignerToolButton";
}

QMetaObject *QDesignerToolButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerToolButton( "QDesignerToolButton", &QDesignerToolButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerToolButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerToolButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerToolButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerToolButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerToolButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QToolButton::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "int","buttonGroupId", 0x10000103, &QDesignerToolButton::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerToolButton", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerToolButton.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerToolButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerToolButton" ) )
	return this;
    return QToolButton::qt_cast( clname );
}

bool QDesignerToolButton::qt_invoke( int _id, QUObject* _o )
{
    return QToolButton::qt_invoke(_id,_o);
}

bool QDesignerToolButton::qt_emit( int _id, QUObject* _o )
{
    return QToolButton::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerToolButton::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setButtonGroupId(v->asInt()); break;
	case 1: *v = QVariant( this->buttonGroupId() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QToolButton::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDesignerToolButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerRadioButton::className() const
{
    return "QDesignerRadioButton";
}

QMetaObject *QDesignerRadioButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerRadioButton( "QDesignerRadioButton", &QDesignerRadioButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerRadioButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerRadioButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerRadioButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerRadioButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerRadioButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QRadioButton::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "int","buttonGroupId", 0x10000103, &QDesignerRadioButton::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerRadioButton", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerRadioButton.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerRadioButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerRadioButton" ) )
	return this;
    return QRadioButton::qt_cast( clname );
}

bool QDesignerRadioButton::qt_invoke( int _id, QUObject* _o )
{
    return QRadioButton::qt_invoke(_id,_o);
}

bool QDesignerRadioButton::qt_emit( int _id, QUObject* _o )
{
    return QRadioButton::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerRadioButton::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setButtonGroupId(v->asInt()); break;
	case 1: *v = QVariant( this->buttonGroupId() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QRadioButton::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDesignerRadioButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerPushButton::className() const
{
    return "QDesignerPushButton";
}

QMetaObject *QDesignerPushButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerPushButton( "QDesignerPushButton", &QDesignerPushButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerPushButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerPushButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerPushButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerPushButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerPushButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QPushButton::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "int","buttonGroupId", 0x10000103, &QDesignerPushButton::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerPushButton", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerPushButton.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerPushButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerPushButton" ) )
	return this;
    return QPushButton::qt_cast( clname );
}

bool QDesignerPushButton::qt_invoke( int _id, QUObject* _o )
{
    return QPushButton::qt_invoke(_id,_o);
}

bool QDesignerPushButton::qt_emit( int _id, QUObject* _o )
{
    return QPushButton::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerPushButton::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setButtonGroupId(v->asInt()); break;
	case 1: *v = QVariant( this->buttonGroupId() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QPushButton::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDesignerPushButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerCheckBox::className() const
{
    return "QDesignerCheckBox";
}

QMetaObject *QDesignerCheckBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerCheckBox( "QDesignerCheckBox", &QDesignerCheckBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerCheckBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerCheckBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerCheckBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerCheckBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerCheckBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QCheckBox::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "int","buttonGroupId", 0x10000103, &QDesignerCheckBox::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerCheckBox", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerCheckBox.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerCheckBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerCheckBox" ) )
	return this;
    return QCheckBox::qt_cast( clname );
}

bool QDesignerCheckBox::qt_invoke( int _id, QUObject* _o )
{
    return QCheckBox::qt_invoke(_id,_o);
}

bool QDesignerCheckBox::qt_emit( int _id, QUObject* _o )
{
    return QCheckBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerCheckBox::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setButtonGroupId(v->asInt()); break;
	case 1: *v = QVariant( this->buttonGroupId() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QCheckBox::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDesignerCheckBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerToolBox::className() const
{
    return "QDesignerToolBox";
}

QMetaObject *QDesignerToolBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerToolBox( "QDesignerToolBox", &QDesignerToolBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerToolBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerToolBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerToolBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerToolBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerToolBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QToolBox::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[3] = {
 	{ "QString","itemLabel", 0x3010103, &QDesignerToolBox::metaObj, 0, -1 },
	{ "QCString","itemName", 0x14010103, &QDesignerToolBox::metaObj, 0, -1 },
	{ "BackgroundMode","itemBackgroundMode", 0x1010f, &QDesignerToolBox::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDesignerToolBox", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 3,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerToolBox.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerToolBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerToolBox" ) )
	return this;
    return QToolBox::qt_cast( clname );
}

bool QDesignerToolBox::qt_invoke( int _id, QUObject* _o )
{
    return QToolBox::qt_invoke(_id,_o);
}

bool QDesignerToolBox::qt_emit( int _id, QUObject* _o )
{
    return QToolBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerToolBox::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setItemLabel(v->asString()); break;
	case 1: *v = QVariant( this->itemLabel() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setItemName(v->asCString()); break;
	case 1: *v = QVariant( this->itemName() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setItemBackgroundMode((BackgroundMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->itemBackgroundMode() ); break;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    default:
	return QToolBox::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDesignerToolBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
