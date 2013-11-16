/****************************************************************************
** QVGroupBox meta object code from reading C++ file 'qvgroupbox.h'
**
** Created: Wed Oct 9 10:52:56 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qvgroupbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QVGroupBox::className() const
{
    return "QVGroupBox";
}

QMetaObject *QVGroupBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QVGroupBox( "QVGroupBox", &QVGroupBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QVGroupBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QVGroupBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QVGroupBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QVGroupBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QVGroupBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QGroupBox::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QVGroupBox", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QVGroupBox.setMetaObject( metaObj );
    return metaObj;
}

void* QVGroupBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QVGroupBox" ) )
	return this;
    return QGroupBox::qt_cast( clname );
}

bool QVGroupBox::qt_invoke( int _id, QUObject* _o )
{
    return QGroupBox::qt_invoke(_id,_o);
}

bool QVGroupBox::qt_emit( int _id, QUObject* _o )
{
    return QGroupBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QVGroupBox::qt_property( int id, int f, QVariant* v)
{
    return QGroupBox::qt_property( id, f, v);
}

bool QVGroupBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
