/****************************************************************************
** ArrowPad meta object code from reading C++ file 'arrowpad.h'
**
** Created: Wed Oct 9 11:06:23 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../arrowpad.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ArrowPad::className() const
{
    return "ArrowPad";
}

QMetaObject *ArrowPad::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ArrowPad( "ArrowPad", &ArrowPad::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ArrowPad::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ArrowPad", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ArrowPad::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ArrowPad", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ArrowPad::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QGrid::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"ArrowPad", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ArrowPad.setMetaObject( metaObj );
    return metaObj;
}

void* ArrowPad::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ArrowPad" ) )
	return this;
    return QGrid::qt_cast( clname );
}

bool ArrowPad::qt_invoke( int _id, QUObject* _o )
{
    return QGrid::qt_invoke(_id,_o);
}

bool ArrowPad::qt_emit( int _id, QUObject* _o )
{
    return QGrid::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ArrowPad::qt_property( int id, int f, QVariant* v)
{
    return QGrid::qt_property( id, f, v);
}

bool ArrowPad::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
