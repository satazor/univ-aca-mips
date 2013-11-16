/****************************************************************************
** PageCurl meta object code from reading C++ file 'msgedit.h'
**
** Created: Wed Oct 9 11:06:19 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../msgedit.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PageCurl::className() const
{
    return "PageCurl";
}

QMetaObject *PageCurl::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PageCurl( "PageCurl", &PageCurl::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PageCurl::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PageCurl", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PageCurl::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PageCurl", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PageCurl::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod signal_0 = {"prevPage", 0, 0 };
    static const QUMethod signal_1 = {"nextPage", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "prevPage()", &signal_0, QMetaData::Protected },
	{ "nextPage()", &signal_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PageCurl", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PageCurl.setMetaObject( metaObj );
    return metaObj;
}

void* PageCurl::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PageCurl" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL prevPage
void PageCurl::prevPage()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL nextPage
void PageCurl::nextPage()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool PageCurl::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool PageCurl::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: prevPage(); break;
    case 1: nextPage(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool PageCurl::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool PageCurl::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *EditorPage::className() const
{
    return "EditorPage";
}

QMetaObject *EditorPage::metaObj = 0;
static QMetaObjectCleanUp cleanUp_EditorPage( "EditorPage", &EditorPage::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString EditorPage::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditorPage", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString EditorPage::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "EditorPage", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* EditorPage::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUMethod slot_0 = {"handleTranslationChanges", 0, 0 };
    static const QUMethod slot_1 = {"handleSourceChanges", 0, 0 };
    static const QUMethod slot_2 = {"handleCommentChanges", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "handleTranslationChanges()", &slot_0, QMetaData::Private },
	{ "handleSourceChanges()", &slot_1, QMetaData::Private },
	{ "handleCommentChanges()", &slot_2, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "height", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"pageHeightUpdated", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "pageHeightUpdated(int)", &signal_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"EditorPage", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_EditorPage.setMetaObject( metaObj );
    return metaObj;
}

void* EditorPage::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "EditorPage" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL pageHeightUpdated
void EditorPage::pageHeightUpdated( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool EditorPage::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: handleTranslationChanges(); break;
    case 1: handleSourceChanges(); break;
    case 2: handleCommentChanges(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool EditorPage::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: pageHeightUpdated((int)static_QUType_int.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool EditorPage::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool EditorPage::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *MessageEditor::className() const
{
    return "MessageEditor";
}

QMetaObject *MessageEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MessageEditor( "MessageEditor", &MessageEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MessageEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MessageEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MessageEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MessageEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MessageEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"undo", 0, 0 };
    static const QUMethod slot_1 = {"redo", 0, 0 };
    static const QUMethod slot_2 = {"cut", 0, 0 };
    static const QUMethod slot_3 = {"copy", 0, 0 };
    static const QUMethod slot_4 = {"paste", 0, 0 };
    static const QUMethod slot_5 = {"del", 0, 0 };
    static const QUMethod slot_6 = {"selectAll", 0, 0 };
    static const QUMethod slot_7 = {"beginFromSource", 0, 0 };
    static const QUMethod slot_8 = {"toggleGuessing", 0, 0 };
    static const QUMethod slot_9 = {"finishAndNext", 0, 0 };
    static const QUMethod slot_10 = {"emitTranslationChanged", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ "accelKey", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"guessActivated", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_12 = {"insertPhraseInTranslation", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_13 = {"insertPhraseInTranslationAndLeave", 1, param_slot_13 };
    static const QUMethod slot_14 = {"updateButtons", 0, 0 };
    static const QUMethod slot_15 = {"updateCanPaste", 0, 0 };
    static const QUMethod slot_16 = {"toggleFinished", 0, 0 };
    static const QUParameter param_slot_17[] = {
	{ "height", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"updatePageHeight", 1, param_slot_17 };
    static const QMetaData slot_tbl[] = {
	{ "undo()", &slot_0, QMetaData::Public },
	{ "redo()", &slot_1, QMetaData::Public },
	{ "cut()", &slot_2, QMetaData::Public },
	{ "copy()", &slot_3, QMetaData::Public },
	{ "paste()", &slot_4, QMetaData::Public },
	{ "del()", &slot_5, QMetaData::Public },
	{ "selectAll()", &slot_6, QMetaData::Public },
	{ "beginFromSource()", &slot_7, QMetaData::Public },
	{ "toggleGuessing()", &slot_8, QMetaData::Public },
	{ "finishAndNext()", &slot_9, QMetaData::Public },
	{ "emitTranslationChanged()", &slot_10, QMetaData::Private },
	{ "guessActivated(int)", &slot_11, QMetaData::Private },
	{ "insertPhraseInTranslation(QListViewItem*)", &slot_12, QMetaData::Private },
	{ "insertPhraseInTranslationAndLeave(QListViewItem*)", &slot_13, QMetaData::Private },
	{ "updateButtons()", &slot_14, QMetaData::Private },
	{ "updateCanPaste()", &slot_15, QMetaData::Private },
	{ "toggleFinished()", &slot_16, QMetaData::Private },
	{ "updatePageHeight(int)", &slot_17, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "translation", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"translationChanged", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "finished", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"finished", 1, param_signal_1 };
    static const QUMethod signal_2 = {"prevUnfinished", 0, 0 };
    static const QUMethod signal_3 = {"nextUnfinished", 0, 0 };
    static const QUParameter param_signal_4[] = {
	{ "enable", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"updateActions", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ "avail", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"undoAvailable", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ "avail", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_6 = {"redoAvailable", 1, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "avail", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_7 = {"cutAvailable", 1, param_signal_7 };
    static const QUParameter param_signal_8[] = {
	{ "avail", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_8 = {"copyAvailable", 1, param_signal_8 };
    static const QUParameter param_signal_9[] = {
	{ "avail", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_9 = {"pasteAvailable", 1, param_signal_9 };
    static const QUMethod signal_10 = {"focusSourceList", 0, 0 };
    static const QUMethod signal_11 = {"focusPhraseList", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "translationChanged(const QString&)", &signal_0, QMetaData::Public },
	{ "finished(bool)", &signal_1, QMetaData::Public },
	{ "prevUnfinished()", &signal_2, QMetaData::Public },
	{ "nextUnfinished()", &signal_3, QMetaData::Public },
	{ "updateActions(bool)", &signal_4, QMetaData::Public },
	{ "undoAvailable(bool)", &signal_5, QMetaData::Public },
	{ "redoAvailable(bool)", &signal_6, QMetaData::Public },
	{ "cutAvailable(bool)", &signal_7, QMetaData::Public },
	{ "copyAvailable(bool)", &signal_8, QMetaData::Public },
	{ "pasteAvailable(bool)", &signal_9, QMetaData::Public },
	{ "focusSourceList()", &signal_10, QMetaData::Public },
	{ "focusPhraseList()", &signal_11, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MessageEditor", parentObject,
	slot_tbl, 18,
	signal_tbl, 12,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MessageEditor.setMetaObject( metaObj );
    return metaObj;
}

void* MessageEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MessageEditor" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL translationChanged
void MessageEditor::translationChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL finished
void MessageEditor::finished( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL prevUnfinished
void MessageEditor::prevUnfinished()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL nextUnfinished
void MessageEditor::nextUnfinished()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL updateActions
void MessageEditor::updateActions( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 4, t0 );
}

// SIGNAL undoAvailable
void MessageEditor::undoAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 5, t0 );
}

// SIGNAL redoAvailable
void MessageEditor::redoAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 6, t0 );
}

// SIGNAL cutAvailable
void MessageEditor::cutAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 7, t0 );
}

// SIGNAL copyAvailable
void MessageEditor::copyAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 8, t0 );
}

// SIGNAL pasteAvailable
void MessageEditor::pasteAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 9, t0 );
}

// SIGNAL focusSourceList
void MessageEditor::focusSourceList()
{
    activate_signal( staticMetaObject()->signalOffset() + 10 );
}

// SIGNAL focusPhraseList
void MessageEditor::focusPhraseList()
{
    activate_signal( staticMetaObject()->signalOffset() + 11 );
}

bool MessageEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: undo(); break;
    case 1: redo(); break;
    case 2: cut(); break;
    case 3: copy(); break;
    case 4: paste(); break;
    case 5: del(); break;
    case 6: selectAll(); break;
    case 7: beginFromSource(); break;
    case 8: toggleGuessing(); break;
    case 9: finishAndNext(); break;
    case 10: emitTranslationChanged(); break;
    case 11: guessActivated((int)static_QUType_int.get(_o+1)); break;
    case 12: insertPhraseInTranslation((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 13: insertPhraseInTranslationAndLeave((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 14: updateButtons(); break;
    case 15: updateCanPaste(); break;
    case 16: toggleFinished(); break;
    case 17: updatePageHeight((int)static_QUType_int.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MessageEditor::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: translationChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: finished((bool)static_QUType_bool.get(_o+1)); break;
    case 2: prevUnfinished(); break;
    case 3: nextUnfinished(); break;
    case 4: updateActions((bool)static_QUType_bool.get(_o+1)); break;
    case 5: undoAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 6: redoAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 7: cutAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 8: copyAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 9: pasteAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 10: focusSourceList(); break;
    case 11: focusPhraseList(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MessageEditor::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool MessageEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
