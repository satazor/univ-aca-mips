/****************************************************************************
** SetDataForm meta object code from reading C++ file 'setdataform.h'
**
** Created: Wed Oct 9 11:08:54 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../setdataform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SetDataForm::className() const
{
    return "SetDataForm";
}

QMetaObject *SetDataForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SetDataForm( "SetDataForm", &SetDataForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SetDataForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SetDataForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SetDataForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SetDataForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SetDataForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"setColor", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setColor", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"currentChanged", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"valueChanged", 2, param_slot_3 };
    static const QUMethod slot_4 = {"accept", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setColor()", &slot_0, QMetaData::Public },
	{ "setColor(int,int)", &slot_1, QMetaData::Public },
	{ "currentChanged(int,int)", &slot_2, QMetaData::Public },
	{ "valueChanged(int,int)", &slot_3, QMetaData::Public },
	{ "accept()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"SetDataForm", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SetDataForm.setMetaObject( metaObj );
    return metaObj;
}

void* SetDataForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SetDataForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool SetDataForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setColor(); break;
    case 1: setColor((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 2: currentChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 3: valueChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 4: accept(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SetDataForm::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SetDataForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool SetDataForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
