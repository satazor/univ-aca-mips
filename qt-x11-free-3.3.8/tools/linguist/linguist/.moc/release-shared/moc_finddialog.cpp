/****************************************************************************
** FindDialog meta object code from reading C++ file 'finddialog.h'
**
** Created: Wed Oct 9 11:06:18 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../finddialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FindDialog::className() const
{
    return "FindDialog";
}

QMetaObject *FindDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FindDialog( "FindDialog", &FindDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FindDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FindDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FindDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FindDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FindDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"emitFindNext", 0, 0 };
    static const QUMethod slot_1 = {"emitReplace", 0, 0 };
    static const QUMethod slot_2 = {"emitReplaceAll", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "emitFindNext()", &slot_0, QMetaData::Private },
	{ "emitReplace()", &slot_1, QMetaData::Private },
	{ "emitReplaceAll()", &slot_2, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In },
	{ "where", &static_QUType_int, 0, QUParameter::In },
	{ "matchCase", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"findNext", 3, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "before", &static_QUType_QString, 0, QUParameter::In },
	{ "after", &static_QUType_QString, 0, QUParameter::In },
	{ "matchCase", &static_QUType_bool, 0, QUParameter::In },
	{ "all", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"replace", 4, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "findNext(const QString&,int,bool)", &signal_0, QMetaData::Public },
	{ "replace(const QString&,const QString&,bool,bool)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"FindDialog", parentObject,
	slot_tbl, 3,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FindDialog.setMetaObject( metaObj );
    return metaObj;
}

void* FindDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FindDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL findNext
void FindDialog::findNext( const QString& t0, int t1, bool t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_QString.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_bool.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL replace
void FindDialog::replace( const QString& t0, const QString& t1, bool t2, bool t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    static_QUType_bool.set(o+3,t2);
    static_QUType_bool.set(o+4,t3);
    activate_signal( clist, o );
}

bool FindDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: emitFindNext(); break;
    case 1: emitReplace(); break;
    case 2: emitReplaceAll(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FindDialog::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: findNext((const QString&)static_QUType_QString.get(_o+1),(int)static_QUType_int.get(_o+2),(bool)static_QUType_bool.get(_o+3)); break;
    case 1: replace((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(bool)static_QUType_bool.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool FindDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool FindDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
