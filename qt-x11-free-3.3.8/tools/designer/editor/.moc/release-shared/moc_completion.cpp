/****************************************************************************
** EditorCompletion meta object code from reading C++ file 'completion.h'
**
** Created: Wed Oct 9 11:05:25 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../completion.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *EditorCompletion::className() const
{
    return "EditorCompletion";
}

QMetaObject *EditorCompletion::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EditorCompletion( "EditorCompletion", &EditorCompletion::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EditorCompletion::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditorCompletion", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EditorCompletion::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditorCompletion", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EditorCompletion::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"EditorCompletion", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EditorCompletion.setMetaObject( metaObj );
    return metaObj;
}

void* EditorCompletion::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EditorCompletion" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool EditorCompletion::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool EditorCompletion::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool EditorCompletion::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool EditorCompletion::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
