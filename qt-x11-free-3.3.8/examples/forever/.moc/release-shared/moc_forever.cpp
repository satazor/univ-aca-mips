/****************************************************************************
** Forever meta object code from reading C++ file 'forever.h'
**
** Created: Wed Oct 9 11:07:44 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../forever.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Forever::className() const
{
    return "Forever";
}

QMetaObject *Forever::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Forever( "Forever", &Forever::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Forever::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Forever", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Forever::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Forever", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Forever::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"updateCaption", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateCaption()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Forever", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Forever.setMetaObject( metaObj );
    return metaObj;
}

void* Forever::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Forever" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Forever::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateCaption(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Forever::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Forever::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Forever::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
