/****************************************************************************
** WidgetAction meta object code from reading C++ file 'widgetaction.h'
**
** Created: Wed Oct 9 11:04:58 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgetaction.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *WidgetAction::className() const
{
    return "WidgetAction";
}

QMetaObject *WidgetAction::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WidgetAction( "WidgetAction", &WidgetAction::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WidgetAction::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WidgetAction", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WidgetAction::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WidgetAction", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WidgetAction::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QAction::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"WidgetAction", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WidgetAction.setMetaObject( metaObj );
    return metaObj;
}

void* WidgetAction::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WidgetAction" ) )
	return this;
    return QAction::qt_cast( clname );
}

bool WidgetAction::qt_invoke( int _id, QUObject* _o )
{
    return QAction::qt_invoke(_id,_o);
}

bool WidgetAction::qt_emit( int _id, QUObject* _o )
{
    return QAction::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool WidgetAction::qt_property( int id, int f, QVariant* v)
{
    return QAction::qt_property( id, f, v);
}

bool WidgetAction::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
