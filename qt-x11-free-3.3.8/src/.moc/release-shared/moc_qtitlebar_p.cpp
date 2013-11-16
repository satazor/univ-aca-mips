/****************************************************************************
** QTitleBar meta object code from reading C++ file 'qtitlebar_p.h'
**
** Created: Wed Oct 9 10:52:53 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtitlebar_p.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QTitleBar::className() const
{
    return "QTitleBar";
}

QMetaObject *QTitleBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTitleBar( "QTitleBar", &QTitleBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTitleBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTitleBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTitleBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTitleBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTitleBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setActive", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "title", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setCaption", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "icon", &static_QUType_varptr, "\x06", QUParameter::In }
    };
    static const QUMethod slot_2 = {"setIcon", 1, param_slot_2 };
    static const QMetaData slot_tbl[] = {
	{ "setActive(bool)", &slot_0, QMetaData::Public },
	{ "setCaption(const QString&)", &slot_1, QMetaData::Public },
	{ "setIcon(const QPixmap&)", &slot_2, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"doActivate", 0, 0 };
    static const QUMethod signal_1 = {"doNormal", 0, 0 };
    static const QUMethod signal_2 = {"doClose", 0, 0 };
    static const QUMethod signal_3 = {"doMaximize", 0, 0 };
    static const QUMethod signal_4 = {"doMinimize", 0, 0 };
    static const QUMethod signal_5 = {"doShade", 0, 0 };
    static const QUMethod signal_6 = {"showOperationMenu", 0, 0 };
    static const QUParameter param_signal_7[] = {
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_7 = {"popupOperationMenu", 1, param_signal_7 };
    static const QUMethod signal_8 = {"doubleClicked", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "doActivate()", &signal_0, QMetaData::Public },
	{ "doNormal()", &signal_1, QMetaData::Public },
	{ "doClose()", &signal_2, QMetaData::Public },
	{ "doMaximize()", &signal_3, QMetaData::Public },
	{ "doMinimize()", &signal_4, QMetaData::Public },
	{ "doShade()", &signal_5, QMetaData::Public },
	{ "showOperationMenu()", &signal_6, QMetaData::Public },
	{ "popupOperationMenu(const QPoint&)", &signal_7, QMetaData::Public },
	{ "doubleClicked()", &signal_8, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "bool","autoRaise", 0x12000103, &QTitleBar::metaObj, 0, -1 },
	{ "bool","movable", 0x12000103, &QTitleBar::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QTitleBar", parentObject,
	slot_tbl, 3,
	signal_tbl, 9,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTitleBar.setMetaObject( metaObj );
    return metaObj;
}

void* QTitleBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTitleBar" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL doActivate
void QTitleBar::doActivate()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL doNormal
void QTitleBar::doNormal()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL doClose
void QTitleBar::doClose()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL doMaximize
void QTitleBar::doMaximize()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL doMinimize
void QTitleBar::doMinimize()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

// SIGNAL doShade
void QTitleBar::doShade()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

// SIGNAL showOperationMenu
void QTitleBar::showOperationMenu()
{
    activate_signal( staticMetaObject()->signalOffset() + 6 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL popupOperationMenu
void QTitleBar::popupOperationMenu( const QPoint& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL doubleClicked
void QTitleBar::doubleClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 8 );
}

bool QTitleBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setActive((bool)static_QUType_bool.get(_o+1)); break;
    case 1: setCaption((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: setIcon((const QPixmap&)*((const QPixmap*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTitleBar::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: doActivate(); break;
    case 1: doNormal(); break;
    case 2: doClose(); break;
    case 3: doMaximize(); break;
    case 4: doMinimize(); break;
    case 5: doShade(); break;
    case 6: showOperationMenu(); break;
    case 7: popupOperationMenu((const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+1))); break;
    case 8: doubleClicked(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTitleBar::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setAutoRaise(v->asBool()); break;
	case 1: *v = QVariant( this->autoRaise(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setMovable(v->asBool()); break;
	case 1: *v = QVariant( this->isMovable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QTitleBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
