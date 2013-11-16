/****************************************************************************
** QGridView meta object code from reading C++ file 'qgridview.h'
**
** Created: Wed Oct 9 10:52:42 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qgridview.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QGridView::className() const
{
    return "QGridView";
}

QMetaObject *QGridView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QGridView( "QGridView", &QGridView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QGridView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGridView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QGridView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QGridView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QGridView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[4] = {
 	{ "int","numRows", 0x10000103, &QGridView::metaObj, 0, -1 },
	{ "int","numCols", 0x10000103, &QGridView::metaObj, 0, -1 },
	{ "int","cellWidth", 0x10000103, &QGridView::metaObj, 0, -1 },
	{ "int","cellHeight", 0x10000103, &QGridView::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QGridView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 4,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QGridView.setMetaObject( metaObj );
    return metaObj;
}

void* QGridView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QGridView" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

bool QGridView::qt_invoke( int _id, QUObject* _o )
{
    return QScrollView::qt_invoke(_id,_o);
}

bool QGridView::qt_emit( int _id, QUObject* _o )
{
    return QScrollView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QGridView::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setNumRows(v->asInt()); break;
	case 1: *v = QVariant( this->numRows() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setNumCols(v->asInt()); break;
	case 1: *v = QVariant( this->numCols() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setCellWidth(v->asInt()); break;
	case 1: *v = QVariant( this->cellWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setCellHeight(v->asInt()); break;
	case 1: *v = QVariant( this->cellHeight() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QScrollView::qt_property( id, f, v );
    }
    return TRUE;
}

bool QGridView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
