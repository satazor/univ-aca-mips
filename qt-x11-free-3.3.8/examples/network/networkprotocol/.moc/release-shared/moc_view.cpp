/****************************************************************************
** View meta object code from reading C++ file 'view.h'
**
** Created: Wed Oct 9 11:09:17 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../view.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *View::className() const
{
    return "View";
}

QMetaObject *View::metaObj = 0;
static QMetaObjectCleanUp cleanUp_View( "View", &View::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString View::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "View", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString View::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "View", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* View::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    static const QUMethod slot_0 = {"downloadFile", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "ba", &static_QUType_varptr, "\x1d", QUParameter::In }
    };
    static const QUMethod slot_1 = {"newData", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "downloadFile()", &slot_0, QMetaData::Private },
	{ "newData(const QByteArray&)", &slot_1, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"View", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_View.setMetaObject( metaObj );
    return metaObj;
}

void* View::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "View" ) )
	return this;
    return QVBox::qt_cast( clname );
}

bool View::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: downloadFile(); break;
    case 1: newData((const QByteArray&)*((const QByteArray*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QVBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool View::qt_emit( int _id, QUObject* _o )
{
    return QVBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool View::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool View::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
