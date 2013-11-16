/****************************************************************************
** QFrame meta object code from reading C++ file 'qframe.h'
**
** Created: Wed Oct 9 10:52:41 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qframe.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QFrame::className() const
{
    return "QFrame";
}

QMetaObject *QFrame::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QFrame( "QFrame", &QFrame::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QFrame::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFrame", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QFrame::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFrame", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QFrame::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "NoFrame",  (int) QFrame::NoFrame },
	{ "Box",  (int) QFrame::Box },
	{ "Panel",  (int) QFrame::Panel },
	{ "WinPanel",  (int) QFrame::WinPanel },
	{ "HLine",  (int) QFrame::HLine },
	{ "VLine",  (int) QFrame::VLine },
	{ "StyledPanel",  (int) QFrame::StyledPanel },
	{ "PopupPanel",  (int) QFrame::PopupPanel },
	{ "MenuBarPanel",  (int) QFrame::MenuBarPanel },
	{ "ToolBarPanel",  (int) QFrame::ToolBarPanel },
	{ "LineEditPanel",  (int) QFrame::LineEditPanel },
	{ "TabWidgetPanel",  (int) QFrame::TabWidgetPanel },
	{ "GroupBoxPanel",  (int) QFrame::GroupBoxPanel },
	{ "MShape",  (int) QFrame::MShape }
    };
    static const QMetaEnum::Item enum_1[] = {
	{ "Plain",  (int) QFrame::Plain },
	{ "Raised",  (int) QFrame::Raised },
	{ "Sunken",  (int) QFrame::Sunken },
	{ "MShadow",  (int) QFrame::MShadow }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "Shape", 14, enum_0, FALSE },
	{ "Shadow", 4, enum_1, FALSE }
    };
#endif // QT_NO_PROPERTIES
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[8] = {
 	{ "int","frameWidth", 0x10000001, &QFrame::metaObj, 0, -1 },
	{ "QRect","contentsRect", 0x8000001, &QFrame::metaObj, 0, -1 },
	{ "Shape","frameShape", 0x0107, &QFrame::metaObj, &enum_tbl[0], -1 },
	{ "Shadow","frameShadow", 0x0107, &QFrame::metaObj, &enum_tbl[1], -1 },
	{ "int","lineWidth", 0x10000103, &QFrame::metaObj, 0, -1 },
	{ "int","margin", 0x10000103, &QFrame::metaObj, 0, -1 },
	{ "int","midLineWidth", 0x10000103, &QFrame::metaObj, 0, -1 },
	{ "QRect","frameRect", 0x8001103, &QFrame::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QFrame", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 8,
	enum_tbl, 2,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QFrame.setMetaObject( metaObj );
    return metaObj;
}

void* QFrame::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QFrame" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool QFrame::qt_invoke( int _id, QUObject* _o )
{
    return QWidget::qt_invoke(_id,_o);
}

bool QFrame::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QFrame::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 1: *v = QVariant( this->frameWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 1: *v = QVariant( this->contentsRect() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setFrameShape((Shape&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->frameShape() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setFrameShadow((Shadow&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->frameShadow() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setLineWidth(v->asInt()); break;
	case 1: *v = QVariant( this->lineWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setMargin(v->asInt()); break;
	case 1: *v = QVariant( this->margin() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setMidLineWidth(v->asInt()); break;
	case 1: *v = QVariant( this->midLineWidth() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setFrameRect(v->asRect()); break;
	case 1: *v = QVariant( this->frameRect() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QFrame::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
