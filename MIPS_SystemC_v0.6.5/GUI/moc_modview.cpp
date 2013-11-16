/****************************************************************************
** ModView meta object code from reading C++ file 'modview.h'
**
** Created: Sat Nov 16 19:45:35 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "modview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ModView::className() const
{
    return "ModView";
}

QMetaObject *ModView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ModView( "ModView", &ModView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ModView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ModView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ModView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ModView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ModView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QCanvasView::staticMetaObject();
    static const QUMethod slot_0 = {"redrawModule", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "redrawModule()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ModView", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ModView.setMetaObject( metaObj );
    return metaObj;
}

void* ModView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ModView" ) )
	return this;
    return QCanvasView::qt_cast( clname );
}

bool ModView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: redrawModule(); break;
    default:
	return QCanvasView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ModView::qt_emit( int _id, QUObject* _o )
{
    return QCanvasView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ModView::qt_property( int id, int f, QVariant* v)
{
    return QCanvasView::qt_property( id, f, v);
}

bool ModView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
