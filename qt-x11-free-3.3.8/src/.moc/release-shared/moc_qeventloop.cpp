/****************************************************************************
** QEventLoop meta object code from reading C++ file 'qeventloop.h'
**
** Created: Wed Oct 9 10:52:28 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qeventloop.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QEventLoop::className() const
{
    return "QEventLoop";
}

QMetaObject *QEventLoop::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QEventLoop( "QEventLoop", &QEventLoop::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QEventLoop::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QEventLoop", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QEventLoop::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QEventLoop", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QEventLoop::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod signal_0 = {"awake", 0, 0 };
    static const QUMethod signal_1 = {"aboutToBlock", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "awake()", &signal_0, QMetaData::Public },
	{ "aboutToBlock()", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QEventLoop", parentObject,
	0, 0,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QEventLoop.setMetaObject( metaObj );
    return metaObj;
}

void* QEventLoop::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QEventLoop" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL awake
void QEventLoop::awake()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL aboutToBlock
void QEventLoop::aboutToBlock()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool QEventLoop::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QEventLoop::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: awake(); break;
    case 1: aboutToBlock(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QEventLoop::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QEventLoop::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
