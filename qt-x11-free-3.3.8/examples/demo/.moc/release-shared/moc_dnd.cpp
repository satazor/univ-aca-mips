/****************************************************************************
** DnDDemo meta object code from reading C++ file 'dnd.h'
**
** Created: Wed Oct 9 11:07:29 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dnd/dnd.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DnDDemo::className() const
{
    return "DnDDemo";
}

QMetaObject *DnDDemo::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DnDDemo( "DnDDemo", &DnDDemo::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DnDDemo::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DnDDemo", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DnDDemo::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DnDDemo", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DnDDemo::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = DnDDemoBase::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"DnDDemo", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DnDDemo.setMetaObject( metaObj );
    return metaObj;
}

void* DnDDemo::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DnDDemo" ) )
	return this;
    return DnDDemoBase::qt_cast( clname );
}

bool DnDDemo::qt_invoke( int _id, QUObject* _o )
{
    return DnDDemoBase::qt_invoke(_id,_o);
}

bool DnDDemo::qt_emit( int _id, QUObject* _o )
{
    return DnDDemoBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DnDDemo::qt_property( int id, int f, QVariant* v)
{
    return DnDDemoBase::qt_property( id, f, v);
}

bool DnDDemo::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
