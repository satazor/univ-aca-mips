/****************************************************************************
** ArgHintWidget meta object code from reading C++ file 'arghintwidget.h'
**
** Created: Wed Oct 9 11:05:26 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../arghintwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ArgHintWidget::className() const
{
    return "ArgHintWidget";
}

QMetaObject *ArgHintWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ArgHintWidget( "ArgHintWidget", &ArgHintWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ArgHintWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ArgHintWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ArgHintWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ArgHintWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ArgHintWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUMethod slot_0 = {"relayout", 0, 0 };
    static const QUMethod slot_1 = {"gotoPrev", 0, 0 };
    static const QUMethod slot_2 = {"gotoNext", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "relayout()", &slot_0, QMetaData::Public },
	{ "gotoPrev()", &slot_1, QMetaData::Public },
	{ "gotoNext()", &slot_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ArgHintWidget", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ArgHintWidget.setMetaObject( metaObj );
    return metaObj;
}

void* ArgHintWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ArgHintWidget" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool ArgHintWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: relayout(); break;
    case 1: gotoPrev(); break;
    case 2: gotoNext(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ArgHintWidget::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ArgHintWidget::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool ArgHintWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
