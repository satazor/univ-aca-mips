/****************************************************************************
** EditorBrowser meta object code from reading C++ file 'browser.h'
**
** Created: Wed Oct 9 11:05:26 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../browser.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *EditorBrowser::className() const
{
    return "EditorBrowser";
}

QMetaObject *EditorBrowser::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EditorBrowser( "EditorBrowser", &EditorBrowser::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EditorBrowser::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditorBrowser", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EditorBrowser::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditorBrowser", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EditorBrowser::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"EditorBrowser", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EditorBrowser.setMetaObject( metaObj );
    return metaObj;
}

void* EditorBrowser::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EditorBrowser" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool EditorBrowser::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool EditorBrowser::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool EditorBrowser::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool EditorBrowser::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
