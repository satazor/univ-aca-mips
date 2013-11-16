/****************************************************************************
** QTranslator meta object code from reading C++ file 'qtranslator.h'
**
** Created: Wed Oct 9 10:52:30 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qtranslator.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QTranslator::className() const
{
    return "QTranslator";
}

QMetaObject *QTranslator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTranslator( "QTranslator", &QTranslator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTranslator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTranslator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTranslator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTranslator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTranslator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QTranslator", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTranslator.setMetaObject( metaObj );
    return metaObj;
}

void* QTranslator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTranslator" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QTranslator::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QTranslator::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QTranslator::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QTranslator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
