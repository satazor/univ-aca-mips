/****************************************************************************
** CustomWidgetEditor meta object code from reading C++ file 'customwidgeteditorimpl.h'
**
** Created: Wed Oct 9 11:04:49 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../customwidgeteditorimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CustomWidgetEditor::className() const
{
    return "CustomWidgetEditor";
}

QMetaObject *CustomWidgetEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CustomWidgetEditor( "CustomWidgetEditor", &CustomWidgetEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CustomWidgetEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomWidgetEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CustomWidgetEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomWidgetEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CustomWidgetEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = CustomWidgetEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"addWidgetClicked", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"classNameChanged", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"currentWidgetChanged", 1, param_slot_2 };
    static const QUMethod slot_3 = {"deleteWidgetClicked", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"headerFileChanged", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"heightChanged", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"includePolicyChanged", 1, param_slot_6 };
    static const QUMethod slot_7 = {"pixmapChoosen", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"widthChanged", 1, param_slot_8 };
    static const QUMethod slot_9 = {"chooseHeader", 0, 0 };
    static const QUMethod slot_10 = {"checkWidgetName", 0, 0 };
    static const QUMethod slot_11 = {"closeClicked", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ "i", &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_12 = {"currentSignalChanged", 1, param_slot_12 };
    static const QUMethod slot_13 = {"addSignal", 0, 0 };
    static const QUMethod slot_14 = {"removeSignal", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"signalNameChanged", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"slotAccessChanged", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"slotNameChanged", 1, param_slot_17 };
    static const QUMethod slot_18 = {"addSlot", 0, 0 };
    static const QUMethod slot_19 = {"removeSlot", 0, 0 };
    static const QUParameter param_slot_20[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_20 = {"currentSlotChanged", 1, param_slot_20 };
    static const QUParameter param_slot_21[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_21 = {"propertyTypeChanged", 1, param_slot_21 };
    static const QUParameter param_slot_22[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"propertyNameChanged", 1, param_slot_22 };
    static const QUMethod slot_23 = {"addProperty", 0, 0 };
    static const QUMethod slot_24 = {"removeProperty", 0, 0 };
    static const QUParameter param_slot_25[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_25 = {"currentPropertyChanged", 1, param_slot_25 };
    static const QUMethod slot_26 = {"saveDescription", 0, 0 };
    static const QUMethod slot_27 = {"loadDescription", 0, 0 };
    static const QUParameter param_slot_28[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_28 = {"horDataChanged", 1, param_slot_28 };
    static const QUParameter param_slot_29[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_29 = {"verDataChanged", 1, param_slot_29 };
    static const QUParameter param_slot_30[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_30 = {"widgetIsContainer", 1, param_slot_30 };
    static const QMetaData slot_tbl[] = {
	{ "addWidgetClicked()", &slot_0, QMetaData::Protected },
	{ "classNameChanged(const QString&)", &slot_1, QMetaData::Protected },
	{ "currentWidgetChanged(QListBoxItem*)", &slot_2, QMetaData::Protected },
	{ "deleteWidgetClicked()", &slot_3, QMetaData::Protected },
	{ "headerFileChanged(const QString&)", &slot_4, QMetaData::Protected },
	{ "heightChanged(int)", &slot_5, QMetaData::Protected },
	{ "includePolicyChanged(int)", &slot_6, QMetaData::Protected },
	{ "pixmapChoosen()", &slot_7, QMetaData::Protected },
	{ "widthChanged(int)", &slot_8, QMetaData::Protected },
	{ "chooseHeader()", &slot_9, QMetaData::Protected },
	{ "checkWidgetName()", &slot_10, QMetaData::Protected },
	{ "closeClicked()", &slot_11, QMetaData::Protected },
	{ "currentSignalChanged(QListBoxItem*)", &slot_12, QMetaData::Protected },
	{ "addSignal()", &slot_13, QMetaData::Protected },
	{ "removeSignal()", &slot_14, QMetaData::Protected },
	{ "signalNameChanged(const QString&)", &slot_15, QMetaData::Protected },
	{ "slotAccessChanged(const QString&)", &slot_16, QMetaData::Protected },
	{ "slotNameChanged(const QString&)", &slot_17, QMetaData::Protected },
	{ "addSlot()", &slot_18, QMetaData::Protected },
	{ "removeSlot()", &slot_19, QMetaData::Protected },
	{ "currentSlotChanged(QListViewItem*)", &slot_20, QMetaData::Protected },
	{ "propertyTypeChanged(const QString&)", &slot_21, QMetaData::Protected },
	{ "propertyNameChanged(const QString&)", &slot_22, QMetaData::Protected },
	{ "addProperty()", &slot_23, QMetaData::Protected },
	{ "removeProperty()", &slot_24, QMetaData::Protected },
	{ "currentPropertyChanged(QListViewItem*)", &slot_25, QMetaData::Protected },
	{ "saveDescription()", &slot_26, QMetaData::Protected },
	{ "loadDescription()", &slot_27, QMetaData::Protected },
	{ "horDataChanged(int)", &slot_28, QMetaData::Protected },
	{ "verDataChanged(int)", &slot_29, QMetaData::Protected },
	{ "widgetIsContainer(bool)", &slot_30, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CustomWidgetEditor", parentObject,
	slot_tbl, 31,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CustomWidgetEditor.setMetaObject( metaObj );
    return metaObj;
}

void* CustomWidgetEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CustomWidgetEditor" ) )
	return this;
    return CustomWidgetEditorBase::qt_cast( clname );
}

bool CustomWidgetEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addWidgetClicked(); break;
    case 1: classNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: currentWidgetChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: deleteWidgetClicked(); break;
    case 4: headerFileChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: heightChanged((int)static_QUType_int.get(_o+1)); break;
    case 6: includePolicyChanged((int)static_QUType_int.get(_o+1)); break;
    case 7: pixmapChoosen(); break;
    case 8: widthChanged((int)static_QUType_int.get(_o+1)); break;
    case 9: chooseHeader(); break;
    case 10: checkWidgetName(); break;
    case 11: closeClicked(); break;
    case 12: currentSignalChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 13: addSignal(); break;
    case 14: removeSignal(); break;
    case 15: signalNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 16: slotAccessChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 17: slotNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 18: addSlot(); break;
    case 19: removeSlot(); break;
    case 20: currentSlotChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 21: propertyTypeChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 22: propertyNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 23: addProperty(); break;
    case 24: removeProperty(); break;
    case 25: currentPropertyChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 26: saveDescription(); break;
    case 27: loadDescription(); break;
    case 28: horDataChanged((int)static_QUType_int.get(_o+1)); break;
    case 29: verDataChanged((int)static_QUType_int.get(_o+1)); break;
    case 30: widgetIsContainer((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return CustomWidgetEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CustomWidgetEditor::qt_emit( int _id, QUObject* _o )
{
    return CustomWidgetEditorBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CustomWidgetEditor::qt_property( int id, int f, QVariant* v)
{
    return CustomWidgetEditorBase::qt_property( id, f, v);
}

bool CustomWidgetEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
