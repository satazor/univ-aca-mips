/****************************************************************************
** RangeControls meta object code from reading C++ file 'rangecontrols.h'
**
** Created: Wed Oct 9 11:08:13 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../rangecontrols.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *RangeControls::className() const
{
    return "RangeControls";
}

QMetaObject *RangeControls::metaObj = 0;
static QMetaObjectCleanUp cleanUp_RangeControls( "RangeControls", &RangeControls::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString RangeControls::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RangeControls", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString RangeControls::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "RangeControls", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* RangeControls::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"RangeControls", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_RangeControls.setMetaObject( metaObj );
    return metaObj;
}

void* RangeControls::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "RangeControls" ) )
	return this;
    return QVBox::qt_cast( clname );
}

bool RangeControls::qt_invoke( int _id, QUObject* _o )
{
    return QVBox::qt_invoke(_id,_o);
}

bool RangeControls::qt_emit( int _id, QUObject* _o )
{
    return QVBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool RangeControls::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool RangeControls::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
