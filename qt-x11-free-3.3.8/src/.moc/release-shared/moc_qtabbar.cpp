/****************************************************************************
** QTabBar meta object code from reading C++ file 'qtabbar.h'
**
** Created: Wed Oct 9 10:52:52 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtabbar.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QTabBar::className() const
{
    return "QTabBar";
}

QMetaObject *QTabBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTabBar( "QTabBar", &QTabBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTabBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTabBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTabBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTabBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTabBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "RoundedAbove",  (int) QTabBar::RoundedAbove },
	{ "RoundedBelow",  (int) QTabBar::RoundedBelow },
	{ "TriangularAbove",  (int) QTabBar::TriangularAbove },
	{ "TriangularBelow",  (int) QTabBar::TriangularBelow }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Shape", 4, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setCurrentTab", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QTab", QUParameter::In }
    };
    static const QUMethod slot_1 = {"setCurrentTab", 1, param_slot_1 };
    static const QUMethod slot_2 = {"scrollTabs", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setCurrentTab(int)", &slot_0, QMetaData::Public },
	{ "setCurrentTab(QTab*)", &slot_1, QMetaData::Public },
	{ "scrollTabs()", &slot_2, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"selected", 1, param_signal_0 };
    static const QUMethod signal_1 = {"layoutChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "selected(int)", &signal_0, QMetaData::Public },
	{ "layoutChanged()", &signal_1, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[4] = {
 	{ "Shape","shape", 0x0107, &QTabBar::metaObj, &enum_tbl[0], -1 },
	{ "int","currentTab", 0x10000103, &QTabBar::metaObj, 0, -1 },
	{ "int","count", 0x10000001, &QTabBar::metaObj, 0, -1 },
	{ "int","keyboardFocusTab", 0x10000001, &QTabBar::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QTabBar", parentObject,
	slot_tbl, 3,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	props_tbl, 4,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTabBar.setMetaObject( metaObj );
    return metaObj;
}

void* QTabBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTabBar" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL selected
void QTabBar::selected( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL layoutChanged
void QTabBar::layoutChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool QTabBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setCurrentTab((int)static_QUType_int.get(_o+1)); break;
    case 1: setCurrentTab((QTab*)static_QUType_ptr.get(_o+1)); break;
    case 2: scrollTabs(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTabBar::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: selected((int)static_QUType_int.get(_o+1)); break;
    case 1: layoutChanged(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTabBar::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setShape((Shape&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->shape() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setCurrentTab(v->asInt()); break;
	case 1: *v = QVariant( this->currentTab() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->count() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( this->keyboardFocusTab() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QTabBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
