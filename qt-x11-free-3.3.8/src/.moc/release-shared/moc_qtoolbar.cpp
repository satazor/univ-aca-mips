/****************************************************************************
** QToolBar meta object code from reading C++ file 'qtoolbar.h'
**
** Created: Wed Oct 9 10:52:54 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtoolbar.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QToolBar::className() const
{
    return "QToolBar";
}

QMetaObject *QToolBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QToolBar( "QToolBar", &QToolBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QToolBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QToolBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QToolBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QToolBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QToolBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDockWindow::staticMetaObject();
    static const QUMethod slot_0 = {"createPopup", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "createPopup()", &slot_0, QMetaData::Private }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "QString","label", 0x3000103, &QToolBar::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QToolBar", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QToolBar.setMetaObject( metaObj );
    return metaObj;
}

void* QToolBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QToolBar" ) )
	return this;
    return QDockWindow::qt_cast( clname );
}

bool QToolBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: createPopup(); break;
    default:
	return QDockWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QToolBar::qt_emit( int _id, QUObject* _o )
{
    return QDockWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QToolBar::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setLabel(v->asString()); break;
	case 1: *v = QVariant( this->label() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QDockWindow::qt_property( id, f, v );
    }
    return TRUE;
}

bool QToolBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
