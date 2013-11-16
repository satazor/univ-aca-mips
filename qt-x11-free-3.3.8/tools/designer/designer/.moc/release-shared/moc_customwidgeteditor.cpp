/****************************************************************************
** CustomWidgetEditorBase meta object code from reading C++ file 'customwidgeteditor.h'
**
** Created: Wed Oct 9 11:05:06 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../customwidgeteditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CustomWidgetEditorBase::className() const
{
    return "CustomWidgetEditorBase";
}

QMetaObject *CustomWidgetEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CustomWidgetEditorBase( "CustomWidgetEditorBase", &CustomWidgetEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CustomWidgetEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomWidgetEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CustomWidgetEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomWidgetEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CustomWidgetEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"addSignal", 0, 0 };
    static const QUMethod slot_1 = {"loadDescription", 0, 0 };
    static const QUMethod slot_2 = {"addSlot", 0, 0 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QUMethod slot_4 = {"init", 0, 0 };
    static const QUMethod slot_5 = {"destroy", 0, 0 };
    static const QUMethod slot_6 = {"addProperty", 0, 0 };
    static const QUMethod slot_7 = {"addWidgetClicked", 0, 0 };
    static const QUMethod slot_8 = {"chooseHeader", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"classNameChanged", 1, param_slot_9 };
    static const QUMethod slot_10 = {"closeClicked", 0, 0 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_11 = {"currentPropertyChanged", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_12 = {"currentSignalChanged", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_13 = {"currentSlotChanged", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_14 = {"currentWidgetChanged", 1, param_slot_14 };
    static const QUMethod slot_15 = {"deleteWidgetClicked", 0, 0 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"headerFileChanged", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"heightChanged", 1, param_slot_17 };
    static const QUParameter param_slot_18[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_18 = {"horDataChanged", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_19 = {"includePolicyChanged", 1, param_slot_19 };
    static const QUMethod slot_20 = {"pixmapChoosen", 0, 0 };
    static const QUParameter param_slot_21[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_21 = {"propertyNameChanged", 1, param_slot_21 };
    static const QUParameter param_slot_22[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_22 = {"propertyTypeChanged", 1, param_slot_22 };
    static const QUMethod slot_23 = {"removeProperty", 0, 0 };
    static const QUMethod slot_24 = {"removeSignal", 0, 0 };
    static const QUMethod slot_25 = {"removeSlot", 0, 0 };
    static const QUMethod slot_26 = {"saveDescription", 0, 0 };
    static const QUParameter param_slot_27[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_27 = {"signalNameChanged", 1, param_slot_27 };
    static const QUParameter param_slot_28[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_28 = {"slotAccessChanged", 1, param_slot_28 };
    static const QUParameter param_slot_29[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_29 = {"slotNameChanged", 1, param_slot_29 };
    static const QUParameter param_slot_30[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_30 = {"verDataChanged", 1, param_slot_30 };
    static const QUParameter param_slot_31[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_31 = {"widgetIsContainer", 1, param_slot_31 };
    static const QUParameter param_slot_32[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_32 = {"widthChanged", 1, param_slot_32 };
    static const QMetaData slot_tbl[] = {
	{ "addSignal()", &slot_0, QMetaData::Public },
	{ "loadDescription()", &slot_1, QMetaData::Public },
	{ "addSlot()", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected },
	{ "init()", &slot_4, QMetaData::Protected },
	{ "destroy()", &slot_5, QMetaData::Protected },
	{ "addProperty()", &slot_6, QMetaData::Protected },
	{ "addWidgetClicked()", &slot_7, QMetaData::Protected },
	{ "chooseHeader()", &slot_8, QMetaData::Protected },
	{ "classNameChanged(const QString&)", &slot_9, QMetaData::Protected },
	{ "closeClicked()", &slot_10, QMetaData::Protected },
	{ "currentPropertyChanged(QListViewItem*)", &slot_11, QMetaData::Protected },
	{ "currentSignalChanged(QListBoxItem*)", &slot_12, QMetaData::Protected },
	{ "currentSlotChanged(QListViewItem*)", &slot_13, QMetaData::Protected },
	{ "currentWidgetChanged(QListBoxItem*)", &slot_14, QMetaData::Protected },
	{ "deleteWidgetClicked()", &slot_15, QMetaData::Protected },
	{ "headerFileChanged(const QString&)", &slot_16, QMetaData::Protected },
	{ "heightChanged(int)", &slot_17, QMetaData::Protected },
	{ "horDataChanged(int)", &slot_18, QMetaData::Protected },
	{ "includePolicyChanged(int)", &slot_19, QMetaData::Protected },
	{ "pixmapChoosen()", &slot_20, QMetaData::Protected },
	{ "propertyNameChanged(const QString&)", &slot_21, QMetaData::Protected },
	{ "propertyTypeChanged(const QString&)", &slot_22, QMetaData::Protected },
	{ "removeProperty()", &slot_23, QMetaData::Protected },
	{ "removeSignal()", &slot_24, QMetaData::Protected },
	{ "removeSlot()", &slot_25, QMetaData::Protected },
	{ "saveDescription()", &slot_26, QMetaData::Protected },
	{ "signalNameChanged(const QString&)", &slot_27, QMetaData::Protected },
	{ "slotAccessChanged(const QString&)", &slot_28, QMetaData::Protected },
	{ "slotNameChanged(const QString&)", &slot_29, QMetaData::Protected },
	{ "verDataChanged(int)", &slot_30, QMetaData::Protected },
	{ "widgetIsContainer(bool)", &slot_31, QMetaData::Protected },
	{ "widthChanged(int)", &slot_32, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CustomWidgetEditorBase", parentObject,
	slot_tbl, 33,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CustomWidgetEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* CustomWidgetEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CustomWidgetEditorBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool CustomWidgetEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addSignal(); break;
    case 1: loadDescription(); break;
    case 2: addSlot(); break;
    case 3: languageChange(); break;
    case 4: init(); break;
    case 5: destroy(); break;
    case 6: addProperty(); break;
    case 7: addWidgetClicked(); break;
    case 8: chooseHeader(); break;
    case 9: classNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 10: closeClicked(); break;
    case 11: currentPropertyChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 12: currentSignalChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 13: currentSlotChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 14: currentWidgetChanged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 15: deleteWidgetClicked(); break;
    case 16: headerFileChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 17: heightChanged((int)static_QUType_int.get(_o+1)); break;
    case 18: horDataChanged((int)static_QUType_int.get(_o+1)); break;
    case 19: includePolicyChanged((int)static_QUType_int.get(_o+1)); break;
    case 20: pixmapChoosen(); break;
    case 21: propertyNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 22: propertyTypeChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 23: removeProperty(); break;
    case 24: removeSignal(); break;
    case 25: removeSlot(); break;
    case 26: saveDescription(); break;
    case 27: signalNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 28: slotAccessChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 29: slotNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 30: verDataChanged((int)static_QUType_int.get(_o+1)); break;
    case 31: widgetIsContainer((bool)static_QUType_bool.get(_o+1)); break;
    case 32: widthChanged((int)static_QUType_int.get(_o+1)); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CustomWidgetEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CustomWidgetEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool CustomWidgetEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
