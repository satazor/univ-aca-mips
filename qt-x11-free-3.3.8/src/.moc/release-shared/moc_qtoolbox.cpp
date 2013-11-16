/****************************************************************************
** QToolBox meta object code from reading C++ file 'qtoolbox.h'
**
** Created: Wed Oct 9 10:52:54 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtoolbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QToolBox::className() const
{
    return "QToolBox";
}

QMetaObject *QToolBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QToolBox( "QToolBox", &QToolBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QToolBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QToolBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QToolBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QToolBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QToolBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setCurrentIndex", 1, param_slot_0 };
    static const QUMethod slot_1 = {"buttonClicked", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_2 = {"itemDestroyed", 1, param_slot_2 };
    static const QMetaData slot_tbl[] = {
	{ "setCurrentIndex(int)", &slot_0, QMetaData::Public },
	{ "buttonClicked()", &slot_1, QMetaData::Private },
	{ "itemDestroyed(QObject*)", &slot_2, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"currentChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "currentChanged(int)", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "int","currentIndex", 0x10000103, &QToolBox::metaObj, 0, -1 },
	{ "int","count", 0x10000001, &QToolBox::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QToolBox", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QToolBox.setMetaObject( metaObj );
    return metaObj;
}

void* QToolBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QToolBox" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL currentChanged
void QToolBox::currentChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool QToolBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setCurrentIndex((int)static_QUType_int.get(_o+1)); break;
    case 1: buttonClicked(); break;
    case 2: itemDestroyed((QObject*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QToolBox::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentChanged((int)static_QUType_int.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QToolBox::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setCurrentIndex(v->asInt()); break;
	case 1: *v = QVariant( this->currentIndex() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->count() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QToolBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
