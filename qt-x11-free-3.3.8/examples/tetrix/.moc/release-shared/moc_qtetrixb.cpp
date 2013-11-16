/****************************************************************************
** QTetrixBoard meta object code from reading C++ file 'qtetrixb.h'
**
** Created: Wed Oct 9 11:08:26 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qtetrixb.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QTetrixBoard::className() const
{
    return "QTetrixBoard";
}

QMetaObject *QTetrixBoard::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTetrixBoard( "QTetrixBoard", &QTetrixBoard::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTetrixBoard::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTetrixBoard", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTetrixBoard::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTetrixBoard", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTetrixBoard::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUMethod slot_0 = {"timeout", 0, 0 };
    static const QUMethod slot_1 = {"updateNext", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "e", &static_QUType_ptr, "QKeyEvent", QUParameter::In }
    };
    static const QUMethod slot_2 = {"key", 1, param_slot_2 };
    static const QUMethod slot_3 = {"start", 0, 0 };
    static const QUMethod slot_4 = {"pause", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "timeout()", &slot_0, QMetaData::Public },
	{ "updateNext()", &slot_1, QMetaData::Public },
	{ "key(QKeyEvent*)", &slot_2, QMetaData::Public },
	{ "start()", &slot_3, QMetaData::Public },
	{ "pause()", &slot_4, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"gameOverSignal", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In },
	{ "color1", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod signal_1 = {"drawNextSquareSignal", 3, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ "noOfLines", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"updateRemovedSignal", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ "score", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"updateScoreSignal", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ "level", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"updateLevelSignal", 1, param_signal_4 };
    static const QMetaData signal_tbl[] = {
	{ "gameOverSignal()", &signal_0, QMetaData::Public },
	{ "drawNextSquareSignal(int,int,QColor*)", &signal_1, QMetaData::Public },
	{ "updateRemovedSignal(int)", &signal_2, QMetaData::Public },
	{ "updateScoreSignal(int)", &signal_3, QMetaData::Public },
	{ "updateLevelSignal(int)", &signal_4, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QTetrixBoard", parentObject,
	slot_tbl, 5,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTetrixBoard.setMetaObject( metaObj );
    return metaObj;
}

void* QTetrixBoard::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTetrixBoard" ) )
	return this;
    if ( !qstrcmp( clname, "GenericTetrix" ) )
	return (GenericTetrix*)this;
    return QFrame::qt_cast( clname );
}

// SIGNAL gameOverSignal
void QTetrixBoard::gameOverSignal()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL drawNextSquareSignal
void QTetrixBoard::drawNextSquareSignal( int t0, int t1, QColor* t2 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[4];
    static_QUType_int.set(o+1,t0);
    static_QUType_int.set(o+2,t1);
    static_QUType_varptr.set(o+3,t2);
    activate_signal( clist, o );
}

// SIGNAL updateRemovedSignal
void QTetrixBoard::updateRemovedSignal( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL updateScoreSignal
void QTetrixBoard::updateScoreSignal( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL updateLevelSignal
void QTetrixBoard::updateLevelSignal( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 4, t0 );
}

bool QTetrixBoard::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: timeout(); break;
    case 1: updateNext(); break;
    case 2: key((QKeyEvent*)static_QUType_ptr.get(_o+1)); break;
    case 3: start(); break;
    case 4: pause(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTetrixBoard::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: gameOverSignal(); break;
    case 1: drawNextSquareSignal((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(QColor*)static_QUType_varptr.get(_o+3)); break;
    case 2: updateRemovedSignal((int)static_QUType_int.get(_o+1)); break;
    case 3: updateScoreSignal((int)static_QUType_int.get(_o+1)); break;
    case 4: updateLevelSignal((int)static_QUType_int.get(_o+1)); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTetrixBoard::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool QTetrixBoard::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
