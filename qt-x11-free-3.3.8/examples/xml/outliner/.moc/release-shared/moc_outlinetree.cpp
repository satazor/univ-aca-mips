/****************************************************************************
** OutlineTree meta object code from reading C++ file 'outlinetree.h'
**
** Created: Wed Oct 9 11:09:57 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../outlinetree.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *OutlineTree::className() const
{
    return "OutlineTree";
}

QMetaObject *OutlineTree::metaObj = 0;
static QMetaObjectCleanUp cleanUp_OutlineTree( "OutlineTree", &OutlineTree::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString OutlineTree::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OutlineTree", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString OutlineTree::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OutlineTree", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* OutlineTree::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"OutlineTree", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_OutlineTree.setMetaObject( metaObj );
    return metaObj;
}

void* OutlineTree::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "OutlineTree" ) )
	return this;
    return QListView::qt_cast( clname );
}

bool OutlineTree::qt_invoke( int _id, QUObject* _o )
{
    return QListView::qt_invoke(_id,_o);
}

bool OutlineTree::qt_emit( int _id, QUObject* _o )
{
    return QListView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool OutlineTree::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool OutlineTree::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
