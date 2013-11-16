/****************************************************************************
** QSignalMapper meta object code from reading C++ file 'qsignalmapper.h'
**
** Created: Wed Oct 9 10:52:32 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qsignalmapper.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSignalMapper::className() const
{
    return "QSignalMapper";
}

QMetaObject *QSignalMapper::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSignalMapper( "QSignalMapper", &QSignalMapper::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSignalMapper::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSignalMapper", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSignalMapper::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSignalMapper", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSignalMapper::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"map", 0, 0 };
    static const QUMethod slot_1 = {"removeMapping", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "map()", &slot_0, QMetaData::Public },
	{ "removeMapping()", &slot_1, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"mapped", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"mapped", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "mapped(int)", &signal_0, QMetaData::Public },
	{ "mapped(const QString&)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QSignalMapper", parentObject,
	slot_tbl, 2,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSignalMapper.setMetaObject( metaObj );
    return metaObj;
}

void* QSignalMapper::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSignalMapper" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL mapped
void QSignalMapper::mapped( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL mapped
void QSignalMapper::mapped( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QSignalMapper::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: map(); break;
    case 1: removeMapping(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QSignalMapper::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: mapped((int)static_QUType_int.get(_o+1)); break;
    case 1: mapped((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QSignalMapper::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QSignalMapper::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
