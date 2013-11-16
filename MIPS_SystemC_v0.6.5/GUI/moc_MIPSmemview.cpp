/****************************************************************************
** MIPSmemview meta object code from reading C++ file 'MIPSmemview.h'
**
** Created: Sat Nov 16 19:45:42 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "MIPSmemview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MIPSmemview::className() const
{
    return "MIPSmemview";
}

QMetaObject *MIPSmemview::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MIPSmemview( "MIPSmemview", &MIPSmemview::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MIPSmemview::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSmemview", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MIPSmemview::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSmemview", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MIPSmemview::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListBox::staticMetaObject();
    static const QUMethod slot_0 = {"updateList", 0, 0 };
    static const QUMethod slot_1 = {"initList", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateList()", &slot_0, QMetaData::Public },
	{ "initList()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MIPSmemview", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MIPSmemview.setMetaObject( metaObj );
    return metaObj;
}

void* MIPSmemview::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MIPSmemview" ) )
	return this;
    return QListBox::qt_cast( clname );
}

bool MIPSmemview::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateList(); break;
    case 1: initList(); break;
    default:
	return QListBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MIPSmemview::qt_emit( int _id, QUObject* _o )
{
    return QListBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MIPSmemview::qt_property( int id, int f, QVariant* v)
{
    return QListBox::qt_property( id, f, v);
}

bool MIPSmemview::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
