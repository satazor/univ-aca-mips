/****************************************************************************
** TrWindow meta object code from reading C++ file 'trwindow.h'
**
** Created: Wed Oct 9 11:06:20 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../trwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *TrWindow::className() const
{
    return "TrWindow";
}

QMetaObject *TrWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_TrWindow( "TrWindow", &TrWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString TrWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TrWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString TrWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "TrWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* TrWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"doneAndNext", 0, 0 };
    static const QUMethod slot_1 = {"prev", 0, 0 };
    static const QUMethod slot_2 = {"next", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"recentFileActivated", 1, param_slot_3 };
    static const QUMethod slot_4 = {"setupRecentFilesMenu", 0, 0 };
    static const QUMethod slot_5 = {"open", 0, 0 };
    static const QUMethod slot_6 = {"save", 0, 0 };
    static const QUMethod slot_7 = {"saveAs", 0, 0 };
    static const QUMethod slot_8 = {"release", 0, 0 };
    static const QUMethod slot_9 = {"print", 0, 0 };
    static const QUMethod slot_10 = {"find", 0, 0 };
    static const QUMethod slot_11 = {"findAgain", 0, 0 };
    static const QUMethod slot_12 = {"replace", 0, 0 };
    static const QUMethod slot_13 = {"newPhraseBook", 0, 0 };
    static const QUMethod slot_14 = {"openPhraseBook", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"closePhraseBook", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"editPhraseBook", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"printPhraseBook", 1, param_slot_17 };
    static const QUMethod slot_18 = {"manual", 0, 0 };
    static const QUMethod slot_19 = {"revertSorting", 0, 0 };
    static const QUMethod slot_20 = {"about", 0, 0 };
    static const QUMethod slot_21 = {"aboutQt", 0, 0 };
    static const QUMethod slot_22 = {"setupPhrase", 0, 0 };
    static const QUParameter param_slot_23[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_23 = {"maybeSave", 1, param_slot_23 };
    static const QUMethod slot_24 = {"updateCaption", 0, 0 };
    static const QUParameter param_slot_25[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_25 = {"showNewScope", 1, param_slot_25 };
    static const QUParameter param_slot_26[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_26 = {"showNewCurrent", 1, param_slot_26 };
    static const QUParameter param_slot_27[] = {
	{ "translation", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_27 = {"updateTranslation", 1, param_slot_27 };
    static const QUParameter param_slot_28[] = {
	{ "finished", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_28 = {"updateFinished", 1, param_slot_28 };
    static const QUParameter param_slot_29[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "p", &static_QUType_varptr, "\x0e", QUParameter::In },
	{ "column", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_29 = {"toggleFinished", 3, param_slot_29 };
    static const QUMethod slot_30 = {"prevUnfinished", 0, 0 };
    static const QUMethod slot_31 = {"nextUnfinished", 0, 0 };
    static const QUParameter param_slot_32[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In },
	{ "where", &static_QUType_int, 0, QUParameter::In },
	{ "matchCase", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_32 = {"findNext", 3, param_slot_32 };
    static const QUMethod slot_33 = {"revalidate", 0, 0 };
    static const QUMethod slot_34 = {"toggleGuessing", 0, 0 };
    static const QUMethod slot_35 = {"focusSourceList", 0, 0 };
    static const QUMethod slot_36 = {"focusPhraseList", 0, 0 };
    static const QUMethod slot_37 = {"updateClosePhraseBook", 0, 0 };
    static const QUMethod slot_38 = {"toggleStatistics", 0, 0 };
    static const QUMethod slot_39 = {"updateStatistics", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "doneAndNext()", &slot_0, QMetaData::Private },
	{ "prev()", &slot_1, QMetaData::Private },
	{ "next()", &slot_2, QMetaData::Private },
	{ "recentFileActivated(int)", &slot_3, QMetaData::Private },
	{ "setupRecentFilesMenu()", &slot_4, QMetaData::Private },
	{ "open()", &slot_5, QMetaData::Private },
	{ "save()", &slot_6, QMetaData::Private },
	{ "saveAs()", &slot_7, QMetaData::Private },
	{ "release()", &slot_8, QMetaData::Private },
	{ "print()", &slot_9, QMetaData::Private },
	{ "find()", &slot_10, QMetaData::Private },
	{ "findAgain()", &slot_11, QMetaData::Private },
	{ "replace()", &slot_12, QMetaData::Private },
	{ "newPhraseBook()", &slot_13, QMetaData::Private },
	{ "openPhraseBook()", &slot_14, QMetaData::Private },
	{ "closePhraseBook(int)", &slot_15, QMetaData::Private },
	{ "editPhraseBook(int)", &slot_16, QMetaData::Private },
	{ "printPhraseBook(int)", &slot_17, QMetaData::Private },
	{ "manual()", &slot_18, QMetaData::Private },
	{ "revertSorting()", &slot_19, QMetaData::Private },
	{ "about()", &slot_20, QMetaData::Private },
	{ "aboutQt()", &slot_21, QMetaData::Private },
	{ "setupPhrase()", &slot_22, QMetaData::Private },
	{ "maybeSave()", &slot_23, QMetaData::Private },
	{ "updateCaption()", &slot_24, QMetaData::Private },
	{ "showNewScope(QListViewItem*)", &slot_25, QMetaData::Private },
	{ "showNewCurrent(QListViewItem*)", &slot_26, QMetaData::Private },
	{ "updateTranslation(const QString&)", &slot_27, QMetaData::Private },
	{ "updateFinished(bool)", &slot_28, QMetaData::Private },
	{ "toggleFinished(QListViewItem*,const QPoint&,int)", &slot_29, QMetaData::Private },
	{ "prevUnfinished()", &slot_30, QMetaData::Private },
	{ "nextUnfinished()", &slot_31, QMetaData::Private },
	{ "findNext(const QString&,int,bool)", &slot_32, QMetaData::Private },
	{ "revalidate()", &slot_33, QMetaData::Private },
	{ "toggleGuessing()", &slot_34, QMetaData::Private },
	{ "focusSourceList()", &slot_35, QMetaData::Private },
	{ "focusPhraseList()", &slot_36, QMetaData::Private },
	{ "updateClosePhraseBook()", &slot_37, QMetaData::Private },
	{ "toggleStatistics()", &slot_38, QMetaData::Private },
	{ "updateStatistics()", &slot_39, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "w", &static_QUType_int, 0, QUParameter::In },
	{ "c", &static_QUType_int, 0, QUParameter::In },
	{ "cs", &static_QUType_int, 0, QUParameter::In },
	{ "w2", &static_QUType_int, 0, QUParameter::In },
	{ "c2", &static_QUType_int, 0, QUParameter::In },
	{ "cs2", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"statsChanged", 6, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "statsChanged(int,int,int,int,int,int)", &signal_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"TrWindow", parentObject,
	slot_tbl, 40,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_TrWindow.setMetaObject( metaObj );
    return metaObj;
}

void* TrWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "TrWindow" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL statsChanged
void TrWindow::statsChanged( int t0, int t1, int t2, int t3, int t4, int t5 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[7];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_int.set(o+3,t2);
    static_QUType_int.set(o+4,t3);
    static_QUType_int.set(o+5,t4);
    static_QUType_int.set(o+6,t5);
    activate_signal( clist, o );
}

bool TrWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: doneAndNext(); break;
    case 1: prev(); break;
    case 2: next(); break;
    case 3: recentFileActivated((int)static_QUType_int.get(_o+1)); break;
    case 4: setupRecentFilesMenu(); break;
    case 5: open(); break;
    case 6: save(); break;
    case 7: saveAs(); break;
    case 8: release(); break;
    case 9: print(); break;
    case 10: find(); break;
    case 11: findAgain(); break;
    case 12: replace(); break;
    case 13: newPhraseBook(); break;
    case 14: openPhraseBook(); break;
    case 15: closePhraseBook((int)static_QUType_int.get(_o+1)); break;
    case 16: editPhraseBook((int)static_QUType_int.get(_o+1)); break;
    case 17: printPhraseBook((int)static_QUType_int.get(_o+1)); break;
    case 18: manual(); break;
    case 19: revertSorting(); break;
    case 20: about(); break;
    case 21: aboutQt(); break;
    case 22: setupPhrase(); break;
    case 23: static_QUType_bool.set(_o,maybeSave()); break;
    case 24: updateCaption(); break;
    case 25: showNewScope((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 26: showNewCurrent((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 27: updateTranslation((const QString&)static_QUType_QString.get(_o+1)); break;
    case 28: updateFinished((bool)static_QUType_bool.get(_o+1)); break;
    case 29: toggleFinished((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 30: prevUnfinished(); break;
    case 31: nextUnfinished(); break;
    case 32: findNext((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 33: revalidate(); break;
    case 34: toggleGuessing(); break;
    case 35: focusSourceList(); break;
    case 36: focusPhraseList(); break;
    case 37: updateClosePhraseBook(); break;
    case 38: toggleStatistics(); break;
    case 39: updateStatistics(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool TrWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: statsChanged((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4),(int)static_QUType_int.get(_o+5),(int)static_QUType_int.get(_o+6)); break;
    default:
	return QMainWindow::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool TrWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool TrWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
