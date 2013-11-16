/****************************************************************************
** ColorButton meta object code from reading C++ file 'colorbutton.h'
**
** Created: Wed Oct 9 11:06:39 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../colorbutton.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ColorButton::className() const
{
    return "ColorButton";
}

QMetaObject *ColorButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ColorButton( "ColorButton", &ColorButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ColorButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ColorButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ColorButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ColorButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ColorButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QButton::staticMetaObject();
    static const QUMethod slot_0 = {"changeColor", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "changeColor()", &slot_0, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod signal_0 = {"colorChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "colorChanged(const QColor&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ColorButton", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ColorButton.setMetaObject( metaObj );
    return metaObj;
}

void* ColorButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ColorButton" ) )
	return this;
    return QButton::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL colorChanged
void ColorButton::colorChanged( const QColor& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool ColorButton::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: changeColor(); break;
    default:
	return QButton::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ColorButton::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: colorChanged((const QColor&)*((const QColor*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QButton::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ColorButton::qt_property( int id, int f, QVariant* v)
{
    return QButton::qt_property( id, f, v);
}

bool ColorButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
