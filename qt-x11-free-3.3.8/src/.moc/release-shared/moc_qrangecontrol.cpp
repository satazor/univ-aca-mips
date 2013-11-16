/****************************************************************************
** QSpinWidget meta object code from reading C++ file 'qrangecontrol.h'
**
** Created: Wed Oct 9 10:52:49 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qrangecontrol.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QSpinWidget::className() const
{
    return "QSpinWidget";
}

QMetaObject *QSpinWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSpinWidget( "QSpinWidget", &QSpinWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSpinWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSpinWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSpinWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSpinWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSpinWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"stepUp", 0, 0 };
    static const QUMethod slot_1 = {"stepDown", 0, 0 };
    static const QUMethod slot_2 = {"timerDone", 0, 0 };
    static const QUMethod slot_3 = {"timerDoneEx", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "stepUp()", &slot_0, QMetaData::Public },
	{ "stepDown()", &slot_1, QMetaData::Public },
	{ "timerDone()", &slot_2, QMetaData::Private },
	{ "timerDoneEx()", &slot_3, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"stepUpPressed", 0, 0 };
    static const QUMethod signal_1 = {"stepDownPressed", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "stepUpPressed()", &signal_0, QMetaData::Public },
	{ "stepDownPressed()", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QSpinWidget", parentObject,
	slot_tbl, 4,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSpinWidget.setMetaObject( metaObj );
    return metaObj;
}

void* QSpinWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSpinWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL stepUpPressed
void QSpinWidget::stepUpPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL stepDownPressed
void QSpinWidget::stepDownPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool QSpinWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: stepUp(); break;
    case 1: stepDown(); break;
    case 2: timerDone(); break;
    case 3: timerDoneEx(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QSpinWidget::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: stepUpPressed(); break;
    case 1: stepDownPressed(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QSpinWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QSpinWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
