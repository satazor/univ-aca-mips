/****************************************************************************
** QSplashScreen meta object code from reading C++ file 'qsplashscreen.h'
**
** Created: Wed Oct 9 10:52:51 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qsplashscreen.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSplashScreen::className() const
{
    return "QSplashScreen";
}

QMetaObject *QSplashScreen::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSplashScreen( "QSplashScreen", &QSplashScreen::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSplashScreen::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSplashScreen", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSplashScreen::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSplashScreen", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSplashScreen::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"message", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In },
	{ "flags", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"message", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In },
	{ "flags", &static_QUType_int, 0, QUParameter::In },
	{ "color", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_2 = {"message", 3, param_slot_2 };
    static const QUMethod slot_3 = {"clear", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "message(const QString&)", &slot_0, QMetaData::Public },
	{ "message(const QString&,int)", &slot_1, QMetaData::Public },
	{ "message(const QString&,int,const QColor&)", &slot_2, QMetaData::Public },
	{ "clear()", &slot_3, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "str", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"messageChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "messageChanged(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QSplashScreen", parentObject,
	slot_tbl, 4,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSplashScreen.setMetaObject( metaObj );
    return metaObj;
}

void* QSplashScreen::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSplashScreen" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL messageChanged
void QSplashScreen::messageChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool QSplashScreen::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: message((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: message((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 2: message((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(const QColor&)*((const QColor*)static_QUType_ptr.get(_o+3))); break;
    case 3: clear(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QSplashScreen::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: messageChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QSplashScreen::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QSplashScreen::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
