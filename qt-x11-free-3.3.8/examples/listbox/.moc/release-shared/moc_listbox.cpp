/****************************************************************************
** ListBoxDemo meta object code from reading C++ file 'listbox.h'
**
** Created: Wed Oct 9 11:07:58 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ListBoxDemo::className() const
{
    return "ListBoxDemo";
}

QMetaObject *ListBoxDemo::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListBoxDemo( "ListBoxDemo", &ListBoxDemo::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListBoxDemo::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxDemo", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListBoxDemo::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxDemo", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListBoxDemo::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"setNumRows", 0, 0 };
    static const QUMethod slot_1 = {"setNumCols", 0, 0 };
    static const QUMethod slot_2 = {"setRowsByHeight", 0, 0 };
    static const QUMethod slot_3 = {"setColsByWidth", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setVariableWidth", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setVariableHeight", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setMultiSelection", 1, param_slot_6 };
    static const QUMethod slot_7 = {"sortAscending", 0, 0 };
    static const QUMethod slot_8 = {"sortDescending", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setNumRows()", &slot_0, QMetaData::Private },
	{ "setNumCols()", &slot_1, QMetaData::Private },
	{ "setRowsByHeight()", &slot_2, QMetaData::Private },
	{ "setColsByWidth()", &slot_3, QMetaData::Private },
	{ "setVariableWidth(bool)", &slot_4, QMetaData::Private },
	{ "setVariableHeight(bool)", &slot_5, QMetaData::Private },
	{ "setMultiSelection(bool)", &slot_6, QMetaData::Private },
	{ "sortAscending()", &slot_7, QMetaData::Private },
	{ "sortDescending()", &slot_8, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListBoxDemo", parentObject,
	slot_tbl, 9,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListBoxDemo.setMetaObject( metaObj );
    return metaObj;
}

void* ListBoxDemo::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListBoxDemo" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool ListBoxDemo::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setNumRows(); break;
    case 1: setNumCols(); break;
    case 2: setRowsByHeight(); break;
    case 3: setColsByWidth(); break;
    case 4: setVariableWidth((bool)static_QUType_bool.get(_o+1)); break;
    case 5: setVariableHeight((bool)static_QUType_bool.get(_o+1)); break;
    case 6: setMultiSelection((bool)static_QUType_bool.get(_o+1)); break;
    case 7: sortAscending(); break;
    case 8: sortDescending(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListBoxDemo::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ListBoxDemo::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ListBoxDemo::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
