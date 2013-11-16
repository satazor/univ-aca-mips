/****************************************************************************
** QSignal meta object code from reading C++ file 'qsignal.h'
**
** Created: Wed Oct 9 10:52:32 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qsignal.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSignal::className() const
{
    return "QSignal";
}

QMetaObject *QSignal::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSignal( "QSignal", &QSignal::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSignal::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSignal", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSignal::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSignal", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSignal::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QVariant, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"signal", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"intSignal", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "signal(const QVariant&)", &signal_0, QMetaData::Public },
	{ "intSignal(int)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QSignal", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSignal.setMetaObject( metaObj );
    return metaObj;
}

void* QSignal::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSignal" ) )
	return this;
    return QObject::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL signal
void QSignal::signal( const QVariant& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_QVariant.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL intSignal
void QSignal::intSignal( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QSignal::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QSignal::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: signal((const QVariant&)static_QUType_QVariant.get(_o+1)); break;
    case 1: intSignal((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QSignal::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QSignal::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
