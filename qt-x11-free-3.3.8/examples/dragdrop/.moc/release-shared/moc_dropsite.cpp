/****************************************************************************
** DropSite meta object code from reading C++ file 'dropsite.h'
**
** Created: Wed Oct 9 11:07:38 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dropsite.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DropSite::className() const
{
    return "DropSite";
}

QMetaObject *DropSite::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DropSite( "DropSite", &DropSite::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DropSite::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DropSite", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DropSite::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DropSite", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DropSite::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLabel::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"message", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "message(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"DropSite", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DropSite.setMetaObject( metaObj );
    return metaObj;
}

void* DropSite::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DropSite" ) )
	return this;
    return QLabel::qt_cast( clname );
}

// SIGNAL message
void DropSite::message( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool DropSite::qt_invoke( int _id, QUObject* _o )
{
    return QLabel::qt_invoke(_id,_o);
}

bool DropSite::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: message((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QLabel::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool DropSite::qt_property( int id, int f, QVariant* v)
{
    return QLabel::qt_property( id, f, v);
}

bool DropSite::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *DragMoviePlayer::className() const
{
    return "DragMoviePlayer";
}

QMetaObject *DragMoviePlayer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DragMoviePlayer( "DragMoviePlayer", &DragMoviePlayer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DragMoviePlayer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DragMoviePlayer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DragMoviePlayer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DragMoviePlayer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DragMoviePlayer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_varptr, "\x08", QUParameter::In }
    };
    static const QUMethod slot_0 = {"updatePixmap", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "updatePixmap(const QRect&)", &slot_0, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"DragMoviePlayer", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DragMoviePlayer.setMetaObject( metaObj );
    return metaObj;
}

void* DragMoviePlayer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DragMoviePlayer" ) )
	return this;
    return QObject::qt_cast( clname );
}

bool DragMoviePlayer::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updatePixmap((const QRect&)*((const QRect*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DragMoviePlayer::qt_emit( int _id, QUObject* _o )
{
    return QObject::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DragMoviePlayer::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool DragMoviePlayer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
