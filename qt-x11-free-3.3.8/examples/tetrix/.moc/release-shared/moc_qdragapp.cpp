/****************************************************************************
** QDragApplication meta object code from reading C++ file 'qdragapp.h'
**
** Created: Wed Oct 9 11:08:25 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qdragapp.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDragApplication::className() const
{
    return "QDragApplication";
}

QMetaObject *QDragApplication::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDragApplication( "QDragApplication", &QDragApplication::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDragApplication::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDragApplication", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDragApplication::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDragApplication", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDragApplication::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QApplication::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QDragApplication", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDragApplication.setMetaObject( metaObj );
    return metaObj;
}

void* QDragApplication::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDragApplication" ) )
	return this;
    return QApplication::qt_cast( clname );
}

bool QDragApplication::qt_invoke( int _id, QUObject* _o )
{
    return QApplication::qt_invoke(_id,_o);
}

bool QDragApplication::qt_emit( int _id, QUObject* _o )
{
    return QApplication::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDragApplication::qt_property( int id, int f, QVariant* v)
{
    return QApplication::qt_property( id, f, v);
}

bool QDragApplication::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
