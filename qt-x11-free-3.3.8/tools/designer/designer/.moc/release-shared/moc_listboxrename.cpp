/****************************************************************************
** ListBoxRename meta object code from reading C++ file 'listboxrename.h'
**
** Created: Wed Oct 9 11:05:01 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listboxrename.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ListBoxRename::className() const
{
    return "ListBoxRename";
}

QMetaObject *ListBoxRename::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListBoxRename( "ListBoxRename", &ListBoxRename::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListBoxRename::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxRename", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListBoxRename::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxRename", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListBoxRename::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"showLineEdit", 0, 0 };
    static const QUMethod slot_1 = {"hideLineEdit", 0, 0 };
    static const QUMethod slot_2 = {"renameClickedItem", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "showLineEdit()", &slot_0, QMetaData::Public },
	{ "hideLineEdit()", &slot_1, QMetaData::Public },
	{ "renameClickedItem()", &slot_2, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"itemTextChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "itemTextChanged(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListBoxRename", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListBoxRename.setMetaObject( metaObj );
    return metaObj;
}

void* ListBoxRename::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListBoxRename" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL itemTextChanged
void ListBoxRename::itemTextChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool ListBoxRename::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: showLineEdit(); break;
    case 1: hideLineEdit(); break;
    case 2: renameClickedItem(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListBoxRename::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: itemTextChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ListBoxRename::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool ListBoxRename::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
