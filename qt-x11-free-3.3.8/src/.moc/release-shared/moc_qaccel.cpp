/****************************************************************************
** QAccel meta object code from reading C++ file 'qaccel.h'
**
** Created: Wed Oct 9 10:52:26 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qaccel.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QAccel::className() const
{
    return "QAccel";
}

QMetaObject *QAccel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QAccel( "QAccel", &QAccel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QAccel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QAccel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QAccel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QAccel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QAccel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"activated", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"activatedAmbiguously", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "activated(int)", &signal_0, QMetaData::Public },
	{ "activatedAmbiguously(int)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QAccel", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QAccel.setMetaObject( metaObj );
    return metaObj;
}

void* QAccel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QAccel" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL activated
void QAccel::activated( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL activatedAmbiguously
void QAccel::activatedAmbiguously( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QAccel::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QAccel::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: activated((int)static_QUType_int.get(_o+1)); break;
    case 1: activatedAmbiguously((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QAccel::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QAccel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
