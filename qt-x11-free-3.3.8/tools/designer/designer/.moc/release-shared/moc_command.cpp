/****************************************************************************
** CommandHistory meta object code from reading C++ file 'command.h'
**
** Created: Wed Oct 9 11:04:42 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../command.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CommandHistory::className() const
{
    return "CommandHistory";
}

QMetaObject *CommandHistory::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CommandHistory( "CommandHistory", &CommandHistory::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CommandHistory::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CommandHistory", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CommandHistory::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CommandHistory", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CommandHistory::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"checkCompressedCommand", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "checkCompressedCommand()", &slot_0, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ "undoAvailable", &static_QUType_bool, 0, QUParameter::In },
	{ "redoAvailable", &static_QUType_bool, 0, QUParameter::In },
	{ "undoCmd", &static_QUType_QString, 0, QUParameter::In },
	{ "redoCmd", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"undoRedoChanged", 4, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ "m", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"modificationChanged", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "undoRedoChanged(bool,bool,const QString&,const QString&)", &signal_0, QMetaData::Public },
	{ "modificationChanged(bool)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"CommandHistory", parentObject,
	slot_tbl, 1,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CommandHistory.setMetaObject( metaObj );
    return metaObj;
}

void* CommandHistory::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CommandHistory" ) )
	return this;
    return QObject::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL undoRedoChanged
void CommandHistory::undoRedoChanged( bool t0, bool t1, const QString& t2, const QString& t3 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[5];
    static_QUType_bool.set(o+1,t0);
    static_QUType_bool.set(o+2,t1);
    static_QUType_QString.set(o+3,t2);
    static_QUType_QString.set(o+4,t3);
    activate_signal( clist, o );
}

// SIGNAL modificationChanged
void CommandHistory::modificationChanged( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 1, t0 );
}

bool CommandHistory::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: checkCompressedCommand(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CommandHistory::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: undoRedoChanged((bool)static_QUType_bool.get(_o+1),(bool)static_QUType_bool.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4)); break;
    case 1: modificationChanged((bool)static_QUType_bool.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool CommandHistory::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool CommandHistory::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
