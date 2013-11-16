/****************************************************************************
** PreviewWorkspace meta object code from reading C++ file 'previewframe.h'
**
** Created: Wed Oct 9 11:04:55 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../previewframe.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PreviewWorkspace::className() const
{
    return "PreviewWorkspace";
}

QMetaObject *PreviewWorkspace::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PreviewWorkspace( "PreviewWorkspace", &PreviewWorkspace::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PreviewWorkspace::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreviewWorkspace", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PreviewWorkspace::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreviewWorkspace", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PreviewWorkspace::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWorkspace::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PreviewWorkspace", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PreviewWorkspace.setMetaObject( metaObj );
    return metaObj;
}

void* PreviewWorkspace::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PreviewWorkspace" ) )
	return this;
    return QWorkspace::qt_cast( clname );
}

bool PreviewWorkspace::qt_invoke( int _id, QUObject* _o )
{
    return QWorkspace::qt_invoke(_id,_o);
}

bool PreviewWorkspace::qt_emit( int _id, QUObject* _o )
{
    return QWorkspace::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PreviewWorkspace::qt_property( int id, int f, QVariant* v)
{
    return QWorkspace::qt_property( id, f, v);
}

bool PreviewWorkspace::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PreviewFrame::className() const
{
    return "PreviewFrame";
}

QMetaObject *PreviewFrame::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PreviewFrame( "PreviewFrame", &PreviewFrame::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PreviewFrame::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreviewFrame", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PreviewFrame::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreviewFrame", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PreviewFrame::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PreviewFrame", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PreviewFrame.setMetaObject( metaObj );
    return metaObj;
}

void* PreviewFrame::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PreviewFrame" ) )
	return this;
    return QVBox::qt_cast( clname );
}

bool PreviewFrame::qt_invoke( int _id, QUObject* _o )
{
    return QVBox::qt_invoke(_id,_o);
}

bool PreviewFrame::qt_emit( int _id, QUObject* _o )
{
    return QVBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PreviewFrame::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool PreviewFrame::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
