/****************************************************************************
** HelpDialogBase meta object code from reading C++ file 'helpdialog.h'
**
** Created: Wed Oct 9 11:06:07 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../helpdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *HelpDialogBase::className() const
{
    return "HelpDialogBase";
}

QMetaObject *HelpDialogBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_HelpDialogBase( "HelpDialogBase", &HelpDialogBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString HelpDialogBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpDialogBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString HelpDialogBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpDialogBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* HelpDialogBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"addBookmark", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"currentBookmarkChanged", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"currentIndexChanged", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"currentTabChanged", 1, param_slot_6 };
    static const QUMethod slot_7 = {"loadIndexFile", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_8 = {"currentContentsChanged", 1, param_slot_8 };
    static const QUMethod slot_9 = {"removeBookmark", 0, 0 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_10 = {"searchInIndex", 1, param_slot_10 };
    static const QUMethod slot_11 = {"showTopic", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_12 = {"showTopic", 3, param_slot_12 };
    static const QUMethod slot_13 = {"showSearchHelp", 0, 0 };
    static const QUMethod slot_14 = {"startSearch", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_15 = {"showResultPage", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_16 = {"showResultPage", 3, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_17 = {"showResultPage", 3, param_slot_17 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "addBookmark()", &slot_3, QMetaData::Protected },
	{ "currentBookmarkChanged(QListViewItem*)", &slot_4, QMetaData::Protected },
	{ "currentIndexChanged(QListBoxItem*)", &slot_5, QMetaData::Protected },
	{ "currentTabChanged(const QString&)", &slot_6, QMetaData::Protected },
	{ "loadIndexFile()", &slot_7, QMetaData::Protected },
	{ "currentContentsChanged(QListViewItem*)", &slot_8, QMetaData::Protected },
	{ "removeBookmark()", &slot_9, QMetaData::Protected },
	{ "searchInIndex(const QString&)", &slot_10, QMetaData::Protected },
	{ "showTopic()", &slot_11, QMetaData::Protected },
	{ "showTopic(int,QListBoxItem*,const QPoint&)", &slot_12, QMetaData::Protected },
	{ "showSearchHelp()", &slot_13, QMetaData::Protected },
	{ "startSearch()", &slot_14, QMetaData::Protected },
	{ "showResultPage(QListBoxItem*)", &slot_15, QMetaData::Protected },
	{ "showResultPage(int,QListBoxItem*,const QPoint&)", &slot_16, QMetaData::Protected },
	{ "showResultPage(int,QListViewItem*,const QPoint&)", &slot_17, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"HelpDialogBase", parentObject,
	slot_tbl, 18,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_HelpDialogBase.setMetaObject( metaObj );
    return metaObj;
}

void* HelpDialogBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "HelpDialogBase" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool HelpDialogBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: addBookmark(); break;
    case 4: currentBookmarkChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: currentIndexChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: currentTabChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: loadIndexFile(); break;
    case 8: currentContentsChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 9: removeBookmark(); break;
    case 10: searchInIndex((const QString&)static_QUType_QString.get(_o+1)); break;
    case 11: showTopic(); break;
    case 12: showTopic((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 13: showSearchHelp(); break;
    case 14: startSearch(); break;
    case 15: showResultPage((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 16: showResultPage((int)static_QUType_int.get(_o+1),(QListBoxItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 17: showResultPage((int)static_QUType_int.get(_o+1),(QListViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool HelpDialogBase::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool HelpDialogBase::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool HelpDialogBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
