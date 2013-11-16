/****************************************************************************
** MIPSregfileview meta object code from reading C++ file 'MIPSregfileview.h'
**
** Created: Sat Nov 16 17:33:58 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "MIPSregfileview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MIPSregfileview::className() const
{
    return "MIPSregfileview";
}

QMetaObject *MIPSregfileview::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MIPSregfileview( "MIPSregfileview", &MIPSregfileview::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MIPSregfileview::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSregfileview", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MIPSregfileview::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSregfileview", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MIPSregfileview::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = MIPSmemview::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"MIPSregfileview", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MIPSregfileview.setMetaObject( metaObj );
    return metaObj;
}

void* MIPSregfileview::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MIPSregfileview" ) )
	return this;
    return MIPSmemview::qt_cast( clname );
}

bool MIPSregfileview::qt_invoke( int _id, QUObject* _o )
{
    return MIPSmemview::qt_invoke(_id,_o);
}

bool MIPSregfileview::qt_emit( int _id, QUObject* _o )
{
    return MIPSmemview::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MIPSregfileview::qt_property( int id, int f, QVariant* v)
{
    return MIPSmemview::qt_property( id, f, v);
}

bool MIPSregfileview::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
