/****************************************************************************
** Index meta object code from reading C++ file 'index.h'
**
** Created: Wed Oct 9 11:06:06 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../index.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Index::className() const
{
    return "Index";
}

QMetaObject *Index::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Index( "Index", &Index::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Index::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Index", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Index::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Index", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Index::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"setLastWinClosed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setLastWinClosed()", &slot_0, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"indexingProgress", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "indexingProgress(int)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Index", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Index.setMetaObject( metaObj );
    return metaObj;
}

void* Index::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Index" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL indexingProgress
void Index::indexingProgress( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool Index::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setLastWinClosed(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Index::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: indexingProgress((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool Index::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool Index::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
