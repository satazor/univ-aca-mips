/****************************************************************************
** QProcess meta object code from reading C++ file 'qprocess.h'
**
** Created: Wed Oct 9 10:52:31 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qprocess.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QProcess::className() const
{
    return "QProcess";
}

QMetaObject *QProcess::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QProcess( "QProcess", &QProcess::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QProcess::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QProcess", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QProcess::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QProcess", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QProcess::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"tryTerminate", 0, 0 };
    static const QUMethod slot_1 = {"kill", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "buf", &static_QUType_varptr, "\x1d", QUParameter::In }
    };
    static const QUMethod slot_2 = {"writeToStdin", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "buf", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"writeToStdin", 1, param_slot_3 };
    static const QUMethod slot_4 = {"closeStdin", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "fd", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"socketRead", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "fd", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"socketWrite", 1, param_slot_6 };
    static const QUMethod slot_7 = {"timeout", 0, 0 };
    static const QUMethod slot_8 = {"closeStdinLaunch", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "tryTerminate()", &slot_0, QMetaData::Public },
	{ "kill()", &slot_1, QMetaData::Public },
	{ "writeToStdin(const QByteArray&)", &slot_2, QMetaData::Public },
	{ "writeToStdin(const QString&)", &slot_3, QMetaData::Public },
	{ "closeStdin()", &slot_4, QMetaData::Public },
	{ "socketRead(int)", &slot_5, QMetaData::Private },
	{ "socketWrite(int)", &slot_6, QMetaData::Private },
	{ "timeout()", &slot_7, QMetaData::Private },
	{ "closeStdinLaunch()", &slot_8, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"readyReadStdout", 0, 0 };
    static const QUMethod signal_1 = {"readyReadStderr", 0, 0 };
    static const QUMethod signal_2 = {"processExited", 0, 0 };
    static const QUMethod signal_3 = {"wroteToStdin", 0, 0 };
    static const QUMethod signal_4 = {"launchFinished", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "readyReadStdout()", &signal_0, QMetaData::Public },
	{ "readyReadStderr()", &signal_1, QMetaData::Public },
	{ "processExited()", &signal_2, QMetaData::Public },
	{ "wroteToStdin()", &signal_3, QMetaData::Public },
	{ "launchFinished()", &signal_4, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QProcess", parentObject,
	slot_tbl, 9,
	signal_tbl, 5,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QProcess.setMetaObject( metaObj );
    return metaObj;
}

void* QProcess::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QProcess" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL readyReadStdout
void QProcess::readyReadStdout()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL readyReadStderr
void QProcess::readyReadStderr()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL processExited
void QProcess::processExited()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL wroteToStdin
void QProcess::wroteToStdin()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL launchFinished
void QProcess::launchFinished()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

bool QProcess::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: tryTerminate(); break;
    case 1: kill(); break;
    case 2: writeToStdin((const QByteArray&)*((const QByteArray*)static_QUType_ptr.get(_o+1))); break;
    case 3: writeToStdin((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: closeStdin(); break;
    case 5: socketRead((int)static_QUType_int.get(_o+1)); break;
    case 6: socketWrite((int)static_QUType_int.get(_o+1)); break;
    case 7: timeout(); break;
    case 8: closeStdinLaunch(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QProcess::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: readyReadStdout(); break;
    case 1: readyReadStderr(); break;
    case 2: processExited(); break;
    case 3: wroteToStdin(); break;
    case 4: launchFinished(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QProcess::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QProcess::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
