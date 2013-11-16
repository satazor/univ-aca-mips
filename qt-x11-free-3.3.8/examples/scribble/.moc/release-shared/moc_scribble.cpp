/****************************************************************************
** Canvas meta object code from reading C++ file 'scribble.h'
**
** Created: Wed Oct 9 11:08:16 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../scribble.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Canvas::className() const
{
    return "Canvas";
}

QMetaObject *Canvas::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Canvas( "Canvas", &Canvas::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Canvas::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Canvas", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Canvas::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Canvas", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Canvas::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Canvas", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Canvas.setMetaObject( metaObj );
    return metaObj;
}

void* Canvas::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Canvas" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Canvas::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool Canvas::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Canvas::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Canvas::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *Scribble::className() const
{
    return "Scribble";
}

QMetaObject *Scribble::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Scribble( "Scribble", &Scribble::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Scribble::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Scribble", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Scribble::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Scribble", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Scribble::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"slotSave", 0, 0 };
    static const QUMethod slot_1 = {"slotColor", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"slotWidth", 1, param_slot_2 };
    static const QUMethod slot_3 = {"slotClear", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slotSave()", &slot_0, QMetaData::Protected },
	{ "slotColor()", &slot_1, QMetaData::Protected },
	{ "slotWidth(int)", &slot_2, QMetaData::Protected },
	{ "slotClear()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Scribble", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Scribble.setMetaObject( metaObj );
    return metaObj;
}

void* Scribble::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Scribble" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool Scribble::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotSave(); break;
    case 1: slotColor(); break;
    case 2: slotWidth((int)static_QUType_int.get(_o+1)); break;
    case 3: slotClear(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Scribble::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Scribble::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool Scribble::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
