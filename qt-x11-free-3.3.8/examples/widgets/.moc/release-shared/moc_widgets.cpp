/****************************************************************************
** MyListView meta object code from reading C++ file 'widgets.h'
**
** Created: Wed Oct 9 11:08:43 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MyListView::className() const
{
    return "MyListView";
}

QMetaObject *MyListView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MyListView( "MyListView", &MyListView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MyListView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MyListView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MyListView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MyListView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MyListView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    static const QUMethod signal_0 = {"mySelectionChanged", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod signal_1 = {"mySelectionChanged", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "mySelectionChanged()", &signal_0, QMetaData::Protected },
	{ "mySelectionChanged(QListViewItem*)", &signal_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MyListView", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MyListView.setMetaObject( metaObj );
    return metaObj;
}

void* MyListView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MyListView" ) )
	return this;
    return QListView::qt_cast( clname );
}

// SIGNAL mySelectionChanged
void MyListView::mySelectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL mySelectionChanged
void MyListView::mySelectionChanged( QListViewItem* t0 )
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

bool MyListView::qt_invoke( int _id, QUObject* _o )
{
    return QListView::qt_invoke(_id,_o);
}

bool MyListView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: mySelectionChanged(); break;
    case 1: mySelectionChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QListView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MyListView::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool MyListView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *WidgetView::className() const
{
    return "WidgetView";
}

QMetaObject *WidgetView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WidgetView( "WidgetView", &WidgetView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WidgetView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WidgetView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WidgetView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WidgetView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WidgetView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setStatus", 1, param_slot_0 };
    static const QUMethod slot_1 = {"selectionChanged", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"selectionChanged", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_3 = {"clicked", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"mySelectionChanged", 1, param_slot_4 };
    static const QUMethod slot_5 = {"button1Clicked", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"checkBoxClicked", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"radioButtonClicked", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"sliderValueChanged", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"listBoxItemSelected", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"comboBoxItemActivated", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"edComboBoxItemActivated", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"lineEditTextChanged", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"movieStatus", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_varptr, "\x08", QUParameter::In }
    };
    static const QUMethod slot_14 = {"movieUpdate", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"spinBoxValueChanged", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"popupSelected", 1, param_slot_16 };
    static const QUMethod slot_17 = {"open", 0, 0 };
    static const QUMethod slot_18 = {"dummy", 0, 0 };
    static const QUMethod slot_19 = {"showProperties", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setStatus(const QString&)", &slot_0, QMetaData::Public },
	{ "selectionChanged()", &slot_1, QMetaData::Public },
	{ "selectionChanged(QListViewItem*)", &slot_2, QMetaData::Public },
	{ "clicked(QListViewItem*)", &slot_3, QMetaData::Public },
	{ "mySelectionChanged(QListViewItem*)", &slot_4, QMetaData::Public },
	{ "button1Clicked()", &slot_5, QMetaData::Protected },
	{ "checkBoxClicked(int)", &slot_6, QMetaData::Private },
	{ "radioButtonClicked(int)", &slot_7, QMetaData::Private },
	{ "sliderValueChanged(int)", &slot_8, QMetaData::Private },
	{ "listBoxItemSelected(int)", &slot_9, QMetaData::Private },
	{ "comboBoxItemActivated(int)", &slot_10, QMetaData::Private },
	{ "edComboBoxItemActivated(const QString&)", &slot_11, QMetaData::Private },
	{ "lineEditTextChanged(const QString&)", &slot_12, QMetaData::Private },
	{ "movieStatus(int)", &slot_13, QMetaData::Private },
	{ "movieUpdate(const QRect&)", &slot_14, QMetaData::Private },
	{ "spinBoxValueChanged(const QString&)", &slot_15, QMetaData::Private },
	{ "popupSelected(int)", &slot_16, QMetaData::Private },
	{ "open()", &slot_17, QMetaData::Private },
	{ "dummy()", &slot_18, QMetaData::Private },
	{ "showProperties()", &slot_19, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"WidgetView", parentObject,
	slot_tbl, 20,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WidgetView.setMetaObject( metaObj );
    return metaObj;
}

void* WidgetView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WidgetView" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool WidgetView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setStatus((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: selectionChanged(); break;
    case 2: selectionChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: clicked((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 4: mySelectionChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: button1Clicked(); break;
    case 6: checkBoxClicked((int)static_QUType_int.get(_o+1)); break;
    case 7: radioButtonClicked((int)static_QUType_int.get(_o+1)); break;
    case 8: sliderValueChanged((int)static_QUType_int.get(_o+1)); break;
    case 9: listBoxItemSelected((int)static_QUType_int.get(_o+1)); break;
    case 10: comboBoxItemActivated((int)static_QUType_int.get(_o+1)); break;
    case 11: edComboBoxItemActivated((const QString&)static_QUType_QString.get(_o+1)); break;
    case 12: lineEditTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 13: movieStatus((int)static_QUType_int.get(_o+1)); break;
    case 14: movieUpdate((const QRect&)*((const QRect*)static_QUType_ptr.get(_o+1))); break;
    case 15: spinBoxValueChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 16: popupSelected((int)static_QUType_int.get(_o+1)); break;
    case 17: open(); break;
    case 18: dummy(); break;
    case 19: showProperties(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool WidgetView::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool WidgetView::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool WidgetView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
