/****************************************************************************
** OrderIndicator meta object code from reading C++ file 'orderindicator.h'
**
** Created: Wed Oct 9 11:04:46 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../orderindicator.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *OrderIndicator::className() const
{
    return "OrderIndicator";
}

QMetaObject *OrderIndicator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_OrderIndicator( "OrderIndicator", &OrderIndicator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString OrderIndicator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OrderIndicator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString OrderIndicator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OrderIndicator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* OrderIndicator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"OrderIndicator", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_OrderIndicator.setMetaObject( metaObj );
    return metaObj;
}

void* OrderIndicator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "OrderIndicator" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool OrderIndicator::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool OrderIndicator::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool OrderIndicator::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool OrderIndicator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
