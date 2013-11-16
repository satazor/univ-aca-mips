/****************************************************************************
** QDesignerDataBrowser meta object code from reading C++ file 'database.h'
**
** Created: Wed Oct 9 11:05:03 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../database.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDesignerDataBrowser::className() const
{
    return "QDesignerDataBrowser";
}

QMetaObject *QDesignerDataBrowser::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerDataBrowser( "QDesignerDataBrowser", &QDesignerDataBrowser::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerDataBrowser::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDataBrowser", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerDataBrowser::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDataBrowser", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerDataBrowser::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDataBrowser::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDesignerDataBrowser", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerDataBrowser.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerDataBrowser::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerDataBrowser" ) )
	return this;
    if ( !qstrcmp( clname, "DatabaseSupport" ) )
	return (DatabaseSupport*)this;
    return QDataBrowser::qt_cast( clname );
}

bool QDesignerDataBrowser::qt_invoke( int _id, QUObject* _o )
{
    return QDataBrowser::qt_invoke(_id,_o);
}

bool QDesignerDataBrowser::qt_emit( int _id, QUObject* _o )
{
    return QDataBrowser::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerDataBrowser::qt_property( int id, int f, QVariant* v)
{
    return QDataBrowser::qt_property( id, f, v);
}

bool QDesignerDataBrowser::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDesignerDataView::className() const
{
    return "QDesignerDataView";
}

QMetaObject *QDesignerDataView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesignerDataView( "QDesignerDataView", &QDesignerDataView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesignerDataView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDataView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesignerDataView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesignerDataView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesignerDataView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDataView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDesignerDataView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesignerDataView.setMetaObject( metaObj );
    return metaObj;
}

void* QDesignerDataView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesignerDataView" ) )
	return this;
    if ( !qstrcmp( clname, "DatabaseSupport" ) )
	return (DatabaseSupport*)this;
    return QDataView::qt_cast( clname );
}

bool QDesignerDataView::qt_invoke( int _id, QUObject* _o )
{
    return QDataView::qt_invoke(_id,_o);
}

bool QDesignerDataView::qt_emit( int _id, QUObject* _o )
{
    return QDataView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDesignerDataView::qt_property( int id, int f, QVariant* v)
{
    return QDataView::qt_property( id, f, v);
}

bool QDesignerDataView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
