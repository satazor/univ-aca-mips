/****************************************************************************
** Wizard meta object code from reading C++ file 'wizard.h'
**
** Created: Wed Oct 9 11:08:45 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../wizard.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Wizard::className() const
{
    return "Wizard";
}

QMetaObject *Wizard::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Wizard( "Wizard", &Wizard::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Wizard::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Wizard", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Wizard::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Wizard", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Wizard::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWizard::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"keyChanged", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"dataChanged", 1, param_slot_1 };
    static const QMetaData slot_tbl[] = {
	{ "keyChanged(const QString&)", &slot_0, QMetaData::Protected },
	{ "dataChanged(const QString&)", &slot_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Wizard", parentObject,
	slot_tbl, 2,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Wizard.setMetaObject( metaObj );
    return metaObj;
}

void* Wizard::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Wizard" ) )
	return this;
    return QWizard::qt_cast( clname );
}

bool Wizard::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: keyChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: dataChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QWizard::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Wizard::qt_emit( int _id, QUObject* _o )
{
    return QWizard::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Wizard::qt_property( int id, int f, QVariant* v)
{
    return QWizard::qt_property( id, f, v);
}

bool Wizard::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
