/****************************************************************************
** QHBox meta object code from reading C++ file 'qhbox.h'
**
** Created: Wed Oct 9 10:52:44 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qhbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QHBox::className() const
{
    return "QHBox";
}

QMetaObject *QHBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QHBox( "QHBox", &QHBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QHBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QHBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QHBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QHBox", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QHBox.setMetaObject( metaObj );
    return metaObj;
}

void* QHBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QHBox" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool QHBox::qt_invoke( int _id, QUObject* _o )
{
    return QFrame::qt_invoke(_id,_o);
}

bool QHBox::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QHBox::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool QHBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
