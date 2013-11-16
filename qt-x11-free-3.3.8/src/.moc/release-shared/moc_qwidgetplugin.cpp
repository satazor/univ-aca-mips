/****************************************************************************
** QWidgetPlugin meta object code from reading C++ file 'qwidgetplugin.h'
**
** Created: Wed Oct 9 10:53:00 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qwidgetplugin.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QWidgetPlugin::className() const
{
    return "QWidgetPlugin";
}

QMetaObject *QWidgetPlugin::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QWidgetPlugin( "QWidgetPlugin", &QWidgetPlugin::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QWidgetPlugin::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWidgetPlugin", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QWidgetPlugin::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWidgetPlugin", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QWidgetPlugin::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QGPlugin::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QWidgetPlugin", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QWidgetPlugin.setMetaObject( metaObj );
    return metaObj;
}

void* QWidgetPlugin::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QWidgetPlugin" ) )
	return this;
    return QGPlugin::qt_cast( clname );
}

bool QWidgetPlugin::qt_invoke( int _id, QUObject* _o )
{
    return QGPlugin::qt_invoke(_id,_o);
}

bool QWidgetPlugin::qt_emit( int _id, QUObject* _o )
{
    return QGPlugin::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QWidgetPlugin::qt_property( int id, int f, QVariant* v)
{
    return QGPlugin::qt_property( id, f, v);
}

bool QWidgetPlugin::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
