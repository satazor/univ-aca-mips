/****************************************************************************
** QLabel meta object code from reading C++ file 'qlabel.h'
**
** Created: Wed Oct 9 10:52:44 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qlabel.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QLabel::className() const
{
    return "QLabel";
}

QMetaObject *QLabel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QLabel( "QLabel", &QLabel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QLabel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLabel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QLabel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLabel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QLabel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setText", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_varptr, "\x06", QUParameter::In }
    };
    static const QUMethod slot_1 = {"setPixmap", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QPicture", QUParameter::In }
    };
    static const QUMethod slot_2 = {"setPicture", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_ptr, "QMovie", QUParameter::In }
    };
    static const QUMethod slot_3 = {"setMovie", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setNum", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ 0, &static_QUType_double, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setNum", 1, param_slot_5 };
    static const QUMethod slot_6 = {"clear", 0, 0 };
    static const QUMethod slot_7 = {"acceleratorSlot", 0, 0 };
    static const QUMethod slot_8 = {"buddyDied", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_varptr, "\x08", QUParameter::In }
    };
    static const QUMethod slot_9 = {"movieUpdated", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_varptr, "\x09", QUParameter::In }
    };
    static const QUMethod slot_10 = {"movieResized", 1, param_slot_10 };
    static const QMetaData slot_tbl[] = {
	{ "setText(const QString&)", &slot_0, QMetaData::Public },
	{ "setPixmap(const QPixmap&)", &slot_1, QMetaData::Public },
	{ "setPicture(const QPicture&)", &slot_2, QMetaData::Public },
	{ "setMovie(const QMovie&)", &slot_3, QMetaData::Public },
	{ "setNum(int)", &slot_4, QMetaData::Public },
	{ "setNum(double)", &slot_5, QMetaData::Public },
	{ "clear()", &slot_6, QMetaData::Public },
	{ "acceleratorSlot()", &slot_7, QMetaData::Private },
	{ "buddyDied()", &slot_8, QMetaData::Private },
	{ "movieUpdated(const QRect&)", &slot_9, QMetaData::Private },
	{ "movieResized(const QSize&)", &slot_10, QMetaData::Private }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[7] = {
 	{ "QString","text", 0x3000103, &QLabel::metaObj, 0, -1 },
	{ "TextFormat","textFormat", 0x010f, &QLabel::metaObj, 0, -1 },
	{ "QPixmap","pixmap", 0x6000103, &QLabel::metaObj, 0, -1 },
	{ "bool","scaledContents", 0x12000103, &QLabel::metaObj, 0, -1 },
	{ "Alignment","alignment", 0x010f, &QLabel::metaObj, 0, -1 },
	{ "int","indent", 0x10000103, &QLabel::metaObj, 0, -1 },
	{ "BackgroundMode","backgroundMode", 0x2820c, &QLabel::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QLabel", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	props_tbl, 7,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QLabel.setMetaObject( metaObj );
    return metaObj;
}

void* QLabel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QLabel" ) )
	return this;
    return QFrame::qt_cast( clname );
}

bool QLabel::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: setPixmap((const QPixmap&)*((const QPixmap*)static_QUType_ptr.get(_o+1))); break;
    case 2: setPicture((const QPicture&)*((const QPicture*)static_QUType_ptr.get(_o+1))); break;
    case 3: setMovie((const QMovie&)*((const QMovie*)static_QUType_ptr.get(_o+1))); break;
    case 4: setNum((int)static_QUType_int.get(_o+1)); break;
    case 5: setNum((double)static_QUType_double.get(_o+1)); break;
    case 6: clear(); break;
    case 7: acceleratorSlot(); break;
    case 8: buddyDied(); break;
    case 9: movieUpdated((const QRect&)*((const QRect*)static_QUType_ptr.get(_o+1))); break;
    case 10: movieResized((const QSize&)*((const QSize*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QLabel::qt_emit( int _id, QUObject* _o )
{
    return QFrame::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QLabel::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setText(v->asString()); break;
	case 1: *v = QVariant( this->text() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setTextFormat((TextFormat&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->textFormat() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setPixmap(v->asPixmap()); break;
	case 1: if ( this->pixmap() ) *v = QVariant( *pixmap() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setScaledContents(v->asBool()); break;
	case 1: *v = QVariant( this->hasScaledContents(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setAlignment(v->asInt()); break;
	case 1: *v = QVariant( (int)this->alignment() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setIndent(v->asInt()); break;
	case 1: *v = QVariant( this->indent() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: case 1: case 4: case 5: goto resolve;
	case 3: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
resolve:
    return QFrame::qt_property( staticMetaObject()->resolveProperty(id), f, v );
}

bool QLabel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
