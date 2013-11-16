/****************************************************************************
** GameBoard meta object code from reading C++ file 'gamebrd.h'
**
** Created: Wed Oct 9 11:06:58 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../gamebrd.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *GameBoard::className() const
{
    return "GameBoard";
}

QMetaObject *GameBoard::metaObj = 0;
static QMetaObjectCleanUp cleanUp_GameBoard( "GameBoard", &GameBoard::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString GameBoard::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GameBoard", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString GameBoard::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GameBoard", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* GameBoard::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"fire", 0, 0 };
    static const QUMethod slot_1 = {"hit", 0, 0 };
    static const QUMethod slot_2 = {"missed", 0, 0 };
    static const QUMethod slot_3 = {"newGame", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "fire()", &slot_0, QMetaData::Protected },
	{ "hit()", &slot_1, QMetaData::Protected },
	{ "missed()", &slot_2, QMetaData::Protected },
	{ "newGame()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"GameBoard", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_GameBoard.setMetaObject( metaObj );
    return metaObj;
}

void* GameBoard::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "GameBoard" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool GameBoard::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: fire(); break;
    case 1: hit(); break;
    case 2: missed(); break;
    case 3: newGame(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool GameBoard::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool GameBoard::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool GameBoard::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
