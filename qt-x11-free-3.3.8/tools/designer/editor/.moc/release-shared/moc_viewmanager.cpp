/****************************************************************************
** ViewManager meta object code from reading C++ file 'viewmanager.h'
**
** Created: Wed Oct 9 11:05:25 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../viewmanager.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ViewManager::className() const
{
    return "ViewManager";
}

QMetaObject *ViewManager::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ViewManager( "ViewManager", &ViewManager::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ViewManager::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ViewManager", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ViewManager::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ViewManager", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ViewManager::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"clearErrorMarker", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"cursorPositionChanged", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "msg", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"showMessage", 1, param_slot_2 };
    static const QUMethod slot_3 = {"clearStatusBar", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "clearErrorMarker()", &slot_0, QMetaData::Protected },
	{ "cursorPositionChanged(int,int)", &slot_1, QMetaData::Protected },
	{ "showMessage(const QString&)", &slot_2, QMetaData::Protected },
	{ "clearStatusBar()", &slot_3, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"markersChanged", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ "p", &static_QUType_ptr, "QTextParagraph", QUParameter::In }
    };
    static const QUMethod signal_1 = {"expandFunction", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "p", &static_QUType_ptr, "QTextParagraph", QUParameter::In }
    };
    static const QUMethod signal_2 = {"collapseFunction", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "all", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"collapse", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "all", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"expand", 1, param_signal_4 };
    static const QUMethod signal_5 = {"editBreakPoints", 0, 0 };
    static const QUParameter param_signal_6[] = {
	{ "possible", &static_QUType_bool, 0, QUParameter::InOut },
	{ "code", &static_QUType_QString, 0, QUParameter::In },
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"isBreakpointPossible", 3, param_signal_6 };
    static const QMetaData signal_tbl[] = {
	{ "markersChanged()", &signal_0, QMetaData::Public },
	{ "expandFunction(QTextParagraph*)", &signal_1, QMetaData::Public },
	{ "collapseFunction(QTextParagraph*)", &signal_2, QMetaData::Public },
	{ "collapse(bool)", &signal_3, QMetaData::Public },
	{ "expand(bool)", &signal_4, QMetaData::Public },
	{ "editBreakPoints()", &signal_5, QMetaData::Public },
	{ "isBreakpointPossible(bool&,const QString&,int)", &signal_6, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ViewManager", parentObject,
	slot_tbl, 4,
	signal_tbl, 7,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ViewManager.setMetaObject( metaObj );
    return metaObj;
}

void* ViewManager::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ViewManager" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL markersChanged
void ViewManager::markersChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL expandFunction
void ViewManager::expandFunction( QTextParagraph* t0 )
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

// SIGNAL collapseFunction
void ViewManager::collapseFunction( QTextParagraph* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL collapse
void ViewManager::collapse( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL expand
void ViewManager::expand( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 4, t0 );
}

// SIGNAL editBreakPoints
void ViewManager::editBreakPoints()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

// SIGNAL isBreakpointPossible
void ViewManager::isBreakpointPossible( bool& t0, const QString& t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_bool.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
    t0 = static_QUType_bool.get(o+1);
}

bool ViewManager::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: clearErrorMarker(); break;
    case 1: cursorPositionChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 2: showMessage((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: clearStatusBar(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ViewManager::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: markersChanged(); break;
    case 1: expandFunction((QTextParagraph*)static_QUType_ptr.get(_o+1)); break;
    case 2: collapseFunction((QTextParagraph*)static_QUType_ptr.get(_o+1)); break;
    case 3: collapse((bool)static_QUType_bool.get(_o+1)); break;
    case 4: expand((bool)static_QUType_bool.get(_o+1)); break;
    case 5: editBreakPoints(); break;
    case 6: isBreakpointPossible((bool&)static_QUType_bool.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ViewManager::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ViewManager::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
