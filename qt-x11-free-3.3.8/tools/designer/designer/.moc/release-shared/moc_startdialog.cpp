/****************************************************************************
** StartDialogBase meta object code from reading C++ file 'startdialog.h'
**
** Created: Wed Oct 9 11:05:13 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../startdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *StartDialogBase::className() const
{
    return "StartDialogBase";
}

QMetaObject *StartDialogBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_StartDialogBase( "StartDialogBase", &StartDialogBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString StartDialogBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StartDialogBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString StartDialogBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "StartDialogBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* StartDialogBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_0 = {"recentItemChanged", 1, param_slot_0 };
    static const QUMethod slot_1 = {"clearFileInfo", 0, 0 };
    static const QUMethod slot_2 = {"accept", 0, 0 };
    static const QUMethod slot_3 = {"reject", 0, 0 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "recentItemChanged(QIconViewItem*)", &slot_0, QMetaData::Public },
	{ "clearFileInfo()", &slot_1, QMetaData::Public },
	{ "accept()", &slot_2, QMetaData::Public },
	{ "reject()", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"StartDialogBase", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_StartDialogBase.setMetaObject( metaObj );
    return metaObj;
}

void* StartDialogBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "StartDialogBase" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool StartDialogBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: recentItemChanged((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    case 1: clearFileInfo(); break;
    case 2: accept(); break;
    case 3: reject(); break;
    case 4: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool StartDialogBase::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool StartDialogBase::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool StartDialogBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
