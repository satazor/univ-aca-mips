/****************************************************************************
** NewForm meta object code from reading C++ file 'newformimpl.h'
**
** Created: Wed Oct 9 11:04:48 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../newformimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *NewForm::className() const
{
    return "NewForm";
}

QMetaObject *NewForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_NewForm( "NewForm", &NewForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString NewForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NewForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString NewForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "NewForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* NewForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = NewFormBase::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "project", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"projectChanged", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "item", &static_QUType_ptr, "QIconViewItem", QUParameter::In }
    };
    static const QUMethod slot_1 = {"itemChanged", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "projectChanged(const QString&)", &slot_0, QMetaData::Protected },
	{ "itemChanged(QIconViewItem*)", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"NewForm", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_NewForm.setMetaObject( metaObj );
    return metaObj;
}

void* NewForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "NewForm" ) )
	return this;
    return NewFormBase::qt_cast( clname );
}

bool NewForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: projectChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: itemChanged((QIconViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return NewFormBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool NewForm::qt_emit( int _id, QUObject* _o )
{
    return NewFormBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool NewForm::qt_property( int id, int f, QVariant* v)
{
    return NewFormBase::qt_property( id, f, v);
}

bool NewForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
