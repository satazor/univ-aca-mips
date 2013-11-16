/****************************************************************************
** ActionEditorBase meta object code from reading C++ file 'actioneditor.h'
**
** Created: Wed Oct 9 11:05:09 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../actioneditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ActionEditorBase::className() const
{
    return "ActionEditorBase";
}

QMetaObject *ActionEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ActionEditorBase( "ActionEditorBase", &ActionEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ActionEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ActionEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ActionEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ActionEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ActionEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QUMethod slot_1 = {"init", 0, 0 };
    static const QUMethod slot_2 = {"destroy", 0, 0 };
    static const QUMethod slot_3 = {"connectionsClicked", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_4 = {"currentActionChanged", 1, param_slot_4 };
    static const QUMethod slot_5 = {"deleteAction", 0, 0 };
    static const QUMethod slot_6 = {"newAction", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected },
	{ "init()", &slot_1, QMetaData::Protected },
	{ "destroy()", &slot_2, QMetaData::Protected },
	{ "connectionsClicked()", &slot_3, QMetaData::Protected },
	{ "currentActionChanged(QListViewItem*)", &slot_4, QMetaData::Protected },
	{ "deleteAction()", &slot_5, QMetaData::Protected },
	{ "newAction()", &slot_6, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ActionEditorBase", parentObject,
	slot_tbl, 7,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ActionEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* ActionEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ActionEditorBase" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool ActionEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    case 1: init(); break;
    case 2: destroy(); break;
    case 3: connectionsClicked(); break;
    case 4: currentActionChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 5: deleteAction(); break;
    case 6: newAction(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ActionEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ActionEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ActionEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
