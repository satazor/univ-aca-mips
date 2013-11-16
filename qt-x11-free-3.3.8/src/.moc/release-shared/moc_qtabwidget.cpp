/****************************************************************************
** QTabWidget meta object code from reading C++ file 'qtabwidget.h'
**
** Created: Wed Oct 9 10:52:53 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtabwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QTabWidget::className() const
{
    return "QTabWidget";
}

QMetaObject *QTabWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTabWidget( "QTabWidget", &QTabWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTabWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTabWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTabWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTabWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTabWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Top",  (int) QTabWidget::Top },
	{ "Bottom",  (int) QTabWidget::Bottom }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "Rounded",  (int) QTabWidget::Rounded },
	{ "Triangular",  (int) QTabWidget::Triangular }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "TabPosition", 2, enum_0, FALSE },
	{ "TabShape", 2, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setCurrentPage", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_1 = {"showPage", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_2 = {"removePage", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"showTab", 1, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "setCurrentPage(int)", &slot_0, QMetaData::Public },
	{ "showPage(QWidget*)", &slot_1, QMetaData::Public },
	{ "removePage(QWidget*)", &slot_2, QMetaData::Public },
	{ "showTab(int)", &slot_3, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod signal_0 = {"currentChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"selected", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "currentChanged(QWidget*)", &signal_0, QMetaData::Protected },
	{ "selected(const QString&)", &signal_1, QMetaData::Protected }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[6] = {
 	{ "TabPosition","tabPosition", 0x0107, &QTabWidget::metaObj, &enum_tbl[0], -1 },
	{ "TabShape","tabShape", 0x0107, &QTabWidget::metaObj, &enum_tbl[1], -1 },
	{ "int","margin", 0x10000103, &QTabWidget::metaObj, 0, -1 },
	{ "int","currentPage", 0x10000103, &QTabWidget::metaObj, 0, -1 },
	{ "int","count", 0x10000001, &QTabWidget::metaObj, 0, -1 },
	{ "bool","autoMask", 0x12020200, &QTabWidget::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QTabWidget", parentObject,
	slot_tbl, 4,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	props_tbl, 6,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTabWidget.setMetaObject( metaObj );
    return metaObj;
}

void* QTabWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTabWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL currentChanged
void QTabWidget::currentChanged( QWidget* t0 )
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

// SIGNAL selected
void QTabWidget::selected( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QTabWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setCurrentPage((int)static_QUType_int.get(_o+1)); break;
    case 1: showPage((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 2: removePage((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 3: showTab((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTabWidget::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 1: selected((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTabWidget::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setTabPosition((TabPosition&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->tabPosition() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setTabShape((TabShape&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->tabShape() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setMargin(v->asInt()); break;
	case 1: *v = QVariant( this->margin() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setCurrentPage(v->asInt()); break;
	case 1: *v = QVariant( this->currentPageIndex() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 1: *v = QVariant( this->count() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QWidget::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QTabWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
