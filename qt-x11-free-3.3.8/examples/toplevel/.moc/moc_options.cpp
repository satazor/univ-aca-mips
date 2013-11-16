/****************************************************************************
** OptionsDialog meta object code from reading C++ file 'options.h'
**
** Created: Wed Oct 9 11:08:40 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/options.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *OptionsDialog::className() const
{
    return "OptionsDialog";
}

QMetaObject *OptionsDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_OptionsDialog( "OptionsDialog", &OptionsDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString OptionsDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OptionsDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString OptionsDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "OptionsDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* OptionsDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"apply", 0, 0 };
    static const QUMethod slot_1 = {"languageChange", 0, 0 };
    static const QUMethod slot_2 = {"pickIcon", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "apply()", &slot_0, QMetaData::Public },
	{ "languageChange()", &slot_1, QMetaData::Protected },
	{ "pickIcon()", &slot_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"OptionsDialog", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_OptionsDialog.setMetaObject( metaObj );
    return metaObj;
}

void* OptionsDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "OptionsDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool OptionsDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: apply(); break;
    case 1: languageChange(); break;
    case 2: pickIcon(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool OptionsDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool OptionsDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool OptionsDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
