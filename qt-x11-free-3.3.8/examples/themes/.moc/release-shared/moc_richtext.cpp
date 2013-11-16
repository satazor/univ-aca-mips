/****************************************************************************
** MyRichText meta object code from reading C++ file 'richtext.h'
**
** Created: Wed Oct 9 11:08:35 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../richtext/richtext.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MyRichText::className() const
{
    return "MyRichText";
}

QMetaObject *MyRichText::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MyRichText( "MyRichText", &MyRichText::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MyRichText::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MyRichText", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MyRichText::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MyRichText", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MyRichText::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    static const QUMethod slot_0 = {"prev", 0, 0 };
    static const QUMethod slot_1 = {"next", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "prev()", &slot_0, QMetaData::Protected },
	{ "next()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MyRichText", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MyRichText.setMetaObject( metaObj );
    return metaObj;
}

void* MyRichText::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MyRichText" ) )
	return this;
    return QVBox::qt_cast( clname );
}

bool MyRichText::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: prev(); break;
    case 1: next(); break;
    default:
	return QVBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MyRichText::qt_emit( int _id, QUObject* _o )
{
    return QVBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MyRichText::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool MyRichText::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
