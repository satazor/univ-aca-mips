/****************************************************************************
** QDialogButtons meta object code from reading C++ file 'qdialogbuttons_p.h'
**
** Created: Wed Oct 9 10:52:38 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qdialogbuttons_p.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QDialogButtons::className() const
{
    return "QDialogButtons";
}

QMetaObject *QDialogButtons::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QDialogButtons( "QDialogButtons", &QDialogButtons::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QDialogButtons::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDialogButtons", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QDialogButtons::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QDialogButtons", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QDialogButtons::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"handleClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "handleClicked()", &slot_0, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "Button", QUParameter::In }
    };
    static const QUMethod signal_0 = {"clicked", 1, param_signal_0 };
    static const QUMethod signal_1 = {"acceptClicked", 0, 0 };
    static const QUMethod signal_2 = {"rejectClicked", 0, 0 };
    static const QUMethod signal_3 = {"helpClicked", 0, 0 };
    static const QUMethod signal_4 = {"applyClicked", 0, 0 };
    static const QUMethod signal_5 = {"allClicked", 0, 0 };
    static const QUMethod signal_6 = {"retryClicked", 0, 0 };
    static const QUMethod signal_7 = {"ignoreClicked", 0, 0 };
    static const QUMethod signal_8 = {"abortClicked", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "clicked(Button)", &signal_0, QMetaData::Private },
	{ "acceptClicked()", &signal_1, QMetaData::Private },
	{ "rejectClicked()", &signal_2, QMetaData::Private },
	{ "helpClicked()", &signal_3, QMetaData::Private },
	{ "applyClicked()", &signal_4, QMetaData::Private },
	{ "allClicked()", &signal_5, QMetaData::Private },
	{ "retryClicked()", &signal_6, QMetaData::Private },
	{ "ignoreClicked()", &signal_7, QMetaData::Private },
	{ "abortClicked()", &signal_8, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QDialogButtons", parentObject,
	slot_tbl, 1,
	signal_tbl, 9,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QDialogButtons.setMetaObject( metaObj );
    return metaObj;
}

void* QDialogButtons::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QDialogButtons" ) )
	return this;
    return QWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL clicked
void QDialogButtons::clicked( Button t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL acceptClicked
void QDialogButtons::acceptClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL rejectClicked
void QDialogButtons::rejectClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL helpClicked
void QDialogButtons::helpClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL applyClicked
void QDialogButtons::applyClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

// SIGNAL allClicked
void QDialogButtons::allClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

// SIGNAL retryClicked
void QDialogButtons::retryClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 6 );
}

// SIGNAL ignoreClicked
void QDialogButtons::ignoreClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 7 );
}

// SIGNAL abortClicked
void QDialogButtons::abortClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 8 );
}

bool QDialogButtons::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: handleClicked(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QDialogButtons::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: clicked((Button)(*((Button*)static_QUType_ptr.get(_o+1)))); break;
    case 1: acceptClicked(); break;
    case 2: rejectClicked(); break;
    case 3: helpClicked(); break;
    case 4: applyClicked(); break;
    case 5: allClicked(); break;
    case 6: retryClicked(); break;
    case 7: ignoreClicked(); break;
    case 8: abortClicked(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QDialogButtons::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QDialogButtons::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
