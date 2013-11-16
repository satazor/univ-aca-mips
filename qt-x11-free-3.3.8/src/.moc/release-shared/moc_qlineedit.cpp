/****************************************************************************
** QLineEdit meta object code from reading C++ file 'qlineedit.h'
**
** Created: Wed Oct 9 10:52:45 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qlineedit.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QLineEdit::className() const
{
    return "QLineEdit";
}

QMetaObject *QLineEdit::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QLineEdit( "QLineEdit", &QLineEdit::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QLineEdit::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLineEdit", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QLineEdit::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QLineEdit", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QLineEdit::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFrame::staticMetaObject();
#ifndef QT_NO_PROPERTIES
    static const QMetaEnum::Item enum_0[] = {
	{ "Normal",  (int) QLineEdit::Normal },
	{ "NoEcho",  (int) QLineEdit::NoEcho },
	{ "Password",  (int) QLineEdit::Password }
    };
    static const QMetaEnum enum_tbl[] = {
	{ "EchoMode", 3, enum_0, FALSE }
    };
#endif // QT_NO_PROPERTIES
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setText", 1, param_slot_0 };
    static const QUMethod slot_1 = {"selectAll", 0, 0 };
    static const QUMethod slot_2 = {"deselect", 0, 0 };
    static const QUMethod slot_3 = {"clearValidator", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"insert", 1, param_slot_4 };
    static const QUMethod slot_5 = {"clear", 0, 0 };
    static const QUMethod slot_6 = {"undo", 0, 0 };
    static const QUMethod slot_7 = {"redo", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"setMaxLength", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"setFrame", 1, param_slot_9 };
    static const QUParameter param_slot_10[] = {
	{ 0, &static_QUType_enum, 
#ifndef QT_NO_PROPERTIES
	  &enum_tbl[0]
#else
	  0
#endif // QT_NO_PROPERTIES
	  , QUParameter::In }
    };
    static const QUMethod slot_10 = {"setEchoMode", 1, param_slot_10 };
    static const QUParameter param_slot_11[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_11 = {"setReadOnly", 1, param_slot_11 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_ptr, "QValidator", QUParameter::In }
    };
    static const QUMethod slot_12 = {"setValidator", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_varptr, "\x05", QUParameter::In }
    };
    static const QUMethod slot_13 = {"setFont", 1, param_slot_13 };
    static const QUParameter param_slot_14[] = {
	{ 0, &static_QUType_varptr, "\x0b", QUParameter::In }
    };
    static const QUMethod slot_14 = {"setPalette", 1, param_slot_14 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In },
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"setSelection", 2, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"setCursorPosition", 1, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "flag", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"setAlignment", 1, param_slot_17 };
    static const QUMethod slot_18 = {"cut", 0, 0 };
    static const QUMethod slot_19 = {"copy", 0, 0 };
    static const QUMethod slot_20 = {"paste", 0, 0 };
    static const QUParameter param_slot_21[] = {
	{ "b", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_21 = {"setDragEnabled", 1, param_slot_21 };
    static const QUMethod slot_22 = {"clipboardChanged", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setText(const QString&)", &slot_0, QMetaData::Public },
	{ "selectAll()", &slot_1, QMetaData::Public },
	{ "deselect()", &slot_2, QMetaData::Public },
	{ "clearValidator()", &slot_3, QMetaData::Public },
	{ "insert(const QString&)", &slot_4, QMetaData::Public },
	{ "clear()", &slot_5, QMetaData::Public },
	{ "undo()", &slot_6, QMetaData::Public },
	{ "redo()", &slot_7, QMetaData::Public },
	{ "setMaxLength(int)", &slot_8, QMetaData::Public },
	{ "setFrame(bool)", &slot_9, QMetaData::Public },
	{ "setEchoMode(EchoMode)", &slot_10, QMetaData::Public },
	{ "setReadOnly(bool)", &slot_11, QMetaData::Public },
	{ "setValidator(const QValidator*)", &slot_12, QMetaData::Public },
	{ "setFont(const QFont&)", &slot_13, QMetaData::Public },
	{ "setPalette(const QPalette&)", &slot_14, QMetaData::Public },
	{ "setSelection(int,int)", &slot_15, QMetaData::Public },
	{ "setCursorPosition(int)", &slot_16, QMetaData::Public },
	{ "setAlignment(int)", &slot_17, QMetaData::Public },
	{ "cut()", &slot_18, QMetaData::Public },
	{ "copy()", &slot_19, QMetaData::Public },
	{ "paste()", &slot_20, QMetaData::Public },
	{ "setDragEnabled(bool)", &slot_21, QMetaData::Public },
	{ "clipboardChanged()", &slot_22, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"textChanged", 1, param_signal_0 };
    static const QUMethod signal_1 = {"returnPressed", 0, 0 };
    static const QUMethod signal_2 = {"lostFocus", 0, 0 };
    static const QUMethod signal_3 = {"selectionChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "textChanged(const QString&)", &signal_0, QMetaData::Public },
	{ "returnPressed()", &signal_1, QMetaData::Public },
	{ "lostFocus()", &signal_2, QMetaData::Public },
	{ "selectionChanged()", &signal_3, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[19] = {
 	{ "QString","text", 0x3000103, &QLineEdit::metaObj, 0, -1 },
	{ "int","maxLength", 0x10000103, &QLineEdit::metaObj, 0, -1 },
	{ "bool","frame", 0x12000103, &QLineEdit::metaObj, 0, -1 },
	{ "EchoMode","echoMode", 0x0107, &QLineEdit::metaObj, &enum_tbl[0], -1 },
	{ "QString","displayText", 0x3000001, &QLineEdit::metaObj, 0, -1 },
	{ "int","cursorPosition", 0x10000103, &QLineEdit::metaObj, 0, -1 },
	{ "Alignment","alignment", 0x010f, &QLineEdit::metaObj, 0, -1 },
	{ "bool","edited", 0x12001103, &QLineEdit::metaObj, 0, -1 },
	{ "bool","modified", 0x12000001, &QLineEdit::metaObj, 0, -1 },
	{ "bool","hasMarkedText", 0x12001001, &QLineEdit::metaObj, 0, -1 },
	{ "bool","hasSelectedText", 0x12000001, &QLineEdit::metaObj, 0, -1 },
	{ "QString","markedText", 0x3001001, &QLineEdit::metaObj, 0, -1 },
	{ "QString","selectedText", 0x3000001, &QLineEdit::metaObj, 0, -1 },
	{ "bool","dragEnabled", 0x12000103, &QLineEdit::metaObj, 0, -1 },
	{ "bool","readOnly", 0x12000103, &QLineEdit::metaObj, 0, -1 },
	{ "bool","undoAvailable", 0x12000001, &QLineEdit::metaObj, 0, -1 },
	{ "bool","redoAvailable", 0x12000001, &QLineEdit::metaObj, 0, -1 },
	{ "QString","inputMask", 0x3000103, &QLineEdit::metaObj, 0, -1 },
	{ "bool","acceptableInput", 0x12000001, &QLineEdit::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QLineEdit", parentObject,
	slot_tbl, 23,
	signal_tbl, 4,
#ifndef QT_NO_PROPERTIES
	props_tbl, 19,
	enum_tbl, 1,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QLineEdit.setMetaObject( metaObj );
    return metaObj;
}

void* QLineEdit::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QLineEdit" ) )
	return this;
    return QFrame::qt_cast( clname );
}

// SIGNAL textChanged
void QLineEdit::textChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL returnPressed
void QLineEdit::returnPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL lostFocus
void QLineEdit::lostFocus()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL selectionChanged
void QLineEdit::selectionChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

bool QLineEdit::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: selectAll(); break;
    case 2: deselect(); break;
    case 3: clearValidator(); break;
    case 4: insert((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: clear(); break;
    case 6: undo(); break;
    case 7: redo(); break;
    case 8: setMaxLength((int)static_QUType_int.get(_o+1)); break;
    case 9: setFrame((bool)static_QUType_bool.get(_o+1)); break;
    case 10: setEchoMode((EchoMode)static_QUType_enum.get(_o+1)); break;
    case 11: setReadOnly((bool)static_QUType_bool.get(_o+1)); break;
    case 12: setValidator((const QValidator*)static_QUType_ptr.get(_o+1)); break;
    case 13: setFont((const QFont&)*((const QFont*)static_QUType_ptr.get(_o+1))); break;
    case 14: setPalette((const QPalette&)*((const QPalette*)static_QUType_ptr.get(_o+1))); break;
    case 15: setSelection((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 16: setCursorPosition((int)static_QUType_int.get(_o+1)); break;
    case 17: setAlignment((int)static_QUType_int.get(_o+1)); break;
    case 18: cut(); break;
    case 19: copy(); break;
    case 20: paste(); break;
    case 21: setDragEnabled((bool)static_QUType_bool.get(_o+1)); break;
    case 22: clipboardChanged(); break;
    default:
	return QFrame::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QLineEdit::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: textChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: returnPressed(); break;
    case 2: lostFocus(); break;
    case 3: selectionChanged(); break;
    default:
	return QFrame::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QLineEdit::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setText(v->asString()); break;
	case 1: *v = QVariant( this->text() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setMaxLength(v->asInt()); break;
	case 1: *v = QVariant( this->maxLength() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setFrame(v->asBool()); break;
	case 1: *v = QVariant( this->frame(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setEchoMode((EchoMode&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->echoMode() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 1: *v = QVariant( this->displayText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setCursorPosition(v->asInt()); break;
	case 1: *v = QVariant( this->cursorPosition() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 0: setAlignment(v->asInt()); break;
	case 1: *v = QVariant( (int)this->alignment() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setEdited(v->asBool()); break;
	case 1: *v = QVariant( this->edited(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 8: switch( f ) {
	case 1: *v = QVariant( this->isModified(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 9: switch( f ) {
	case 1: *v = QVariant( this->hasMarkedText(), 0 ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 10: switch( f ) {
	case 1: *v = QVariant( this->hasSelectedText(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 11: switch( f ) {
	case 1: *v = QVariant( this->markedText() ); break;
	case 4: case 5: break;
	default: return FALSE;
    } break;
    case 12: switch( f ) {
	case 1: *v = QVariant( this->selectedText() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 13: switch( f ) {
	case 0: setDragEnabled(v->asBool()); break;
	case 1: *v = QVariant( this->dragEnabled(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 14: switch( f ) {
	case 0: setReadOnly(v->asBool()); break;
	case 1: *v = QVariant( this->isReadOnly(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 15: switch( f ) {
	case 1: *v = QVariant( this->isUndoAvailable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 16: switch( f ) {
	case 1: *v = QVariant( this->isRedoAvailable(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 17: switch( f ) {
	case 0: setInputMask(v->asString()); break;
	case 1: *v = QVariant( this->inputMask() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 18: switch( f ) {
	case 1: *v = QVariant( this->hasAcceptableInput(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QFrame::qt_property( id, f, v );
    }
    return TRUE;
}

bool QLineEdit::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
