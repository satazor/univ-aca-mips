/****************************************************************************
** QButtonGroup meta object code from reading C++ file 'qbuttongroup.h'
**
** Created: Wed Oct 9 10:52:37 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qbuttongroup.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QButtonGroup::className() const
{
    return "QButtonGroup";
}

QMetaObject *QButtonGroup::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QButtonGroup( "QButtonGroup", &QButtonGroup::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QButtonGroup::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QButtonGroup", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QButtonGroup::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QButtonGroup", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QButtonGroup::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QGroupBox::staticMetaObject();
    static const QUMethod slot_0 = {"buttonPressed", 0, 0 };
    static const QUMethod slot_1 = {"buttonReleased", 0, 0 };
    static const QUMethod slot_2 = {"buttonClicked", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "on", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"buttonToggled", 1, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "buttonPressed()", &slot_0, QMetaData::Protected },
	{ "buttonReleased()", &slot_1, QMetaData::Protected },
	{ "buttonClicked()", &slot_2, QMetaData::Protected },
	{ "buttonToggled(bool)", &slot_3, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"pressed", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"released", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"clicked", 1, param_signal_2 };
    static const QMetaData signal_tbl[] = {
	{ "pressed(int)", &signal_0, QMetaData::Public },
	{ "released(int)", &signal_1, QMetaData::Public },
	{ "clicked(int)", &signal_2, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[3] = {
 	{ "bool","exclusive", 0x12000103, &QButtonGroup::metaObj, 0, -1 },
	{ "bool","radioButtonExclusive", 0x12000103, &QButtonGroup::metaObj, 0, -1 },
	{ "int","selectedId", 0x10000003, &QButtonGroup::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QButtonGroup", parentObject,
	slot_tbl, 4,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	props_tbl, 3,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QButtonGroup.setMetaObject( metaObj );
    return metaObj;
}

void* QButtonGroup::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QButtonGroup" ) )
	return this;
    return QGroupBox::qt_cast( clname );
}

// SIGNAL pressed
void QButtonGroup::pressed( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL released
void QButtonGroup::released( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL clicked
void QButtonGroup::clicked( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

bool QButtonGroup::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: buttonPressed(); break;
    case 1: buttonReleased(); break;
    case 2: buttonClicked(); break;
    case 3: buttonToggled((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QGroupBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QButtonGroup::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: pressed((int)static_QUType_int.get(_o+1)); break;
    case 1: released((int)static_QUType_int.get(_o+1)); break;
    case 2: clicked((int)static_QUType_int.get(_o+1)); break;
    default:
	return QGroupBox::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QButtonGroup::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setExclusive(v->asBool()); break;
	case 1: *v = QVariant( this->isExclusive(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setRadioButtonExclusive(v->asBool()); break;
	case 1: *v = QVariant( this->isRadioButtonExclusive(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setButton(v->asInt()); break;
	case 1: *v = QVariant( this->selectedId() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QGroupBox::qt_property( id, f, v );
    }
    return TRUE;
}

bool QButtonGroup::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
