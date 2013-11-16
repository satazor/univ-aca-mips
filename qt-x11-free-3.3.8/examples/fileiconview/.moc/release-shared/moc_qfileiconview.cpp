/****************************************************************************
** QtFileIconDrag meta object code from reading C++ file 'qfileiconview.h'
**
** Created: Wed Oct 9 11:08:57 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qfileiconview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QtFileIconDrag::className() const
{
    return "QtFileIconDrag";
}

QMetaObject *QtFileIconDrag::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QtFileIconDrag( "QtFileIconDrag", &QtFileIconDrag::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QtFileIconDrag::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QtFileIconDrag", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QtFileIconDrag::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QtFileIconDrag", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QtFileIconDrag::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QIconDrag::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QtFileIconDrag", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QtFileIconDrag.setMetaObject( metaObj );
    return metaObj;
}

void* QtFileIconDrag::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QtFileIconDrag" ) )
	return this;
    return QIconDrag::qt_cast( clname );
}

bool QtFileIconDrag::qt_invoke( int _id, QUObject* _o )
{
    return QIconDrag::qt_invoke(_id,_o);
}

bool QtFileIconDrag::qt_emit( int _id, QUObject* _o )
{
    return QIconDrag::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QtFileIconDrag::qt_property( int id, int f, QVariant* v)
{
    return QIconDrag::qt_property( id, f, v);
}

bool QtFileIconDrag::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QtFileIconView::className() const
{
    return "QtFileIconView";
}

QMetaObject *QtFileIconView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QtFileIconView( "QtFileIconView", &QtFileIconView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QtFileIconView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QtFileIconView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QtFileIconView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QtFileIconView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QtFileIconView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QIconView::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "dir", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setDirectory", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "dir", &static_QUType_ptr, "QDir", QUParameter::In }
    };
    static const QUMethod slot_1 = {"setDirectory", 1, param_slot_1 };
    static const QUMethod slot_2 = {"newDirectory", 0, 0 };
    static const QUMethod slot_3 = {"currentDir", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "i", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"itemDoubleClicked", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "e", &static_QUType_ptr, "QDropEvent", QUParameter::In },
	{ 0, &static_QUType_ptr, "QValueList<QIconDragItem>", QUParameter::In }
    };
    static const QUMethod slot_5 = {"slotDropped", 2, param_slot_5 };
    static const QUMethod slot_6 = {"viewLarge", 0, 0 };
    static const QUMethod slot_7 = {"viewSmall", 0, 0 };
    static const QUMethod slot_8 = {"viewBottom", 0, 0 };
    static const QUMethod slot_9 = {"viewRight", 0, 0 };
    static const QUMethod slot_10 = {"flowEast", 0, 0 };
    static const QUMethod slot_11 = {"flowSouth", 0, 0 };
    static const QUMethod slot_12 = {"itemTextTruncate", 0, 0 };
    static const QUMethod slot_13 = {"itemTextWordWrap", 0, 0 };
    static const QUMethod slot_14 = {"sortAscending", 0, 0 };
    static const QUMethod slot_15 = {"sortDescending", 0, 0 };
    static const QUMethod slot_16 = {"arrangeItemsInGrid", 0, 0 };
    static const QUParameter param_slot_17[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_17 = {"slotRightPressed", 1, param_slot_17 };
    static const QUMethod slot_18 = {"openFolder", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setDirectory(const QString&)", &slot_0, QMetaData::Public },
	{ "setDirectory(const QDir&)", &slot_1, QMetaData::Public },
	{ "newDirectory()", &slot_2, QMetaData::Public },
	{ "currentDir()", &slot_3, QMetaData::Public },
	{ "itemDoubleClicked(QIconViewItem*)", &slot_4, QMetaData::Protected },
	{ "slotDropped(QDropEvent*,const QValueList<QIconDragItem>&)", &slot_5, QMetaData::Protected },
	{ "viewLarge()", &slot_6, QMetaData::Protected },
	{ "viewSmall()", &slot_7, QMetaData::Protected },
	{ "viewBottom()", &slot_8, QMetaData::Protected },
	{ "viewRight()", &slot_9, QMetaData::Protected },
	{ "flowEast()", &slot_10, QMetaData::Protected },
	{ "flowSouth()", &slot_11, QMetaData::Protected },
	{ "itemTextTruncate()", &slot_12, QMetaData::Protected },
	{ "itemTextWordWrap()", &slot_13, QMetaData::Protected },
	{ "sortAscending()", &slot_14, QMetaData::Protected },
	{ "sortDescending()", &slot_15, QMetaData::Protected },
	{ "arrangeItemsInGrid()", &slot_16, QMetaData::Protected },
	{ "slotRightPressed(QIconViewItem*)", &slot_17, QMetaData::Protected },
	{ "openFolder()", &slot_18, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"directoryChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "dirs", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"startReadDir", 1, param_signal_1 };
    static const QUMethod signal_2 = {"readNextDir", 0, 0 };
    static const QUMethod signal_3 = {"readDirDone", 0, 0 };
    static const QUMethod signal_4 = {"enableUp", 0, 0 };
    static const QUMethod signal_5 = {"disableUp", 0, 0 };
    static const QUMethod signal_6 = {"enableMkdir", 0, 0 };
    static const QUMethod signal_7 = {"disableMkdir", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "directoryChanged(const QString&)", &signal_0, QMetaData::Public },
	{ "startReadDir(int)", &signal_1, QMetaData::Public },
	{ "readNextDir()", &signal_2, QMetaData::Public },
	{ "readDirDone()", &signal_3, QMetaData::Public },
	{ "enableUp()", &signal_4, QMetaData::Public },
	{ "disableUp()", &signal_5, QMetaData::Public },
	{ "enableMkdir()", &signal_6, QMetaData::Public },
	{ "disableMkdir()", &signal_7, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QtFileIconView", parentObject,
	slot_tbl, 19,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QtFileIconView.setMetaObject( metaObj );
    return metaObj;
}

void* QtFileIconView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QtFileIconView" ) )
	return this;
    return QIconView::qt_cast( clname );
}

// SIGNAL directoryChanged
void QtFileIconView::directoryChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL startReadDir
void QtFileIconView::startReadDir( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL readNextDir
void QtFileIconView::readNextDir()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL readDirDone
void QtFileIconView::readDirDone()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL enableUp
void QtFileIconView::enableUp()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

// SIGNAL disableUp
void QtFileIconView::disableUp()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

// SIGNAL enableMkdir
void QtFileIconView::enableMkdir()
{
    activate_signal( staticMetaObject()->signalOffset() + 6 );
}

// SIGNAL disableMkdir
void QtFileIconView::disableMkdir()
{
    activate_signal( staticMetaObject()->signalOffset() + 7 );
}

bool QtFileIconView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setDirectory((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: setDirectory((const QDir&)*((const QDir*)static_QUType_ptr.get(_o+1))); break;
    case 2: newDirectory(); break;
    case 3: currentDir(); break;
    case 4: itemDoubleClicked((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: slotDropped((QDropEvent*)static_QUType_ptr.get(_o+1),(const QValueList<QIconDragItem>&)*((const QValueList<QIconDragItem>*)static_QUType_ptr.get(_o+2))); break;
    case 6: viewLarge(); break;
    case 7: viewSmall(); break;
    case 8: viewBottom(); break;
    case 9: viewRight(); break;
    case 10: flowEast(); break;
    case 11: flowSouth(); break;
    case 12: itemTextTruncate(); break;
    case 13: itemTextWordWrap(); break;
    case 14: sortAscending(); break;
    case 15: sortDescending(); break;
    case 16: arrangeItemsInGrid(); break;
    case 17: slotRightPressed((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 18: openFolder(); break;
    default:
	return QIconView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QtFileIconView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: directoryChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: startReadDir((int)static_QUType_int.get(_o+1)); break;
    case 2: readNextDir(); break;
    case 3: readDirDone(); break;
    case 4: enableUp(); break;
    case 5: disableUp(); break;
    case 6: enableMkdir(); break;
    case 7: disableMkdir(); break;
    default:
	return QIconView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QtFileIconView::qt_property( int id, int f, QVariant* v)
{
    return QIconView::qt_property( id, f, v);
}

bool QtFileIconView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
