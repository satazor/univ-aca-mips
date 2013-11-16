/****************************************************************************
** Rot13 meta object code from reading C++ file 'rot13.h'
**
** Created: Wed Oct 9 11:08:15 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../rot13.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Rot13::className() const
{
    return "Rot13";
}

QMetaObject *Rot13::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Rot13( "Rot13", &Rot13::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Rot13::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Rot13", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Rot13::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Rot13", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Rot13::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"changeLeft", 0, 0 };
    static const QUMethod slot_1 = {"changeRight", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "changeLeft()", &slot_0, QMetaData::Private },
	{ "changeRight()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Rot13", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Rot13.setMetaObject( metaObj );
    return metaObj;
}

void* Rot13::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Rot13" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Rot13::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: changeLeft(); break;
    case 1: changeRight(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Rot13::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Rot13::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Rot13::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
