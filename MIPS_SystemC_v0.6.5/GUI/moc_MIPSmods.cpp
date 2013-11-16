/****************************************************************************
** MIPSmods meta object code from reading C++ file 'MIPSmods.h'
**
** Created: Sat Nov 16 14:55:21 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "MIPSmods.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MIPSmods::className() const
{
    return "MIPSmods";
}

QMetaObject *MIPSmods::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MIPSmods( "MIPSmods", &MIPSmods::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MIPSmods::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSmods", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MIPSmods::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MIPSmods", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MIPSmods::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
    static const QUMethod signal_0 = {"updateModules", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "updateModules()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MIPSmods", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MIPSmods.setMetaObject( metaObj );
    return metaObj;
}

void* MIPSmods::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MIPSmods" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

// SIGNAL updateModules
void MIPSmods::updateModules()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool MIPSmods::qt_invoke( int _id, QUObject* _o )
{
    return QScrollView::qt_invoke(_id,_o);
}

bool MIPSmods::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: updateModules(); break;
    default:
	return QScrollView::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MIPSmods::qt_property( int id, int f, QVariant* v)
{
    return QScrollView::qt_property( id, f, v);
}

bool MIPSmods::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
