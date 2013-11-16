/****************************************************************************
** MyWidget meta object code from reading C++ file 'mywidget.h'
**
** Created: Wed Oct 9 11:07:51 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../mywidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MyWidget::className() const
{
    return "MyWidget";
}

QMetaObject *MyWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MyWidget( "MyWidget", &MyWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MyWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MyWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MyWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MyWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MyWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod signal_0 = {"closed", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "closed()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MyWidget", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MyWidget.setMetaObject( metaObj );
    return metaObj;
}

void* MyWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MyWidget" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

// SIGNAL closed
void MyWidget::closed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool MyWidget::qt_invoke( int _id, QUObject* _o )
{
    return QMainWindow::qt_invoke(_id,_o);
}

bool MyWidget::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: closed(); break;
    default:
	return QMainWindow::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MyWidget::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MyWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
