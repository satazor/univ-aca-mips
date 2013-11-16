/****************************************************************************
** SearchValidator meta object code from reading C++ file 'helpdialogimpl.h'
**
** Created: Wed Oct 9 11:06:05 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../helpdialogimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *SearchValidator::className() const
{
    return "SearchValidator";
}

QMetaObject *SearchValidator::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SearchValidator( "SearchValidator", &SearchValidator::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SearchValidator::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SearchValidator", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SearchValidator::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SearchValidator", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SearchValidator::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QValidator::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"SearchValidator", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SearchValidator.setMetaObject( metaObj );
    return metaObj;
}

void* SearchValidator::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SearchValidator" ) )
	return this;
    return QValidator::qt_cast( clname );
}

bool SearchValidator::qt_invoke( int _id, QUObject* _o )
{
    return QValidator::qt_invoke(_id,_o);
}

bool SearchValidator::qt_emit( int _id, QUObject* _o )
{
    return QValidator::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool SearchValidator::qt_property( int id, int f, QVariant* v)
{
    return QValidator::qt_property( id, f, v);
}

bool SearchValidator::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *HelpDialog::className() const
{
    return "HelpDialog";
}

QMetaObject *HelpDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_HelpDialog( "HelpDialog", &HelpDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString HelpDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString HelpDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* HelpDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = HelpDialogBase::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_0 = {"showTopic", 3, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_1 = {"showTopic", 3, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"showTopic", 1, param_slot_2 };
    static const QUMethod slot_3 = {"loadIndexFile", 0, 0 };
    static const QUMethod slot_4 = {"insertContents", 0, 0 };
    static const QUMethod slot_5 = {"setupFullTextIndex", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"currentTabChanged", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "i", &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_7 = {"currentIndexChanged", 1, param_slot_7 };
    static const QUMethod slot_8 = {"showTopic", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"searchInIndex", 1, param_slot_9 };
    static const QUMethod slot_10 = {"addBookmark", 0, 0 };
    static const QUMethod slot_11 = {"removeBookmark", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_12 = {"currentBookmarkChanged", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_13 = {"currentContentsChanged", 1, param_slot_13 };
    static const QUMethod slot_14 = {"startSearch", 0, 0 };
    static const QUMethod slot_15 = {"showSearchHelp", 0, 0 };
    static const QUMethod slot_16 = {"initialize", 0, 0 };
    static const QUMethod slot_17 = {"toggleContents", 0, 0 };
    static const QUMethod slot_18 = {"toggleIndex", 0, 0 };
    static const QUMethod slot_19 = {"toggleBookmarks", 0, 0 };
    static const QUMethod slot_20 = {"toggleSearch", 0, 0 };
    static const QUMethod slot_21 = {"lastWinClosed", 0, 0 };
    static const QUParameter param_slot_22[] = {
	{ "button", &static_QUType_int, 0, QUParameter::In },
	{ "i", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "p", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_22 = {"showResultPage", 3, param_slot_22 };
    static const QUParameter param_slot_23[] = {
	{ "i", &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_23 = {"showResultPage", 1, param_slot_23 };
    static const QUParameter param_slot_24[] = {
	{ "prog", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_24 = {"setIndexingProgress", 1, param_slot_24 };
    static const QUParameter param_slot_25[] = {
	{ "item", &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_25 = {"showItemMenu", 2, param_slot_25 };
    static const QUParameter param_slot_26[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_26 = {"showItemMenu", 2, param_slot_26 };
    static const QUMethod slot_27 = {"insertBookmarks", 0, 0 };
    static const QUMethod slot_28 = {"processEvents", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "showTopic(int,QListBoxItem*,const QPoint&)", &slot_0, QMetaData::Protected },
	{ "showTopic(int,QListViewItem*,const QPoint&)", &slot_1, QMetaData::Protected },
	{ "showTopic(QListViewItem*)", &slot_2, QMetaData::Protected },
	{ "loadIndexFile()", &slot_3, QMetaData::Protected },
	{ "insertContents()", &slot_4, QMetaData::Protected },
	{ "setupFullTextIndex()", &slot_5, QMetaData::Protected },
	{ "currentTabChanged(const QString&)", &slot_6, QMetaData::Protected },
	{ "currentIndexChanged(QListBoxItem*)", &slot_7, QMetaData::Protected },
	{ "showTopic()", &slot_8, QMetaData::Protected },
	{ "searchInIndex(const QString&)", &slot_9, QMetaData::Protected },
	{ "addBookmark()", &slot_10, QMetaData::Protected },
	{ "removeBookmark()", &slot_11, QMetaData::Protected },
	{ "currentBookmarkChanged(QListViewItem*)", &slot_12, QMetaData::Protected },
	{ "currentContentsChanged(QListViewItem*)", &slot_13, QMetaData::Protected },
	{ "startSearch()", &slot_14, QMetaData::Protected },
	{ "showSearchHelp()", &slot_15, QMetaData::Protected },
	{ "initialize()", &slot_16, QMetaData::Public },
	{ "toggleContents()", &slot_17, QMetaData::Public },
	{ "toggleIndex()", &slot_18, QMetaData::Public },
	{ "toggleBookmarks()", &slot_19, QMetaData::Public },
	{ "toggleSearch()", &slot_20, QMetaData::Public },
	{ "lastWinClosed()", &slot_21, QMetaData::Private },
	{ "showResultPage(int,QListBoxItem*,const QPoint&)", &slot_22, QMetaData::Private },
	{ "showResultPage(QListBoxItem*)", &slot_23, QMetaData::Private },
	{ "setIndexingProgress(int)", &slot_24, QMetaData::Private },
	{ "showItemMenu(QListBoxItem*,const QPoint&)", &slot_25, QMetaData::Private },
	{ "showItemMenu(QListViewItem*,const QPoint&)", &slot_26, QMetaData::Private },
	{ "insertBookmarks()", &slot_27, QMetaData::Private },
	{ "processEvents()", &slot_28, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"showLink", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In },
	{ "terms", &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod signal_1 = {"showSearchLink", 2, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "showLink(const QString&)", &signal_0, QMetaData::Public },
	{ "showSearchLink(const QString&,const QStringList&)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"HelpDialog", parentObject,
	slot_tbl, 29,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_HelpDialog.setMetaObject( metaObj );
    return metaObj;
}

void* HelpDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "HelpDialog" ) )
	return this;
    return HelpDialogBase::qt_cast( clname );
}

// SIGNAL showLink
void HelpDialog::showLink( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL showSearchLink
void HelpDialog::showSearchLink( const QString& t0, const QStringList& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_varptr.set(o+2,&t1);
    activate_signal( clist, o );
}

bool HelpDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: showTopic((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 1: showTopic((int)static_QUType_int.get(_o+1),(QListViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 2: showTopic((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: loadIndexFile(); break;
    case 4: insertContents(); break;
    case 5: setupFullTextIndex(); break;
    case 6: currentTabChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: currentIndexChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 8: showTopic(); break;
    case 9: searchInIndex((const QString&)static_QUType_QString.get(_o+1)); break;
    case 10: addBookmark(); break;
    case 11: removeBookmark(); break;
    case 12: currentBookmarkChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 13: currentContentsChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 14: startSearch(); break;
    case 15: showSearchHelp(); break;
    case 16: initialize(); break;
    case 17: toggleContents(); break;
    case 18: toggleIndex(); break;
    case 19: toggleBookmarks(); break;
    case 20: toggleSearch(); break;
    case 21: lastWinClosed(); break;
    case 22: showResultPage((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 23: showResultPage((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 24: setIndexingProgress((int)static_QUType_int.get(_o+1)); break;
    case 25: showItemMenu((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 26: showItemMenu((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 27: insertBookmarks(); break;
    case 28: processEvents(); break;
    default:
	return HelpDialogBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool HelpDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: showLink((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: showSearchLink((const QString&)static_QUType_QString.get(_o+1),(const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+2))); break;
    default:
	return HelpDialogBase::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool HelpDialog::qt_property( int id, int f, QVariant* v)
{
    return HelpDialogBase::qt_property( id, f, v);
}

bool HelpDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
