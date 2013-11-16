/****************************************************************************
** QRadioButton meta object code from reading C++ file 'qradiobutton.h'
**
** Created: Wed Oct 9 10:52:49 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qradiobutton.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QRadioButton::className() const
{
    return "QRadioButton";
}

QMetaObject *QRadioButton::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QRadioButton( "QRadioButton", &QRadioButton::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QRadioButton::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QRadioButton", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QRadioButton::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QRadioButton", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QRadioButton::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QButton::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "check", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setChecked", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "setChecked(bool)", &slot_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "bool","checked", 0x12000103, &QRadioButton::metaObj, 0, -1 },
	{ "bool","autoMask", 0x12020200, &QRadioButton::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QRadioButton", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QRadioButton.setMetaObject( metaObj );
    return metaObj;
}

void* QRadioButton::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QRadioButton" ) )
	return this;
    return QButton::qt_cast( clname );
}

bool QRadioButton::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setChecked((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QButton::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QRadioButton::qt_emit( int _id, QUObject* _o )
{
    return QButton::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QRadioButton::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setChecked(v->asBool()); break;
	case 1: *v = QVariant( this->isChecked(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    default:
	return QButton::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QButton::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QRadioButton::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
