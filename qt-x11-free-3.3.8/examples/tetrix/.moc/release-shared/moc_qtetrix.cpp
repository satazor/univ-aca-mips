/****************************************************************************
** ShowNextPiece meta object code from reading C++ file 'qtetrix.h'
**
** Created: Wed Oct 9 11:08:25 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qtetrix.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ShowNextPiece::className() const
{
    return "ShowNextPiece";
}

QMetaObject *ShowNextPiece::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ShowNextPiece( "ShowNextPiece", &ShowNextPiece::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ShowNextPiece::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ShowNextPiece", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ShowNextPiece::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ShowNextPiece", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ShowNextPiece::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "x", &static_QUType_int, 0, QUParameter::In },
	{ "y", &static_QUType_int, 0, QUParameter::In },
	{ "color", &static_QUType_varptr, "\x0a", QUParameter::In }
    };
    static const QUMethod slot_0 = {"drawNextSquare", 3, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "drawNextSquare(int,int,QColor*)", &slot_0, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"update", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "update()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"ShowNextPiece", parentObject,
	slot_tbl, 1,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ShowNextPiece.setMetaObject( metaObj );
    return metaObj;
}

void* ShowNextPiece::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ShowNextPiece" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL update
void ShowNextPiece::update()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool ShowNextPiece::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: drawNextSquare((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(QColor*)static_QUType_varptr.get(_o+3)); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ShowNextPiece::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: update(); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool ShowNextPiece::qt_property( int id, int f, QVariant* v)
{
    return QFrame::qt_property( id, f, v);
}

bool ShowNextPiece::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *QTetrix::className() const
{
    return "QTetrix";
}

QMetaObject *QTetrix::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTetrix( "QTetrix", &QTetrix::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTetrix::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTetrix", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTetrix::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTetrix", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTetrix::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"gameOver", 0, 0 };
    static const QUMethod slot_1 = {"quit", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "gameOver()", &slot_0, QMetaData::Public },
	{ "quit()", &slot_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QTetrix", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTetrix.setMetaObject( metaObj );
    return metaObj;
}

void* QTetrix::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTetrix" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QTetrix::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: gameOver(); break;
    case 1: quit(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTetrix::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QTetrix::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool QTetrix::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
