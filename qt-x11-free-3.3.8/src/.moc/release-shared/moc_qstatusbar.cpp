/****************************************************************************
** QStatusBar meta object code from reading C++ file 'qstatusbar.h'
**
** Created: Wed Oct 9 10:52:52 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qstatusbar.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QStatusBar::className() const
{
    return "QStatusBar";
}

QMetaObject *QStatusBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QStatusBar( "QStatusBar", &QStatusBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QStatusBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QStatusBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QStatusBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QStatusBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QStatusBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"message", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"message", 2, param_slot_1 };
    static const QUMethod slot_2 = {"clear", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "message(const QString&)", &slot_0, QMetaData::Public },
	{ "message(const QString&,int)", &slot_1, QMetaData::Public },
	{ "clear()", &slot_2, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"messageChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "messageChanged(const QString&)", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "bool","sizeGripEnabled", 0x12000103, &QStatusBar::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QStatusBar", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QStatusBar.setMetaObject( metaObj );
    return metaObj;
}

void* QStatusBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QStatusBar" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL messageChanged
void QStatusBar::messageChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool QStatusBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: message((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: message((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 2: clear(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QStatusBar::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: messageChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QStatusBar::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setSizeGripEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isSizeGripEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QStatusBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
