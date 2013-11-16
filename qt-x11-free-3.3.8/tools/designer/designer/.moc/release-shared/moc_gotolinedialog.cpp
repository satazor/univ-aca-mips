/****************************************************************************
** GotoLineDialog meta object code from reading C++ file 'gotolinedialog.h'
**
** Created: Wed Oct 9 11:05:10 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../gotolinedialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *GotoLineDialog::className() const
{
    return "GotoLineDialog";
}

QMetaObject *GotoLineDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_GotoLineDialog( "GotoLineDialog", &GotoLineDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString GotoLineDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GotoLineDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString GotoLineDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "GotoLineDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* GotoLineDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"gotoLine", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "e", &static_QUType_ptr, "EditorInterface", QUParameter::In }
    };
    static const QUMethod slot_1 = {"setEditor", 1, param_slot_1 };
    static const QUMethod slot_2 = {"languageChange", 0, 0 };
    static const QUMethod slot_3 = {"init", 0, 0 };
    static const QUMethod slot_4 = {"destroy", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "gotoLine()", &slot_0, QMetaData::Public },
	{ "setEditor(EditorInterface*)", &slot_1, QMetaData::Public },
	{ "languageChange()", &slot_2, QMetaData::Protected },
	{ "init()", &slot_3, QMetaData::Protected },
	{ "destroy()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"GotoLineDialog", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_GotoLineDialog.setMetaObject( metaObj );
    return metaObj;
}

void* GotoLineDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "GotoLineDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool GotoLineDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: gotoLine(); break;
    case 1: setEditor((EditorInterface*)static_QUType_ptr.get(_o+1)); break;
    case 2: languageChange(); break;
    case 3: init(); break;
    case 4: destroy(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool GotoLineDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool GotoLineDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool GotoLineDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
