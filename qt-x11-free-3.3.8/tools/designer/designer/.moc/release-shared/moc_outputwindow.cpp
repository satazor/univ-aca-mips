/****************************************************************************
** OutputWindow meta object code from reading C++ file 'outputwindow.h'
**
** Created: Wed Oct 9 11:04:54 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../outputwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *OutputWindow::className() const
{
    return "OutputWindow";
}

QMetaObject *OutputWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_OutputWindow( "OutputWindow", &OutputWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString OutputWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OutputWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString OutputWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OutputWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* OutputWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTabWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"currentErrorChanged", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "currentErrorChanged(QListViewItem*)", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"OutputWindow", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_OutputWindow.setMetaObject( metaObj );
    return metaObj;
}

void* OutputWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "OutputWindow" ) )
	return this;
    return QTabWidget::qt_cast( clname );
}

bool OutputWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: currentErrorChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QTabWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool OutputWindow::qt_emit( int _id, QUObject* _o )
{
    return QTabWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool OutputWindow::qt_property( int id, int f, QVariant* v)
{
    return QTabWidget::qt_property( id, f, v);
}

bool OutputWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
