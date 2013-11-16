/****************************************************************************
** ListBoxDnd meta object code from reading C++ file 'listboxdnd.h'
**
** Created: Wed Oct 9 11:05:01 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../listboxdnd.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ListBoxDnd::className() const
{
    return "ListBoxDnd";
}

QMetaObject *ListBoxDnd::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListBoxDnd( "ListBoxDnd", &ListBoxDnd::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListBoxDnd::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxDnd", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListBoxDnd::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxDnd", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListBoxDnd::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = ListDnd::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"confirmDrop", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "confirmDrop(QListBoxItem*)", &slot_0, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_0 = {"dropped", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "QListBoxItem", QUParameter::In }
    };
    static const QUMethod signal_1 = {"dragged", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "dropped(QListBoxItem*)", &signal_0, QMetaData::Public },
	{ "dragged(QListBoxItem*)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListBoxDnd", parentObject,
	slot_tbl, 1,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListBoxDnd.setMetaObject( metaObj );
    return metaObj;
}

void* ListBoxDnd::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListBoxDnd" ) )
	return this;
    return ListDnd::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL dropped
void ListBoxDnd::dropped( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL dragged
void ListBoxDnd::dragged( QListBoxItem* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool ListBoxDnd::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: confirmDrop((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return ListDnd::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListBoxDnd::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: dropped((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: dragged((QListBoxItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return ListDnd::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ListBoxDnd::qt_property( int id, int f, QVariant* v)
{
    return ListDnd::qt_property( id, f, v);
}

bool ListBoxDnd::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
