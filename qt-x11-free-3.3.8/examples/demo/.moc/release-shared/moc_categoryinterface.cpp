/****************************************************************************
** CategoryInterface meta object code from reading C++ file 'categoryinterface.h'
**
** Created: Wed Oct 9 11:07:27 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../categoryinterface.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CategoryInterface::className() const
{
    return "CategoryInterface";
}

QMetaObject *CategoryInterface::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CategoryInterface( "CategoryInterface", &CategoryInterface::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CategoryInterface::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CategoryInterface", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CategoryInterface::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CategoryInterface", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CategoryInterface::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "i", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setCurrentCategory", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "setCurrentCategory(int)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"CategoryInterface", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CategoryInterface.setMetaObject( metaObj );
    return metaObj;
}

void* CategoryInterface::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CategoryInterface" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool CategoryInterface::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setCurrentCategory((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CategoryInterface::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CategoryInterface::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool CategoryInterface::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
