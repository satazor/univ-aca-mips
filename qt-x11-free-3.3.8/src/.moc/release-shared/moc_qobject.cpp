/****************************************************************************
** QObject meta object code from reading C++ file 'qobject.h'
**
** Created: Wed Oct 9 10:52:31 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qobject.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QObject::className() const
{
    return "QObject";
}

QMetaObject *QObject::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QObject( "QObject", &QObject::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QObject::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QObject", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QObject::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QObject", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QObject::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = staticQtMetaObject();
    static const QUMethod slot_0 = {"deleteLater", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_1 = {"cleanupEventFilter", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "deleteLater()", &slot_0, QMetaData::Public },
	{ "cleanupEventFilter(QObject*)", &slot_1, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"destroyed", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ "obj", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod signal_1 = {"destroyed", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "destroyed()", &signal_0, QMetaData::Public },
	{ "destroyed(QObject*)", &signal_1, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "QCString","name", 0x14000103, &QObject::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QObject", parentObject,
	slot_tbl, 2,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QObject.setMetaObject( metaObj );
    return metaObj;
}

void* QObject::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QObject" ) )
	return this;
    return 0;
}

// SIGNAL destroyed
void QObject::destroyed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL destroyed
void QObject::destroyed( QObject* t0 )
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

bool QObject::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: deleteLater(); break;
    case 1: cleanupEventFilter((QObject*)static_QUType_ptr.get(_o+1)); break;
    default:
	return FALSE;
    }
    return TRUE;
}

bool QObject::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: destroyed(); break;
    case 1: destroyed((QObject*)static_QUType_ptr.get(_o+1)); break;
    default:
	return FALSE;
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QObject::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setName(v->asCString()); break;
	case 1: *v = QVariant( this->name() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return FALSE;
    }
    return TRUE;
}

bool QObject::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
