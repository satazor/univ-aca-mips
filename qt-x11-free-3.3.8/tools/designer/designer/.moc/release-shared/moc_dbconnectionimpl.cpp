/****************************************************************************
** DatabaseConnectionEditor meta object code from reading C++ file 'dbconnectionimpl.h'
**
** Created: Wed Oct 9 11:05:03 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dbconnectionimpl.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *DatabaseConnectionEditor::className() const
{
    return "DatabaseConnectionEditor";
}

QMetaObject *DatabaseConnectionEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_DatabaseConnectionEditor( "DatabaseConnectionEditor", &DatabaseConnectionEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString DatabaseConnectionEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DatabaseConnectionEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString DatabaseConnectionEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "DatabaseConnectionEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* DatabaseConnectionEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = DatabaseConnectionEditorBase::staticMetaObject();
    static const QUMethod slot_0 = {"accept", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "accept()", &slot_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"DatabaseConnectionEditor", parentObject,
	slot_tbl, 1,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_DatabaseConnectionEditor.setMetaObject( metaObj );
    return metaObj;
}

void* DatabaseConnectionEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "DatabaseConnectionEditor" ) )
	return this;
    return DatabaseConnectionEditorBase::qt_cast( clname );
}

bool DatabaseConnectionEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: accept(); break;
    default:
	return DatabaseConnectionEditorBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool DatabaseConnectionEditor::qt_emit( int _id, QUObject* _o )
{
    return DatabaseConnectionEditorBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool DatabaseConnectionEditor::qt_property( int id, int f, QVariant* v)
{
    return DatabaseConnectionEditorBase::qt_property( id, f, v);
}

bool DatabaseConnectionEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
