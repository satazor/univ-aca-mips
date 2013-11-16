/****************************************************************************
** QWidgetResizeHandler meta object code from reading C++ file 'qwidgetresizehandler_p.h'
**
** Created: Wed Oct 9 10:52:39 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qwidgetresizehandler_p.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QWidgetResizeHandler::className() const
{
    return "QWidgetResizeHandler";
}

QMetaObject *QWidgetResizeHandler::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QWidgetResizeHandler( "QWidgetResizeHandler", &QWidgetResizeHandler::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QWidgetResizeHandler::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWidgetResizeHandler", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QWidgetResizeHandler::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWidgetResizeHandler", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QWidgetResizeHandler::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod signal_0 = {"activate", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "activate()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QWidgetResizeHandler", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QWidgetResizeHandler.setMetaObject( metaObj );
    return metaObj;
}

void* QWidgetResizeHandler::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QWidgetResizeHandler" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL activate
void QWidgetResizeHandler::activate()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool QWidgetResizeHandler::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QWidgetResizeHandler::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: activate(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QWidgetResizeHandler::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QWidgetResizeHandler::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
