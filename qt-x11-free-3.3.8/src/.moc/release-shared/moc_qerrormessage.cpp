/****************************************************************************
** QErrorMessage meta object code from reading C++ file 'qerrormessage.h'
**
** Created: Wed Oct 9 10:53:01 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dialogs/qerrormessage.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QErrorMessage::className() const
{
    return "QErrorMessage";
}

QMetaObject *QErrorMessage::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QErrorMessage( "QErrorMessage", &QErrorMessage::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QErrorMessage::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QErrorMessage", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QErrorMessage::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QErrorMessage", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QErrorMessage::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"message", 1, param_slot_0 };
    static const QMetaData slot_tbl[] = {
	{ "message(const QString&)", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QErrorMessage", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QErrorMessage.setMetaObject( metaObj );
    return metaObj;
}

void* QErrorMessage::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QErrorMessage" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool QErrorMessage::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: message((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QErrorMessage::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QErrorMessage::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool QErrorMessage::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
