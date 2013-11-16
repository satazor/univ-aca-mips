/****************************************************************************
** QComboBox meta object code from reading C++ file 'qcombobox.h'
**
** Created: Wed Oct 9 10:52:39 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qcombobox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QComboBox::className() const
{
    return "QComboBox";
}

QMetaObject *QComboBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QComboBox( "QComboBox", &QComboBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QComboBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QComboBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QComboBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QComboBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QComboBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "NoInsertion",  (int) QComboBox::NoInsertion },
	{ "AtTop",  (int) QComboBox::AtTop },
	{ "AtCurrent",  (int) QComboBox::AtCurrent },
	{ "AtBottom",  (int) QComboBox::AtBottom },
	{ "AfterCurrent",  (int) QComboBox::AfterCurrent },
	{ "BeforeCurrent",  (int) QComboBox::BeforeCurrent }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Policy", 6, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUMethod slot_0 = {"clear", 0, 0 };
    static const QUMethod slot_1 = {"clearValidator", 0, 0 };
    static const QUMethod slot_2 = {"clearEdit", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setEditText", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"internalActivate", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"internalHighlight", 1, param_slot_5 };
    static const QUMethod slot_6 = {"internalClickTimeout", 0, 0 };
    static const QUMethod slot_7 = {"returnPressed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "clear()", &slot_0, QMetaData::Public },
	{ "clearValidator()", &slot_1, QMetaData::Public },
	{ "clearEdit()", &slot_2, QMetaData::Public },
	{ "setEditText(const QString&)", &slot_3, QMetaData::Public },
	{ "internalActivate(int)", &slot_4, QMetaData::Private },
	{ "internalHighlight(int)", &slot_5, QMetaData::Private },
	{ "internalClickTimeout()", &slot_6, QMetaData::Private },
	{ "returnPressed()", &slot_7, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"activated", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"highlighted", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"activated", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"highlighted", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"textChanged", 1, param_signal_4 };
    static const QMetaData signal_tbl[] = {
	{ "activated(int)", &signal_0, QMetaData::Public },
	{ "highlighted(int)", &signal_1, QMetaData::Public },
	{ "activated(const QString&)", &signal_2, QMetaData::Public },
	{ "highlighted(const QString&)", &signal_3, QMetaData::Public },
	{ "textChanged(const QString&)", &signal_4, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[11] = {
 	{ "bool","editable", 0x12000103, &QComboBox::metaObj, 0, -1 },
	{ "int","count", 0x10000001, &QComboBox::metaObj, 0, -1 },
	{ "QString","currentText", 0x3001103, &QComboBox::metaObj, 0, -1 },
	{ "int","currentItem", 0x10000103, &QComboBox::metaObj, 0, -1 },
	{ "bool","autoResize", 0x12001103, &QComboBox::metaObj, 0, -1 },
	{ "int","sizeLimit", 0x10000103, &QComboBox::metaObj, 0, -1 },
	{ "int","maxCount", 0x10000103, &QComboBox::metaObj, 0, -1 },
	{ "Policy","insertionPolicy", 0x0107, &QComboBox::metaObj, &enum_tbl[0], -1 },
	{ "bool","autoCompletion", 0x12000103, &QComboBox::metaObj, 0, -1 },
	{ "bool","duplicatesEnabled", 0x12000103, &QComboBox::metaObj, 0, -1 },
	{ "bool","autoMask", 0x12020200, &QComboBox::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QComboBox", parentObject,
	slot_tbl, 8,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	props_tbl, 11,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QComboBox.setMetaObject( metaObj );
    return metaObj;
}

void* QComboBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QComboBox" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL activated
void QComboBox::activated( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL highlighted
void QComboBox::highlighted( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL activated
void QComboBox::activated( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL highlighted
void QComboBox::highlighted( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL textChanged
void QComboBox::textChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 4, t0 );
}

bool QComboBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: clear(); break;
    case 1: clearValidator(); break;
    case 2: clearEdit(); break;
    case 3: setEditText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: internalActivate((int)static_QUType_int.get(_o+1)); break;
    case 5: internalHighlight((int)static_QUType_int.get(_o+1)); break;
    case 6: internalClickTimeout(); break;
    case 7: returnPressed(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QComboBox::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: activated((int)static_QUType_int.get(_o+1)); break;
    case 1: highlighted((int)static_QUType_int.get(_o+1)); break;
    case 2: activated((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: highlighted((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: textChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QComboBox::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setEditable(v->asBool()); break;
	case 1: *v = QVariant( this->editable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->count() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setCurrentText(v->asString()); break;
	case 1: *v = QVariant( this->currentText() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setCurrentItem(v->asInt()); break;
	case 1: *v = QVariant( this->currentItem() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setAutoResize(v->asBool()); break;
	case 1: *v = QVariant( this->autoResize(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setSizeLimit(v->asInt()); break;
	case 1: *v = QVariant( this->sizeLimit() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setMaxCount(v->asInt()); break;
	case 1: *v = QVariant( this->maxCount() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setInsertionPolicy((Policy&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->insertionPolicy() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setAutoCompletion(v->asBool()); break;
	case 1: *v = QVariant( this->autoCompletion(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setDuplicatesEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->duplicatesEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	case 3: case 4: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QWidget::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QComboBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
