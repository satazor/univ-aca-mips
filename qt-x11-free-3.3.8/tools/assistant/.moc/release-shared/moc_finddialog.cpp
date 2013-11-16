/****************************************************************************
** FindDialog meta object code from reading C++ file 'finddialog.h'
**
** Created: Wed Oct 9 11:06:07 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../finddialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FindDialog::className() const
{
    return "FindDialog";
}

QMetaObject *FindDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FindDialog( "FindDialog", &FindDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FindDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FindDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FindDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FindDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FindDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"doFind", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"doFind", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "message", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"statusMessage", 1, param_slot_2 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QUMethod slot_4 = {"init", 0, 0 };
    static const QUMethod slot_5 = {"destroy", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "doFind()", &slot_0, QMetaData::Public },
	{ "doFind(bool)", &slot_1, QMetaData::Public },
	{ "statusMessage(const QString&)", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected },
	{ "init()", &slot_4, QMetaData::Protected },
	{ "destroy()", &slot_5, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"FindDialog", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FindDialog.setMetaObject( metaObj );
    return metaObj;
}

void* FindDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FindDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool FindDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: doFind(); break;
    case 1: doFind((bool)static_QUType_bool.get(_o+1)); break;
    case 2: statusMessage((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: languageChange(); break;
    case 4: init(); break;
    case 5: destroy(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FindDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool FindDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool FindDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
