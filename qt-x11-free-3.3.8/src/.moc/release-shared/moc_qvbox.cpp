/****************************************************************************
** QVBox meta object code from reading C++ file 'qvbox.h'
**
** Created: Wed Oct 9 10:52:56 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qvbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QVBox::className() const
{
    return "QVBox";
}

QMetaObject *QVBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QVBox( "QVBox", &QVBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QVBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QVBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QVBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QVBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QVBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QHBox::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QVBox", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QVBox.setMetaObject( metaObj );
    return metaObj;
}

void* QVBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QVBox" ) )
	return this;
    return QHBox::qt_cast( clname );
}

bool QVBox::qt_invoke( int _id, QUObject* _o )
{
    return QHBox::qt_invoke(_id,_o);
}

bool QVBox::qt_emit( int _id, QUObject* _o )
{
    return QHBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QVBox::qt_property( int id, int f, QVariant* v)
{
    return QHBox::qt_property( id, f, v);
}

bool QVBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
