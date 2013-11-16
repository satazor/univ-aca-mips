/****************************************************************************
** ListEditor meta object code from reading C++ file 'listeditor.h'
**
** Created: Wed Oct 9 11:05:12 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listeditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *ListEditor::className() const
{
    return "ListEditor";
}

QMetaObject *ListEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListEditor( "ListEditor", &ListEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "l", &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod slot_1 = {"setList", 1, param_slot_1 };
    static const QUMethod slot_2 = {"addItem", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "i", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_3 = {"renamed", 1, param_slot_3 };
    static const QUMethod slot_4 = {"removeItems", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_QVariant, "\x04", QUParameter::Out }
    };
    static const QUMethod slot_5 = {"items", 1, param_slot_5 };
    static const QUMethod slot_6 = {"renameItem", 0, 0 };
    static const QUMethod slot_7 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "setList(const QStringList&)", &slot_1, QMetaData::Public },
	{ "addItem()", &slot_2, QMetaData::Public },
	{ "renamed(QListViewItem*)", &slot_3, QMetaData::Public },
	{ "removeItems()", &slot_4, QMetaData::Public },
	{ "items()", &slot_5, QMetaData::Public },
	{ "renameItem()", &slot_6, QMetaData::Public },
	{ "languageChange()", &slot_7, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListEditor", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListEditor.setMetaObject( metaObj );
    return metaObj;
}

void* ListEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListEditor" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool ListEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: init(); break;
    case 1: setList((const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+1))); break;
    case 2: addItem(); break;
    case 3: renamed((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 4: removeItems(); break;
    case 5: static_QUType_QVariant.set(_o,QVariant(items())); break;
    case 6: renameItem(); break;
    case 7: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListEditor::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ListEditor::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool ListEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
