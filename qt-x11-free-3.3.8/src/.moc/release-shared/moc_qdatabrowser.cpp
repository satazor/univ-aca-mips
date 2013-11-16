/****************************************************************************
** QDataBrowser meta object code from reading C++ file 'qdatabrowser.h'
**
** Created: Wed Oct 9 10:53:12 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sql/qdatabrowser.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QDataBrowser::className() const
{
    return "QDataBrowser";
}

QMetaObject *QDataBrowser::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDataBrowser( "QDataBrowser", &QDataBrowser::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDataBrowser::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDataBrowser", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDataBrowser::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDataBrowser", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDataBrowser::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"refresh", 0, 0 };
    static const QUMethod slot_1 = {"insert", 0, 0 };
    static const QUMethod slot_2 = {"update", 0, 0 };
    static const QUMethod slot_3 = {"del", 0, 0 };
    static const QUMethod slot_4 = {"first", 0, 0 };
    static const QUMethod slot_5 = {"last", 0, 0 };
    static const QUMethod slot_6 = {"next", 0, 0 };
    static const QUMethod slot_7 = {"prev", 0, 0 };
    static const QUMethod slot_8 = {"readFields", 0, 0 };
    static const QUMethod slot_9 = {"writeFields", 0, 0 };
    static const QUMethod slot_10 = {"clearValues", 0, 0 };
    static const QUMethod slot_11 = {"updateBoundary", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "refresh()", &slot_0, QMetaData::Public },
	{ "insert()", &slot_1, QMetaData::Public },
	{ "update()", &slot_2, QMetaData::Public },
	{ "del()", &slot_3, QMetaData::Public },
	{ "first()", &slot_4, QMetaData::Public },
	{ "last()", &slot_5, QMetaData::Public },
	{ "next()", &slot_6, QMetaData::Public },
	{ "prev()", &slot_7, QMetaData::Public },
	{ "readFields()", &slot_8, QMetaData::Public },
	{ "writeFields()", &slot_9, QMetaData::Public },
	{ "clearValues()", &slot_10, QMetaData::Public },
	{ "updateBoundary()", &slot_11, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "available", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"firstRecordAvailable", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "available", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"lastRecordAvailable", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "available", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"nextRecordAvailable", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "available", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"prevRecordAvailable", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "record", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_4 = {"currentChanged", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_5 = {"primeInsert", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_6 = {"primeUpdate", 1, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_7 = {"primeDelete", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_8 = {"beforeInsert", 1, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_9 = {"beforeUpdate", 1, param_signal_9 };
    static const QUParameter param_signal_10[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_10 = {"beforeDelete", 1, param_signal_10 };
    static const QUParameter param_signal_11[] = {
	{ "mode", &static_QUType_ptr, "QSqlCursor::Mode", QUParameter::In }
    };
    static const QUMethod signal_11 = {"cursorChanged", 1, param_signal_11 };
    static const QMetaData signal_tbl[] = {
	{ "firstRecordAvailable(bool)", &signal_0, QMetaData::Public },
	{ "lastRecordAvailable(bool)", &signal_1, QMetaData::Public },
	{ "nextRecordAvailable(bool)", &signal_2, QMetaData::Public },
	{ "prevRecordAvailable(bool)", &signal_3, QMetaData::Public },
	{ "currentChanged(const QSqlRecord*)", &signal_4, QMetaData::Public },
	{ "primeInsert(QSqlRecord*)", &signal_5, QMetaData::Public },
	{ "primeUpdate(QSqlRecord*)", &signal_6, QMetaData::Public },
	{ "primeDelete(QSqlRecord*)", &signal_7, QMetaData::Public },
	{ "beforeInsert(QSqlRecord*)", &signal_8, QMetaData::Public },
	{ "beforeUpdate(QSqlRecord*)", &signal_9, QMetaData::Public },
	{ "beforeDelete(QSqlRecord*)", &signal_10, QMetaData::Public },
	{ "cursorChanged(QSqlCursor::Mode)", &signal_11, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[10] = {
 	{ "bool","boundaryChecking", 0x12000103, &QDataBrowser::metaObj, 0, -1 },
	{ "QString","filter", 0x3000103, &QDataBrowser::metaObj, 0, -1 },
	{ "QStringList","sort", 0x4000103, &QDataBrowser::metaObj, 0, -1 },
	{ "bool","confirmEdits", 0x12000103, &QDataBrowser::metaObj, 0, -1 },
	{ "bool","confirmInsert", 0x12000103, &QDataBrowser::metaObj, 0, -1 },
	{ "bool","confirmUpdate", 0x12000103, &QDataBrowser::metaObj, 0, -1 },
	{ "bool","confirmDelete", 0x12000103, &QDataBrowser::metaObj, 0, -1 },
	{ "bool","confirmCancels", 0x12000103, &QDataBrowser::metaObj, 0, -1 },
	{ "bool","readOnly", 0x12000103, &QDataBrowser::metaObj, 0, -1 },
	{ "bool","autoEdit", 0x12000103, &QDataBrowser::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDataBrowser", parentObject,
	slot_tbl, 12,
	signal_tbl, 12,
#ifndef QT_NO_PROPERTIES
	props_tbl, 10,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDataBrowser.setMetaObject( metaObj );
    return metaObj;
}

void* QDataBrowser::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDataBrowser" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL firstRecordAvailable
void QDataBrowser::firstRecordAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL lastRecordAvailable
void QDataBrowser::lastRecordAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL nextRecordAvailable
void QDataBrowser::nextRecordAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL prevRecordAvailable
void QDataBrowser::prevRecordAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 3, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL currentChanged
void QDataBrowser::currentChanged( const QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL primeInsert
void QDataBrowser::primeInsert( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL primeUpdate
void QDataBrowser::primeUpdate( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL primeDelete
void QDataBrowser::primeDelete( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL beforeInsert
void QDataBrowser::beforeInsert( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL beforeUpdate
void QDataBrowser::beforeUpdate( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 9 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL beforeDelete
void QDataBrowser::beforeDelete( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 10 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL cursorChanged
void QDataBrowser::cursorChanged( QSqlCursor::Mode t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 11 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool QDataBrowser::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: refresh(); break;
    case 1: insert(); break;
    case 2: update(); break;
    case 3: del(); break;
    case 4: first(); break;
    case 5: last(); break;
    case 6: next(); break;
    case 7: prev(); break;
    case 8: readFields(); break;
    case 9: writeFields(); break;
    case 10: clearValues(); break;
    case 11: updateBoundary(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDataBrowser::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: firstRecordAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 1: lastRecordAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 2: nextRecordAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 3: prevRecordAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 4: currentChanged((const QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 5: primeInsert((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 6: primeUpdate((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 7: primeDelete((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 8: beforeInsert((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 9: beforeUpdate((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 10: beforeDelete((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 11: cursorChanged((QSqlCursor::Mode)(*((QSqlCursor::Mode*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDataBrowser::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setBoundaryChecking(v->asBool()); break;
	case 1: *v = QVariant( this->boundaryChecking(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setFilter(v->asString()); break;
	case 1: *v = QVariant( this->filter() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setSort(v->asStringList()); break;
	case 1: *v = QVariant( this->sort() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setConfirmEdits(v->asBool()); break;
	case 1: *v = QVariant( this->confirmEdits(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setConfirmInsert(v->asBool()); break;
	case 1: *v = QVariant( this->confirmInsert(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setConfirmUpdate(v->asBool()); break;
	case 1: *v = QVariant( this->confirmUpdate(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setConfirmDelete(v->asBool()); break;
	case 1: *v = QVariant( this->confirmDelete(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setConfirmCancels(v->asBool()); break;
	case 1: *v = QVariant( this->confirmCancels(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setReadOnly(v->asBool()); break;
	case 1: *v = QVariant( this->isReadOnly(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setAutoEdit(v->asBool()); break;
	case 1: *v = QVariant( this->autoEdit(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDataBrowser::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
