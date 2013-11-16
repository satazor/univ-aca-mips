/****************************************************************************
** KAstTopLevel meta object code from reading C++ file 'toplevel.h'
**
** Created: Wed Oct 9 11:07:31 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qasteroids/toplevel.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *KAstTopLevel::className() const
{
    return "KAstTopLevel";
}

QMetaObject *KAstTopLevel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KAstTopLevel( "KAstTopLevel", &KAstTopLevel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString KAstTopLevel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KAstTopLevel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString KAstTopLevel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KAstTopLevel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* KAstTopLevel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"slotNewGame", 0, 0 };
    static const QUMethod slot_1 = {"slotShipKilled", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "size", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"slotRockHit", 1, param_slot_2 };
    static const QUMethod slot_3 = {"slotRocksRemoved", 0, 0 };
    static const QUMethod slot_4 = {"slotUpdateVitals", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slotNewGame()", &slot_0, QMetaData::Private },
	{ "slotShipKilled()", &slot_1, QMetaData::Private },
	{ "slotRockHit(int)", &slot_2, QMetaData::Private },
	{ "slotRocksRemoved()", &slot_3, QMetaData::Private },
	{ "slotUpdateVitals()", &slot_4, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"KAstTopLevel", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_KAstTopLevel.setMetaObject( metaObj );
    return metaObj;
}

void* KAstTopLevel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KAstTopLevel" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool KAstTopLevel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotNewGame(); break;
    case 1: slotShipKilled(); break;
    case 2: slotRockHit((int)static_QUType_int.get(_o+1)); break;
    case 3: slotRocksRemoved(); break;
    case 4: slotUpdateVitals(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool KAstTopLevel::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool KAstTopLevel::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool KAstTopLevel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
