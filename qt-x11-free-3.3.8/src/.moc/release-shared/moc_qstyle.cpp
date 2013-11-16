/****************************************************************************
** QStyle meta object code from reading C++ file 'qstyle.h'
**
** Created: Wed Oct 9 10:52:34 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qstyle.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QStyle::className() const
{
    return "QStyle";
}

QMetaObject *QStyle::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QStyle( "QStyle", &QStyle::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QStyle::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QStyle", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QStyle::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QStyle", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QStyle::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QStyle", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QStyle.setMetaObject( metaObj );
    return metaObj;
}

void* QStyle::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QStyle" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QStyle::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QStyle::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QStyle::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QStyle::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
