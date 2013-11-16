/****************************************************************************
** QDesignerDataBrowser2 meta object code from reading C++ file 'database2.h'
**
** Created: Wed Oct 9 11:03:15 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../designer/database2.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDesignerDataBrowser2::className() const
{
    return "QDesignerDataBrowser2";
}

QMetaObject *QDesignerDataBrowser2::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerDataBrowser2( "QDesignerDataBrowser2", &QDesignerDataBrowser2::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerDataBrowser2::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDataBrowser2", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerDataBrowser2::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDataBrowser2", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerDataBrowser2::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDataBrowser::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDesignerDataBrowser2", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerDataBrowser2.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerDataBrowser2::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerDataBrowser2" ) )
	return this;
    if ( !qstrcmp( clname, "DatabaseSupport2" ) )
	return (DatabaseSupport2*)this;
    return QDataBrowser::qt_cast( clname );
}

bool QDesignerDataBrowser2::qt_invoke( int _id, QUObject* _o )
{
    return QDataBrowser::qt_invoke(_id,_o);
}

bool QDesignerDataBrowser2::qt_emit( int _id, QUObject* _o )
{
    return QDataBrowser::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerDataBrowser2::qt_property( int id, int f, QVariant* v)
{
    return QDataBrowser::qt_property( id, f, v);
}

bool QDesignerDataBrowser2::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerDataView2::className() const
{
    return "QDesignerDataView2";
}

QMetaObject *QDesignerDataView2::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerDataView2( "QDesignerDataView2", &QDesignerDataView2::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerDataView2::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDataView2", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerDataView2::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDataView2", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerDataView2::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDataView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDesignerDataView2", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerDataView2.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerDataView2::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerDataView2" ) )
	return this;
    if ( !qstrcmp( clname, "DatabaseSupport2" ) )
	return (DatabaseSupport2*)this;
    return QDataView::qt_cast( clname );
}

bool QDesignerDataView2::qt_invoke( int _id, QUObject* _o )
{
    return QDataView::qt_invoke(_id,_o);
}

bool QDesignerDataView2::qt_emit( int _id, QUObject* _o )
{
    return QDataView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerDataView2::qt_property( int id, int f, QVariant* v)
{
    return QDataView::qt_property( id, f, v);
}

bool QDesignerDataView2::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
