/****************************************************************************
** QWidget meta object code from reading C++ file 'qwidget.h'
**
** Created: Wed Oct 9 10:52:36 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QWidget::className() const
{
    return "QWidget";
}

QMetaObject *QWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QWidget( "QWidget", &QWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "NoFocus",  (int) QWidget::NoFocus },
	{ "TabFocus",  (int) QWidget::TabFocus },
	{ "ClickFocus",  (int) QWidget::ClickFocus },
	{ "StrongFocus",  (int) QWidget::StrongFocus },
	{ "WheelFocus",  (int) QWidget::WheelFocus }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "WidgetOrigin",  (int) QWidget::WidgetOrigin },
	{ "ParentOrigin",  (int) QWidget::ParentOrigin },
	{ "WindowOrigin",  (int) QWidget::WindowOrigin },
	{ "AncestorOrigin",  (int) QWidget::AncestorOrigin }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "FocusPolicy", 5, enum_0, FALSE },
	{ "BackgroundOrigin", 4, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setEnabled", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setDisabled", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setCaption", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_varptr, "\x06", QUParameter::In }
    };
    static const QUMethod slot_3 = {"setIcon", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setIconText", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setMouseTracking", 1, param_slot_5 };
    static const QUMethod slot_6 = {"setFocus", 0, 0 };
    static const QUMethod slot_7 = {"clearFocus", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"setUpdatesEnabled", 1, param_slot_8 };
    static const QUMethod slot_9 = {"update", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In },
	{ "w", &static_QUType_int, 0, QUParameter::In },
	{ "h", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"update", 4, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_varptr, "\x08", QUParameter::In }
    };
    static const QUMethod slot_11 = {"update", 1, param_slot_11 };
    static const QUMethod slot_12 = {"repaint", 0, 0 };
    static const QUParameter param_slot_13[] = {
	{ "erase", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"repaint", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In },
	{ "w", &static_QUType_int, 0, QUParameter::In },
	{ "h", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"repaint", 4, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In },
	{ "w", &static_QUType_int, 0, QUParameter::In },
	{ "h", &static_QUType_int, 0, QUParameter::In },
	{ "erase", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"repaint", 5, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_varptr, "\x08", QUParameter::In }
    };
    static const QUMethod slot_16 = {"repaint", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ 0, &static_QUType_varptr, "\x08", QUParameter::In },
	{ "erase", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"repaint", 2, param_slot_17 };
    static const QUParameter param_slot_18[] = {
	{ 0, &static_QUType_varptr, "\x16", QUParameter::In }
    };
    static const QUMethod slot_18 = {"repaint", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ 0, &static_QUType_varptr, "\x16", QUParameter::In },
	{ "erase", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"repaint", 2, param_slot_19 };
    static const QUMethod slot_20 = {"show", 0, 0 };
    static const QUMethod slot_21 = {"hide", 0, 0 };
    static const QUParameter param_slot_22[] = {
	{ "show", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"setShown", 1, param_slot_22 };
    static const QUParameter param_slot_23[] = {
	{ "hide", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_23 = {"setHidden", 1, param_slot_23 };
    static const QUMethod slot_24 = {"iconify", 0, 0 };
    static const QUMethod slot_25 = {"showMinimized", 0, 0 };
    static const QUMethod slot_26 = {"showMaximized", 0, 0 };
    static const QUMethod slot_27 = {"showFullScreen", 0, 0 };
    static const QUMethod slot_28 = {"showNormal", 0, 0 };
    static const QUMethod slot_29 = {"polish", 0, 0 };
    static const QUMethod slot_30 = {"constPolish", 0, 0 };
    static const QUParameter param_slot_31[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_31 = {"close", 1, param_slot_31 };
    static const QUMethod slot_32 = {"raise", 0, 0 };
    static const QUMethod slot_33 = {"lower", 0, 0 };
    static const QUParameter param_slot_34[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_34 = {"stackUnder", 1, param_slot_34 };
    static const QUParameter param_slot_35[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_35 = {"move", 2, param_slot_35 };
    static const QUParameter param_slot_36[] = {
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_36 = {"move", 1, param_slot_36 };
    static const QUParameter param_slot_37[] = {
	{ "w", &static_QUType_int, 0, QUParameter::In },
	{ "h", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_37 = {"resize", 2, param_slot_37 };
    static const QUParameter param_slot_38[] = {
	{ 0, &static_QUType_varptr, "\x09", QUParameter::In }
    };
    static const QUMethod slot_38 = {"resize", 1, param_slot_38 };
    static const QUParameter param_slot_39[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In },
	{ "w", &static_QUType_int, 0, QUParameter::In },
	{ "h", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_39 = {"setGeometry", 4, param_slot_39 };
    static const QUParameter param_slot_40[] = {
	{ 0, &static_QUType_varptr, "\x08", QUParameter::In }
    };
    static const QUMethod slot_40 = {"setGeometry", 1, param_slot_40 };
    static const QUMethod slot_41 = {"adjustSize", 0, 0 };
    static const QUMethod slot_42 = {"focusProxyDestroyed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setEnabled(bool)", &slot_0, QMetaData::Public },
	{ "setDisabled(bool)", &slot_1, QMetaData::Public },
	{ "setCaption(const QString&)", &slot_2, QMetaData::Public },
	{ "setIcon(const QPixmap&)", &slot_3, QMetaData::Public },
	{ "setIconText(const QString&)", &slot_4, QMetaData::Public },
	{ "setMouseTracking(bool)", &slot_5, QMetaData::Public },
	{ "setFocus()", &slot_6, QMetaData::Public },
	{ "clearFocus()", &slot_7, QMetaData::Public },
	{ "setUpdatesEnabled(bool)", &slot_8, QMetaData::Public },
	{ "update()", &slot_9, QMetaData::Public },
	{ "update(int,int,int,int)", &slot_10, QMetaData::Public },
	{ "update(const QRect&)", &slot_11, QMetaData::Public },
	{ "repaint()", &slot_12, QMetaData::Public },
	{ "repaint(bool)", &slot_13, QMetaData::Public },
	{ "repaint(int,int,int,int)", &slot_14, QMetaData::Public },
	{ "repaint(int,int,int,int,bool)", &slot_15, QMetaData::Public },
	{ "repaint(const QRect&)", &slot_16, QMetaData::Public },
	{ "repaint(const QRect&,bool)", &slot_17, QMetaData::Public },
	{ "repaint(const QRegion&)", &slot_18, QMetaData::Public },
	{ "repaint(const QRegion&,bool)", &slot_19, QMetaData::Public },
	{ "show()", &slot_20, QMetaData::Public },
	{ "hide()", &slot_21, QMetaData::Public },
	{ "setShown(bool)", &slot_22, QMetaData::Public },
	{ "setHidden(bool)", &slot_23, QMetaData::Public },
	{ "iconify()", &slot_24, QMetaData::Public },
	{ "showMinimized()", &slot_25, QMetaData::Public },
	{ "showMaximized()", &slot_26, QMetaData::Public },
	{ "showFullScreen()", &slot_27, QMetaData::Public },
	{ "showNormal()", &slot_28, QMetaData::Public },
	{ "polish()", &slot_29, QMetaData::Public },
	{ "constPolish()", &slot_30, QMetaData::Public },
	{ "close()", &slot_31, QMetaData::Public },
	{ "raise()", &slot_32, QMetaData::Public },
	{ "lower()", &slot_33, QMetaData::Public },
	{ "stackUnder(QWidget*)", &slot_34, QMetaData::Public },
	{ "move(int,int)", &slot_35, QMetaData::Public },
	{ "move(const QPoint&)", &slot_36, QMetaData::Public },
	{ "resize(int,int)", &slot_37, QMetaData::Public },
	{ "resize(const QSize&)", &slot_38, QMetaData::Public },
	{ "setGeometry(int,int,int,int)", &slot_39, QMetaData::Public },
	{ "setGeometry(const QRect&)", &slot_40, QMetaData::Public },
	{ "adjustSize()", &slot_41, QMetaData::Public },
	{ "focusProxyDestroyed()", &slot_42, QMetaData::Private }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[65] = {
 	{ "bool","isTopLevel", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","isDialog", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","isModal", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","isPopup", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","isDesktop", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","enabled", 0x12000103, &QWidget::metaObj, 0, -1 },
	{ "QRect","geometry", 0x8000103, &QWidget::metaObj, 0, -1 },
	{ "QRect","frameGeometry", 0x8000001, &QWidget::metaObj, 0, -1 },
	{ "int","x", 0x10000001, &QWidget::metaObj, 0, -1 },
	{ "int","y", 0x10000001, &QWidget::metaObj, 0, -1 },
	{ "QPoint","pos", 0xe011003, &QWidget::metaObj, 0, -1 },
	{ "QSize","frameSize", 0x9000001, &QWidget::metaObj, 0, -1 },
	{ "QSize","size", 0x9011003, &QWidget::metaObj, 0, -1 },
	{ "int","width", 0x10000001, &QWidget::metaObj, 0, -1 },
	{ "int","height", 0x10000001, &QWidget::metaObj, 0, -1 },
	{ "QRect","rect", 0x8000001, &QWidget::metaObj, 0, -1 },
	{ "QRect","childrenRect", 0x8000001, &QWidget::metaObj, 0, -1 },
	{ "QRegion","childrenRegion", 0x16000001, &QWidget::metaObj, 0, -1 },
	{ "QSizePolicy","sizePolicy", 0x19000103, &QWidget::metaObj, 0, -1 },
	{ "QSize","minimumSize", 0x9000103, &QWidget::metaObj, 0, -1 },
	{ "QSize","maximumSize", 0x9000103, &QWidget::metaObj, 0, -1 },
	{ "int","minimumWidth", 0x10011103, &QWidget::metaObj, 0, -1 },
	{ "int","minimumHeight", 0x10011103, &QWidget::metaObj, 0, -1 },
	{ "int","maximumWidth", 0x10011103, &QWidget::metaObj, 0, -1 },
	{ "int","maximumHeight", 0x10011103, &QWidget::metaObj, 0, -1 },
	{ "QSize","sizeIncrement", 0x9000103, &QWidget::metaObj, 0, -1 },
	{ "QSize","baseSize", 0x9000103, &QWidget::metaObj, 0, -1 },
	{ "BackgroundMode","backgroundMode", 0x1107, &QWidget::metaObj, 0, -1 },
	{ "QColor","paletteForegroundColor", 0xa000103, &QWidget::metaObj, 0, -1 },
	{ "QColor","paletteBackgroundColor", 0xa000103, &QWidget::metaObj, 0, -1 },
	{ "QPixmap","paletteBackgroundPixmap", 0x6000103, &QWidget::metaObj, 0, -1 },
	{ "QBrush","backgroundBrush", 0x7000001, &QWidget::metaObj, 0, -1 },
	{ "QColorGroup","colorGroup", 0xc000001, &QWidget::metaObj, 0, -1 },
	{ "QPalette","palette", 0xb000103, &QWidget::metaObj, 0, -1 },
	{ "BackgroundOrigin","backgroundOrigin", 0x0107, &QWidget::metaObj, &enum_tbl[1], -1 },
	{ "bool","ownPalette", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "QFont","font", 0x5000103, &QWidget::metaObj, 0, -1 },
	{ "bool","ownFont", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "QCursor","cursor", 0x18000103, &QWidget::metaObj, 0, -1 },
	{ "bool","ownCursor", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "QString","caption", 0x3000103, &QWidget::metaObj, 0, -1 },
	{ "QPixmap","icon", 0x6000103, &QWidget::metaObj, 0, -1 },
	{ "QString","iconText", 0x3000103, &QWidget::metaObj, 0, -1 },
	{ "bool","mouseTracking", 0x12000103, &QWidget::metaObj, 0, -1 },
	{ "bool","underMouse", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","isActiveWindow", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","focusEnabled", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "FocusPolicy","focusPolicy", 0x0107, &QWidget::metaObj, &enum_tbl[0], -1 },
	{ "bool","focus", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","updatesEnabled", 0x12001103, &QWidget::metaObj, 0, -1 },
	{ "bool","visible", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "QRect","visibleRect", 0x8000001, &QWidget::metaObj, 0, -1 },
	{ "bool","hidden", 0x12005103, &QWidget::metaObj, 0, -1 },
	{ "bool","shown", 0x12005103, &QWidget::metaObj, 0, -1 },
	{ "bool","minimized", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","maximized", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","fullScreen", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "QSize","sizeHint", 0x9000001, &QWidget::metaObj, 0, -1 },
	{ "QSize","minimumSizeHint", 0x9000001, &QWidget::metaObj, 0, -1 },
	{ "QRect","microFocusHint", 0x8000001, &QWidget::metaObj, 0, -1 },
	{ "bool","acceptDrops", 0x12000103, &QWidget::metaObj, 0, -1 },
	{ "bool","autoMask", 0x12005103, &QWidget::metaObj, 0, -1 },
	{ "bool","customWhatsThis", 0x12000001, &QWidget::metaObj, 0, -1 },
	{ "bool","inputMethodEnabled", 0x12005103, &QWidget::metaObj, 0, -1 },
	{ "double","windowOpacity", 0x13001103, &QWidget::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QWidget", parentObject,
	slot_tbl, 43,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 65,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QWidget.setMetaObject( metaObj );
    return metaObj;
}

void* QWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QWidget" ) )
	return this;
    if ( !qstrcmp( clname, "QPaintDevice" ) )
	return (QPaintDevice*)this;
    return QObject::qt_cast( clname );
}

bool QWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 1: setDisabled((bool)static_QUType_bool.get(_o+1)); break;
    case 2: setCaption((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: setIcon((const QPixmap&)*((const QPixmap*)static_QUType_ptr.get(_o+1))); break;
    case 4: setIconText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: setMouseTracking((bool)static_QUType_bool.get(_o+1)); break;
    case 6: setFocus(); break;
    case 7: clearFocus(); break;
    case 8: setUpdatesEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 9: update(); break;
    case 10: update((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4)); break;
    case 11: update((const QRect&)*((const QRect*)static_QUType_ptr.get(_o+1))); break;
    case 12: repaint(); break;
    case 13: repaint((bool)static_QUType_bool.get(_o+1)); break;
    case 14: repaint((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4)); break;
    case 15: repaint((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4),(bool)static_QUType_bool.get(_o+5)); break;
    case 16: repaint((const QRect&)*((const QRect*)static_QUType_ptr.get(_o+1))); break;
    case 17: repaint((const QRect&)*((const QRect*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 18: repaint((const QRegion&)*((const QRegion*)static_QUType_ptr.get(_o+1))); break;
    case 19: repaint((const QRegion&)*((const QRegion*)static_QUType_ptr.get(_o+1)),(bool)static_QUType_bool.get(_o+2)); break;
    case 20: show(); break;
    case 21: hide(); break;
    case 22: setShown((bool)static_QUType_bool.get(_o+1)); break;
    case 23: setHidden((bool)static_QUType_bool.get(_o+1)); break;
    case 24: iconify(); break;
    case 25: showMinimized(); break;
    case 26: showMaximized(); break;
    case 27: showFullScreen(); break;
    case 28: showNormal(); break;
    case 29: polish(); break;
    case 30: constPolish(); break;
    case 31: static_QUType_bool.set(_o,close()); break;
    case 32: raise(); break;
    case 33: lower(); break;
    case 34: stackUnder((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 35: move((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 36: move((const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+1))); break;
    case 37: resize((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 38: resize((const QSize&)*((const QSize*)static_QUType_ptr.get(_o+1))); break;
    case 39: setGeometry((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4)); break;
    case 40: setGeometry((const QRect&)*((const QRect*)static_QUType_ptr.get(_o+1))); break;
    case 41: adjustSize(); break;
    case 42: focusProxyDestroyed(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QWidget::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QWidget::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->isTopLevel(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->isDialog(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->isModal(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( this->isPopup(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 1: *v = QVariant( this->isDesktop(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setGeometry(v->asRect()); break;
	case 1: *v = QVariant( this->geometry() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 1: *v = QVariant( this->frameGeometry() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 1: *v = QVariant( this->x() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 1: *v = QVariant( this->y() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 0: move(v->asPoint()); break;
	case 1: *v = QVariant( this->pos() ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 11: switch( f ) {
	case 1: *v = QVariant( this->frameSize() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 12: switch( f ) {
	case 0: resize(v->asSize()); break;
	case 1: *v = QVariant( this->size() ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 13: switch( f ) {
	case 1: *v = QVariant( this->width() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 14: switch( f ) {
	case 1: *v = QVariant( this->height() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 15: switch( f ) {
	case 1: *v = QVariant( this->rect() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 16: switch( f ) {
	case 1: *v = QVariant( this->childrenRect() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 17: switch( f ) {
	case 1: *v = QVariant( this->childrenRegion() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 18: switch( f ) {
	case 0: setSizePolicy(v->asSizePolicy()); break;
	case 1: *v = QVariant( this->sizePolicy() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 19: switch( f ) {
	case 0: setMinimumSize(v->asSize()); break;
	case 1: *v = QVariant( this->minimumSize() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 20: switch( f ) {
	case 0: setMaximumSize(v->asSize()); break;
	case 1: *v = QVariant( this->maximumSize() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 21: switch( f ) {
	case 0: setMinimumWidth(v->asInt()); break;
	case 1: *v = QVariant( this->minimumWidth() ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 22: switch( f ) {
	case 0: setMinimumHeight(v->asInt()); break;
	case 1: *v = QVariant( this->minimumHeight() ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 23: switch( f ) {
	case 0: setMaximumWidth(v->asInt()); break;
	case 1: *v = QVariant( this->maximumWidth() ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 24: switch( f ) {
	case 0: setMaximumHeight(v->asInt()); break;
	case 1: *v = QVariant( this->maximumHeight() ); break;
	case 4: break;
	default: return FALSE;
    } break;
    case 25: switch( f ) {
	case 0: setSizeIncrement(v->asSize()); break;
	case 1: *v = QVariant( this->sizeIncrement() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 26: switch( f ) {
	case 0: setBaseSize(v->asSize()); break;
	case 1: *v = QVariant( this->baseSize() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 27: switch( f ) {
	case 0: setBackgroundMode((BackgroundMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->backgroundMode() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 28: switch( f ) {
	case 0: setPaletteForegroundColor(v->asColor()); break;
	case 1: *v = QVariant( this->paletteForegroundColor() ); break;
	case 2: this->unsetPalette(); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 29: switch( f ) {
	case 0: setPaletteBackgroundColor(v->asColor()); break;
	case 1: *v = QVariant( this->paletteBackgroundColor() ); break;
	case 2: this->unsetPalette(); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 30: switch( f ) {
	case 0: setPaletteBackgroundPixmap(v->asPixmap()); break;
	case 1: if ( this->paletteBackgroundPixmap() ) *v = QVariant( *paletteBackgroundPixmap() ); break;
	case 2: this->unsetPalette(); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 31: switch( f ) {
	case 1: *v = QVariant( this->backgroundBrush() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 32: switch( f ) {
	case 1: *v = QVariant( this->colorGroup() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 33: switch( f ) {
	case 0: setPalette(v->asPalette()); break;
	case 1: *v = QVariant( this->palette() ); break;
	case 2: this->unsetPalette(); break;
	case 5: return this->ownPalette();
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 34: switch( f ) {
	case 0: setBackgroundOrigin((BackgroundOrigin&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->backgroundOrigin() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 35: switch( f ) {
	case 1: *v = QVariant( this->ownPalette(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 36: switch( f ) {
	case 0: setFont(v->asFont()); break;
	case 1: *v = QVariant( this->font() ); break;
	case 2: this->unsetFont(); break;
	case 5: return this->ownFont();
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 37: switch( f ) {
	case 1: *v = QVariant( this->ownFont(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 38: switch( f ) {
	case 0: setCursor(v->asCursor()); break;
	case 1: *v = QVariant( this->cursor() ); break;
	case 2: this->unsetCursor(); break;
	case 5: return this->ownCursor();
	case 3: case 4: break;
	default: return FALSE;
    } break;
    case 39: switch( f ) {
	case 1: *v = QVariant( this->ownCursor(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 40: switch( f ) {
	case 0: setCaption(v->asString()); break;
	case 1: *v = QVariant( this->caption() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 41: switch( f ) {
	case 0: setIcon(v->asPixmap()); break;
	case 1: if ( this->icon() ) *v = QVariant( *icon() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 42: switch( f ) {
	case 0: setIconText(v->asString()); break;
	case 1: *v = QVariant( this->iconText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 43: switch( f ) {
	case 0: setMouseTracking(v->asBool()); break;
	case 1: *v = QVariant( this->hasMouseTracking(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 44: switch( f ) {
	case 1: *v = QVariant( this->hasMouse(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 45: switch( f ) {
	case 1: *v = QVariant( this->isActiveWindow(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 46: switch( f ) {
	case 1: *v = QVariant( this->isFocusEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 47: switch( f ) {
	case 0: setFocusPolicy((FocusPolicy&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->focusPolicy() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 48: switch( f ) {
	case 1: *v = QVariant( this->hasFocus(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 49: switch( f ) {
	case 0: setUpdatesEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isUpdatesEnabled(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 50: switch( f ) {
	case 1: *v = QVariant( this->isVisible(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 51: switch( f ) {
	case 1: *v = QVariant( this->visibleRect() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 52: switch( f ) {
	case 0: setHidden(v->asBool()); break;
	case 1: *v = QVariant( this->isHidden(), 0 ); break;
	case 5: break;
	default: return FALSE;
    } break;
    case 53: switch( f ) {
	case 0: setShown(v->asBool()); break;
	case 1: *v = QVariant( this->isShown(), 0 ); break;
	case 5: break;
	default: return FALSE;
    } break;
    case 54: switch( f ) {
	case 1: *v = QVariant( this->isMinimized(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 55: switch( f ) {
	case 1: *v = QVariant( this->isMaximized(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 56: switch( f ) {
	case 1: *v = QVariant( this->isFullScreen(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 57: switch( f ) {
	case 1: *v = QVariant( this->sizeHint() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 58: switch( f ) {
	case 1: *v = QVariant( this->minimumSizeHint() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 59: switch( f ) {
	case 1: *v = QVariant( this->microFocusHint() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 60: switch( f ) {
	case 0: setAcceptDrops(v->asBool()); break;
	case 1: *v = QVariant( this->acceptDrops(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 61: switch( f ) {
	case 0: setAutoMask(v->asBool()); break;
	case 1: *v = QVariant( this->autoMask(), 0 ); break;
	case 5: break;
	default: return FALSE;
    } break;
    case 62: switch( f ) {
	case 1: *v = QVariant( this->customWhatsThis(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 63: switch( f ) {
	case 0: setInputMethodEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isInputMethodEnabled(), 0 ); break;
	case 5: break;
	default: return FALSE;
    } break;
    case 64: switch( f ) {
	case 0: setWindowOpacity(v->asDouble()); break;
	case 1: *v = QVariant( this->windowOpacity() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QObject::qt_property( id, f, v );
    }
    return TRUE;
}

bool QWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
