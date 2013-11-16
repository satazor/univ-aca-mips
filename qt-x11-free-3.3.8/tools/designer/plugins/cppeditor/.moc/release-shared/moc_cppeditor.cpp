/****************************************************************************
** CppEditor meta object code from reading C++ file 'cppeditor.h'
**
** Created: Wed Oct 9 11:05:40 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../cppeditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CppEditor::className() const
{
    return "CppEditor";
}

QMetaObject *CppEditor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CppEditor( "CppEditor", &CppEditor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CppEditor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CppEditor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CppEditor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CppEditor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CppEditor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = Editor::staticMetaObject();
    static const QUMethod slot_0 = {"addInclDecl", 0, 0 };
    static const QUMethod slot_1 = {"addInclImpl", 0, 0 };
    static const QUMethod slot_2 = {"addForward", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "addInclDecl()", &slot_0, QMetaData::Private },
	{ "addInclImpl()", &slot_1, QMetaData::Private },
	{ "addForward()", &slot_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"CppEditor", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CppEditor.setMetaObject( metaObj );
    return metaObj;
}

void* CppEditor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CppEditor" ) )
	return this;
    return Editor::qt_cast( clname );
}

bool CppEditor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: addInclDecl(); break;
    case 1: addInclImpl(); break;
    case 2: addForward(); break;
    default:
	return Editor::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CppEditor::qt_emit( int _id, QUObject* _o )
{
    return Editor::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CppEditor::qt_property( int id, int f, QVariant* v)
{
    return Editor::qt_property( id, f, v);
}

bool CppEditor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
