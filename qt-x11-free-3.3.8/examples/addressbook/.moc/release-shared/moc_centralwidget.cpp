/****************************************************************************
** ABCentralWidget meta object code from reading C++ file 'centralwidget.h'
**
** Created: Wed Oct 9 11:07:06 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../centralwidget.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ABCentralWidget::className() const
{
    return "ABCentralWidget";
}

QMetaObject *ABCentralWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ABCentralWidget( "ABCentralWidget", &ABCentralWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ABCentralWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ABCentralWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ABCentralWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ABCentralWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ABCentralWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"addEntry", 0, 0 };
    static const QUMethod slot_1 = {"changeEntry", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_2 = {"itemSelected", 1, param_slot_2 };
    static const QUMethod slot_3 = {"selectionChanged", 0, 0 };
    static const QUMethod slot_4 = {"toggleFirstName", 0, 0 };
    static const QUMethod slot_5 = {"toggleLastName", 0, 0 };
    static const QUMethod slot_6 = {"toggleAddress", 0, 0 };
    static const QUMethod slot_7 = {"toggleEMail", 0, 0 };
    static const QUMethod slot_8 = {"findEntries", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "addEntry()", &slot_0, QMetaData::Protected },
	{ "changeEntry()", &slot_1, QMetaData::Protected },
	{ "itemSelected(QListViewItem*)", &slot_2, QMetaData::Protected },
	{ "selectionChanged()", &slot_3, QMetaData::Protected },
	{ "toggleFirstName()", &slot_4, QMetaData::Protected },
	{ "toggleLastName()", &slot_5, QMetaData::Protected },
	{ "toggleAddress()", &slot_6, QMetaData::Protected },
	{ "toggleEMail()", &slot_7, QMetaData::Protected },
	{ "findEntries()", &slot_8, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ABCentralWidget", parentObject,
	slot_tbl, 9,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ABCentralWidget.setMetaObject( metaObj );
    return metaObj;
}

void* ABCentralWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ABCentralWidget" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool ABCentralWidget::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addEntry(); break;
    case 1: changeEntry(); break;
    case 2: itemSelected((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 3: selectionChanged(); break;
    case 4: toggleFirstName(); break;
    case 5: toggleLastName(); break;
    case 6: toggleAddress(); break;
    case 7: toggleEMail(); break;
    case 8: findEntries(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ABCentralWidget::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ABCentralWidget::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ABCentralWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
