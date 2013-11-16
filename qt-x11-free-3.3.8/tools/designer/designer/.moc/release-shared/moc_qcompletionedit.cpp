/****************************************************************************
** QCompletionEdit meta object code from reading C++ file 'qcompletionedit.h'
**
** Created: Wed Oct 9 11:04:57 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qcompletionedit.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QCompletionEdit::className() const
{
    return "QCompletionEdit";
}

QMetaObject *QCompletionEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QCompletionEdit( "QCompletionEdit", &QCompletionEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QCompletionEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QCompletionEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QCompletionEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QCompletionEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QCompletionEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QLineEdit::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "l", &static_QUType_varptr, "\x04", QUParameter::In }
    };
    static const QUMethod slot_0 = {"setCompletionList", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "add", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setAutoAdd", 1, param_slot_1 };
    static const QUMethod slot_2 = {"clear", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "entry", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"addCompletionEntry", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "entry", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"removeCompletionEntry", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setCaseSensitive", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"textDidChange", 1, param_slot_6 };
    static const QMetaData slot_tbl[] = {
	{ "setCompletionList(const QStringList&)", &slot_0, QMetaData::Public },
	{ "setAutoAdd(bool)", &slot_1, QMetaData::Public },
	{ "clear()", &slot_2, QMetaData::Public },
	{ "addCompletionEntry(const QString&)", &slot_3, QMetaData::Public },
	{ "removeCompletionEntry(const QString&)", &slot_4, QMetaData::Public },
	{ "setCaseSensitive(bool)", &slot_5, QMetaData::Public },
	{ "textDidChange(const QString&)", &slot_6, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "text", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"chosen", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "chosen(const QString&)", &signal_0, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[2] = {
 	{ "bool","autoAdd", 0x12000103, &QCompletionEdit::metaObj, 0, -1 },
	{ "bool","caseSensitive", 0x12000103, &QCompletionEdit::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QCompletionEdit", parentObject,
	slot_tbl, 7,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	props_tbl, 2,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QCompletionEdit.setMetaObject( metaObj );
    return metaObj;
}

void* QCompletionEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QCompletionEdit" ) )
	return this;
    return QLineEdit::qt_cast( clname );
}

// SIGNAL chosen
void QCompletionEdit::chosen( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool QCompletionEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setCompletionList((const QStringList&)*((const QStringList*)static_QUType_ptr.get(_o+1))); break;
    case 1: setAutoAdd((bool)static_QUType_bool.get(_o+1)); break;
    case 2: clear(); break;
    case 3: addCompletionEntry((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: removeCompletionEntry((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: setCaseSensitive((bool)static_QUType_bool.get(_o+1)); break;
    case 6: textDidChange((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QLineEdit::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QCompletionEdit::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: chosen((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QLineEdit::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QCompletionEdit::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setAutoAdd(v->asBool()); break;
	case 1: *v = QVariant( this->autoAdd(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setCaseSensitive(v->asBool()); break;
	case 1: *v = QVariant( this->isCaseSensitive(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QLineEdit::qt_property( id, f, v );
    }
    return TRUE;
}

bool QCompletionEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
