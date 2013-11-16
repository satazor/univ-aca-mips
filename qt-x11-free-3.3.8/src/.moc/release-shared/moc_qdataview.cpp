/****************************************************************************
** QDataView meta object code from reading C++ file 'qdataview.h'
**
** Created: Wed Oct 9 10:53:12 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sql/qdataview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDataView::className() const
{
    return "QDataView";
}

QMetaObject *QDataView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDataView( "QDataView", &QDataView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDataView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDataView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDataView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDataView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDataView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod slot_0 = {"refresh", 1, param_slot_0 };
    static const QUMethod slot_1 = {"readFields", 0, 0 };
    static const QUMethod slot_2 = {"writeFields", 0, 0 };
    static const QUMethod slot_3 = {"clearValues", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "refresh(QSqlRecord*)", &slot_0, QMetaData::Public },
	{ "readFields()", &slot_1, QMetaData::Public },
	{ "writeFields()", &slot_2, QMetaData::Public },
	{ "clearValues()", &slot_3, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDataView", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDataView.setMetaObject( metaObj );
    return metaObj;
}

void* QDataView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDataView" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QDataView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: refresh((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 1: readFields(); break;
    case 2: writeFields(); break;
    case 3: clearValues(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDataView::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDataView::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QDataView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
