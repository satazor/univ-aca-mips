/****************************************************************************
** QWidgetStack meta object code from reading C++ file 'qwidgetstack.h'
**
** Created: Wed Oct 9 10:52:57 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qwidgetstack.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QWidgetStack::className() const
{
    return "QWidgetStack";
}

QMetaObject *QWidgetStack::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QWidgetStack( "QWidgetStack", &QWidgetStack::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QWidgetStack::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWidgetStack", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QWidgetStack::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWidgetStack", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QWidgetStack::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"raiseWidget", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_1 = {"raiseWidget", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "raiseWidget(int)", &slot_0, QMetaData::Public },
	{ "raiseWidget(QWidget*)", &slot_1, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"aboutToShow", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod signal_1 = {"aboutToShow", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "aboutToShow(int)", &signal_0, QMetaData::Public },
	{ "aboutToShow(QWidget*)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QWidgetStack", parentObject,
	slot_tbl, 2,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QWidgetStack.setMetaObject( metaObj );
    return metaObj;
}

void* QWidgetStack::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QWidgetStack" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL aboutToShow
void QWidgetStack::aboutToShow( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL aboutToShow
void QWidgetStack::aboutToShow( QWidget* t0 )
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

bool QWidgetStack::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: raiseWidget((int)static_QUType_int.get(_o+1)); break;
    case 1: raiseWidget((QWidget*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QWidgetStack::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: aboutToShow((int)static_QUType_int.get(_o+1)); break;
    case 1: aboutToShow((QWidget*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QWidgetStack::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool QWidgetStack::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
