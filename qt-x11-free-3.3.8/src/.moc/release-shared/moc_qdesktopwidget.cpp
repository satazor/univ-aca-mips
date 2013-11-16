/****************************************************************************
** QDesktopWidget meta object code from reading C++ file 'qdesktopwidget.h'
**
** Created: Wed Oct 9 10:52:27 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qdesktopwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDesktopWidget::className() const
{
    return "QDesktopWidget";
}

QMetaObject *QDesktopWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDesktopWidget( "QDesktopWidget", &QDesktopWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDesktopWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesktopWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDesktopWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDesktopWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDesktopWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"resized", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"workAreaResized", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "resized(int)", &signal_0, QMetaData::Public },
	{ "workAreaResized(int)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDesktopWidget", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDesktopWidget.setMetaObject( metaObj );
    return metaObj;
}

void* QDesktopWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDesktopWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL resized
void QDesktopWidget::resized( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL workAreaResized
void QDesktopWidget::workAreaResized( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QDesktopWidget::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool QDesktopWidget::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: resized((int)static_QUType_int.get(_o+1)); break;
    case 1: workAreaResized((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDesktopWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QDesktopWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
