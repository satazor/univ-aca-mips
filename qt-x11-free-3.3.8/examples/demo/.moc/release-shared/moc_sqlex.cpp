/****************************************************************************
** SqlEx meta object code from reading C++ file 'sqlex.h'
**
** Created: Wed Oct 9 11:07:33 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sql/sqlex.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SqlEx::className() const
{
    return "SqlEx";
}

QMetaObject *SqlEx::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SqlEx( "SqlEx", &SqlEx::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SqlEx::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SqlEx", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SqlEx::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SqlEx", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SqlEx::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUMethod slot_1 = {"dbConnect", 0, 0 };
    static const QUMethod slot_2 = {"execQuery", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_3 = {"showTable", 1, param_slot_3 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "dbConnect()", &slot_1, QMetaData::Public },
	{ "execQuery()", &slot_2, QMetaData::Public },
	{ "showTable(QListViewItem*)", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"SqlEx", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SqlEx.setMetaObject( metaObj );
    return metaObj;
}

void* SqlEx::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SqlEx" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool SqlEx::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: init(); break;
    case 1: dbConnect(); break;
    case 2: execQuery(); break;
    case 3: showTable((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 4: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SqlEx::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SqlEx::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool SqlEx::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
