/****************************************************************************
** CheckLists meta object code from reading C++ file 'checklists.h'
**
** Created: Wed Oct 9 11:07:11 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../checklists.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CheckLists::className() const
{
    return "CheckLists";
}

QMetaObject *CheckLists::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CheckLists( "CheckLists", &CheckLists::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CheckLists::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CheckLists", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CheckLists::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CheckLists", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CheckLists::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"copy1to2", 0, 0 };
    static const QUMethod slot_1 = {"copy2to3", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "copy1to2()", &slot_0, QMetaData::Protected },
	{ "copy2to3()", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CheckLists", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CheckLists.setMetaObject( metaObj );
    return metaObj;
}

void* CheckLists::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CheckLists" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool CheckLists::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: copy1to2(); break;
    case 1: copy2to3(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CheckLists::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CheckLists::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool CheckLists::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
