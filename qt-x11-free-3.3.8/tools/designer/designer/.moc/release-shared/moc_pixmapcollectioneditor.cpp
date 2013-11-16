/****************************************************************************
** PixmapCollectionEditor meta object code from reading C++ file 'pixmapcollectioneditor.h'
**
** Created: Wed Oct 9 11:05:11 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../pixmapcollectioneditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *PixmapCollectionEditor::className() const
{
    return "PixmapCollectionEditor";
}

QMetaObject *PixmapCollectionEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PixmapCollectionEditor( "PixmapCollectionEditor", &PixmapCollectionEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PixmapCollectionEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PixmapCollectionEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PixmapCollectionEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PixmapCollectionEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PixmapCollectionEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUMethod slot_1 = {"destroy", 0, 0 };
    static const QUMethod slot_2 = {"addPixmap", 0, 0 };
    static const QUMethod slot_3 = {"removePixmap", 0, 0 };
    static const QUMethod slot_4 = {"updateView", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "i", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_5 = {"currentChanged", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "c", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setChooserMode", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"setCurrentItem", 1, param_slot_7 };
    static const QUParameter param_slot_8[] = {
	{ "pro", &static_QUType_ptr, "Project", QUParameter::In }
    };
    static const QUMethod slot_8 = {"setProject", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_QVariant, "\x06", QUParameter::Out },
	{ "p", &static_QUType_varptr, "\x06", QUParameter::In }
    };
    static const QUMethod slot_9 = {"scaledPixmap", 2, param_slot_9 };
    static const QUMethod slot_10 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "destroy()", &slot_1, QMetaData::Public },
	{ "addPixmap()", &slot_2, QMetaData::Public },
	{ "removePixmap()", &slot_3, QMetaData::Public },
	{ "updateView()", &slot_4, QMetaData::Public },
	{ "currentChanged(QIconViewItem*)", &slot_5, QMetaData::Public },
	{ "setChooserMode(bool)", &slot_6, QMetaData::Public },
	{ "setCurrentItem(const QString&)", &slot_7, QMetaData::Public },
	{ "setProject(Project*)", &slot_8, QMetaData::Public },
	{ "scaledPixmap(const QPixmap&)", &slot_9, QMetaData::Public },
	{ "languageChange()", &slot_10, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"PixmapCollectionEditor", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PixmapCollectionEditor.setMetaObject( metaObj );
    return metaObj;
}

void* PixmapCollectionEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PixmapCollectionEditor" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool PixmapCollectionEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: init(); break;
    case 1: destroy(); break;
    case 2: addPixmap(); break;
    case 3: removePixmap(); break;
    case 4: updateView(); break;
    case 5: currentChanged((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 6: setChooserMode((bool)static_QUType_bool.get(_o+1)); break;
    case 7: setCurrentItem((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: setProject((Project*)static_QUType_ptr.get(_o+1)); break;
    case 9: static_QUType_QVariant.set(_o,QVariant(scaledPixmap((const QPixmap&)*((const QPixmap*)static_QUType_ptr.get(_o+1))))); break;
    case 10: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PixmapCollectionEditor::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PixmapCollectionEditor::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool PixmapCollectionEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
