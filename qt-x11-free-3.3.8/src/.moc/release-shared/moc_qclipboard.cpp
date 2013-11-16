/****************************************************************************
** QClipboard meta object code from reading C++ file 'qclipboard.h'
**
** Created: Wed Oct 9 10:52:27 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qclipboard.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QClipboard::className() const
{
    return "QClipboard";
}

QMetaObject *QClipboard::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QClipboard( "QClipboard", &QClipboard::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QClipboard::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QClipboard", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QClipboard::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QClipboard", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QClipboard::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"ownerDestroyed", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "ownerDestroyed()", &slot_0, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"selectionChanged", 0, 0 };
    static const QUMethod signal_1 = {"dataChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "selectionChanged()", &signal_0, QMetaData::Public },
	{ "dataChanged()", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QClipboard", parentObject,
	slot_tbl, 1,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QClipboard.setMetaObject( metaObj );
    return metaObj;
}

void* QClipboard::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QClipboard" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL selectionChanged
void QClipboard::selectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL dataChanged
void QClipboard::dataChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool QClipboard::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: ownerDestroyed(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QClipboard::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: selectionChanged(); break;
    case 1: dataChanged(); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QClipboard::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QClipboard::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
