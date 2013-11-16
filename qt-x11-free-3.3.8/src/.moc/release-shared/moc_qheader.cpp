/****************************************************************************
** QHeader meta object code from reading C++ file 'qheader.h'
**
** Created: Wed Oct 9 10:52:43 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qheader.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QHeader::className() const
{
    return "QHeader";
}

QMetaObject *QHeader::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QHeader( "QHeader", &QHeader::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QHeader::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHeader", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QHeader::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QHeader", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QHeader::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setUpdatesEnabled", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "pos", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setOffset", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "setUpdatesEnabled(bool)", &slot_0, QMetaData::Public },
	{ "setOffset(int)", &slot_1, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"clicked", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"pressed", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"released", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In },
	{ "oldSize", &static_QUType_int, 0, QUParameter::In },
	{ "newSize", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"sizeChange", 3, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In },
	{ "fromIndex", &static_QUType_int, 0, QUParameter::In },
	{ "toIndex", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"indexChange", 3, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"sectionClicked", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"moved", 2, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "section", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_7 = {"sectionHandleDoubleClicked", 1, param_signal_7 };
    static const QMetaData signal_tbl[] = {
	{ "clicked(int)", &signal_0, QMetaData::Public },
	{ "pressed(int)", &signal_1, QMetaData::Public },
	{ "released(int)", &signal_2, QMetaData::Public },
	{ "sizeChange(int,int,int)", &signal_3, QMetaData::Public },
	{ "indexChange(int,int,int)", &signal_4, QMetaData::Public },
	{ "sectionClicked(int)", &signal_5, QMetaData::Public },
	{ "moved(int,int)", &signal_6, QMetaData::Public },
	{ "sectionHandleDoubleClicked(int)", &signal_7, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[6] = {
 	{ "Orientation","orientation", 0x010f, &QHeader::metaObj, 0, -1 },
	{ "bool","tracking", 0x12000103, &QHeader::metaObj, 0, -1 },
	{ "int","count", 0x10000001, &QHeader::metaObj, 0, -1 },
	{ "int","offset", 0x10000103, &QHeader::metaObj, 0, -1 },
	{ "bool","moving", 0x12000003, &QHeader::metaObj, 0, -1 },
	{ "bool","stretching", 0x12000003, &QHeader::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QHeader", parentObject,
	slot_tbl, 2,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	props_tbl, 6,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QHeader.setMetaObject( metaObj );
    return metaObj;
}

void* QHeader::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QHeader" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL clicked
void QHeader::clicked( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL pressed
void QHeader::pressed( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL released
void QHeader::released( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL sizeChange
void QHeader::sizeChange( int t0, int t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL indexChange
void QHeader::indexChange( int t0, int t1, int t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL sectionClicked
void QHeader::sectionClicked( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 5, t0 );
}

// SIGNAL moved
void QHeader::moved( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL sectionHandleDoubleClicked
void QHeader::sectionHandleDoubleClicked( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 7, t0 );
}

bool QHeader::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setUpdatesEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 1: setOffset((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QHeader::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: clicked((int)static_QUType_int.get(_o+1)); break;
    case 1: pressed((int)static_QUType_int.get(_o+1)); break;
    case 2: released((int)static_QUType_int.get(_o+1)); break;
    case 3: sizeChange((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 4: indexChange((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 5: sectionClicked((int)static_QUType_int.get(_o+1)); break;
    case 6: moved((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 7: sectionHandleDoubleClicked((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QHeader::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setOrientation((Orientation&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->orientation() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setTracking(v->asBool()); break;
	case 1: *v = QVariant( this->tracking(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->count() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setOffset(v->asInt()); break;
	case 1: *v = QVariant( this->offset() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setMovingEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isMovingEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setStretchEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isStretchEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QHeader::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
