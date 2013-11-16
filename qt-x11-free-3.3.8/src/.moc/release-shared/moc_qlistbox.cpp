/****************************************************************************
** QListBox meta object code from reading C++ file 'qlistbox.h'
**
** Created: Wed Oct 9 10:52:45 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qlistbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QListBox::className() const
{
    return "QListBox";
}

QMetaObject *QListBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QListBox( "QListBox", &QListBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QListBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QListBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QListBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QListBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QListBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Single",  (int) QListBox::Single },
	{ "Multi",  (int) QListBox::Multi },
	{ "Extended",  (int) QListBox::Extended },
	{ "NoSelection",  (int) QListBox::NoSelection }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "FixedNumber",  (int) QListBox::FixedNumber },
	{ "FitToWidth",  (int) QListBox::FitToWidth },
	{ "FitToHeight",  (int) QListBox::FitToHeight },
	{ "Variable",  (int) QListBox::Variable }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "SelectionMode", 4, enum_0, FALSE },
	{ "LayoutMode", 4, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUMethod slot_0 = {"clear", 0, 0 };
    static const QUMethod slot_1 = {"ensureCurrentVisible", 0, 0 };
    static const QUMethod slot_2 = {"clearSelection", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "select", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"selectAll", 1, param_slot_3 };
    static const QUMethod slot_4 = {"invertSelection", 0, 0 };
    static const QUMethod slot_5 = {"clearInputString", 0, 0 };
    static const QUMethod slot_6 = {"refreshSlot", 0, 0 };
    static const QUMethod slot_7 = {"doAutoScroll", 0, 0 };
    static const QUMethod slot_8 = {"adjustItems", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "clear()", &slot_0, QMetaData::Public },
	{ "ensureCurrentVisible()", &slot_1, QMetaData::Public },
	{ "clearSelection()", &slot_2, QMetaData::Public },
	{ "selectAll(bool)", &slot_3, QMetaData::Public },
	{ "invertSelection()", &slot_4, QMetaData::Public },
	{ "clearInputString()", &slot_5, QMetaData::Protected },
	{ "refreshSlot()", &slot_6, QMetaData::Private },
	{ "doAutoScroll()", &slot_7, QMetaData::Private },
	{ "adjustItems()", &slot_8, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"highlighted", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"selected", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"highlighted", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"selected", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_4 = {"highlighted", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_5 = {"selected", 1, param_signal_5 };
    static const QUMethod signal_6 = {"selectionChanged", 0, 0 };
    static const QUParameter param_signal_7[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_7 = {"selectionChanged", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_8 = {"currentChanged", 1, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_9 = {"clicked", 1, param_signal_9 };
    static const QUParameter param_signal_10[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_10 = {"clicked", 2, param_signal_10 };
    static const QUParameter param_signal_11[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_11 = {"pressed", 1, param_signal_11 };
    static const QUParameter param_signal_12[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_12 = {"pressed", 2, param_signal_12 };
    static const QUParameter param_signal_13[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_13 = {"doubleClicked", 1, param_signal_13 };
    static const QUParameter param_signal_14[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_14 = {"returnPressed", 1, param_signal_14 };
    static const QUParameter param_signal_15[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_15 = {"rightButtonClicked", 2, param_signal_15 };
    static const QUParameter param_signal_16[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_16 = {"rightButtonPressed", 2, param_signal_16 };
    static const QUParameter param_signal_17[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_17 = {"mouseButtonPressed", 3, param_signal_17 };
    static const QUParameter param_signal_18[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_18 = {"mouseButtonClicked", 3, param_signal_18 };
    static const QUParameter param_signal_19[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod signal_19 = {"contextMenuRequested", 2, param_signal_19 };
    static const QUParameter param_signal_20[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_20 = {"onItem", 1, param_signal_20 };
    static const QUMethod signal_21 = {"onViewport", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "highlighted(int)", &signal_0, QMetaData::Public },
	{ "selected(int)", &signal_1, QMetaData::Public },
	{ "highlighted(const QString&)", &signal_2, QMetaData::Public },
	{ "selected(const QString&)", &signal_3, QMetaData::Public },
	{ "highlighted(QListBoxItem*)", &signal_4, QMetaData::Public },
	{ "selected(QListBoxItem*)", &signal_5, QMetaData::Public },
	{ "selectionChanged()", &signal_6, QMetaData::Public },
	{ "selectionChanged(QListBoxItem*)", &signal_7, QMetaData::Public },
	{ "currentChanged(QListBoxItem*)", &signal_8, QMetaData::Public },
	{ "clicked(QListBoxItem*)", &signal_9, QMetaData::Public },
	{ "clicked(QListBoxItem*,const QPoint&)", &signal_10, QMetaData::Public },
	{ "pressed(QListBoxItem*)", &signal_11, QMetaData::Public },
	{ "pressed(QListBoxItem*,const QPoint&)", &signal_12, QMetaData::Public },
	{ "doubleClicked(QListBoxItem*)", &signal_13, QMetaData::Public },
	{ "returnPressed(QListBoxItem*)", &signal_14, QMetaData::Public },
	{ "rightButtonClicked(QListBoxItem*,const QPoint&)", &signal_15, QMetaData::Public },
	{ "rightButtonPressed(QListBoxItem*,const QPoint&)", &signal_16, QMetaData::Public },
	{ "mouseButtonPressed(int,QListBoxItem*,const QPoint&)", &signal_17, QMetaData::Public },
	{ "mouseButtonClicked(int,QListBoxItem*,const QPoint&)", &signal_18, QMetaData::Public },
	{ "contextMenuRequested(QListBoxItem*,const QPoint&)", &signal_19, QMetaData::Public },
	{ "onItem(QListBoxItem*)", &signal_20, QMetaData::Public },
	{ "onViewport()", &signal_21, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[13] = {
 	{ "uint","count", 0x11000001, &QListBox::metaObj, 0, -1 },
	{ "int","numItemsVisible", 0x10000001, &QListBox::metaObj, 0, -1 },
	{ "int","currentItem", 0x10000103, &QListBox::metaObj, 0, -1 },
	{ "QString","currentText", 0x3000001, &QListBox::metaObj, 0, -1 },
	{ "int","topItem", 0x10001103, &QListBox::metaObj, 0, -1 },
	{ "SelectionMode","selectionMode", 0x0107, &QListBox::metaObj, &enum_tbl[0], -1 },
	{ "bool","multiSelection", 0x12001103, &QListBox::metaObj, 0, -1 },
	{ "LayoutMode","columnMode", 0x0107, &QListBox::metaObj, &enum_tbl[1], -1 },
	{ "LayoutMode","rowMode", 0x0107, &QListBox::metaObj, &enum_tbl[1], -1 },
	{ "int","numColumns", 0x10000001, &QListBox::metaObj, 0, -1 },
	{ "int","numRows", 0x10000001, &QListBox::metaObj, 0, -1 },
	{ "bool","variableWidth", 0x12000103, &QListBox::metaObj, 0, -1 },
	{ "bool","variableHeight", 0x12000103, &QListBox::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QListBox", parentObject,
	slot_tbl, 9,
	signal_tbl, 22,
#ifndef QT_NO_PROPERTIES
	props_tbl, 13,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QListBox.setMetaObject( metaObj );
    return metaObj;
}

void* QListBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QListBox" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

// SIGNAL highlighted
void QListBox::highlighted( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL selected
void QListBox::selected( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL highlighted
void QListBox::highlighted( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL selected
void QListBox::selected( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 3, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL highlighted
void QListBox::highlighted( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL selected
void QListBox::selected( QListBoxItem* t0 )
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

// SIGNAL selectionChanged
void QListBox::selectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 6 );
}

// SIGNAL selectionChanged
void QListBox::selectionChanged( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL currentChanged
void QListBox::currentChanged( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL clicked
void QListBox::clicked( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 9 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL clicked
void QListBox::clicked( QListBoxItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 10 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL pressed
void QListBox::pressed( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 11 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL pressed
void QListBox::pressed( QListBoxItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 12 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL doubleClicked
void QListBox::doubleClicked( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 13 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL returnPressed
void QListBox::returnPressed( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 14 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL rightButtonClicked
void QListBox::rightButtonClicked( QListBoxItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 15 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL rightButtonPressed
void QListBox::rightButtonPressed( QListBoxItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 16 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL mouseButtonPressed
void QListBox::mouseButtonPressed( int t0, QListBoxItem* t1, const QPoint& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 17 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_varptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL mouseButtonClicked
void QListBox::mouseButtonClicked( int t0, QListBoxItem* t1, const QPoint& t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 18 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_ptr.set(o+2,t1);
    static_QUType_varptr.set(o+3,&t2);
    activate_signal( clist, o );
}

// SIGNAL contextMenuRequested
void QListBox::contextMenuRequested( QListBoxItem* t0, const QPoint& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 19 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_ptr.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

// SIGNAL onItem
void QListBox::onItem( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 20 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL onViewport
void QListBox::onViewport()
{
    activate_signal( staticMetaObject()->signalOffset() + 21 );
}

bool QListBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: clear(); break;
    case 1: ensureCurrentVisible(); break;
    case 2: clearSelection(); break;
    case 3: selectAll((bool)static_QUType_bool.get(_o+1)); break;
    case 4: invertSelection(); break;
    case 5: clearInputString(); break;
    case 6: refreshSlot(); break;
    case 7: doAutoScroll(); break;
    case 8: adjustItems(); break;
    default:
	return QScrollView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QListBox::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: highlighted((int)static_QUType_int.get(_o+1)); break;
    case 1: selected((int)static_QUType_int.get(_o+1)); break;
    case 2: highlighted((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: selected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: highlighted((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: selected((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: selectionChanged(); break;
    case 7: selectionChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 8: currentChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 9: clicked((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 10: clicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 11: pressed((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 12: pressed((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 13: doubleClicked((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 14: returnPressed((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 15: rightButtonClicked((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 16: rightButtonPressed((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 17: mouseButtonPressed((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 18: mouseButtonClicked((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 19: contextMenuRequested((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 20: onItem((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 21: onViewport(); break;
    default:
	return QScrollView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QListBox::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->count() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->numItemsVisible() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setCurrentItem(v->asInt()); break;
	case 1: *v = QVariant( this->currentItem() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( this->currentText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setTopItem(v->asInt()); break;
	case 1: *v = QVariant( this->topItem() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setSelectionMode((SelectionMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->selectionMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setMultiSelection(v->asBool()); break;
	case 1: *v = QVariant( this->isMultiSelection(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setColumnMode((LayoutMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->columnMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setRowMode((LayoutMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->rowMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 1: *v = QVariant( this->numColumns() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 1: *v = QVariant( this->numRows() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 11: switch( f ) {
	case 0: setVariableWidth(v->asBool()); break;
	case 1: *v = QVariant( this->variableWidth(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 12: switch( f ) {
	case 0: setVariableHeight(v->asBool()); break;
	case 1: *v = QVariant( this->variableHeight(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QScrollView::qt_property( id, f, v );
    }
    return TRUE;
}

bool QListBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
