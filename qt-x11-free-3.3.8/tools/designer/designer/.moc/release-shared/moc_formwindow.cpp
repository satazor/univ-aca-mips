/****************************************************************************
** FormWindow meta object code from reading C++ file 'formwindow.h'
**
** Created: Wed Oct 9 11:04:43 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../formwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *FormWindow::className() const
{
    return "FormWindow";
}

QMetaObject *FormWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FormWindow( "FormWindow", &FormWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FormWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FormWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FormWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FormWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FormWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "w", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_0 = {"widgetChanged", 1, param_slot_0 };
    static const QUMethod slot_1 = {"currentToolChanged", 0, 0 };
    static const QUMethod slot_2 = {"visibilityChanged", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "m", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"modificationChanged", 1, param_slot_3 };
    static const QUMethod slot_4 = {"invalidCheckedSelections", 0, 0 };
    static const QUMethod slot_5 = {"updatePropertiesTimerDone", 0, 0 };
    static const QUMethod slot_6 = {"showPropertiesTimerDone", 0, 0 };
    static const QUMethod slot_7 = {"selectionChangedTimerDone", 0, 0 };
    static const QUMethod slot_8 = {"windowsRepaintWorkaroundTimerTimeout", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "widgetChanged(QObject*)", &slot_0, QMetaData::Public },
	{ "currentToolChanged()", &slot_1, QMetaData::Public },
	{ "visibilityChanged()", &slot_2, QMetaData::Public },
	{ "modificationChanged(bool)", &slot_3, QMetaData::Public },
	{ "invalidCheckedSelections()", &slot_4, QMetaData::Private },
	{ "updatePropertiesTimerDone()", &slot_5, QMetaData::Private },
	{ "showPropertiesTimerDone()", &slot_6, QMetaData::Private },
	{ "selectionChangedTimerDone()", &slot_7, QMetaData::Private },
	{ "windowsRepaintWorkaroundTimerTimeout()", &slot_8, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "w", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod signal_0 = {"showProperties", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "w", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod signal_1 = {"updateProperties", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "undoAvailable", &static_QUType_bool, 0, QUParameter::In },
	{ "redoAvailable", &static_QUType_bool, 0, QUParameter::In },
	{ "undoCmd", &static_QUType_QString, 0, QUParameter::In },
	{ "redoCmd", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"undoRedoChanged", 4, param_signal_2 };
    static const QUMethod signal_3 = {"selectionChanged", 0, 0 };
    static const QUParameter param_signal_4[] = {
	{ "m", &static_QUType_bool, 0, QUParameter::In },
	{ "fw", &static_QUType_ptr, "FormWindow", QUParameter::In }
    };
    static const QUMethod signal_4 = {"modificationChanged", 2, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "m", &static_QUType_bool, 0, QUParameter::In },
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"modificationChanged", 2, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In },
	{ "fw", &static_QUType_ptr, "FormWindow", QUParameter::In }
    };
    static const QUMethod signal_6 = {"fileNameChanged", 2, param_signal_6 };
    static const QMetaData signal_tbl[] = {
	{ "showProperties(QObject*)", &signal_0, QMetaData::Public },
	{ "updateProperties(QObject*)", &signal_1, QMetaData::Public },
	{ "undoRedoChanged(bool,bool,const QString&,const QString&)", &signal_2, QMetaData::Public },
	{ "selectionChanged()", &signal_3, QMetaData::Public },
	{ "modificationChanged(bool,FormWindow*)", &signal_4, QMetaData::Public },
	{ "modificationChanged(bool,const QString&)", &signal_5, QMetaData::Public },
	{ "fileNameChanged(const QString&,FormWindow*)", &signal_6, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "QString","fileName", 0x3000103, &FormWindow::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"FormWindow", parentObject,
	slot_tbl, 9,
	signal_tbl, 7,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FormWindow.setMetaObject( metaObj );
    return metaObj;
}

void* FormWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FormWindow" ) )
	return this;
    return QWidget::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL showProperties
void FormWindow::showProperties( QObject* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL updateProperties
void FormWindow::updateProperties( QObject* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL undoRedoChanged
void FormWindow::undoRedoChanged( bool t0, bool t1, const QString& t2, const QString& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_bool.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL selectionChanged
void FormWindow::selectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL modificationChanged
void FormWindow::modificationChanged( bool t0, FormWindow* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_bool.set(o+1,t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL modificationChanged
void FormWindow::modificationChanged( bool t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_bool.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL fileNameChanged
void FormWindow::fileNameChanged( const QString& t0, FormWindow* t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_ptr.set(o+2,t1);
    activate_signal( clist, o );
}

bool FormWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: widgetChanged((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 1: currentToolChanged(); break;
    case 2: visibilityChanged(); break;
    case 3: modificationChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 4: invalidCheckedSelections(); break;
    case 5: updatePropertiesTimerDone(); break;
    case 6: showPropertiesTimerDone(); break;
    case 7: selectionChangedTimerDone(); break;
    case 8: windowsRepaintWorkaroundTimerTimeout(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FormWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: showProperties((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 1: updateProperties((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 2: undoRedoChanged((bool)static_QUType_bool.get(_o+1),(bool)static_QUType_bool.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4)); break;
    case 3: selectionChanged(); break;
    case 4: modificationChanged((bool)static_QUType_bool.get(_o+1),(FormWindow*)static_QUType_ptr.get(_o+2)); break;
    case 5: modificationChanged((bool)static_QUType_bool.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 6: fileNameChanged((const QString&)static_QUType_QString.get(_o+1),(FormWindow*)static_QUType_ptr.get(_o+2)); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool FormWindow::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setFileName(v->asString()); break;
	case 1: *v = QVariant( this->fileName() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool FormWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
