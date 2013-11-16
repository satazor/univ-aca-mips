/****************************************************************************
** MIPSctrl meta object code from reading C++ file 'MIPSctrl.h'
**
** Created: Sat Nov 16 14:55:19 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "MIPSctrl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MIPSctrl::className() const
{
    return "MIPSctrl";
}

QMetaObject *MIPSctrl::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MIPSctrl( "MIPSctrl", &MIPSctrl::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MIPSctrl::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSctrl", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MIPSctrl::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSctrl", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MIPSctrl::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"readImem", 0, 0 };
    static const QUMethod slot_1 = {"readDmem", 0, 0 };
    static const QUMethod slot_2 = {"step", 0, 0 };
    static const QUMethod slot_3 = {"reset", 0, 0 };
    static const QUMethod slot_4 = {"showImem", 0, 0 };
    static const QUMethod slot_5 = {"showDmem", 0, 0 };
    static const QUMethod slot_6 = {"showRegfile", 0, 0 };
    static const QUMethod slot_7 = {"about", 0, 0 };
    static const QUMethod slot_8 = {"windowsMenuAboutToShow", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"windowsMenuActivated", 1, param_slot_9 };
    static const QMetaData slot_tbl[] = {
	{ "readImem()", &slot_0, QMetaData::Public },
	{ "readDmem()", &slot_1, QMetaData::Public },
	{ "step()", &slot_2, QMetaData::Public },
	{ "reset()", &slot_3, QMetaData::Public },
	{ "showImem()", &slot_4, QMetaData::Public },
	{ "showDmem()", &slot_5, QMetaData::Public },
	{ "showRegfile()", &slot_6, QMetaData::Public },
	{ "about()", &slot_7, QMetaData::Public },
	{ "windowsMenuAboutToShow()", &slot_8, QMetaData::Public },
	{ "windowsMenuActivated(int)", &slot_9, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MIPSctrl", parentObject,
	slot_tbl, 10,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MIPSctrl.setMetaObject( metaObj );
    return metaObj;
}

void* MIPSctrl::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MIPSctrl" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool MIPSctrl::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: readImem(); break;
    case 1: readDmem(); break;
    case 2: step(); break;
    case 3: reset(); break;
    case 4: showImem(); break;
    case 5: showDmem(); break;
    case 6: showRegfile(); break;
    case 7: about(); break;
    case 8: windowsMenuAboutToShow(); break;
    case 9: windowsMenuActivated((int)static_QUType_int.get(_o+1)); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MIPSctrl::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MIPSctrl::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MIPSctrl::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
