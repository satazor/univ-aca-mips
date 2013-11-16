/****************************************************************************
** DisplayWidget meta object code from reading C++ file 'display.h'
**
** Created: Wed Oct 9 11:07:27 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../display.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DisplayWidget::className() const
{
    return "DisplayWidget";
}

QMetaObject *DisplayWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DisplayWidget( "DisplayWidget", &DisplayWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DisplayWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DisplayWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DisplayWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DisplayWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DisplayWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"tick", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "tick()", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"DisplayWidget", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DisplayWidget.setMetaObject( metaObj );
    return metaObj;
}

void* DisplayWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DisplayWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool DisplayWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: tick(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DisplayWidget::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DisplayWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool DisplayWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *Screen::className() const
{
    return "Screen";
}

QMetaObject *Screen::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Screen( "Screen", &Screen::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Screen::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Screen", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Screen::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Screen", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Screen::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "s", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setStep", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "setStep(int)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Screen", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Screen.setMetaObject( metaObj );
    return metaObj;
}

void* Screen::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Screen" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool Screen::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setStep((int)static_QUType_int.get(_o+1)); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Screen::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Screen::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool Screen::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *Curve::className() const
{
    return "Curve";
}

QMetaObject *Curve::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Curve( "Curve", &Curve::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Curve::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Curve", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Curve::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Curve", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Curve::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setFactor", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "setFactor(int)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Curve", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Curve.setMetaObject( metaObj );
    return metaObj;
}

void* Curve::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Curve" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool Curve::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setFactor((int)static_QUType_int.get(_o+1)); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Curve::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Curve::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool Curve::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
