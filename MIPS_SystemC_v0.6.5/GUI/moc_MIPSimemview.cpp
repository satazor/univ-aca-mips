/****************************************************************************
** MIPSimemview meta object code from reading C++ file 'MIPSimemview.h'
**
** Created: Sat Nov 16 22:31:25 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "MIPSimemview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MIPSimemview::className() const
{
    return "MIPSimemview";
}

QMetaObject *MIPSimemview::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MIPSimemview( "MIPSimemview", &MIPSimemview::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MIPSimemview::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSimemview", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MIPSimemview::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSimemview", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MIPSimemview::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = MIPSmemview::staticMetaObject();
    static const QUMethod slot_0 = {"initList", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "initList()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MIPSimemview", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MIPSimemview.setMetaObject( metaObj );
    return metaObj;
}

void* MIPSimemview::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MIPSimemview" ) )
	return this;
    return MIPSmemview::qt_cast( clname );
}

bool MIPSimemview::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: initList(); break;
    default:
	return MIPSmemview::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MIPSimemview::qt_emit( int _id, QUObject* _o )
{
    return MIPSmemview::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MIPSimemview::qt_property( int id, int f, QVariant* v)
{
    return MIPSmemview::qt_property( id, f, v);
}

bool MIPSimemview::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
