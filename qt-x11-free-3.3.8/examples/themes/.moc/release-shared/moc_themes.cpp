/****************************************************************************
** Themes meta object code from reading C++ file 'themes.h'
**
** Created: Wed Oct 9 11:08:33 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../themes.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Themes::className() const
{
    return "Themes";
}

QMetaObject *Themes::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Themes( "Themes", &Themes::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Themes::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Themes", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Themes::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Themes", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Themes::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"makeStyle", 1, param_slot_0 };
    static const QUMethod slot_1 = {"about", 0, 0 };
    static const QUMethod slot_2 = {"aboutQt", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "makeStyle(const QString&)", &slot_0, QMetaData::Protected },
	{ "about()", &slot_1, QMetaData::Protected },
	{ "aboutQt()", &slot_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Themes", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Themes.setMetaObject( metaObj );
    return metaObj;
}

void* Themes::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Themes" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool Themes::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: makeStyle((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: about(); break;
    case 2: aboutQt(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Themes::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Themes::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool Themes::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
