/****************************************************************************
** PixmapView meta object code from reading C++ file 'pixmapchooser.h'
**
** Created: Wed Oct 9 11:04:44 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../pixmapchooser.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PixmapView::className() const
{
    return "PixmapView";
}

QMetaObject *PixmapView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PixmapView( "PixmapView", &PixmapView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PixmapView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PixmapView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PixmapView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PixmapView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PixmapView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PixmapView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PixmapView.setMetaObject( metaObj );
    return metaObj;
}

void* PixmapView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PixmapView" ) )
	return this;
    if ( !qstrcmp( clname, "QFilePreview" ) )
	return (QFilePreview*)this;
    return QScrollView::qt_cast( clname );
}

bool PixmapView::qt_invoke( int _id, QUObject* _o )
{
    return QScrollView::qt_invoke(_id,_o);
}

bool PixmapView::qt_emit( int _id, QUObject* _o )
{
    return QScrollView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PixmapView::qt_property( int id, int f, QVariant* v)
{
    return QScrollView::qt_property( id, f, v);
}

bool PixmapView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *ImageIconProvider::className() const
{
    return "ImageIconProvider";
}

QMetaObject *ImageIconProvider::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ImageIconProvider( "ImageIconProvider", &ImageIconProvider::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ImageIconProvider::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ImageIconProvider", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ImageIconProvider::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ImageIconProvider", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ImageIconProvider::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFileIconProvider::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"ImageIconProvider", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ImageIconProvider.setMetaObject( metaObj );
    return metaObj;
}

void* ImageIconProvider::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ImageIconProvider" ) )
	return this;
    return QFileIconProvider::qt_cast( clname );
}

bool ImageIconProvider::qt_invoke( int _id, QUObject* _o )
{
    return QFileIconProvider::qt_invoke(_id,_o);
}

bool ImageIconProvider::qt_emit( int _id, QUObject* _o )
{
    return QFileIconProvider::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ImageIconProvider::qt_property( int id, int f, QVariant* v)
{
    return QFileIconProvider::qt_property( id, f, v);
}

bool ImageIconProvider::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
