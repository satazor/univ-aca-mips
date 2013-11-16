/****************************************************************************
** QTabDialog meta object code from reading C++ file 'qtabdialog.h'
**
** Created: Wed Oct 9 10:53:03 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dialogs/qtabdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QTabDialog::className() const
{
    return "QTabDialog";
}

QMetaObject *QTabDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTabDialog( "QTabDialog", &QTabDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTabDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTabDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTabDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTabDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTabDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "i", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"showTab", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "showTab(int)", &slot_0, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"aboutToShow", 0, 0 };
    static const QUMethod signal_1 = {"applyButtonPressed", 0, 0 };
    static const QUMethod signal_2 = {"cancelButtonPressed", 0, 0 };
    static const QUMethod signal_3 = {"defaultButtonPressed", 0, 0 };
    static const QUMethod signal_4 = {"helpButtonPressed", 0, 0 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod signal_5 = {"currentChanged", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"selected", 1, param_signal_6 };
    static const QMetaData signal_tbl[] = {
	{ "aboutToShow()", &signal_0, QMetaData::Protected },
	{ "applyButtonPressed()", &signal_1, QMetaData::Protected },
	{ "cancelButtonPressed()", &signal_2, QMetaData::Protected },
	{ "defaultButtonPressed()", &signal_3, QMetaData::Protected },
	{ "helpButtonPressed()", &signal_4, QMetaData::Protected },
	{ "currentChanged(QWidget*)", &signal_5, QMetaData::Protected },
	{ "selected(const QString&)", &signal_6, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"QTabDialog", parentObject,
	slot_tbl, 1,
	signal_tbl, 7,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTabDialog.setMetaObject( metaObj );
    return metaObj;
}

void* QTabDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTabDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL aboutToShow
void QTabDialog::aboutToShow()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL applyButtonPressed
void QTabDialog::applyButtonPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL cancelButtonPressed
void QTabDialog::cancelButtonPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL defaultButtonPressed
void QTabDialog::defaultButtonPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL helpButtonPressed
void QTabDialog::helpButtonPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL currentChanged
void QTabDialog::currentChanged( QWidget* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL selected
void QTabDialog::selected( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 6, t0 );
}

bool QTabDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: showTab((int)static_QUType_int.get(_o+1)); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTabDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: aboutToShow(); break;
    case 1: applyButtonPressed(); break;
    case 2: cancelButtonPressed(); break;
    case 3: defaultButtonPressed(); break;
    case 4: helpButtonPressed(); break;
    case 5: currentChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 6: selected((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTabDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool QTabDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
