/****************************************************************************
** QFileIconProvider meta object code from reading C++ file 'qfiledialog.h'
**
** Created: Wed Oct 9 10:53:01 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dialogs/qfiledialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QFileIconProvider::className() const
{
    return "QFileIconProvider";
}

QMetaObject *QFileIconProvider::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QFileIconProvider( "QFileIconProvider", &QFileIconProvider::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QFileIconProvider::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFileIconProvider", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QFileIconProvider::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFileIconProvider", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QFileIconProvider::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"QFileIconProvider", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QFileIconProvider.setMetaObject( metaObj );
    return metaObj;
}

void* QFileIconProvider::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QFileIconProvider" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool QFileIconProvider::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QFileIconProvider::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QFileIconProvider::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QFileIconProvider::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


#include <qvariant.h>
const char *QFileDialog::className() const
{
    return "QFileDialog";
}

QMetaObject *QFileDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QFileDialog( "QFileDialog", &QFileDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QFileDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFileDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QFileDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFileDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QFileDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "AnyFile",  (int) QFileDialog::AnyFile },
	{ "ExistingFile",  (int) QFileDialog::ExistingFile },
	{ "Directory",  (int) QFileDialog::Directory },
	{ "ExistingFiles",  (int) QFileDialog::ExistingFiles },
	{ "DirectoryOnly",  (int) QFileDialog::DirectoryOnly }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "Detail",  (int) QFileDialog::Detail },
	{ "List",  (int) QFileDialog::List }
    };
    static const QMetaEnum::Item enum_2[] = {
	{ "NoPreview",  (int) QFileDialog::NoPreview },
	{ "Contents",  (int) QFileDialog::Contents },
	{ "Info",  (int) QFileDialog::Info }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Mode", 5, enum_0, FALSE },
	{ "ViewMode", 2, enum_1, FALSE },
	{ "PreviewMode", 3, enum_2, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"done", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setDir", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "url", &static_QUType_ptr, "QUrlOperator", QUParameter::In }
    };
    static const QUMethod slot_2 = {"setUrl", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setFilter", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setFilters", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_ptr, "char*", QUParameter::In }
    };
    static const QUMethod slot_5 = {"setFilters", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod slot_6 = {"setFilters", 1, param_slot_6 };
    static const QUMethod slot_7 = {"detailViewSelectionChanged", 0, 0 };
    static const QUMethod slot_8 = {"listBoxSelectionChanged", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"changeMode", 1, param_slot_9 };
    static const QUMethod slot_10 = {"fileNameEditReturnPressed", 0, 0 };
    static const QUMethod slot_11 = {"stopCopy", 0, 0 };
    static const QUMethod slot_12 = {"removeProgressDia", 0, 0 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"fileSelected", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_14 = {"fileHighlighted", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"dirSelected", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"pathSelected", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_17 = {"updateFileNameEdit", 1, param_slot_17 };
    static const QUParameter param_slot_18[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_18 = {"selectDirectoryOrFile", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"popupContextMenu", 3, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In },
	{ 0, &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_20 = {"popupContextMenu", 2, param_slot_20 };
    static const QUParameter param_slot_21[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_21 = {"updateFileNameEdit", 1, param_slot_21 };
    static const QUParameter param_slot_22[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_22 = {"selectDirectoryOrFile", 1, param_slot_22 };
    static const QUMethod slot_23 = {"fileNameEditDone", 0, 0 };
    static const QUMethod slot_24 = {"okClicked", 0, 0 };
    static const QUMethod slot_25 = {"filterClicked", 0, 0 };
    static const QUMethod slot_26 = {"cancelClicked", 0, 0 };
    static const QUMethod slot_27 = {"cdUpClicked", 0, 0 };
    static const QUMethod slot_28 = {"newFolderClicked", 0, 0 };
    static const QUMethod slot_29 = {"fixupNameEdit", 0, 0 };
    static const QUMethod slot_30 = {"doMimeTypeLookup", 0, 0 };
    static const QUMethod slot_31 = {"updateGeometries", 0, 0 };
    static const QUMethod slot_32 = {"modeButtonsDestroyed", 0, 0 };
    static const QUParameter param_slot_33[] = {
	{ "op", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_33 = {"urlStart", 1, param_slot_33 };
    static const QUParameter param_slot_34[] = {
	{ "op", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_34 = {"urlFinished", 1, param_slot_34 };
    static const QUParameter param_slot_35[] = {
	{ "bytesDone", &static_QUType_int, 0, QUParameter::In },
	{ "bytesTotal", &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_35 = {"dataTransferProgress", 3, param_slot_35 };
    static const QUParameter param_slot_36[] = {
	{ "fi", &static_QUType_ptr, "QValueList<QUrlInfo>", QUParameter::In },
	{ "op", &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_36 = {"insertEntry", 2, param_slot_36 };
    static const QUParameter param_slot_37[] = {
	{ 0, &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_37 = {"removeEntry", 1, param_slot_37 };
    static const QUParameter param_slot_38[] = {
	{ "info", &static_QUType_ptr, "QUrlInfo", QUParameter::In },
	{ 0, &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_38 = {"createdDirectory", 2, param_slot_38 };
    static const QUParameter param_slot_39[] = {
	{ 0, &static_QUType_ptr, "QNetworkOperation", QUParameter::In }
    };
    static const QUMethod slot_39 = {"itemChanged", 1, param_slot_39 };
    static const QUMethod slot_40 = {"goBack", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "done(int)", &slot_0, QMetaData::Public },
	{ "setDir(const QString&)", &slot_1, QMetaData::Public },
	{ "setUrl(const QUrlOperator&)", &slot_2, QMetaData::Public },
	{ "setFilter(const QString&)", &slot_3, QMetaData::Public },
	{ "setFilters(const QString&)", &slot_4, QMetaData::Public },
	{ "setFilters(const char**)", &slot_5, QMetaData::Public },
	{ "setFilters(const QStringList&)", &slot_6, QMetaData::Public },
	{ "detailViewSelectionChanged()", &slot_7, QMetaData::Private },
	{ "listBoxSelectionChanged()", &slot_8, QMetaData::Private },
	{ "changeMode(int)", &slot_9, QMetaData::Private },
	{ "fileNameEditReturnPressed()", &slot_10, QMetaData::Private },
	{ "stopCopy()", &slot_11, QMetaData::Private },
	{ "removeProgressDia()", &slot_12, QMetaData::Private },
	{ "fileSelected(int)", &slot_13, QMetaData::Private },
	{ "fileHighlighted(int)", &slot_14, QMetaData::Private },
	{ "dirSelected(int)", &slot_15, QMetaData::Private },
	{ "pathSelected(int)", &slot_16, QMetaData::Private },
	{ "updateFileNameEdit(QListViewItem*)", &slot_17, QMetaData::Private },
	{ "selectDirectoryOrFile(QListViewItem*)", &slot_18, QMetaData::Private },
	{ "popupContextMenu(QListViewItem*,const QPoint&,int)", &slot_19, QMetaData::Private },
	{ "popupContextMenu(QListBoxItem*,const QPoint&)", &slot_20, QMetaData::Private },
	{ "updateFileNameEdit(QListBoxItem*)", &slot_21, QMetaData::Private },
	{ "selectDirectoryOrFile(QListBoxItem*)", &slot_22, QMetaData::Private },
	{ "fileNameEditDone()", &slot_23, QMetaData::Private },
	{ "okClicked()", &slot_24, QMetaData::Private },
	{ "filterClicked()", &slot_25, QMetaData::Private },
	{ "cancelClicked()", &slot_26, QMetaData::Private },
	{ "cdUpClicked()", &slot_27, QMetaData::Private },
	{ "newFolderClicked()", &slot_28, QMetaData::Private },
	{ "fixupNameEdit()", &slot_29, QMetaData::Private },
	{ "doMimeTypeLookup()", &slot_30, QMetaData::Private },
	{ "updateGeometries()", &slot_31, QMetaData::Private },
	{ "modeButtonsDestroyed()", &slot_32, QMetaData::Private },
	{ "urlStart(QNetworkOperation*)", &slot_33, QMetaData::Private },
	{ "urlFinished(QNetworkOperation*)", &slot_34, QMetaData::Private },
	{ "dataTransferProgress(int,int,QNetworkOperation*)", &slot_35, QMetaData::Private },
	{ "insertEntry(const QValueList<QUrlInfo>&,QNetworkOperation*)", &slot_36, QMetaData::Private },
	{ "removeEntry(QNetworkOperation*)", &slot_37, QMetaData::Private },
	{ "createdDirectory(const QUrlInfo&,QNetworkOperation*)", &slot_38, QMetaData::Private },
	{ "itemChanged(QNetworkOperation*)", &slot_39, QMetaData::Private },
	{ "goBack()", &slot_40, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"fileHighlighted", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"fileSelected", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod signal_2 = {"filesSelected", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"dirEntered", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"filterSelected", 1, param_signal_4 };
    static const QMetaData signal_tbl[] = {
	{ "fileHighlighted(const QString&)", &signal_0, QMetaData::Protected },
	{ "fileSelected(const QString&)", &signal_1, QMetaData::Protected },
	{ "filesSelected(const QStringList&)", &signal_2, QMetaData::Protected },
	{ "dirEntered(const QString&)", &signal_3, QMetaData::Protected },
	{ "filterSelected(const QString&)", &signal_4, QMetaData::Protected }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[10] = {
 	{ "QString","selectedFile", 0x3000001, &QFileDialog::metaObj, 0, -1 },
	{ "QString","selectedFilter", 0x3000001, &QFileDialog::metaObj, 0, -1 },
	{ "QStringList","selectedFiles", 0x4000001, &QFileDialog::metaObj, 0, -1 },
	{ "QString","dirPath", 0x3000001, &QFileDialog::metaObj, 0, -1 },
	{ "bool","showHiddenFiles", 0x12000103, &QFileDialog::metaObj, 0, -1 },
	{ "Mode","mode", 0x0107, &QFileDialog::metaObj, &enum_tbl[0], -1 },
	{ "ViewMode","viewMode", 0x0107, &QFileDialog::metaObj, &enum_tbl[1], -1 },
	{ "PreviewMode","previewMode", 0x0107, &QFileDialog::metaObj, &enum_tbl[2], -1 },
	{ "bool","infoPreview", 0x12000003, &QFileDialog::metaObj, 0, -1 },
	{ "bool","contentsPreview", 0x12000003, &QFileDialog::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QFileDialog", parentObject,
	slot_tbl, 41,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	props_tbl, 10,
	enum_tbl, 3,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QFileDialog.setMetaObject( metaObj );
    return metaObj;
}

void* QFileDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QFileDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL fileHighlighted
void QFileDialog::fileHighlighted( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL fileSelected
void QFileDialog::fileSelected( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL filesSelected
void QFileDialog::filesSelected( const QStringList& t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_varptr.set(o+1,&t0);
    activate_signal( clist, o );
}

// SIGNAL dirEntered
void QFileDialog::dirEntered( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL filterSelected
void QFileDialog::filterSelected( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 4, t0 );
}

bool QFileDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: done((int)static_QUType_int.get(_o+1)); break;
    case 1: setDir((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: setUrl((const QUrlOperator&)*((const QUrlOperator*)static_QUType_ptr.get(_o+1))); break;
    case 3: setFilter((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: setFilters((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: setFilters((const char**)static_QUType_ptr.get(_o+1)); break;
    case 6: setFilters((const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+1))); break;
    case 7: detailViewSelectionChanged(); break;
    case 8: listBoxSelectionChanged(); break;
    case 9: changeMode((int)static_QUType_int.get(_o+1)); break;
    case 10: fileNameEditReturnPressed(); break;
    case 11: stopCopy(); break;
    case 12: removeProgressDia(); break;
    case 13: fileSelected((int)static_QUType_int.get(_o+1)); break;
    case 14: fileHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 15: dirSelected((int)static_QUType_int.get(_o+1)); break;
    case 16: pathSelected((int)static_QUType_int.get(_o+1)); break;
    case 17: updateFileNameEdit((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 18: selectDirectoryOrFile((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 19: popupContextMenu((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2)),(int)static_QUType_int.get(_o+3)); break;
    case 20: popupContextMenu((QListBoxItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 21: updateFileNameEdit((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 22: selectDirectoryOrFile((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 23: fileNameEditDone(); break;
    case 24: okClicked(); break;
    case 25: filterClicked(); break;
    case 26: cancelClicked(); break;
    case 27: cdUpClicked(); break;
    case 28: newFolderClicked(); break;
    case 29: fixupNameEdit(); break;
    case 30: doMimeTypeLookup(); break;
    case 31: updateGeometries(); break;
    case 32: modeButtonsDestroyed(); break;
    case 33: urlStart((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 34: urlFinished((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 35: dataTransferProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(QNetworkOperation*)static_QUType_ptr.get(_o+3)); break;
    case 36: insertEntry((const QValueList<QUrlInfo>&)*((const QValueList<QUrlInfo>*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 37: removeEntry((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 38: createdDirectory((const QUrlInfo&)*((const QUrlInfo*)static_QUType_ptr.get(_o+1)),(QNetworkOperation*)static_QUType_ptr.get(_o+2)); break;
    case 39: itemChanged((QNetworkOperation*)static_QUType_ptr.get(_o+1)); break;
    case 40: goBack(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QFileDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: fileHighlighted((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: fileSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: filesSelected((const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+1))); break;
    case 3: dirEntered((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: filterSelected((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QFileDialog::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->selectedFile() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->selectedFilter() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->selectedFiles() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 1: *v = QVariant( this->dirPath() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setShowHiddenFiles(v->asBool()); break;
	case 1: *v = QVariant( this->showHiddenFiles(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setMode((Mode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->mode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setViewMode((ViewMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->viewMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setPreviewMode((PreviewMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->previewMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 0: setInfoPreviewEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isInfoPreviewEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 0: setContentsPreviewEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->isContentsPreviewEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QDialog::qt_property( id, f, v );
    }
    return TRUE;
}

bool QFileDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
