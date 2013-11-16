/****************************************************************************
** FindDialog meta object code from reading C++ file 'finddialog.h'
**
** Created: Wed Oct 9 11:05:10 2013
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
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUMethod slot_1 = {"destroy", 0, 0 };
    static const QUMethod slot_2 = {"doFind", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "e", &static_QUType_ptr, "EditorInterface", QUParameter::In },
	{ "fw", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_3 = {"setEditor", 2, param_slot_3 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "destroy()", &slot_1, QMetaData::Public },
	{ "doFind()", &slot_2, QMetaData::Public },
	{ "setEditor(EditorInterface*,QObject*)", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"FindDialog", parentObject,
	slot_tbl, 5,
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
    case 0: init(); break;
    case 1: destroy(); break;
    case 2: doFind(); break;
    case 3: setEditor((EditorInterface*)static_QUType_ptr.get(_o+1),(QObject*)static_QUType_ptr.get(_o+2)); break;
    case 4: languageChange(); break;
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
