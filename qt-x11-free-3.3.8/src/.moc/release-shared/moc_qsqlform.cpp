/****************************************************************************
** QSqlForm meta object code from reading C++ file 'qsqlform.h'
**
** Created: Wed Oct 9 10:53:10 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sql/qsqlform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSqlForm::className() const
{
    return "QSqlForm";
}

QMetaObject *QSqlForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSqlForm( "QSqlForm", &QSqlForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSqlForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSqlForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSqlForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSqlForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSqlForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "widget", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_0 = {"readField", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "widget", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_1 = {"writeField", 1, param_slot_1 };
    static const QUMethod slot_2 = {"readFields", 0, 0 };
    static const QUMethod slot_3 = {"writeFields", 0, 0 };
    static const QUMethod slot_4 = {"clear", 0, 0 };
    static const QUMethod slot_5 = {"clearValues", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "nullify", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"clearValues", 1, param_slot_6 };
    static const QMetaData slot_tbl[] = {
	{ "readField(QWidget*)", &slot_0, QMetaData::Public },
	{ "writeField(QWidget*)", &slot_1, QMetaData::Public },
	{ "readFields()", &slot_2, QMetaData::Public },
	{ "writeFields()", &slot_3, QMetaData::Public },
	{ "clear()", &slot_4, QMetaData::Public },
	{ "clearValues()", &slot_5, QMetaData::Public },
	{ "clearValues(bool)", &slot_6, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QSqlForm", parentObject,
	slot_tbl, 7,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSqlForm.setMetaObject( metaObj );
    return metaObj;
}

void* QSqlForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSqlForm" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QSqlForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: readField((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 1: writeField((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 2: readFields(); break;
    case 3: writeFields(); break;
    case 4: clear(); break;
    case 5: clearValues(); break;
    case 6: clearValues((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QSqlForm::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QSqlForm::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QSqlForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
