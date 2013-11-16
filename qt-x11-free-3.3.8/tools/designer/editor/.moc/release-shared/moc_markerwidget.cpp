/****************************************************************************
** MarkerWidget meta object code from reading C++ file 'markerwidget.h'
**
** Created: Wed Oct 9 11:05:25 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../markerwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MarkerWidget::className() const
{
    return "MarkerWidget";
}

QMetaObject *MarkerWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MarkerWidget( "MarkerWidget", &MarkerWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MarkerWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MarkerWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MarkerWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MarkerWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MarkerWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"doRepaint", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "doRepaint()", &slot_0, QMetaData::Public }
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
    static const QUParameter param_signal_7[] = {
	{ "msg", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_7 = {"showMessage", 1, param_signal_7 };
    static const QMetaData signal_tbl[] = {
	{ "markersChanged()", &signal_0, QMetaData::Public },
	{ "expandFunction(QTextParagraph*)", &signal_1, QMetaData::Public },
	{ "collapseFunction(QTextParagraph*)", &signal_2, QMetaData::Public },
	{ "collapse(bool)", &signal_3, QMetaData::Public },
	{ "expand(bool)", &signal_4, QMetaData::Public },
	{ "editBreakPoints()", &signal_5, QMetaData::Public },
	{ "isBreakpointPossible(bool&,const QString&,int)", &signal_6, QMetaData::Public },
	{ "showMessage(const QString&)", &signal_7, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MarkerWidget", parentObject,
	slot_tbl, 1,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MarkerWidget.setMetaObject( metaObj );
    return metaObj;
}

void* MarkerWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MarkerWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL markersChanged
void MarkerWidget::markersChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL expandFunction
void MarkerWidget::expandFunction( QTextParagraph* t0 )
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
void MarkerWidget::collapseFunction( QTextParagraph* t0 )
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
void MarkerWidget::collapse( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL expand
void MarkerWidget::expand( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 4, t0 );
}

// SIGNAL editBreakPoints
void MarkerWidget::editBreakPoints()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

// SIGNAL isBreakpointPossible
void MarkerWidget::isBreakpointPossible( bool& t0, const QString& t1, int t2 )
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

// SIGNAL showMessage
void MarkerWidget::showMessage( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 7, t0 );
}

bool MarkerWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: doRepaint(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MarkerWidget::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: markersChanged(); break;
    case 1: expandFunction((QTextParagraph*)static_QUType_ptr.get(_o+1)); break;
    case 2: collapseFunction((QTextParagraph*)static_QUType_ptr.get(_o+1)); break;
    case 3: collapse((bool)static_QUType_bool.get(_o+1)); break;
    case 4: expand((bool)static_QUType_bool.get(_o+1)); break;
    case 5: editBreakPoints(); break;
    case 6: isBreakpointPossible((bool&)static_QUType_bool.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 7: showMessage((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MarkerWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool MarkerWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
