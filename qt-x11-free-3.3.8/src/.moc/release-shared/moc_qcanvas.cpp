/****************************************************************************
** QCanvas meta object code from reading C++ file 'qcanvas.h'
**
** Created: Wed Oct 9 10:53:08 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../canvas/qcanvas.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QCanvas::className() const
{
    return "QCanvas";
}

QMetaObject *QCanvas::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QCanvas( "QCanvas", &QCanvas::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QCanvas::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QCanvas", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QCanvas::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QCanvas", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QCanvas::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"advance", 0, 0 };
    static const QUMethod slot_1 = {"update", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "advance()", &slot_0, QMetaData::Public },
	{ "update()", &slot_1, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"resized", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "resized()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QCanvas", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QCanvas.setMetaObject( metaObj );
    return metaObj;
}

void* QCanvas::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QCanvas" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL resized
void QCanvas::resized()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool QCanvas::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: advance(); break;
    case 1: update(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QCanvas::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: resized(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QCanvas::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QCanvas::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QCanvasView::className() const
{
    return "QCanvasView";
}

QMetaObject *QCanvasView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QCanvasView( "QCanvasView", &QCanvasView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QCanvasView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QCanvasView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QCanvasView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QCanvasView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QCanvasView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"cMoving", 2, param_slot_0 };
    static const QUMethod slot_1 = {"updateContentsSize", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "cMoving(int,int)", &slot_0, QMetaData::Private },
	{ "updateContentsSize()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QCanvasView", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QCanvasView.setMetaObject( metaObj );
    return metaObj;
}

void* QCanvasView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QCanvasView" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

bool QCanvasView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: cMoving((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 1: updateContentsSize(); break;
    default:
	return QScrollView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QCanvasView::qt_emit( int _id, QUObject* _o )
{
    return QScrollView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QCanvasView::qt_property( int id, int f, QVariant* v)
{
    return QScrollView::qt_property( id, f, v);
}

bool QCanvasView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
