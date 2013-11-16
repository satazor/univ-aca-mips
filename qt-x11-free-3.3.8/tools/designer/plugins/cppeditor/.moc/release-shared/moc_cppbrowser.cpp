/****************************************************************************
** CppEditorBrowser meta object code from reading C++ file 'cppbrowser.h'
**
** Created: Wed Oct 9 11:05:41 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../cppbrowser.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CppEditorBrowser::className() const
{
    return "CppEditorBrowser";
}

QMetaObject *CppEditorBrowser::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CppEditorBrowser( "CppEditorBrowser", &CppEditorBrowser::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CppEditorBrowser::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CppEditorBrowser", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CppEditorBrowser::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CppEditorBrowser", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CppEditorBrowser::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = EditorBrowser::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"CppEditorBrowser", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CppEditorBrowser.setMetaObject( metaObj );
    return metaObj;
}

void* CppEditorBrowser::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CppEditorBrowser" ) )
	return this;
    return EditorBrowser::qt_cast( clname );
}

bool CppEditorBrowser::qt_invoke( int _id, QUObject* _o )
{
    return EditorBrowser::qt_invoke(_id,_o);
}

bool CppEditorBrowser::qt_emit( int _id, QUObject* _o )
{
    return EditorBrowser::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CppEditorBrowser::qt_property( int id, int f, QVariant* v)
{
    return EditorBrowser::qt_property( id, f, v);
}

bool CppEditorBrowser::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
