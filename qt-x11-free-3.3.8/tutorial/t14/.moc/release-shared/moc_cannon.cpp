/****************************************************************************
** CannonField meta object code from reading C++ file 'cannon.h'
**
** Created: Wed Oct 9 11:07:01 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../cannon.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CannonField::className() const
{
    return "CannonField";
}

QMetaObject *CannonField::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CannonField( "CannonField", &CannonField::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CannonField::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CannonField", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CannonField::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CannonField", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CannonField::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "degrees", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setAngle", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "newton", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setForce", 1, param_slot_1 };
    static const QUMethod slot_2 = {"shoot", 0, 0 };
    static const QUMethod slot_3 = {"newTarget", 0, 0 };
    static const QUMethod slot_4 = {"setGameOver", 0, 0 };
    static const QUMethod slot_5 = {"restartGame", 0, 0 };
    static const QUMethod slot_6 = {"moveShot", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setAngle(int)", &slot_0, QMetaData::Public },
	{ "setForce(int)", &slot_1, QMetaData::Public },
	{ "shoot()", &slot_2, QMetaData::Public },
	{ "newTarget()", &slot_3, QMetaData::Public },
	{ "setGameOver()", &slot_4, QMetaData::Public },
	{ "restartGame()", &slot_5, QMetaData::Public },
	{ "moveShot()", &slot_6, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"hit", 0, 0 };
    static const QUMethod signal_1 = {"missed", 0, 0 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"angleChanged", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"forceChanged", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"canShoot", 1, param_signal_4 };
    static const QMetaData signal_tbl[] = {
	{ "hit()", &signal_0, QMetaData::Private },
	{ "missed()", &signal_1, QMetaData::Private },
	{ "angleChanged(int)", &signal_2, QMetaData::Private },
	{ "forceChanged(int)", &signal_3, QMetaData::Private },
	{ "canShoot(bool)", &signal_4, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"CannonField", parentObject,
	slot_tbl, 7,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CannonField.setMetaObject( metaObj );
    return metaObj;
}

void* CannonField::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CannonField" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL hit
void CannonField::hit()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL missed
void CannonField::missed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL angleChanged
void CannonField::angleChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL forceChanged
void CannonField::forceChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL canShoot
void CannonField::canShoot( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 4, t0 );
}

bool CannonField::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setAngle((int)static_QUType_int.get(_o+1)); break;
    case 1: setForce((int)static_QUType_int.get(_o+1)); break;
    case 2: shoot(); break;
    case 3: newTarget(); break;
    case 4: setGameOver(); break;
    case 5: restartGame(); break;
    case 6: moveShot(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CannonField::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: hit(); break;
    case 1: missed(); break;
    case 2: angleChanged((int)static_QUType_int.get(_o+1)); break;
    case 3: forceChanged((int)static_QUType_int.get(_o+1)); break;
    case 4: canShoot((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool CannonField::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool CannonField::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
