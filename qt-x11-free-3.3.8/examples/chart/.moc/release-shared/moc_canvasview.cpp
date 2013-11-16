/****************************************************************************
** CanvasView meta object code from reading C++ file 'canvasview.h'
**
** Created: Wed Oct 9 11:08:53 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../canvasview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CanvasView::className() const
{
    return "CanvasView";
}

QMetaObject *CanvasView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CanvasView( "CanvasView", &CanvasView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CanvasView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CanvasView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CanvasView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CanvasView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CanvasView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QCanvasView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"CanvasView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CanvasView.setMetaObject( metaObj );
    return metaObj;
}

void* CanvasView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CanvasView" ) )
	return this;
    return QCanvasView::qt_cast( clname );
}

bool CanvasView::qt_invoke( int _id, QUObject* _o )
{
    return QCanvasView::qt_invoke(_id,_o);
}

bool CanvasView::qt_emit( int _id, QUObject* _o )
{
    return QCanvasView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CanvasView::qt_property( int id, int f, QVariant* v)
{
    return QCanvasView::qt_property( id, f, v);
}

bool CanvasView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
