/****************************************************************************
** Biff meta object code from reading C++ file 'biff.h'
**
** Created: Wed Oct 9 11:10:00 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../biff.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Biff::className() const
{
    return "Biff";
}

QMetaObject *Biff::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Biff( "Biff", &Biff::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Biff::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Biff", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Biff::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Biff", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Biff::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Biff", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Biff.setMetaObject( metaObj );
    return metaObj;
}

void* Biff::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Biff" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Biff::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool Biff::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Biff::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Biff::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
