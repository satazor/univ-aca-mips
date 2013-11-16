/****************************************************************************
** QMenuBar meta object code from reading C++ file 'qmenubar.h'
**
** Created: Wed Oct 9 10:52:47 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qmenubar.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QMenuBar::className() const
{
    return "QMenuBar";
}

QMetaObject *QMenuBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QMenuBar( "QMenuBar", &QMenuBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QMenuBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QMenuBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QMenuBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QMenuBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QMenuBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Never",  (int) QMenuBar::Never },
	{ "InWindowsStyle",  (int) QMenuBar::InWindowsStyle }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Separator", 2, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"subActivated", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"subHighlighted", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"accelActivated", 1, param_slot_2 };
    static const QUMethod slot_3 = {"accelDestroyed", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_4 = {"popupDestroyed", 1, param_slot_4 };
    static const QUMethod slot_5 = {"performDelayedChanges", 0, 0 };
    static const QUMethod slot_6 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "subActivated(int)", &slot_0, QMetaData::Private },
	{ "subHighlighted(int)", &slot_1, QMetaData::Private },
	{ "accelActivated(int)", &slot_2, QMetaData::Private },
	{ "accelDestroyed()", &slot_3, QMetaData::Private },
	{ "popupDestroyed(QObject*)", &slot_4, QMetaData::Private },
	{ "performDelayedChanges()", &slot_5, QMetaData::Private },
	{ "languageChange()", &slot_6, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"activated", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "itemId", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"highlighted", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "activated(int)", &signal_0, QMetaData::Public },
	{ "highlighted(int)", &signal_1, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "Separator","separator", 0x1107, &QMenuBar::metaObj, &enum_tbl[0], -1 },
	{ "bool","defaultUp", 0x12000103, &QMenuBar::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QMenuBar", parentObject,
	slot_tbl, 7,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QMenuBar.setMetaObject( metaObj );
    return metaObj;
}

void* QMenuBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QMenuBar" ) )
	return this;
    if ( !qstrcmp( clname, "QMenuData" ) )
	return (QMenuData*)this;
    return QFrame::qt_cast( clname );
}

// SIGNAL activated
void QMenuBar::activated( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL highlighted
void QMenuBar::highlighted( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QMenuBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: subActivated((int)static_QUType_int.get(_o+1)); break;
    case 1: subHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 2: accelActivated((int)static_QUType_int.get(_o+1)); break;
    case 3: accelDestroyed(); break;
    case 4: popupDestroyed((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 5: performDelayedChanges(); break;
    case 6: languageChange(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QMenuBar::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: activated((int)static_QUType_int.get(_o+1)); break;
    case 1: highlighted((int)static_QUType_int.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QMenuBar::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setSeparator((Separator&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->separator() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setDefaultUp(v->asBool()); break;
	case 1: *v = QVariant( this->isDefaultUp(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QMenuBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
