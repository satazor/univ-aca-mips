/****************************************************************************
** OptionsForm meta object code from reading C++ file 'optionsform.h'
**
** Created: Wed Oct 9 11:08:54 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../optionsform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *OptionsForm::className() const
{
    return "OptionsForm";
}

QMetaObject *OptionsForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_OptionsForm( "OptionsForm", &OptionsForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString OptionsForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OptionsForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString OptionsForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OptionsForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* OptionsForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"chooseFont", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "chooseFont()", &slot_0, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"OptionsForm", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_OptionsForm.setMetaObject( metaObj );
    return metaObj;
}

void* OptionsForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "OptionsForm" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool OptionsForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: chooseFont(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool OptionsForm::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool OptionsForm::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool OptionsForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
