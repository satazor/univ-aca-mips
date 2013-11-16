/****************************************************************************
** CreateTemplate meta object code from reading C++ file 'createtemplate.h'
**
** Created: Wed Oct 9 11:05:09 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../createtemplate.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CreateTemplate::className() const
{
    return "CreateTemplate";
}

QMetaObject *CreateTemplate::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CreateTemplate( "CreateTemplate", &CreateTemplate::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CreateTemplate::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CreateTemplate", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CreateTemplate::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CreateTemplate", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CreateTemplate::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "languageChange()", &slot_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CreateTemplate", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CreateTemplate.setMetaObject( metaObj );
    return metaObj;
}

void* CreateTemplate::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CreateTemplate" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool CreateTemplate::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CreateTemplate::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CreateTemplate::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool CreateTemplate::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
