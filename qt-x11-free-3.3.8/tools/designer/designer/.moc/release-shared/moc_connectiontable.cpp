/****************************************************************************
** ConnectionTable meta object code from reading C++ file 'connectiontable.h'
**
** Created: Wed Oct 9 11:05:02 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../connectiontable.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ConnectionTable::className() const
{
    return "ConnectionTable";
}

QMetaObject *ConnectionTable::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ConnectionTable( "ConnectionTable", &ConnectionTable::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ConnectionTable::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConnectionTable", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ConnectionTable::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ConnectionTable", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ConnectionTable::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTable::staticMetaObject();
    static const QUMethod signal_0 = {"resorted", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "resorted()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ConnectionTable", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ConnectionTable.setMetaObject( metaObj );
    return metaObj;
}

void* ConnectionTable::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ConnectionTable" ) )
	return this;
    return QTable::qt_cast( clname );
}

// SIGNAL resorted
void ConnectionTable::resorted()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool ConnectionTable::qt_invoke( int _id, QUObject* _o )
{
    return QTable::qt_invoke(_id,_o);
}

bool ConnectionTable::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: resorted(); break;
    default:
	return QTable::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ConnectionTable::qt_property( int id, int f, QVariant* v)
{
    return QTable::qt_property( id, f, v);
}

bool ConnectionTable::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
