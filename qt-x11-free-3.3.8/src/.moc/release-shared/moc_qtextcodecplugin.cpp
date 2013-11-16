/****************************************************************************
** QTextCodecPlugin meta object code from reading C++ file 'qtextcodecplugin.h'
**
** Created: Wed Oct 9 10:53:12 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../codecs/qtextcodecplugin.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QTextCodecPlugin::className() const
{
    return "QTextCodecPlugin";
}

QMetaObject *QTextCodecPlugin::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTextCodecPlugin( "QTextCodecPlugin", &QTextCodecPlugin::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTextCodecPlugin::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextCodecPlugin", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTextCodecPlugin::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextCodecPlugin", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTextCodecPlugin::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QGPlugin::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QTextCodecPlugin", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTextCodecPlugin.setMetaObject( metaObj );
    return metaObj;
}

void* QTextCodecPlugin::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTextCodecPlugin" ) )
	return this;
    return QGPlugin::qt_cast( clname );
}

bool QTextCodecPlugin::qt_invoke( int _id, QUObject* _o )
{
    return QGPlugin::qt_invoke(_id,_o);
}

bool QTextCodecPlugin::qt_emit( int _id, QUObject* _o )
{
    return QGPlugin::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QTextCodecPlugin::qt_property( int id, int f, QVariant* v)
{
    return QGPlugin::qt_property( id, f, v);
}

bool QTextCodecPlugin::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
