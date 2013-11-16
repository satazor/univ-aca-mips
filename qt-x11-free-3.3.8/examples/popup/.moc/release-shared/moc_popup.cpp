/****************************************************************************
** FancyPopup meta object code from reading C++ file 'popup.h'
**
** Created: Wed Oct 9 11:08:03 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../popup.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FancyPopup::className() const
{
    return "FancyPopup";
}

QMetaObject *FancyPopup::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FancyPopup( "FancyPopup", &FancyPopup::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FancyPopup::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FancyPopup", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FancyPopup::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FancyPopup", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FancyPopup::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLabel::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"FancyPopup", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FancyPopup.setMetaObject( metaObj );
    return metaObj;
}

void* FancyPopup::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FancyPopup" ) )
	return this;
    return QLabel::qt_cast( clname );
}

bool FancyPopup::qt_invoke( int _id, QUObject* _o )
{
    return QLabel::qt_invoke(_id,_o);
}

bool FancyPopup::qt_emit( int _id, QUObject* _o )
{
    return QLabel::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool FancyPopup::qt_property( int id, int f, QVariant* v)
{
    return QLabel::qt_property( id, f, v);
}

bool FancyPopup::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *Frame::className() const
{
    return "Frame";
}

QMetaObject *Frame::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Frame( "Frame", &Frame::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Frame::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Frame", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Frame::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Frame", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Frame::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUMethod slot_0 = {"button1Clicked", 0, 0 };
    static const QUMethod slot_1 = {"button2Pressed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "button1Clicked()", &slot_0, QMetaData::Private },
	{ "button2Pressed()", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Frame", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Frame.setMetaObject( metaObj );
    return metaObj;
}

void* Frame::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Frame" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool Frame::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: button1Clicked(); break;
    case 1: button2Pressed(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Frame::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Frame::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool Frame::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
