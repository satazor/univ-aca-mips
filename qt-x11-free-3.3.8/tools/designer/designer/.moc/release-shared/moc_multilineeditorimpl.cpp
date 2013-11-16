/****************************************************************************
** TextEdit meta object code from reading C++ file 'multilineeditorimpl.h'
**
** Created: Wed Oct 9 11:04:51 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../multilineeditorimpl.h"
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
    QMetaObject* parentObject = QTextEdit::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"TextEdit", parentObject,
	0, 0,
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
    return QTextEdit::qt_cast( clname );
}

bool TextEdit::qt_invoke( int _id, QUObject* _o )
{
    return QTextEdit::qt_invoke(_id,_o);
}

bool TextEdit::qt_emit( int _id, QUObject* _o )
{
    return QTextEdit::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool TextEdit::qt_property( int id, int f, QVariant* v)
{
    return QTextEdit::qt_property( id, f, v);
}

bool TextEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *ToolBarItem::className() const
{
    return "ToolBarItem";
}

QMetaObject *ToolBarItem::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ToolBarItem( "ToolBarItem", &ToolBarItem::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ToolBarItem::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ToolBarItem", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ToolBarItem::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ToolBarItem", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ToolBarItem::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QAction::staticMetaObject();
    static const QUMethod slot_0 = {"wasActivated", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "wasActivated()", &slot_0, QMetaData::Protected }
    };
    static const QUParameter param_signal_0[] = {
	{ "t", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"clicked", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "clicked(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ToolBarItem", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ToolBarItem.setMetaObject( metaObj );
    return metaObj;
}

void* ToolBarItem::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ToolBarItem" ) )
	return this;
    return QAction::qt_cast( clname );
}

// SIGNAL clicked
void ToolBarItem::clicked( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool ToolBarItem::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: wasActivated(); break;
    default:
	return QAction::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ToolBarItem::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: clicked((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QAction::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ToolBarItem::qt_property( int id, int f, QVariant* v)
{
    return QAction::qt_property( id, f, v);
}

bool ToolBarItem::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *MultiLineEditor::className() const
{
    return "MultiLineEditor";
}

QMetaObject *MultiLineEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MultiLineEditor( "MultiLineEditor", &MultiLineEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MultiLineEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MultiLineEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MultiLineEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MultiLineEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MultiLineEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = MultiLineEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"okClicked", 0, 0 };
    static const QUMethod slot_1 = {"applyClicked", 0, 0 };
    static const QUMethod slot_2 = {"cancelClicked", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"insertTags", 1, param_slot_3 };
    static const QUMethod slot_4 = {"insertBR", 0, 0 };
    static const QUMethod slot_5 = {"showFontDialog", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"changeWrapMode", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "e", &static_QUType_ptr, "QCloseEvent", QUParameter::In }
    };
    static const QUMethod slot_7 = {"closeEvent", 1, param_slot_7 };
    static const QMetaData slot_tbl[] = {
	{ "okClicked()", &slot_0, QMetaData::Protected },
	{ "applyClicked()", &slot_1, QMetaData::Protected },
	{ "cancelClicked()", &slot_2, QMetaData::Protected },
	{ "insertTags(const QString&)", &slot_3, QMetaData::Protected },
	{ "insertBR()", &slot_4, QMetaData::Protected },
	{ "showFontDialog()", &slot_5, QMetaData::Protected },
	{ "changeWrapMode(bool)", &slot_6, QMetaData::Protected },
	{ "closeEvent(QCloseEvent*)", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MultiLineEditor", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MultiLineEditor.setMetaObject( metaObj );
    return metaObj;
}

void* MultiLineEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MultiLineEditor" ) )
	return this;
    return MultiLineEditorBase::qt_cast( clname );
}

bool MultiLineEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: okClicked(); break;
    case 1: applyClicked(); break;
    case 2: cancelClicked(); break;
    case 3: insertTags((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: insertBR(); break;
    case 5: showFontDialog(); break;
    case 6: changeWrapMode((bool)static_QUType_bool.get(_o+1)); break;
    case 7: closeEvent((QCloseEvent*)static_QUType_ptr.get(_o+1)); break;
    default:
	return MultiLineEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MultiLineEditor::qt_emit( int _id, QUObject* _o )
{
    return MultiLineEditorBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MultiLineEditor::qt_property( int id, int f, QVariant* v)
{
    return MultiLineEditorBase::qt_property( id, f, v);
}

bool MultiLineEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
