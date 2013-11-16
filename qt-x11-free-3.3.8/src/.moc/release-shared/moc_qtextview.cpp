/****************************************************************************
** QTextView meta object code from reading C++ file 'qtextview.h'
**
** Created: Wed Oct 9 10:52:58 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtextview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QTextView::className() const
{
    return "QTextView";
}

QMetaObject *QTextView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTextView( "QTextView", &QTextView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTextView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTextView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTextView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTextEdit::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[5] = {
 	{ "int","undoDepth", 0x10025200, &QTextView::metaObj, 0, -1 },
	{ "bool","overwriteMode", 0x12025200, &QTextView::metaObj, 0, -1 },
	{ "bool","modified", 0x12026200, &QTextView::metaObj, 0, -1 },
	{ "bool","readOnly", 0x12025200, &QTextView::metaObj, 0, -1 },
	{ "bool","undoRedoEnabled", 0x12025200, &QTextView::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QTextView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 5,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTextView.setMetaObject( metaObj );
    return metaObj;
}

void* QTextView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTextView" ) )
	return this;
    return QTextEdit::qt_cast( clname );
}

bool QTextView::qt_invoke( int _id, QUObject* _o )
{
    return QTextEdit::qt_invoke(_id,_o);
}

bool QTextView::qt_emit( int _id, QUObject* _o )
{
    return QTextEdit::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QTextView::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: case 1: case 3: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	default: return FALSE;
    } break;
    default:
	return QTextEdit::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QTextEdit::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QTextView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
