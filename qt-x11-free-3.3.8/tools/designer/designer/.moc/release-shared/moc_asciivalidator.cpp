/****************************************************************************
** AsciiValidator meta object code from reading C++ file 'asciivalidator.h'
**
** Created: Wed Oct 9 11:04:51 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../asciivalidator.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *AsciiValidator::className() const
{
    return "AsciiValidator";
}

QMetaObject *AsciiValidator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_AsciiValidator( "AsciiValidator", &AsciiValidator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString AsciiValidator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AsciiValidator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString AsciiValidator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "AsciiValidator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* AsciiValidator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QValidator::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"AsciiValidator", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_AsciiValidator.setMetaObject( metaObj );
    return metaObj;
}

void* AsciiValidator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "AsciiValidator" ) )
	return this;
    return QValidator::qt_cast( clname );
}

bool AsciiValidator::qt_invoke( int _id, QUObject* _o )
{
    return QValidator::qt_invoke(_id,_o);
}

bool AsciiValidator::qt_emit( int _id, QUObject* _o )
{
    return QValidator::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool AsciiValidator::qt_property( int id, int f, QVariant* v)
{
    return QValidator::qt_property( id, f, v);
}

bool AsciiValidator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
