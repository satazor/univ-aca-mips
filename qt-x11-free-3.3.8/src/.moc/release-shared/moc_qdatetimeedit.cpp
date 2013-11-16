/****************************************************************************
** QDateTimeEditBase meta object code from reading C++ file 'qdatetimeedit.h'
**
** Created: Wed Oct 9 10:52:58 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qdatetimeedit.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDateTimeEditBase::className() const
{
    return "QDateTimeEditBase";
}

QMetaObject *QDateTimeEditBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDateTimeEditBase( "QDateTimeEditBase", &QDateTimeEditBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDateTimeEditBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDateTimeEditBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDateTimeEditBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDateTimeEditBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDateTimeEditBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"stepUp", 0, 0 };
    static const QUMethod slot_1 = {"stepDown", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "stepUp()", &slot_0, QMetaData::Public },
	{ "stepDown()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDateTimeEditBase", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDateTimeEditBase.setMetaObject( metaObj );
    return metaObj;
}

void* QDateTimeEditBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDateTimeEditBase" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QDateTimeEditBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: stepUp(); break;
    case 1: stepDown(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDateTimeEditBase::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QDateTimeEditBase::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QDateTimeEditBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


#include <qvariant.h>
const char *QDateEdit::className() const
{
    return "QDateEdit";
}

QMetaObject *QDateEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDateEdit( "QDateEdit", &QDateEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDateEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDateEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDateEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDateEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDateEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDateTimeEditBase::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "DMY",  (int) QDateEdit::DMY },
	{ "MDY",  (int) QDateEdit::MDY },
	{ "YMD",  (int) QDateEdit::YMD },
	{ "YDM",  (int) QDateEdit::YDM }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Order", 4, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "date", &static_QUType_varptr, "\x1a", QUParameter::In }
    };
    static const QUMethod slot_0 = {"setDate", 1, param_slot_0 };
    static const QUMethod slot_1 = {"updateButtons", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setDate(const QDate&)", &slot_0, QMetaData::Public },
	{ "updateButtons()", &slot_1, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "date", &static_QUType_varptr, "\x1a", QUParameter::In }
    };
    static const QUMethod signal_0 = {"valueChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "valueChanged(const QDate&)", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[5] = {
 	{ "Order","order", 0x0107, &QDateEdit::metaObj, &enum_tbl[0], -1 },
	{ "QDate","date", 0x1a000103, &QDateEdit::metaObj, 0, -1 },
	{ "bool","autoAdvance", 0x12000103, &QDateEdit::metaObj, 0, -1 },
	{ "QDate","maxValue", 0x1a000103, &QDateEdit::metaObj, 0, -1 },
	{ "QDate","minValue", 0x1a000103, &QDateEdit::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDateEdit", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 5,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDateEdit.setMetaObject( metaObj );
    return metaObj;
}

void* QDateEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDateEdit" ) )
	return this;
    return QDateTimeEditBase::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL valueChanged
void QDateEdit::valueChanged( const QDate& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool QDateEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setDate((const QDate&)*((const QDate*)static_QUType_ptr.get(_o+1))); break;
    case 1: updateButtons(); break;
    default:
	return QDateTimeEditBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDateEdit::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: valueChanged((const QDate&)*((const QDate*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QDateTimeEditBase::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDateEdit::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setOrder((Order&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->order() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setDate(v->asDate()); break;
	case 1: *v = QVariant( this->date() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setAutoAdvance(v->asBool()); break;
	case 1: *v = QVariant( this->autoAdvance(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setMaxValue(v->asDate()); break;
	case 1: *v = QVariant( this->maxValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setMinValue(v->asDate()); break;
	case 1: *v = QVariant( this->minValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QDateTimeEditBase::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDateEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QTimeEdit::className() const
{
    return "QTimeEdit";
}

QMetaObject *QTimeEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTimeEdit( "QTimeEdit", &QTimeEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTimeEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTimeEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTimeEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTimeEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTimeEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDateTimeEditBase::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Hours",  (int) QTimeEdit::Hours },
	{ "Minutes",  (int) QTimeEdit::Minutes },
	{ "Seconds",  (int) QTimeEdit::Seconds },
	{ "AMPM",  (int) QTimeEdit::AMPM }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Display", 4, enum_0, TRUE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "time", &static_QUType_varptr, "\x1b", QUParameter::In }
    };
    static const QUMethod slot_0 = {"setTime", 1, param_slot_0 };
    static const QUMethod slot_1 = {"updateButtons", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setTime(const QTime&)", &slot_0, QMetaData::Public },
	{ "updateButtons()", &slot_1, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "time", &static_QUType_varptr, "\x1b", QUParameter::In }
    };
    static const QUMethod signal_0 = {"valueChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "valueChanged(const QTime&)", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[5] = {
 	{ "QTime","time", 0x1b000103, &QTimeEdit::metaObj, 0, -1 },
	{ "bool","autoAdvance", 0x12000103, &QTimeEdit::metaObj, 0, -1 },
	{ "QTime","maxValue", 0x1b000103, &QTimeEdit::metaObj, 0, -1 },
	{ "QTime","minValue", 0x1b000103, &QTimeEdit::metaObj, 0, -1 },
	{ "Display","display", 0x0107, &QTimeEdit::metaObj, &enum_tbl[0], -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QTimeEdit", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 5,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTimeEdit.setMetaObject( metaObj );
    return metaObj;
}

void* QTimeEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTimeEdit" ) )
	return this;
    return QDateTimeEditBase::qt_cast( clname );
}

// SIGNAL valueChanged
void QTimeEdit::valueChanged( const QTime& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool QTimeEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setTime((const QTime&)*((const QTime*)static_QUType_ptr.get(_o+1))); break;
    case 1: updateButtons(); break;
    default:
	return QDateTimeEditBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTimeEdit::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: valueChanged((const QTime&)*((const QTime*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QDateTimeEditBase::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTimeEdit::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setTime(v->asTime()); break;
	case 1: *v = QVariant( this->time() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setAutoAdvance(v->asBool()); break;
	case 1: *v = QVariant( this->autoAdvance(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setMaxValue(v->asTime()); break;
	case 1: *v = QVariant( this->maxValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setMinValue(v->asTime()); break;
	case 1: *v = QVariant( this->minValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setDisplay(v->asUInt()); break;
	case 1: *v = QVariant( (int)this->display() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QDateTimeEditBase::qt_property( id, f, v );
    }
    return TRUE;
}

bool QTimeEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QDateTimeEdit::className() const
{
    return "QDateTimeEdit";
}

QMetaObject *QDateTimeEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDateTimeEdit( "QDateTimeEdit", &QDateTimeEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDateTimeEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDateTimeEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDateTimeEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDateTimeEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDateTimeEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "dt", &static_QUType_varptr, "\x1c", QUParameter::In }
    };
    static const QUMethod slot_0 = {"setDateTime", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "d", &static_QUType_varptr, "\x1a", QUParameter::In }
    };
    static const QUMethod slot_1 = {"newValue", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "t", &static_QUType_varptr, "\x1b", QUParameter::In }
    };
    static const QUMethod slot_2 = {"newValue", 1, param_slot_2 };
    static const QMetaData slot_tbl[] = {
	{ "setDateTime(const QDateTime&)", &slot_0, QMetaData::Public },
	{ "newValue(const QDate&)", &slot_1, QMetaData::Protected },
	{ "newValue(const QTime&)", &slot_2, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "datetime", &static_QUType_varptr, "\x1c", QUParameter::In }
    };
    static const QUMethod signal_0 = {"valueChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "valueChanged(const QDateTime&)", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "QDateTime","dateTime", 0x1c000103, &QDateTimeEdit::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDateTimeEdit", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDateTimeEdit.setMetaObject( metaObj );
    return metaObj;
}

void* QDateTimeEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDateTimeEdit" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL valueChanged
void QDateTimeEdit::valueChanged( const QDateTime& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool QDateTimeEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setDateTime((const QDateTime&)*((const QDateTime*)static_QUType_ptr.get(_o+1))); break;
    case 1: newValue((const QDate&)*((const QDate*)static_QUType_ptr.get(_o+1))); break;
    case 2: newValue((const QTime&)*((const QTime*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDateTimeEdit::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: valueChanged((const QDateTime&)*((const QDateTime*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDateTimeEdit::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setDateTime(v->asDateTime()); break;
	case 1: *v = QVariant( this->dateTime() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDateTimeEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
