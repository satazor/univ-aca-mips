/****************************************************************************
** QProgressBar meta object code from reading C++ file 'qprogressbar.h'
**
** Created: Wed Oct 9 10:52:48 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qprogressbar.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QProgressBar::className() const
{
    return "QProgressBar";
}

QMetaObject *QProgressBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QProgressBar( "QProgressBar", &QProgressBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QProgressBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QProgressBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QProgressBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QProgressBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QProgressBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUMethod slot_0 = {"reset", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "totalSteps", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setTotalSteps", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "progress", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setProgress", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ "progress", &static_QUType_int, 0, QUParameter::In },
	{ "totalSteps", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setProgress", 2, param_slot_3 };
    static const QMetaData slot_tbl[] = {
	{ "reset()", &slot_0, QMetaData::Public },
	{ "setTotalSteps(int)", &slot_1, QMetaData::Public },
	{ "setProgress(int)", &slot_2, QMetaData::Public },
	{ "setProgress(int,int)", &slot_3, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[6] = {
 	{ "int","totalSteps", 0x10000103, &QProgressBar::metaObj, 0, -1 },
	{ "int","progress", 0x10000103, &QProgressBar::metaObj, 0, -1 },
	{ "QString","progressString", 0x3000001, &QProgressBar::metaObj, 0, -1 },
	{ "bool","centerIndicator", 0x12000103, &QProgressBar::metaObj, 0, -1 },
	{ "bool","indicatorFollowsStyle", 0x12000103, &QProgressBar::metaObj, 0, -1 },
	{ "bool","percentageVisible", 0x12000103, &QProgressBar::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QProgressBar", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 6,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QProgressBar.setMetaObject( metaObj );
    return metaObj;
}

void* QProgressBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QProgressBar" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool QProgressBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: reset(); break;
    case 1: setTotalSteps((int)static_QUType_int.get(_o+1)); break;
    case 2: setProgress((int)static_QUType_int.get(_o+1)); break;
    case 3: setProgress((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QProgressBar::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QProgressBar::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setTotalSteps(v->asInt()); break;
	case 1: *v = QVariant( this->totalSteps() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setProgress(v->asInt()); break;
	case 1: *v = QVariant( this->progress() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 1: *v = QVariant( this->progressString() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setCenterIndicator(v->asBool()); break;
	case 1: *v = QVariant( this->centerIndicator(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setIndicatorFollowsStyle(v->asBool()); break;
	case 1: *v = QVariant( this->indicatorFollowsStyle(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setPercentageVisible(v->asBool()); break;
	case 1: *v = QVariant( this->percentageVisible(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QProgressBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
