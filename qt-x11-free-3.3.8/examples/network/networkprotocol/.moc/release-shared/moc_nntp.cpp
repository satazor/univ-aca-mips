/****************************************************************************
** Nntp meta object code from reading C++ file 'nntp.h'
**
** Created: Wed Oct 9 11:09:17 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../nntp.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Nntp::className() const
{
    return "Nntp";
}

QMetaObject *Nntp::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Nntp( "Nntp", &Nntp::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Nntp::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Nntp", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Nntp::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Nntp", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Nntp::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QNetworkProtocol::staticMetaObject();
    static const QUMethod slot_0 = {"hostFound", 0, 0 };
    static const QUMethod slot_1 = {"connected", 0, 0 };
    static const QUMethod slot_2 = {"closed", 0, 0 };
    static const QUMethod slot_3 = {"readyRead", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"error", 1, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "hostFound()", &slot_0, QMetaData::Protected },
	{ "connected()", &slot_1, QMetaData::Protected },
	{ "closed()", &slot_2, QMetaData::Protected },
	{ "readyRead()", &slot_3, QMetaData::Protected },
	{ "error(int)", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Nntp", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Nntp.setMetaObject( metaObj );
    return metaObj;
}

void* Nntp::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Nntp" ) )
	return this;
    return QNetworkProtocol::qt_cast( clname );
}

bool Nntp::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: hostFound(); break;
    case 1: connected(); break;
    case 2: closed(); break;
    case 3: readyRead(); break;
    case 4: error((int)static_QUType_int.get(_o+1)); break;
    default:
	return QNetworkProtocol::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Nntp::qt_emit( int _id, QUObject* _o )
{
    return QNetworkProtocol::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Nntp::qt_property( int id, int f, QVariant* v)
{
    return QNetworkProtocol::qt_property( id, f, v);
}

bool Nntp::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
