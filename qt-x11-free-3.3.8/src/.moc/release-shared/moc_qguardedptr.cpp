/****************************************************************************
** QGuardedPtrPrivate meta object code from reading C++ file 'qguardedptr.h'
**
** Created: Wed Oct 9 10:52:28 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qguardedptr.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QGuardedPtrPrivate::className() const
{
    return "QGuardedPtrPrivate";
}

QMetaObject *QGuardedPtrPrivate::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QGuardedPtrPrivate( "QGuardedPtrPrivate", &QGuardedPtrPrivate::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QGuardedPtrPrivate::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGuardedPtrPrivate", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QGuardedPtrPrivate::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGuardedPtrPrivate", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QGuardedPtrPrivate::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"objectDestroyed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "objectDestroyed()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QGuardedPtrPrivate", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QGuardedPtrPrivate.setMetaObject( metaObj );
    return metaObj;
}

void* QGuardedPtrPrivate::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QGuardedPtrPrivate" ) )
	return this;
    if ( !qstrcmp( clname, "QShared" ) )
	return (QShared*)this;
    return QObject::qt_cast( clname );
}

bool QGuardedPtrPrivate::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: objectDestroyed(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QGuardedPtrPrivate::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QGuardedPtrPrivate::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QGuardedPtrPrivate::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
