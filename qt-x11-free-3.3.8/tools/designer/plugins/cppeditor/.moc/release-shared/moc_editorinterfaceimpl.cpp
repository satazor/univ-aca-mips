/****************************************************************************
** EditorInterfaceImpl meta object code from reading C++ file 'editorinterfaceimpl.h'
**
** Created: Wed Oct 9 11:05:40 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../editorinterfaceimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *EditorInterfaceImpl::className() const
{
    return "EditorInterfaceImpl";
}

QMetaObject *EditorInterfaceImpl::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EditorInterfaceImpl( "EditorInterfaceImpl", &EditorInterfaceImpl::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EditorInterfaceImpl::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditorInterfaceImpl", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EditorInterfaceImpl::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditorInterfaceImpl", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EditorInterfaceImpl::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "m", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"modificationChanged", 1, param_slot_0 };
    static const QUMethod slot_1 = {"intervalChanged", 0, 0 };
    static const QUMethod slot_2 = {"update", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "modificationChanged(bool)", &slot_0, QMetaData::Private },
	{ "intervalChanged()", &slot_1, QMetaData::Private },
	{ "update()", &slot_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"EditorInterfaceImpl", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EditorInterfaceImpl.setMetaObject( metaObj );
    return metaObj;
}

void* EditorInterfaceImpl::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EditorInterfaceImpl" ) )
	return this;
    if ( !qstrcmp( clname, "EditorInterface" ) )
	return (EditorInterface*)this;
    return QObject::qt_cast( clname );
}

bool EditorInterfaceImpl::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: modificationChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 1: intervalChanged(); break;
    case 2: update(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool EditorInterfaceImpl::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool EditorInterfaceImpl::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool EditorInterfaceImpl::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
