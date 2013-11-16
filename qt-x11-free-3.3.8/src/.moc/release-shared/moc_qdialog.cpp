/****************************************************************************
** QDialog meta object code from reading C++ file 'qdialog.h'
**
** Created: Wed Oct 9 10:53:00 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dialogs/qdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QDialog::className() const
{
    return "QDialog";
}

QMetaObject *QDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDialog( "QDialog", &QDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::Out }
    };
    static const QUMethod slot_0 = {"exec", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"done", 1, param_slot_1 };
    static const QUMethod slot_2 = {"accept", 0, 0 };
    static const QUMethod slot_3 = {"reject", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"showExtension", 1, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "exec()", &slot_0, QMetaData::Public },
	{ "done(int)", &slot_1, QMetaData::Protected },
	{ "accept()", &slot_2, QMetaData::Protected },
	{ "reject()", &slot_3, QMetaData::Protected },
	{ "showExtension(bool)", &slot_4, QMetaData::Protected }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "bool","sizeGripEnabled", 0x12000103, &QDialog::metaObj, 0, -1 },
	{ "bool","modal", 0x12000103, &QDialog::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDialog", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDialog.setMetaObject( metaObj );
    return metaObj;
}

void* QDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDialog" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: static_QUType_int.set(_o,exec()); break;
    case 1: done((int)static_QUType_int.get(_o+1)); break;
    case 2: accept(); break;
    case 3: reject(); break;
    case 4: showExtension((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDialog::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDialog::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setSizeGripEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isSizeGripEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setModal(v->asBool()); break;
	case 1: *v = QVariant( this->isModal(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
