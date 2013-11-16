/****************************************************************************
** QTextEdit meta object code from reading C++ file 'qtextedit.h'
**
** Created: Wed Oct 9 10:52:59 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtextedit.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QTextEdit::className() const
{
    return "QTextEdit";
}

QMetaObject *QTextEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTextEdit( "QTextEdit", &QTextEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTextEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTextEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTextEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "NoWrap",  (int) QTextEdit::NoWrap },
	{ "WidgetWidth",  (int) QTextEdit::WidgetWidth },
	{ "FixedPixelWidth",  (int) QTextEdit::FixedPixelWidth },
	{ "FixedColumnWidth",  (int) QTextEdit::FixedColumnWidth }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "AtWordBoundary",  (int) QTextEdit::AtWordBoundary },
	{ "AtWhiteSpace",  (int) QTextEdit::AtWhiteSpace },
	{ "Anywhere",  (int) QTextEdit::Anywhere },
	{ "AtWordOrDocumentBoundary",  (int) QTextEdit::AtWordOrDocumentBoundary }
    };
    static const QMetaEnum::Item enum_2[] = {
	{ "AutoNone",  (int) QTextEdit::AutoNone },
	{ "AutoBulletList",  (int) QTextEdit::AutoBulletList },
	{ "AutoAll",  (int) QTextEdit::AutoAll }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "WordWrap", 4, enum_0, FALSE },
	{ "WrapPolicy", 4, enum_1, FALSE },
	{ "AutoFormatting", 3, enum_2, TRUE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setEnabled", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "factory", &static_QUType_ptr, "QMimeSourceFactory", QUParameter::In }
    };
    static const QUMethod slot_1 = {"setMimeSourceFactory", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "styleSheet", &static_QUType_ptr, "QStyleSheet", QUParameter::In }
    };
    static const QUMethod slot_2 = {"setStyleSheet", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"scrollToAnchor", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "pap", &static_QUType_varptr, "\x07", QUParameter::In }
    };
    static const QUMethod slot_4 = {"setPaper", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setLinkUnderline", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "mode", &static_QUType_enum, 
#ifndef QT_NO_PROPERTIES
	  &enum_tbl[0]
#else
	  0
#endif // QT_NO_PROPERTIES
	  , QUParameter::In }
    };
    static const QUMethod slot_6 = {"setWordWrap", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"setWrapColumnOrWidth", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "policy", &static_QUType_enum, 
#ifndef QT_NO_PROPERTIES
	  &enum_tbl[1]
#else
	  0
#endif // QT_NO_PROPERTIES
	  , QUParameter::In }
    };
    static const QUMethod slot_8 = {"setWrapPolicy", 1, param_slot_8 };
    static const QUMethod slot_9 = {"copy", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"append", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ "txt", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"setText", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "txt", &static_QUType_QString, 0, QUParameter::In },
	{ "context", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"setText", 2, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "f", &static_QUType_ptr, "TextFormat", QUParameter::In }
    };
    static const QUMethod slot_13 = {"setTextFormat", 1, param_slot_13 };
    static const QUMethod slot_14 = {"selectAll", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ "select", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"selectAll", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "ts", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"setTabStopWidth", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "range", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"zoomIn", 1, param_slot_17 };
    static const QUMethod slot_18 = {"zoomIn", 0, 0 };
    static const QUParameter param_slot_19[] = {
	{ "range", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"zoomOut", 1, param_slot_19 };
    static const QUMethod slot_20 = {"zoomOut", 0, 0 };
    static const QUParameter param_slot_21[] = {
	{ "size", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_21 = {"zoomTo", 1, param_slot_21 };
    static const QUMethod slot_22 = {"sync", 0, 0 };
    static const QUParameter param_slot_23[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_23 = {"setReadOnly", 1, param_slot_23 };
    static const QUMethod slot_24 = {"undo", 0, 0 };
    static const QUMethod slot_25 = {"redo", 0, 0 };
    static const QUMethod slot_26 = {"cut", 0, 0 };
    static const QUMethod slot_27 = {"paste", 0, 0 };
    static const QUParameter param_slot_28[] = {
	{ "subtype", &static_QUType_varptr, "\x14", QUParameter::In }
    };
    static const QUMethod slot_28 = {"pasteSubType", 1, param_slot_28 };
    static const QUMethod slot_29 = {"clear", 0, 0 };
    static const QUMethod slot_30 = {"del", 0, 0 };
    static const QUMethod slot_31 = {"indent", 0, 0 };
    static const QUParameter param_slot_32[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_32 = {"setItalic", 1, param_slot_32 };
    static const QUParameter param_slot_33[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_33 = {"setBold", 1, param_slot_33 };
    static const QUParameter param_slot_34[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_34 = {"setUnderline", 1, param_slot_34 };
    static const QUParameter param_slot_35[] = {
	{ "f", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_35 = {"setFamily", 1, param_slot_35 };
    static const QUParameter param_slot_36[] = {
	{ "s", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_36 = {"setPointSize", 1, param_slot_36 };
    static const QUParameter param_slot_37[] = {
	{ "c", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_37 = {"setColor", 1, param_slot_37 };
    static const QUParameter param_slot_38[] = {
	{ "f", &static_QUType_varptr, "\x05", QUParameter::In }
    };
    static const QUMethod slot_38 = {"setFont", 1, param_slot_38 };
    static const QUParameter param_slot_39[] = {
	{ "a", &static_QUType_ptr, "VerticalAlignment", QUParameter::In }
    };
    static const QUMethod slot_39 = {"setVerticalAlignment", 1, param_slot_39 };
    static const QUParameter param_slot_40[] = {
	{ "a", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_40 = {"setAlignment", 1, param_slot_40 };
    static const QUParameter param_slot_41[] = {
	{ "dm", &static_QUType_ptr, "QStyleSheetItem::DisplayMode", QUParameter::In },
	{ "listStyle", &static_QUType_ptr, "QStyleSheetItem::ListStyle", QUParameter::In }
    };
    static const QUMethod slot_41 = {"setParagType", 2, param_slot_41 };
    static const QUParameter param_slot_42[] = {
	{ "parag", &static_QUType_int, 0, QUParameter::In },
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_42 = {"setCursorPosition", 2, param_slot_42 };
    static const QUParameter param_slot_43[] = {
	{ "parag_from", &static_QUType_int, 0, QUParameter::In },
	{ "index_from", &static_QUType_int, 0, QUParameter::In },
	{ "parag_to", &static_QUType_int, 0, QUParameter::In },
	{ "index_to", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_43 = {"setSelection", 4, param_slot_43 };
    static const QUParameter param_slot_44[] = {
	{ "parag_from", &static_QUType_int, 0, QUParameter::In },
	{ "index_from", &static_QUType_int, 0, QUParameter::In },
	{ "parag_to", &static_QUType_int, 0, QUParameter::In },
	{ "index_to", &static_QUType_int, 0, QUParameter::In },
	{ "selNum", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_44 = {"setSelection", 5, param_slot_44 };
    static const QUParameter param_slot_45[] = {
	{ "selNum", &static_QUType_int, 0, QUParameter::In },
	{ "back", &static_QUType_varptr, "\x0a", QUParameter::In },
	{ "invertText", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_45 = {"setSelectionAttributes", 3, param_slot_45 };
    static const QUParameter param_slot_46[] = {
	{ "m", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_46 = {"setModified", 1, param_slot_46 };
    static const QUMethod slot_47 = {"resetFormat", 0, 0 };
    static const QUParameter param_slot_48[] = {
	{ "d", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_48 = {"setUndoDepth", 1, param_slot_48 };
    static const QUParameter param_slot_49[] = {
	{ "f", &static_QUType_ptr, "QTextFormat", QUParameter::In },
	{ "flags", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_49 = {"setFormat", 2, param_slot_49 };
    static const QUMethod slot_50 = {"ensureCursorVisible", 0, 0 };
    static const QUParameter param_slot_51[] = {
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_51 = {"placeCursor", 1, param_slot_51 };
    static const QUParameter param_slot_52[] = {
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In },
	{ "c", &static_QUType_ptr, "QTextCursor", QUParameter::In }
    };
    static const QUMethod slot_52 = {"placeCursor", 2, param_slot_52 };
    static const QUParameter param_slot_53[] = {
	{ "action", &static_QUType_ptr, "CursorAction", QUParameter::In },
	{ "select", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_53 = {"moveCursor", 2, param_slot_53 };
    static const QUParameter param_slot_54[] = {
	{ "action", &static_QUType_ptr, "KeyboardAction", QUParameter::In }
    };
    static const QUMethod slot_54 = {"doKeyboardAction", 1, param_slot_54 };
    static const QUMethod slot_55 = {"removeSelectedText", 0, 0 };
    static const QUParameter param_slot_56[] = {
	{ "selNum", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_56 = {"removeSelectedText", 1, param_slot_56 };
    static const QUMethod slot_57 = {"removeSelection", 0, 0 };
    static const QUParameter param_slot_58[] = {
	{ "selNum", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_58 = {"removeSelection", 1, param_slot_58 };
    static const QUParameter param_slot_59[] = {
	{ "f", &static_QUType_varptr, "\x05", QUParameter::In }
    };
    static const QUMethod slot_59 = {"setCurrentFont", 1, param_slot_59 };
    static const QUParameter param_slot_60[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_60 = {"setOverwriteMode", 1, param_slot_60 };
    static const QUMethod slot_61 = {"scrollToBottom", 0, 0 };
    static const QUParameter param_slot_62[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_62 = {"insert", 1, param_slot_62 };
    static const QUParameter param_slot_63[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In },
	{ "insertionFlags", &static_QUType_varptr, "\x11", QUParameter::In }
    };
    static const QUMethod slot_63 = {"insert", 2, param_slot_63 };
    static const QUParameter param_slot_64[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_64 = {"insert", 2, param_slot_64 };
    static const QUParameter param_slot_65[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_65 = {"insert", 3, param_slot_65 };
    static const QUParameter param_slot_66[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_66 = {"insert", 4, param_slot_66 };
    static const QUParameter param_slot_67[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In },
	{ "para", &static_QUType_int, 0, QUParameter::In },
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_67 = {"insertAt", 3, param_slot_67 };
    static const QUParameter param_slot_68[] = {
	{ "para", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_68 = {"removeParagraph", 1, param_slot_68 };
    static const QUParameter param_slot_69[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In },
	{ "para", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_69 = {"insertParagraph", 2, param_slot_69 };
    static const QUParameter param_slot_70[] = {
	{ "para", &static_QUType_int, 0, QUParameter::In },
	{ "bg", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_70 = {"setParagraphBackgroundColor", 2, param_slot_70 };
    static const QUParameter param_slot_71[] = {
	{ "para", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_71 = {"clearParagraphBackground", 1, param_slot_71 };
    static const QUParameter param_slot_72[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_72 = {"setUndoRedoEnabled", 1, param_slot_72 };
    static const QUParameter param_slot_73[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_73 = {"setTabChangesFocus", 1, param_slot_73 };
    static const QUMethod slot_74 = {"polish", 0, 0 };
    static const QUParameter param_slot_75[] = {
	{ "numLines", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_75 = {"setMaxLogLines", 1, param_slot_75 };
    static const QUParameter param_slot_76[] = {
	{ 0, &static_QUType_int, 0, QUParameter::Out }
    };
    static const QUMethod slot_76 = {"maxLogLines", 1, param_slot_76 };
    static const QUMethod slot_77 = {"doChangeInterval", 0, 0 };
    static const QUMethod slot_78 = {"sliderReleased", 0, 0 };
    static const QUMethod slot_79 = {"formatMore", 0, 0 };
    static const QUMethod slot_80 = {"doResize", 0, 0 };
    static const QUMethod slot_81 = {"autoScrollTimerDone", 0, 0 };
    static const QUMethod slot_82 = {"blinkCursor", 0, 0 };
    static const QUMethod slot_83 = {"setModified", 0, 0 };
    static const QUMethod slot_84 = {"startDrag", 0, 0 };
    static const QUParameter param_slot_85[] = {
	{ "w", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_85 = {"documentWidthChanged", 1, param_slot_85 };
    static const QUMethod slot_86 = {"clipboardChanged", 0, 0 };
    static const QUMethod slot_87 = {"optimDoAutoScroll", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setEnabled(bool)", &slot_0, QMetaData::Public },
	{ "setMimeSourceFactory(QMimeSourceFactory*)", &slot_1, QMetaData::Public },
	{ "setStyleSheet(QStyleSheet*)", &slot_2, QMetaData::Public },
	{ "scrollToAnchor(const QString&)", &slot_3, QMetaData::Public },
	{ "setPaper(const QBrush&)", &slot_4, QMetaData::Public },
	{ "setLinkUnderline(bool)", &slot_5, QMetaData::Public },
	{ "setWordWrap(WordWrap)", &slot_6, QMetaData::Public },
	{ "setWrapColumnOrWidth(int)", &slot_7, QMetaData::Public },
	{ "setWrapPolicy(WrapPolicy)", &slot_8, QMetaData::Public },
	{ "copy()", &slot_9, QMetaData::Public },
	{ "append(const QString&)", &slot_10, QMetaData::Public },
	{ "setText(const QString&)", &slot_11, QMetaData::Public },
	{ "setText(const QString&,const QString&)", &slot_12, QMetaData::Public },
	{ "setTextFormat(TextFormat)", &slot_13, QMetaData::Public },
	{ "selectAll()", &slot_14, QMetaData::Public },
	{ "selectAll(bool)", &slot_15, QMetaData::Public },
	{ "setTabStopWidth(int)", &slot_16, QMetaData::Public },
	{ "zoomIn(int)", &slot_17, QMetaData::Public },
	{ "zoomIn()", &slot_18, QMetaData::Public },
	{ "zoomOut(int)", &slot_19, QMetaData::Public },
	{ "zoomOut()", &slot_20, QMetaData::Public },
	{ "zoomTo(int)", &slot_21, QMetaData::Public },
	{ "sync()", &slot_22, QMetaData::Public },
	{ "setReadOnly(bool)", &slot_23, QMetaData::Public },
	{ "undo()", &slot_24, QMetaData::Public },
	{ "redo()", &slot_25, QMetaData::Public },
	{ "cut()", &slot_26, QMetaData::Public },
	{ "paste()", &slot_27, QMetaData::Public },
	{ "pasteSubType(const QCString&)", &slot_28, QMetaData::Public },
	{ "clear()", &slot_29, QMetaData::Public },
	{ "del()", &slot_30, QMetaData::Public },
	{ "indent()", &slot_31, QMetaData::Public },
	{ "setItalic(bool)", &slot_32, QMetaData::Public },
	{ "setBold(bool)", &slot_33, QMetaData::Public },
	{ "setUnderline(bool)", &slot_34, QMetaData::Public },
	{ "setFamily(const QString&)", &slot_35, QMetaData::Public },
	{ "setPointSize(int)", &slot_36, QMetaData::Public },
	{ "setColor(const QColor&)", &slot_37, QMetaData::Public },
	{ "setFont(const QFont&)", &slot_38, QMetaData::Public },
	{ "setVerticalAlignment(VerticalAlignment)", &slot_39, QMetaData::Public },
	{ "setAlignment(int)", &slot_40, QMetaData::Public },
	{ "setParagType(QStyleSheetItem::DisplayMode,QStyleSheetItem::ListStyle)", &slot_41, QMetaData::Public },
	{ "setCursorPosition(int,int)", &slot_42, QMetaData::Public },
	{ "setSelection(int,int,int,int)", &slot_43, QMetaData::Public },
	{ "setSelection(int,int,int,int,int)", &slot_44, QMetaData::Public },
	{ "setSelectionAttributes(int,const QColor&,bool)", &slot_45, QMetaData::Public },
	{ "setModified(bool)", &slot_46, QMetaData::Public },
	{ "resetFormat()", &slot_47, QMetaData::Public },
	{ "setUndoDepth(int)", &slot_48, QMetaData::Public },
	{ "setFormat(QTextFormat*,int)", &slot_49, QMetaData::Public },
	{ "ensureCursorVisible()", &slot_50, QMetaData::Public },
	{ "placeCursor(const QPoint&)", &slot_51, QMetaData::Public },
	{ "placeCursor(const QPoint&,QTextCursor*)", &slot_52, QMetaData::Public },
	{ "moveCursor(CursorAction,bool)", &slot_53, QMetaData::Public },
	{ "doKeyboardAction(KeyboardAction)", &slot_54, QMetaData::Public },
	{ "removeSelectedText()", &slot_55, QMetaData::Public },
	{ "removeSelectedText(int)", &slot_56, QMetaData::Public },
	{ "removeSelection()", &slot_57, QMetaData::Public },
	{ "removeSelection(int)", &slot_58, QMetaData::Public },
	{ "setCurrentFont(const QFont&)", &slot_59, QMetaData::Public },
	{ "setOverwriteMode(bool)", &slot_60, QMetaData::Public },
	{ "scrollToBottom()", &slot_61, QMetaData::Public },
	{ "insert(const QString&)", &slot_62, QMetaData::Public },
	{ "insert(const QString&,uint)", &slot_63, QMetaData::Public },
	{ "insert(const QString&,bool)", &slot_64, QMetaData::Public },
	{ "insert(const QString&,bool,bool)", &slot_65, QMetaData::Public },
	{ "insert(const QString&,bool,bool,bool)", &slot_66, QMetaData::Public },
	{ "insertAt(const QString&,int,int)", &slot_67, QMetaData::Public },
	{ "removeParagraph(int)", &slot_68, QMetaData::Public },
	{ "insertParagraph(const QString&,int)", &slot_69, QMetaData::Public },
	{ "setParagraphBackgroundColor(int,const QColor&)", &slot_70, QMetaData::Public },
	{ "clearParagraphBackground(int)", &slot_71, QMetaData::Public },
	{ "setUndoRedoEnabled(bool)", &slot_72, QMetaData::Public },
	{ "setTabChangesFocus(bool)", &slot_73, QMetaData::Public },
	{ "polish()", &slot_74, QMetaData::Public },
	{ "setMaxLogLines(int)", &slot_75, QMetaData::Public },
	{ "maxLogLines()", &slot_76, QMetaData::Public },
	{ "doChangeInterval()", &slot_77, QMetaData::Protected },
	{ "sliderReleased()", &slot_78, QMetaData::Protected },
	{ "formatMore()", &slot_79, QMetaData::Private },
	{ "doResize()", &slot_80, QMetaData::Private },
	{ "autoScrollTimerDone()", &slot_81, QMetaData::Private },
	{ "blinkCursor()", &slot_82, QMetaData::Private },
	{ "setModified()", &slot_83, QMetaData::Private },
	{ "startDrag()", &slot_84, QMetaData::Private },
	{ "documentWidthChanged(int)", &slot_85, QMetaData::Private },
	{ "clipboardChanged()", &slot_86, QMetaData::Private },
	{ "optimDoAutoScroll()", &slot_87, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"textChanged", 0, 0 };
    static const QUMethod signal_1 = {"selectionChanged", 0, 0 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"copyAvailable", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "yes", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"undoAvailable", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "yes", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"redoAvailable", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "f", &static_QUType_varptr, "\x05", QUParameter::In }
    };
    static const QUMethod signal_5 = {"currentFontChanged", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ "c", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod signal_6 = {"currentColorChanged", 1, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "a", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_7 = {"currentAlignmentChanged", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ "a", &static_QUType_ptr, "VerticalAlignment", QUParameter::In }
    };
    static const QUMethod signal_8 = {"currentVerticalAlignmentChanged", 1, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ "c", &static_QUType_ptr, "QTextCursor", QUParameter::In }
    };
    static const QUMethod signal_9 = {"cursorPositionChanged", 1, param_signal_9 };
    static const QUParameter param_signal_10[] = {
	{ "para", &static_QUType_int, 0, QUParameter::In },
	{ "pos", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_10 = {"cursorPositionChanged", 2, param_signal_10 };
    static const QUMethod signal_11 = {"returnPressed", 0, 0 };
    static const QUParameter param_signal_12[] = {
	{ "m", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_12 = {"modificationChanged", 1, param_signal_12 };
    static const QUParameter param_signal_13[] = {
	{ "parag", &static_QUType_int, 0, QUParameter::In },
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_13 = {"clicked", 2, param_signal_13 };
    static const QUParameter param_signal_14[] = {
	{ "parag", &static_QUType_int, 0, QUParameter::In },
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_14 = {"doubleClicked", 2, param_signal_14 };
    static const QMetaData signal_tbl[] = {
	{ "textChanged()", &signal_0, QMetaData::Public },
	{ "selectionChanged()", &signal_1, QMetaData::Public },
	{ "copyAvailable(bool)", &signal_2, QMetaData::Public },
	{ "undoAvailable(bool)", &signal_3, QMetaData::Public },
	{ "redoAvailable(bool)", &signal_4, QMetaData::Public },
	{ "currentFontChanged(const QFont&)", &signal_5, QMetaData::Public },
	{ "currentColorChanged(const QColor&)", &signal_6, QMetaData::Public },
	{ "currentAlignmentChanged(int)", &signal_7, QMetaData::Public },
	{ "currentVerticalAlignmentChanged(VerticalAlignment)", &signal_8, QMetaData::Public },
	{ "cursorPositionChanged(QTextCursor*)", &signal_9, QMetaData::Public },
	{ "cursorPositionChanged(int,int)", &signal_10, QMetaData::Public },
	{ "returnPressed()", &signal_11, QMetaData::Public },
	{ "modificationChanged(bool)", &signal_12, QMetaData::Public },
	{ "clicked(int,int)", &signal_13, QMetaData::Public },
	{ "doubleClicked(int,int)", &signal_14, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[19] = {
 	{ "TextFormat","textFormat", 0x010f, &QTextEdit::metaObj, 0, -1 },
	{ "QString","text", 0x3000103, &QTextEdit::metaObj, 0, -1 },
	{ "QBrush","paper", 0x7000103, &QTextEdit::metaObj, 0, -1 },
	{ "bool","linkUnderline", 0x12000103, &QTextEdit::metaObj, 0, -1 },
	{ "QString","documentTitle", 0x3000001, &QTextEdit::metaObj, 0, -1 },
	{ "int","length", 0x10000001, &QTextEdit::metaObj, 0, -1 },
	{ "WordWrap","wordWrap", 0x0107, &QTextEdit::metaObj, &enum_tbl[0], -1 },
	{ "int","wrapColumnOrWidth", 0x10000103, &QTextEdit::metaObj, 0, -1 },
	{ "WrapPolicy","wrapPolicy", 0x0107, &QTextEdit::metaObj, &enum_tbl[1], -1 },
	{ "bool","hasSelectedText", 0x12000001, &QTextEdit::metaObj, 0, -1 },
	{ "QString","selectedText", 0x3000001, &QTextEdit::metaObj, 0, -1 },
	{ "int","undoDepth", 0x10000103, &QTextEdit::metaObj, 0, -1 },
	{ "bool","overwriteMode", 0x12000103, &QTextEdit::metaObj, 0, -1 },
	{ "bool","modified", 0x12001103, &QTextEdit::metaObj, 0, -1 },
	{ "bool","readOnly", 0x12000103, &QTextEdit::metaObj, 0, -1 },
	{ "bool","undoRedoEnabled", 0x12000103, &QTextEdit::metaObj, 0, -1 },
	{ "int","tabStopWidth", 0x10000103, &QTextEdit::metaObj, 0, -1 },
	{ "bool","tabChangesFocus", 0x12000103, &QTextEdit::metaObj, 0, -1 },
	{ "AutoFormatting","autoFormatting", 0x0107, &QTextEdit::metaObj, &enum_tbl[2], -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QTextEdit", parentObject,
	slot_tbl, 88,
	signal_tbl, 15,
#ifndef QT_NO_PROPERTIES
	props_tbl, 19,
	enum_tbl, 3,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTextEdit.setMetaObject( metaObj );
    return metaObj;
}

void* QTextEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTextEdit" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

// SIGNAL textChanged
void QTextEdit::textChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL selectionChanged
void QTextEdit::selectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL copyAvailable
void QTextEdit::copyAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL undoAvailable
void QTextEdit::undoAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL redoAvailable
void QTextEdit::redoAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 4, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL currentFontChanged
void QTextEdit::currentFontChanged( const QFont& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL currentColorChanged
void QTextEdit::currentColorChanged( const QColor& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL currentAlignmentChanged
void QTextEdit::currentAlignmentChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 7, t0 );
}

// SIGNAL currentVerticalAlignmentChanged
void QTextEdit::currentVerticalAlignmentChanged( VerticalAlignment t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 8 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL cursorPositionChanged
void QTextEdit::cursorPositionChanged( QTextCursor* t0 )
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

// SIGNAL cursorPositionChanged
void QTextEdit::cursorPositionChanged( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 10 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL returnPressed
void QTextEdit::returnPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 11 );
}

// SIGNAL modificationChanged
void QTextEdit::modificationChanged( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 12, t0 );
}

// SIGNAL clicked
void QTextEdit::clicked( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 13 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

// SIGNAL doubleClicked
void QTextEdit::doubleClicked( int t0, int t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 14 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    activate_signal( clist, o );
}

bool QTextEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 1: setMimeSourceFactory((QMimeSourceFactory*)static_QUType_ptr.get(_o+1)); break;
    case 2: setStyleSheet((QStyleSheet*)static_QUType_ptr.get(_o+1)); break;
    case 3: scrollToAnchor((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: setPaper((const QBrush&)*((const QBrush*)static_QUType_ptr.get(_o+1))); break;
    case 5: setLinkUnderline((bool)static_QUType_bool.get(_o+1)); break;
    case 6: setWordWrap((WordWrap)static_QUType_enum.get(_o+1)); break;
    case 7: setWrapColumnOrWidth((int)static_QUType_int.get(_o+1)); break;
    case 8: setWrapPolicy((WrapPolicy)static_QUType_enum.get(_o+1)); break;
    case 9: copy(); break;
    case 10: append((const QString&)static_QUType_QString.get(_o+1)); break;
    case 11: setText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 12: setText((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 13: setTextFormat((TextFormat)(*((TextFormat*)static_QUType_ptr.get(_o+1)))); break;
    case 14: selectAll(); break;
    case 15: selectAll((bool)static_QUType_bool.get(_o+1)); break;
    case 16: setTabStopWidth((int)static_QUType_int.get(_o+1)); break;
    case 17: zoomIn((int)static_QUType_int.get(_o+1)); break;
    case 18: zoomIn(); break;
    case 19: zoomOut((int)static_QUType_int.get(_o+1)); break;
    case 20: zoomOut(); break;
    case 21: zoomTo((int)static_QUType_int.get(_o+1)); break;
    case 22: sync(); break;
    case 23: setReadOnly((bool)static_QUType_bool.get(_o+1)); break;
    case 24: undo(); break;
    case 25: redo(); break;
    case 26: cut(); break;
    case 27: paste(); break;
    case 28: pasteSubType((const QCString&)*((const QCString*)static_QUType_ptr.get(_o+1))); break;
    case 29: clear(); break;
    case 30: del(); break;
    case 31: indent(); break;
    case 32: setItalic((bool)static_QUType_bool.get(_o+1)); break;
    case 33: setBold((bool)static_QUType_bool.get(_o+1)); break;
    case 34: setUnderline((bool)static_QUType_bool.get(_o+1)); break;
    case 35: setFamily((const QString&)static_QUType_QString.get(_o+1)); break;
    case 36: setPointSize((int)static_QUType_int.get(_o+1)); break;
    case 37: setColor((const QColor&)*((const QColor*)static_QUType_ptr.get(_o+1))); break;
    case 38: setFont((const QFont&)*((const QFont*)static_QUType_ptr.get(_o+1))); break;
    case 39: setVerticalAlignment((VerticalAlignment)(*((VerticalAlignment*)static_QUType_ptr.get(_o+1)))); break;
    case 40: setAlignment((int)static_QUType_int.get(_o+1)); break;
    case 41: setParagType((QStyleSheetItem::DisplayMode)(*((QStyleSheetItem::DisplayMode*)static_QUType_ptr.get(_o+1))),(QStyleSheetItem::ListStyle)(*((QStyleSheetItem::ListStyle*)static_QUType_ptr.get(_o+2)))); break;
    case 42: setCursorPosition((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 43: setSelection((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4)); break;
    case 44: setSelection((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4),(int)static_QUType_int.get(_o+5)); break;
    case 45: setSelectionAttributes((int)static_QUType_int.get(_o+1),(const QColor&)*((const QColor*)static_QUType_ptr.get(_o+2)),(bool)static_QUType_bool.get(_o+3)); break;
    case 46: setModified((bool)static_QUType_bool.get(_o+1)); break;
    case 47: resetFormat(); break;
    case 48: setUndoDepth((int)static_QUType_int.get(_o+1)); break;
    case 49: setFormat((QTextFormat*)static_QUType_ptr.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 50: ensureCursorVisible(); break;
    case 51: placeCursor((const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+1))); break;
    case 52: placeCursor((const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+1)),(QTextCursor*)static_QUType_ptr.get(_o+2)); break;
    case 53: moveCursor((CursorAction)(*((CursorAction*)static_QUType_ptr.get(_o+1))),(bool)static_QUType_bool.get(_o+2)); break;
    case 54: doKeyboardAction((KeyboardAction)(*((KeyboardAction*)static_QUType_ptr.get(_o+1)))); break;
    case 55: removeSelectedText(); break;
    case 56: removeSelectedText((int)static_QUType_int.get(_o+1)); break;
    case 57: removeSelection(); break;
    case 58: removeSelection((int)static_QUType_int.get(_o+1)); break;
    case 59: setCurrentFont((const QFont&)*((const QFont*)static_QUType_ptr.get(_o+1))); break;
    case 60: setOverwriteMode((bool)static_QUType_bool.get(_o+1)); break;
    case 61: scrollToBottom(); break;
    case 62: insert((const QString&)static_QUType_QString.get(_o+1)); break;
    case 63: insert((const QString&)static_QUType_QString.get(_o+1),(uint)(*((uint*)static_QUType_ptr.get(_o+2)))); break;
    case 64: insert((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 65: insert((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 66: insert((const QString&)static_QUType_QString.get(_o+1),(bool)static_QUType_bool.get(_o+2),(bool)static_QUType_bool.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 67: insertAt((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3)); break;
    case 68: removeParagraph((int)static_QUType_int.get(_o+1)); break;
    case 69: insertParagraph((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 70: setParagraphBackgroundColor((int)static_QUType_int.get(_o+1),(const QColor&)*((const QColor*)static_QUType_ptr.get(_o+2))); break;
    case 71: clearParagraphBackground((int)static_QUType_int.get(_o+1)); break;
    case 72: setUndoRedoEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 73: setTabChangesFocus((bool)static_QUType_bool.get(_o+1)); break;
    case 74: polish(); break;
    case 75: setMaxLogLines((int)static_QUType_int.get(_o+1)); break;
    case 76: static_QUType_int.set(_o,maxLogLines()); break;
    case 77: doChangeInterval(); break;
    case 78: sliderReleased(); break;
    case 79: formatMore(); break;
    case 80: doResize(); break;
    case 81: autoScrollTimerDone(); break;
    case 82: blinkCursor(); break;
    case 83: setModified(); break;
    case 84: startDrag(); break;
    case 85: documentWidthChanged((int)static_QUType_int.get(_o+1)); break;
    case 86: clipboardChanged(); break;
    case 87: optimDoAutoScroll(); break;
    default:
	return QScrollView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTextEdit::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: textChanged(); break;
    case 1: selectionChanged(); break;
    case 2: copyAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 3: undoAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 4: redoAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 5: currentFontChanged((const QFont&)*((const QFont*)static_QUType_ptr.get(_o+1))); break;
    case 6: currentColorChanged((const QColor&)*((const QColor*)static_QUType_ptr.get(_o+1))); break;
    case 7: currentAlignmentChanged((int)static_QUType_int.get(_o+1)); break;
    case 8: currentVerticalAlignmentChanged((VerticalAlignment)(*((VerticalAlignment*)static_QUType_ptr.get(_o+1)))); break;
    case 9: cursorPositionChanged((QTextCursor*)static_QUType_ptr.get(_o+1)); break;
    case 10: cursorPositionChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 11: returnPressed(); break;
    case 12: modificationChanged((bool)static_QUType_bool.get(_o+1)); break;
    case 13: clicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 14: doubleClicked((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return QScrollView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTextEdit::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setTextFormat((TextFormat&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->textFormat() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setText(v->asString()); break;
	case 1: *v = QVariant( this->text() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setPaper(v->asBrush()); break;
	case 1: *v = QVariant( this->paper() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setLinkUnderline(v->asBool()); break;
	case 1: *v = QVariant( this->linkUnderline(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 1: *v = QVariant( this->documentTitle() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 1: *v = QVariant( this->length() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setWordWrap((WordWrap&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->wordWrap() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setWrapColumnOrWidth(v->asInt()); break;
	case 1: *v = QVariant( this->wrapColumnOrWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setWrapPolicy((WrapPolicy&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->wrapPolicy() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 1: *v = QVariant( this->hasSelectedText(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 1: *v = QVariant( this->selectedText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 11: switch( f ) {
	case 0: setUndoDepth(v->asInt()); break;
	case 1: *v = QVariant( this->undoDepth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 12: switch( f ) {
	case 0: setOverwriteMode(v->asBool()); break;
	case 1: *v = QVariant( this->isOverwriteMode(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 13: switch( f ) {
	case 0: setModified(v->asBool()); break;
	case 1: *v = QVariant( this->isModified(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 14: switch( f ) {
	case 0: setReadOnly(v->asBool()); break;
	case 1: *v = QVariant( this->isReadOnly(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 15: switch( f ) {
	case 0: setUndoRedoEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isUndoRedoEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 16: switch( f ) {
	case 0: setTabStopWidth(v->asInt()); break;
	case 1: *v = QVariant( this->tabStopWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 17: switch( f ) {
	case 0: setTabChangesFocus(v->asBool()); break;
	case 1: *v = QVariant( this->tabChangesFocus(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 18: switch( f ) {
	case 0: setAutoFormatting(v->asUInt()); break;
	case 1: *v = QVariant( (int)this->autoFormatting() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QScrollView::qt_property( id, f, v );
    }
    return TRUE;
}

bool QTextEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
