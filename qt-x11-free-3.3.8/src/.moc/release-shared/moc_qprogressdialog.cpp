/****************************************************************************
** QProgressDialog meta object code from reading C++ file 'qprogressdialog.h'
**
** Created: Wed Oct 9 10:53:03 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dialogs/qprogressdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QProgressDialog::className() const
{
    return "QProgressDialog";
}

QMetaObject *QProgressDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QProgressDialog( "QProgressDialog", &QProgressDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QProgressDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QProgressDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QProgressDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QProgressDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QProgressDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"cancel", 0, 0 };
    static const QUMethod slot_1 = {"reset", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "totalSteps", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setTotalSteps", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "progress", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setProgress", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "progress", &static_QUType_int, 0, QUParameter::In },
	{ "totalSteps", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setProgress", 2, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setLabelText", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setCancelButtonText", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "ms", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"setMinimumDuration", 1, param_slot_7 };
    static const QUMethod slot_8 = {"forceShow", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "cancel()", &slot_0, QMetaData::Public },
	{ "reset()", &slot_1, QMetaData::Public },
	{ "setTotalSteps(int)", &slot_2, QMetaData::Public },
	{ "setProgress(int)", &slot_3, QMetaData::Public },
	{ "setProgress(int,int)", &slot_4, QMetaData::Public },
	{ "setLabelText(const QString&)", &slot_5, QMetaData::Public },
	{ "setCancelButtonText(const QString&)", &slot_6, QMetaData::Public },
	{ "setMinimumDuration(int)", &slot_7, QMetaData::Public },
	{ "forceShow()", &slot_8, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"cancelled", 0, 0 };
    static const QUMethod signal_1 = {"canceled", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "cancelled()", &signal_0, QMetaData::Public },
	{ "canceled()", &signal_1, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[8] = {
 	{ "bool","wasCancelled", 0x12011001, &QProgressDialog::metaObj, 0, -1 },
	{ "bool","wasCanceled", 0x12000001, &QProgressDialog::metaObj, 0, -1 },
	{ "int","totalSteps", 0x10000103, &QProgressDialog::metaObj, 0, -1 },
	{ "int","progress", 0x10000103, &QProgressDialog::metaObj, 0, -1 },
	{ "bool","autoReset", 0x12000103, &QProgressDialog::metaObj, 0, -1 },
	{ "bool","autoClose", 0x12000103, &QProgressDialog::metaObj, 0, -1 },
	{ "int","minimumDuration", 0x10000103, &QProgressDialog::metaObj, 0, -1 },
	{ "QString","labelText", 0x3000103, &QProgressDialog::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QProgressDialog", parentObject,
	slot_tbl, 9,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	props_tbl, 8,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QProgressDialog.setMetaObject( metaObj );
    return metaObj;
}

void* QProgressDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QProgressDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL cancelled
void QProgressDialog::cancelled()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL canceled
void QProgressDialog::canceled()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool QProgressDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: cancel(); break;
    case 1: reset(); break;
    case 2: setTotalSteps((int)static_QUType_int.get(_o+1)); break;
    case 3: setProgress((int)static_QUType_int.get(_o+1)); break;
    case 4: setProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 5: setLabelText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: setCancelButtonText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: setMinimumDuration((int)static_QUType_int.get(_o+1)); break;
    case 8: forceShow(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QProgressDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: cancelled(); break;
    case 1: canceled(); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QProgressDialog::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->wasCancelled(), 0 ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->wasCanceled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setTotalSteps(v->asInt()); break;
	case 1: *v = QVariant( this->totalSteps() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setProgress(v->asInt()); break;
	case 1: *v = QVariant( this->progress() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setAutoReset(v->asBool()); break;
	case 1: *v = QVariant( this->autoReset(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setAutoClose(v->asBool()); break;
	case 1: *v = QVariant( this->autoClose(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setMinimumDuration(v->asInt()); break;
	case 1: *v = QVariant( this->minimumDuration() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setLabelText(v->asString()); break;
	case 1: *v = QVariant( this->labelText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QDialog::qt_property( id, f, v );
    }
    return TRUE;
}

bool QProgressDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
