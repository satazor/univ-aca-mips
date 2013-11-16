/****************************************************************************
** GraphWidget meta object code from reading C++ file 'graph.h'
**
** Created: Wed Oct 9 11:07:31 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../graph.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *GraphWidget::className() const
{
    return "GraphWidget";
}

QMetaObject *GraphWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_GraphWidget( "GraphWidget", &GraphWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString GraphWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GraphWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString GraphWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GraphWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* GraphWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"shuffle", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setSpeed", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "shuffle()", &slot_0, QMetaData::Private },
	{ "setSpeed(int)", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"GraphWidget", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_GraphWidget.setMetaObject( metaObj );
    return metaObj;
}

void* GraphWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "GraphWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool GraphWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: shuffle(); break;
    case 1: setSpeed((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool GraphWidget::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool GraphWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool GraphWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
