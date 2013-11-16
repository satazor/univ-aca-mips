/****************************************************************************
** TextEdit meta object code from reading C++ file 'textedit.h'
**
** Created: Wed Oct 9 11:07:28 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../textdrawing/textedit.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TextEdit::className() const
{
    return "TextEdit";
}

QMetaObject *TextEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TextEdit( "TextEdit", &TextEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TextEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TextEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TextEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TextEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TextEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"fileNew", 0, 0 };
    static const QUMethod slot_1 = {"fileOpen", 0, 0 };
    static const QUMethod slot_2 = {"fileSave", 0, 0 };
    static const QUMethod slot_3 = {"fileSaveAs", 0, 0 };
    static const QUMethod slot_4 = {"filePrint", 0, 0 };
    static const QUMethod slot_5 = {"fileClose", 0, 0 };
    static const QUMethod slot_6 = {"fileExit", 0, 0 };
    static const QUMethod slot_7 = {"editUndo", 0, 0 };
    static const QUMethod slot_8 = {"editRedo", 0, 0 };
    static const QUMethod slot_9 = {"editCut", 0, 0 };
    static const QUMethod slot_10 = {"editCopy", 0, 0 };
    static const QUMethod slot_11 = {"editPaste", 0, 0 };
    static const QUMethod slot_12 = {"textBold", 0, 0 };
    static const QUMethod slot_13 = {"textUnderline", 0, 0 };
    static const QUMethod slot_14 = {"textItalic", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ "f", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"textFamily", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "p", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"textSize", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "s", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"textStyle", 1, param_slot_17 };
    static const QUMethod slot_18 = {"textColor", 0, 0 };
    static const QUParameter param_slot_19[] = {
	{ "a", &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod slot_19 = {"textAlign", 1, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ "f", &static_QUType_varptr, "\x05", QUParameter::In }
    };
    static const QUMethod slot_20 = {"fontChanged", 1, param_slot_20 };
    static const QUParameter param_slot_21[] = {
	{ "c", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_21 = {"colorChanged", 1, param_slot_21 };
    static const QUParameter param_slot_22[] = {
	{ "a", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"alignmentChanged", 1, param_slot_22 };
    static const QUParameter param_slot_23[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_23 = {"editorChanged", 1, param_slot_23 };
    static const QMetaData slot_tbl[] = {
	{ "fileNew()", &slot_0, QMetaData::Public },
	{ "fileOpen()", &slot_1, QMetaData::Public },
	{ "fileSave()", &slot_2, QMetaData::Public },
	{ "fileSaveAs()", &slot_3, QMetaData::Public },
	{ "filePrint()", &slot_4, QMetaData::Public },
	{ "fileClose()", &slot_5, QMetaData::Public },
	{ "fileExit()", &slot_6, QMetaData::Public },
	{ "editUndo()", &slot_7, QMetaData::Public },
	{ "editRedo()", &slot_8, QMetaData::Public },
	{ "editCut()", &slot_9, QMetaData::Public },
	{ "editCopy()", &slot_10, QMetaData::Public },
	{ "editPaste()", &slot_11, QMetaData::Public },
	{ "textBold()", &slot_12, QMetaData::Public },
	{ "textUnderline()", &slot_13, QMetaData::Public },
	{ "textItalic()", &slot_14, QMetaData::Public },
	{ "textFamily(const QString&)", &slot_15, QMetaData::Public },
	{ "textSize(const QString&)", &slot_16, QMetaData::Public },
	{ "textStyle(int)", &slot_17, QMetaData::Public },
	{ "textColor()", &slot_18, QMetaData::Public },
	{ "textAlign(QAction*)", &slot_19, QMetaData::Public },
	{ "fontChanged(const QFont&)", &slot_20, QMetaData::Public },
	{ "colorChanged(const QColor&)", &slot_21, QMetaData::Public },
	{ "alignmentChanged(int)", &slot_22, QMetaData::Public },
	{ "editorChanged(QWidget*)", &slot_23, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"TextEdit", parentObject,
	slot_tbl, 24,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TextEdit.setMetaObject( metaObj );
    return metaObj;
}

void* TextEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TextEdit" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool TextEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: fileNew(); break;
    case 1: fileOpen(); break;
    case 2: fileSave(); break;
    case 3: fileSaveAs(); break;
    case 4: filePrint(); break;
    case 5: fileClose(); break;
    case 6: fileExit(); break;
    case 7: editUndo(); break;
    case 8: editRedo(); break;
    case 9: editCut(); break;
    case 10: editCopy(); break;
    case 11: editPaste(); break;
    case 12: textBold(); break;
    case 13: textUnderline(); break;
    case 14: textItalic(); break;
    case 15: textFamily((const QString&)static_QUType_QString.get(_o+1)); break;
    case 16: textSize((const QString&)static_QUType_QString.get(_o+1)); break;
    case 17: textStyle((int)static_QUType_int.get(_o+1)); break;
    case 18: textColor(); break;
    case 19: textAlign((QAction*)static_QUType_ptr.get(_o+1)); break;
    case 20: fontChanged((const QFont&)*((const QFont*)static_QUType_ptr.get(_o+1))); break;
    case 21: colorChanged((const QColor&)*((const QColor*)static_QUType_ptr.get(_o+1))); break;
    case 22: alignmentChanged((int)static_QUType_int.get(_o+1)); break;
    case 23: editorChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TextEdit::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TextEdit::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool TextEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
