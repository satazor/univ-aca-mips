/****************************************************************************
** PhraseLV meta object code from reading C++ file 'phraselv.h'
**
** Created: Wed Oct 9 11:06:19 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../phraselv.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PhraseLV::className() const
{
    return "PhraseLV";
}

QMetaObject *PhraseLV::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PhraseLV( "PhraseLV", &PhraseLV::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PhraseLV::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PhraseLV", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PhraseLV::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PhraseLV", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PhraseLV::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PhraseLV", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PhraseLV.setMetaObject( metaObj );
    return metaObj;
}

void* PhraseLV::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PhraseLV" ) )
	return this;
    return QListView::qt_cast( clname );
}

bool PhraseLV::qt_invoke( int _id, QUObject* _o )
{
    return QListView::qt_invoke(_id,_o);
}

bool PhraseLV::qt_emit( int _id, QUObject* _o )
{
    return QListView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PhraseLV::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool PhraseLV::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
