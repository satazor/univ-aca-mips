/****************************************************************************
** QHButtonGroup meta object code from reading C++ file 'qhbuttongroup.h'
**
** Created: Wed Oct 9 10:52:42 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qhbuttongroup.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QHButtonGroup::className() const
{
    return "QHButtonGroup";
}

QMetaObject *QHButtonGroup::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QHButtonGroup( "QHButtonGroup", &QHButtonGroup::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QHButtonGroup::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHButtonGroup", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QHButtonGroup::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHButtonGroup", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QHButtonGroup::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QButtonGroup::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QHButtonGroup", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QHButtonGroup.setMetaObject( metaObj );
    return metaObj;
}

void* QHButtonGroup::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QHButtonGroup" ) )
	return this;
    return QButtonGroup::qt_cast( clname );
}

bool QHButtonGroup::qt_invoke( int _id, QUObject* _o )
{
    return QButtonGroup::qt_invoke(_id,_o);
}

bool QHButtonGroup::qt_emit( int _id, QUObject* _o )
{
    return QButtonGroup::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QHButtonGroup::qt_property( int id, int f, QVariant* v)
{
    return QButtonGroup::qt_property( id, f, v);
}

bool QHButtonGroup::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
