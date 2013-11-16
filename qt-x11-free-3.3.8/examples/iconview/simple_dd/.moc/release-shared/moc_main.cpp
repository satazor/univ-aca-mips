/****************************************************************************
** DDListBox meta object code from reading C++ file 'main.h'
**
** Created: Wed Oct 9 11:08:59 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../main.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DDListBox::className() const
{
    return "DDListBox";
}

QMetaObject *DDListBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DDListBox( "DDListBox", &DDListBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DDListBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DDListBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DDListBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DDListBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DDListBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListBox::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"DDListBox", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DDListBox.setMetaObject( metaObj );
    return metaObj;
}

void* DDListBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DDListBox" ) )
	return this;
    return QListBox::qt_cast( clname );
}

bool DDListBox::qt_invoke( int _id, QUObject* _o )
{
    return QListBox::qt_invoke(_id,_o);
}

bool DDListBox::qt_emit( int _id, QUObject* _o )
{
    return QListBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DDListBox::qt_property( int id, int f, QVariant* v)
{
    return QListBox::qt_property( id, f, v);
}

bool DDListBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *DDIconView::className() const
{
    return "DDIconView";
}

QMetaObject *DDIconView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DDIconView( "DDIconView", &DDIconView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DDIconView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DDIconView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DDIconView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DDIconView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DDIconView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QIconView::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "evt", &static_QUType_ptr, "QDropEvent", QUParameter::In },
	{ "list", &static_QUType_ptr, "QValueList<QIconDragItem>", QUParameter::In }
    };
    static const QUMethod slot_0 = {"slotNewItem", 2, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "slotNewItem(QDropEvent*,const QValueList<QIconDragItem>&)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"DDIconView", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DDIconView.setMetaObject( metaObj );
    return metaObj;
}

void* DDIconView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DDIconView" ) )
	return this;
    return QIconView::qt_cast( clname );
}

bool DDIconView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotNewItem((QDropEvent*)static_QUType_ptr.get(_o+1),(const QValueList<QIconDragItem>&)*((const QValueList<QIconDragItem>*)static_QUType_ptr.get(_o+2))); break;
    default:
	return QIconView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DDIconView::qt_emit( int _id, QUObject* _o )
{
    return QIconView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DDIconView::qt_property( int id, int f, QVariant* v)
{
    return QIconView::qt_property( id, f, v);
}

bool DDIconView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
