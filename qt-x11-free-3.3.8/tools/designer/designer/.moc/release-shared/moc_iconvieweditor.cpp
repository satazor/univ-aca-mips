/****************************************************************************
** IconViewEditorBase meta object code from reading C++ file 'iconvieweditor.h'
**
** Created: Wed Oct 9 11:05:06 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../iconvieweditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *IconViewEditorBase::className() const
{
    return "IconViewEditorBase";
}

QMetaObject *IconViewEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_IconViewEditorBase( "IconViewEditorBase", &IconViewEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString IconViewEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IconViewEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString IconViewEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "IconViewEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* IconViewEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"applyClicked", 0, 0 };
    static const QUMethod slot_4 = {"cancelClicked", 0, 0 };
    static const QUMethod slot_5 = {"choosePixmap", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_6 = {"currentItemChanged", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"currentTextChanged", 1, param_slot_7 };
    static const QUMethod slot_8 = {"deleteCurrentItem", 0, 0 };
    static const QUMethod slot_9 = {"insertNewItem", 0, 0 };
    static const QUMethod slot_10 = {"deletePixmap", 0, 0 };
    static const QUMethod slot_11 = {"okClicked", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "applyClicked()", &slot_3, QMetaData::Protected },
	{ "cancelClicked()", &slot_4, QMetaData::Protected },
	{ "choosePixmap()", &slot_5, QMetaData::Protected },
	{ "currentItemChanged(QIconViewItem*)", &slot_6, QMetaData::Protected },
	{ "currentTextChanged(const QString&)", &slot_7, QMetaData::Protected },
	{ "deleteCurrentItem()", &slot_8, QMetaData::Protected },
	{ "insertNewItem()", &slot_9, QMetaData::Protected },
	{ "deletePixmap()", &slot_10, QMetaData::Protected },
	{ "okClicked()", &slot_11, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"IconViewEditorBase", parentObject,
	slot_tbl, 12,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_IconViewEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* IconViewEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "IconViewEditorBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool IconViewEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: applyClicked(); break;
    case 4: cancelClicked(); break;
    case 5: choosePixmap(); break;
    case 6: currentItemChanged((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 7: currentTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: deleteCurrentItem(); break;
    case 9: insertNewItem(); break;
    case 10: deletePixmap(); break;
    case 11: okClicked(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool IconViewEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool IconViewEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool IconViewEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
