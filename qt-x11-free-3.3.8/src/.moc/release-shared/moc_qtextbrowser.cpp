/****************************************************************************
** QTextBrowser meta object code from reading C++ file 'qtextbrowser.h'
**
** Created: Wed Oct 9 10:52:59 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qtextbrowser.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QTextBrowser::className() const
{
    return "QTextBrowser";
}

QMetaObject *QTextBrowser::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTextBrowser( "QTextBrowser", &QTextBrowser::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTextBrowser::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextBrowser", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTextBrowser::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextBrowser", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTextBrowser::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QTextEdit::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "name", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setSource", 1, param_slot_0 };
    static const QUMethod slot_1 = {"backward", 0, 0 };
    static const QUMethod slot_2 = {"forward", 0, 0 };
    static const QUMethod slot_3 = {"home", 0, 0 };
    static const QUMethod slot_4 = {"reload", 0, 0 };
    static const QUParameter param_slot_5[] = {
	{ "txt", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"setText", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "txt", &static_QUType_QString, 0, QUParameter::In },
	{ "context", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setText", 2, param_slot_6 };
    static const QMetaData slot_tbl[] = {
	{ "setSource(const QString&)", &slot_0, QMetaData::Public },
	{ "backward()", &slot_1, QMetaData::Public },
	{ "forward()", &slot_2, QMetaData::Public },
	{ "home()", &slot_3, QMetaData::Public },
	{ "reload()", &slot_4, QMetaData::Public },
	{ "setText(const QString&)", &slot_5, QMetaData::Public },
	{ "setText(const QString&,const QString&)", &slot_6, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"backwardAvailable", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"forwardAvailable", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"sourceChanged", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"highlighted", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"linkClicked", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"anchorClicked", 2, param_signal_5 };
    static const QMetaData signal_tbl[] = {
	{ "backwardAvailable(bool)", &signal_0, QMetaData::Public },
	{ "forwardAvailable(bool)", &signal_1, QMetaData::Public },
	{ "sourceChanged(const QString&)", &signal_2, QMetaData::Public },
	{ "highlighted(const QString&)", &signal_3, QMetaData::Public },
	{ "linkClicked(const QString&)", &signal_4, QMetaData::Public },
	{ "anchorClicked(const QString&,const QString&)", &signal_5, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[6] = {
 	{ "QString","source", 0x3000103, &QTextBrowser::metaObj, 0, -1 },
	{ "int","undoDepth", 0x10025200, &QTextBrowser::metaObj, 0, -1 },
	{ "bool","overwriteMode", 0x12025200, &QTextBrowser::metaObj, 0, -1 },
	{ "bool","modified", 0x12026200, &QTextBrowser::metaObj, 0, -1 },
	{ "bool","readOnly", 0x12025200, &QTextBrowser::metaObj, 0, -1 },
	{ "bool","undoRedoEnabled", 0x12025200, &QTextBrowser::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QTextBrowser", parentObject,
	slot_tbl, 7,
	signal_tbl, 6,
#ifndef QT_NO_PROPERTIES
	props_tbl, 6,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTextBrowser.setMetaObject( metaObj );
    return metaObj;
}

void* QTextBrowser::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTextBrowser" ) )
	return this;
    return QTextEdit::qt_cast( clname );
}

// SIGNAL backwardAvailable
void QTextBrowser::backwardAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL forwardAvailable
void QTextBrowser::forwardAvailable( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL sourceChanged
void QTextBrowser::sourceChanged( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL highlighted
void QTextBrowser::highlighted( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL linkClicked
void QTextBrowser::linkClicked( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 4, t0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL anchorClicked
void QTextBrowser::anchorClicked( const QString& t0, const QString& t1 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[3];
    static_QUType_QString.set(o+1,t0);
    static_QUType_QString.set(o+2,t1);
    activate_signal( clist, o );
}

bool QTextBrowser::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setSource((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: backward(); break;
    case 2: forward(); break;
    case 3: home(); break;
    case 4: reload(); break;
    case 5: setText((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: setText((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    default:
	return QTextEdit::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QTextBrowser::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: backwardAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 1: forwardAvailable((bool)static_QUType_bool.get(_o+1)); break;
    case 2: sourceChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 3: highlighted((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: linkClicked((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: anchorClicked((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    default:
	return QTextEdit::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTextBrowser::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setSource(v->asString()); break;
	case 1: *v = QVariant( this->source() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: case 1: case 3: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: case 1: case 5: goto resolve;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
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

bool QTextBrowser::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
