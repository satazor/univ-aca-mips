/****************************************************************************
** Editor meta object code from reading C++ file 'editor.h'
**
** Created: Wed Oct 9 11:05:24 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../editor.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Editor::className() const
{
    return "Editor";
}

QMetaObject *Editor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Editor( "Editor", &Editor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Editor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Editor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Editor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Editor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Editor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTextEdit::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "c", &static_QUType_ptr, "QTextCursor", QUParameter::In }
    };
    static const QUMethod slot_0 = {"cursorPosChanged", 1, param_slot_0 };
    static const QUMethod slot_1 = {"doChangeInterval", 0, 0 };
    static const QUMethod slot_2 = {"commentSelection", 0, 0 };
    static const QUMethod slot_3 = {"uncommentSelection", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "cursorPosChanged(QTextCursor*)", &slot_0, QMetaData::Private },
	{ "doChangeInterval()", &slot_1, QMetaData::Private },
	{ "commentSelection()", &slot_2, QMetaData::Private },
	{ "uncommentSelection()", &slot_3, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"clearErrorMarker", 0, 0 };
    static const QUMethod signal_1 = {"intervalChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "clearErrorMarker()", &signal_0, QMetaData::Protected },
	{ "intervalChanged()", &signal_1, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"Editor", parentObject,
	slot_tbl, 4,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Editor.setMetaObject( metaObj );
    return metaObj;
}

void* Editor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Editor" ) )
	return this;
    return QTextEdit::qt_cast( clname );
}

// SIGNAL clearErrorMarker
void Editor::clearErrorMarker()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL intervalChanged
void Editor::intervalChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

bool Editor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: cursorPosChanged((QTextCursor*)static_QUType_ptr.get(_o+1)); break;
    case 1: doChangeInterval(); break;
    case 2: commentSelection(); break;
    case 3: uncommentSelection(); break;
    default:
	return QTextEdit::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Editor::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: clearErrorMarker(); break;
    case 1: intervalChanged(); break;
    default:
	return QTextEdit::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool Editor::qt_property( int id, int f, QVariant* v)
{
    return QTextEdit::qt_property( id, f, v);
}

bool Editor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
