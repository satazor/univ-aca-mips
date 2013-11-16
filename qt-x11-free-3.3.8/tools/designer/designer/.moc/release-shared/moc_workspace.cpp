/****************************************************************************
** Workspace meta object code from reading C++ file 'workspace.h'
**
** Created: Wed Oct 9 11:04:48 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../workspace.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Workspace::className() const
{
    return "Workspace";
}

QMetaObject *Workspace::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Workspace( "Workspace", &Workspace::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Workspace::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Workspace", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Workspace::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Workspace", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Workspace::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QListView::staticMetaObject();
    static const QUMethod slot_0 = {"update", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "FormFile", QUParameter::In }
    };
    static const QUMethod slot_1 = {"update", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "fw", &static_QUType_ptr, "FormWindow", QUParameter::In }
    };
    static const QUMethod slot_2 = {"activeFormChanged", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "se", &static_QUType_ptr, "SourceEditor", QUParameter::In }
    };
    static const QUMethod slot_3 = {"activeEditorChanged", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_4 = {"itemClicked", 3, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"itemDoubleClicked", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In },
	{ "pos", &static_QUType_varptr, "\x0e", QUParameter::In }
    };
    static const QUMethod slot_6 = {"rmbClicked", 2, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "buffer", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"bufferChosen", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_8 = {"projectDestroyed", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_ptr, "SourceFile", QUParameter::In }
    };
    static const QUMethod slot_9 = {"sourceFileAdded", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_ptr, "SourceFile", QUParameter::In }
    };
    static const QUMethod slot_10 = {"sourceFileRemoved", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_ptr, "FormFile", QUParameter::In }
    };
    static const QUMethod slot_11 = {"formFileAdded", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_ptr, "FormFile", QUParameter::In }
    };
    static const QUMethod slot_12 = {"formFileRemoved", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_13 = {"objectAdded", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_14 = {"objectRemoved", 1, param_slot_14 };
    static const QMetaData slot_tbl[] = {
	{ "update()", &slot_0, QMetaData::Public },
	{ "update(FormFile*)", &slot_1, QMetaData::Public },
	{ "activeFormChanged(FormWindow*)", &slot_2, QMetaData::Public },
	{ "activeEditorChanged(SourceEditor*)", &slot_3, QMetaData::Public },
	{ "itemClicked(int,QListViewItem*,const QPoint&)", &slot_4, QMetaData::Private },
	{ "itemDoubleClicked(QListViewItem*)", &slot_5, QMetaData::Private },
	{ "rmbClicked(QListViewItem*,const QPoint&)", &slot_6, QMetaData::Private },
	{ "bufferChosen(const QString&)", &slot_7, QMetaData::Private },
	{ "projectDestroyed(QObject*)", &slot_8, QMetaData::Private },
	{ "sourceFileAdded(SourceFile*)", &slot_9, QMetaData::Private },
	{ "sourceFileRemoved(SourceFile*)", &slot_10, QMetaData::Private },
	{ "formFileAdded(FormFile*)", &slot_11, QMetaData::Private },
	{ "formFileRemoved(FormFile*)", &slot_12, QMetaData::Private },
	{ "objectAdded(QObject*)", &slot_13, QMetaData::Private },
	{ "objectRemoved(QObject*)", &slot_14, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Workspace", parentObject,
	slot_tbl, 15,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Workspace.setMetaObject( metaObj );
    return metaObj;
}

void* Workspace::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Workspace" ) )
	return this;
    return QListView::qt_cast( clname );
}

bool Workspace::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: update(); break;
    case 1: update((FormFile*)static_QUType_ptr.get(_o+1)); break;
    case 2: activeFormChanged((FormWindow*)static_QUType_ptr.get(_o+1)); break;
    case 3: activeEditorChanged((SourceEditor*)static_QUType_ptr.get(_o+1)); break;
    case 4: itemClicked((int)static_QUType_int.get(_o+1),(QListViewItem*)static_QUType_ptr.get(_o+2),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+3))); break;
    case 5: itemDoubleClicked((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: rmbClicked((QListViewItem*)static_QUType_ptr.get(_o+1),(const QPoint&)*((const QPoint*)static_QUType_ptr.get(_o+2))); break;
    case 7: bufferChosen((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: projectDestroyed((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 9: sourceFileAdded((SourceFile*)static_QUType_ptr.get(_o+1)); break;
    case 10: sourceFileRemoved((SourceFile*)static_QUType_ptr.get(_o+1)); break;
    case 11: formFileAdded((FormFile*)static_QUType_ptr.get(_o+1)); break;
    case 12: formFileRemoved((FormFile*)static_QUType_ptr.get(_o+1)); break;
    case 13: objectAdded((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 14: objectRemoved((QObject*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QListView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Workspace::qt_emit( int _id, QUObject* _o )
{
    return QListView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Workspace::qt_property( int id, int f, QVariant* v)
{
    return QListView::qt_property( id, f, v);
}

bool Workspace::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
