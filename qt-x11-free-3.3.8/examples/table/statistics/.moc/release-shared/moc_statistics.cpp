/****************************************************************************
** Table meta object code from reading C++ file 'statistics.h'
**
** Created: Wed Oct 9 11:09:24 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../statistics.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Table::className() const
{
    return "Table";
}

QMetaObject *Table::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Table( "Table", &Table::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Table::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Table", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Table::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Table", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Table::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTable::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"recalcSum", 2, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "recalcSum(int,int)", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Table", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Table.setMetaObject( metaObj );
    return metaObj;
}

void* Table::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Table" ) )
	return this;
    return QTable::qt_cast( clname );
}

bool Table::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: recalcSum((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return QTable::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Table::qt_emit( int _id, QUObject* _o )
{
    return QTable::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Table::qt_property( int id, int f, QVariant* v)
{
    return QTable::qt_property( id, f, v);
}

bool Table::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
