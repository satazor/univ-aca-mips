/****************************************************************************
** QDataTable meta object code from reading C++ file 'qdatatable.h'
**
** Created: Wed Oct 9 10:53:11 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../sql/qdatatable.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QDataTable::className() const
{
    return "QDataTable";
}

QMetaObject *QDataTable::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDataTable( "QDataTable", &QDataTable::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDataTable::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDataTable", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDataTable::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDataTable", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDataTable::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTable::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In },
	{ "caseSensitive", &static_QUType_bool, 0, QUParameter::In },
	{ "backwards", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"find", 3, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"sortAscending", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"sortDescending", 1, param_slot_2 };
    static const QUMethod slot_3 = {"refresh", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "w", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setColumnWidth", 2, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"adjustColumn", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "col", &static_QUType_int, 0, QUParameter::In },
	{ "stretch", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setColumnStretchable", 2, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "col1", &static_QUType_int, 0, QUParameter::In },
	{ "col2", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"swapColumns", 2, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "col1", &static_QUType_int, 0, QUParameter::In },
	{ "col2", &static_QUType_int, 0, QUParameter::In },
	{ "swapHeaders", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"swapColumns", 3, param_slot_8 };
    static const QUMethod slot_9 = {"loadNextPage", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ "row", &static_QUType_int, 0, QUParameter::In },
	{ "col", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"setCurrentSelection", 2, param_slot_10 };
    static const QUMethod slot_11 = {"updateCurrentSelection", 0, 0 };
    static const QUMethod slot_12 = {"sliderPressed", 0, 0 };
    static const QUMethod slot_13 = {"sliderReleased", 0, 0 };
    static const QUMethod slot_14 = {"doInsertCurrent", 0, 0 };
    static const QUMethod slot_15 = {"doUpdateCurrent", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "find(const QString&,bool,bool)", &slot_0, QMetaData::Public },
	{ "sortAscending(int)", &slot_1, QMetaData::Public },
	{ "sortDescending(int)", &slot_2, QMetaData::Public },
	{ "refresh()", &slot_3, QMetaData::Public },
	{ "setColumnWidth(int,int)", &slot_4, QMetaData::Public },
	{ "adjustColumn(int)", &slot_5, QMetaData::Public },
	{ "setColumnStretchable(int,bool)", &slot_6, QMetaData::Public },
	{ "swapColumns(int,int)", &slot_7, QMetaData::Public },
	{ "swapColumns(int,int,bool)", &slot_8, QMetaData::Public },
	{ "loadNextPage()", &slot_9, QMetaData::Private },
	{ "setCurrentSelection(int,int)", &slot_10, QMetaData::Private },
	{ "updateCurrentSelection()", &slot_11, QMetaData::Private },
	{ "sliderPressed()", &slot_12, QMetaData::Private },
	{ "sliderReleased()", &slot_13, QMetaData::Private },
	{ "doInsertCurrent()", &slot_14, QMetaData::Private },
	{ "doUpdateCurrent()", &slot_15, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "record", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_0 = {"currentChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_1 = {"primeInsert", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_2 = {"primeUpdate", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_3 = {"primeDelete", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_4 = {"beforeInsert", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_5 = {"beforeUpdate", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ "buf", &static_QUType_ptr, "QSqlRecord", QUParameter::In }
    };
    static const QUMethod signal_6 = {"beforeDelete", 1, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "mode", &static_QUType_ptr, "QSql::Op", QUParameter::In }
    };
    static const QUMethod signal_7 = {"cursorChanged", 1, param_signal_7 };
    static const QMetaData signal_tbl[] = {
	{ "currentChanged(QSqlRecord*)", &signal_0, QMetaData::Public },
	{ "primeInsert(QSqlRecord*)", &signal_1, QMetaData::Public },
	{ "primeUpdate(QSqlRecord*)", &signal_2, QMetaData::Public },
	{ "primeDelete(QSqlRecord*)", &signal_3, QMetaData::Public },
	{ "beforeInsert(QSqlRecord*)", &signal_4, QMetaData::Public },
	{ "beforeUpdate(QSqlRecord*)", &signal_5, QMetaData::Public },
	{ "beforeDelete(QSqlRecord*)", &signal_6, QMetaData::Public },
	{ "cursorChanged(QSql::Op)", &signal_7, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[14] = {
 	{ "QString","nullText", 0x3000103, &QDataTable::metaObj, 0, -1 },
	{ "QString","trueText", 0x3000103, &QDataTable::metaObj, 0, -1 },
	{ "QString","falseText", 0x3000103, &QDataTable::metaObj, 0, -1 },
	{ "DateFormat","dateFormat", 0x010f, &QDataTable::metaObj, 0, -1 },
	{ "bool","confirmEdits", 0x12000103, &QDataTable::metaObj, 0, -1 },
	{ "bool","confirmInsert", 0x12000103, &QDataTable::metaObj, 0, -1 },
	{ "bool","confirmUpdate", 0x12000103, &QDataTable::metaObj, 0, -1 },
	{ "bool","confirmDelete", 0x12000103, &QDataTable::metaObj, 0, -1 },
	{ "bool","confirmCancels", 0x12000103, &QDataTable::metaObj, 0, -1 },
	{ "bool","autoEdit", 0x12000103, &QDataTable::metaObj, 0, -1 },
	{ "QString","filter", 0x3000103, &QDataTable::metaObj, 0, -1 },
	{ "QStringList","sort", 0x4000103, &QDataTable::metaObj, 0, -1 },
	{ "int","numCols", 0x10000001, &QDataTable::metaObj, 0, -1 },
	{ "int","numRows", 0x10000001, &QDataTable::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QDataTable", parentObject,
	slot_tbl, 16,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	props_tbl, 14,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDataTable.setMetaObject( metaObj );
    return metaObj;
}

void* QDataTable::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDataTable" ) )
	return this;
    return QTable::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL currentChanged
void QDataTable::currentChanged( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL primeInsert
void QDataTable::primeInsert( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL primeUpdate
void QDataTable::primeUpdate( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL primeDelete
void QDataTable::primeDelete( QSqlRecord* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL beforeInsert
void QDataTable::beforeInsert( QSqlRecord* t0 )
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

// SIGNAL beforeUpdate
void QDataTable::beforeUpdate( QSqlRecord* t0 )
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

// SIGNAL beforeDelete
void QDataTable::beforeDelete( QSqlRecord* t0 )
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

// SIGNAL cursorChanged
void QDataTable::cursorChanged( QSql::Op t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

bool QDataTable::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: find((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 1: sortAscending((int)static_QUType_int.get(_o+1)); break;
    case 2: sortDescending((int)static_QUType_int.get(_o+1)); break;
    case 3: refresh(); break;
    case 4: setColumnWidth((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 5: adjustColumn((int)static_QUType_int.get(_o+1)); break;
    case 6: setColumnStretchable((int)static_QUType_int.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 7: swapColumns((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 8: swapColumns((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 9: loadNextPage(); break;
    case 10: setCurrentSelection((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 11: updateCurrentSelection(); break;
    case 12: sliderPressed(); break;
    case 13: sliderReleased(); break;
    case 14: doInsertCurrent(); break;
    case 15: doUpdateCurrent(); break;
    default:
	return QTable::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDataTable::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentChanged((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 1: primeInsert((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 2: primeUpdate((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 3: primeDelete((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 4: beforeInsert((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 5: beforeUpdate((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 6: beforeDelete((QSqlRecord*)static_QUType_ptr.get(_o+1)); break;
    case 7: cursorChanged((QSql::Op)(*((QSql::Op*)static_QUType_ptr.get(_o+1)))); break;
    default:
	return QTable::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDataTable::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setNullText(v->asString()); break;
	case 1: *v = QVariant( this->nullText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setTrueText(v->asString()); break;
	case 1: *v = QVariant( this->trueText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setFalseText(v->asString()); break;
	case 1: *v = QVariant( this->falseText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setDateFormat((DateFormat&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->dateFormat() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setConfirmEdits(v->asBool()); break;
	case 1: *v = QVariant( this->confirmEdits(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setConfirmInsert(v->asBool()); break;
	case 1: *v = QVariant( this->confirmInsert(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setConfirmUpdate(v->asBool()); break;
	case 1: *v = QVariant( this->confirmUpdate(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setConfirmDelete(v->asBool()); break;
	case 1: *v = QVariant( this->confirmDelete(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setConfirmCancels(v->asBool()); break;
	case 1: *v = QVariant( this->confirmCancels(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setAutoEdit(v->asBool()); break;
	case 1: *v = QVariant( this->autoEdit(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 0: setFilter(v->asString()); break;
	case 1: *v = QVariant( this->filter() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 11: switch( f ) {
	case 0: setSort(v->asStringList()); break;
	case 1: *v = QVariant( this->sort() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 12: switch( f ) {
	case 1: *v = QVariant( this->numCols() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 13: switch( f ) {
	case 1: *v = QVariant( this->numRows() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QTable::qt_property( id, f, v );
    }
    return TRUE;
}

bool QDataTable::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
