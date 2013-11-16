/****************************************************************************
** DatabaseConnectionsEditor meta object code from reading C++ file 'dbconnectionsimpl.h'
**
** Created: Wed Oct 9 11:05:04 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dbconnectionsimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DatabaseConnectionsEditor::className() const
{
    return "DatabaseConnectionsEditor";
}

QMetaObject *DatabaseConnectionsEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DatabaseConnectionsEditor( "DatabaseConnectionsEditor", &DatabaseConnectionsEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DatabaseConnectionsEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DatabaseConnectionsEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DatabaseConnectionsEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DatabaseConnectionsEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DatabaseConnectionsEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = DatabaseConnectionBase::staticMetaObject();
    static const QUMethod slot_0 = {"deleteConnection", 0, 0 };
    static const QUMethod slot_1 = {"newConnection", 0, 0 };
    static const QUMethod slot_2 = {"doConnect", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"currentConnectionChanged", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"connectionNameChanged", 1, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "deleteConnection()", &slot_0, QMetaData::Protected },
	{ "newConnection()", &slot_1, QMetaData::Protected },
	{ "doConnect()", &slot_2, QMetaData::Protected },
	{ "currentConnectionChanged(const QString&)", &slot_3, QMetaData::Protected },
	{ "connectionNameChanged(const QString&)", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"DatabaseConnectionsEditor", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DatabaseConnectionsEditor.setMetaObject( metaObj );
    return metaObj;
}

void* DatabaseConnectionsEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DatabaseConnectionsEditor" ) )
	return this;
    return DatabaseConnectionBase::qt_cast( clname );
}

bool DatabaseConnectionsEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: deleteConnection(); break;
    case 1: newConnection(); break;
    case 2: doConnect(); break;
    case 3: currentConnectionChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: connectionNameChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return DatabaseConnectionBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DatabaseConnectionsEditor::qt_emit( int _id, QUObject* _o )
{
    return DatabaseConnectionBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DatabaseConnectionsEditor::qt_property( int id, int f, QVariant* v)
{
    return DatabaseConnectionBase::qt_property( id, f, v);
}

bool DatabaseConnectionsEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
