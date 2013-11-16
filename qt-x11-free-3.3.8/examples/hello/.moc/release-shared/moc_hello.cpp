/****************************************************************************
** Hello meta object code from reading C++ file 'hello.h'
**
** Created: Wed Oct 9 11:07:46 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../hello.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Hello::className() const
{
    return "Hello";
}

QMetaObject *Hello::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Hello( "Hello", &Hello::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Hello::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Hello", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Hello::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Hello", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Hello::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"animate", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "animate()", &slot_0, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"clicked", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "clicked()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Hello", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Hello.setMetaObject( metaObj );
    return metaObj;
}

void* Hello::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Hello" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL clicked
void Hello::clicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool Hello::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: animate(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Hello::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: clicked(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool Hello::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Hello::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
