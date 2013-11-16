/****************************************************************************
** MultiLineEditorBase meta object code from reading C++ file 'multilineeditor.h'
**
** Created: Wed Oct 9 11:05:07 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../multilineeditor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MultiLineEditorBase::className() const
{
    return "MultiLineEditorBase";
}

QMetaObject *MultiLineEditorBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MultiLineEditorBase( "MultiLineEditorBase", &MultiLineEditorBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MultiLineEditorBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MultiLineEditorBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MultiLineEditorBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MultiLineEditorBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MultiLineEditorBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"applyClicked", 0, 0 };
    static const QUMethod slot_1 = {"okClicked", 0, 0 };
    static const QUMethod slot_2 = {"cancelClicked", 0, 0 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "applyClicked()", &slot_0, QMetaData::Public },
	{ "okClicked()", &slot_1, QMetaData::Public },
	{ "cancelClicked()", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"MultiLineEditorBase", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MultiLineEditorBase.setMetaObject( metaObj );
    return metaObj;
}

void* MultiLineEditorBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MultiLineEditorBase" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool MultiLineEditorBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: applyClicked(); break;
    case 1: okClicked(); break;
    case 2: cancelClicked(); break;
    case 3: languageChange(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MultiLineEditorBase::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool MultiLineEditorBase::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MultiLineEditorBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
