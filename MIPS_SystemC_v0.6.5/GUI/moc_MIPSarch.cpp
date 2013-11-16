/****************************************************************************
** MIPSarch meta object code from reading C++ file 'MIPSarch.h'
**
** Created: Sat Nov 16 17:33:55 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "MIPSarch.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MIPSarch::className() const
{
    return "MIPSarch";
}

QMetaObject *MIPSarch::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MIPSarch( "MIPSarch", &MIPSarch::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MIPSarch::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSarch", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MIPSarch::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSarch", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MIPSarch::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QCanvasView::staticMetaObject();
    static const QUMethod slot_0 = {"updateArch", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateArch()", &slot_0, QMetaData::Public }
    };
    static const QUMethod signal_0 = {"imemClicked", 0, 0 };
    static const QUMethod signal_1 = {"dmemClicked", 0, 0 };
    static const QUMethod signal_2 = {"regfileClicked", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "imemClicked()", &signal_0, QMetaData::Public },
	{ "dmemClicked()", &signal_1, QMetaData::Public },
	{ "regfileClicked()", &signal_2, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MIPSarch", parentObject,
	slot_tbl, 1,
	signal_tbl, 3,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MIPSarch.setMetaObject( metaObj );
    return metaObj;
}

void* MIPSarch::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MIPSarch" ) )
	return this;
    return QCanvasView::qt_cast( clname );
}

// SIGNAL imemClicked
void MIPSarch::imemClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL dmemClicked
void MIPSarch::dmemClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL regfileClicked
void MIPSarch::regfileClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

bool MIPSarch::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateArch(); break;
    default:
	return QCanvasView::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MIPSarch::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: imemClicked(); break;
    case 1: dmemClicked(); break;
    case 2: regfileClicked(); break;
    default:
	return QCanvasView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MIPSarch::qt_property( int id, int f, QVariant* v)
{
    return QCanvasView::qt_property( id, f, v);
}

bool MIPSarch::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
