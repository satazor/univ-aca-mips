/****************************************************************************
** QSplitter meta object code from reading C++ file 'qsplitter.h'
**
** Created: Wed Oct 9 10:52:52 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qsplitter.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QSplitter::className() const
{
    return "QSplitter";
}

QMetaObject *QSplitter::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QSplitter( "QSplitter", &QSplitter::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QSplitter::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSplitter", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QSplitter::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QSplitter", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QSplitter::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[4] = {
 	{ "Orientation","orientation", 0x010f, &QSplitter::metaObj, 0, -1 },
	{ "bool","opaqueResize", 0x12000103, &QSplitter::metaObj, 0, -1 },
	{ "int","handleWidth", 0x10000103, &QSplitter::metaObj, 0, -1 },
	{ "bool","childrenCollapsible", 0x12000103, &QSplitter::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QSplitter", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 4,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QSplitter.setMetaObject( metaObj );
    return metaObj;
}

void* QSplitter::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QSplitter" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool QSplitter::qt_invoke( int _id, QUObject* _o )
{
    return QFrame::qt_invoke(_id,_o);
}

bool QSplitter::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QSplitter::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setOrientation((Orientation&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->orientation() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setOpaqueResize(v->asBool()); break;
	case 1: *v = QVariant( this->opaqueResize(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setHandleWidth(v->asInt()); break;
	case 1: *v = QVariant( this->handleWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setChildrenCollapsible(v->asBool()); break;
	case 1: *v = QVariant( this->childrenCollapsible(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QSplitter::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
