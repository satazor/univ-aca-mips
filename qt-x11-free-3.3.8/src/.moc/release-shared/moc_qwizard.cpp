/****************************************************************************
** QWizard meta object code from reading C++ file 'qwizard.h'
**
** Created: Wed Oct 9 10:53:04 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dialogs/qwizard.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QWizard::className() const
{
    return "QWizard";
}

QMetaObject *QWizard::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QWizard( "QWizard", &QWizard::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QWizard::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWizard", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QWizard::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QWizard", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QWizard::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setBackEnabled", 2, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"setNextEnabled", 2, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"setFinishEnabled", 2, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"setHelpEnabled", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"setFinish", 2, param_slot_4 };
    static const QUMethod slot_5 = {"back", 0, 0 };
    static const QUMethod slot_6 = {"next", 0, 0 };
    static const QUMethod slot_7 = {"help", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setBackEnabled(QWidget*,bool)", &slot_0, QMetaData::Public },
	{ "setNextEnabled(QWidget*,bool)", &slot_1, QMetaData::Public },
	{ "setFinishEnabled(QWidget*,bool)", &slot_2, QMetaData::Public },
	{ "setHelpEnabled(QWidget*,bool)", &slot_3, QMetaData::Public },
	{ "setFinish(QWidget*,bool)", &slot_4, QMetaData::Public },
	{ "back()", &slot_5, QMetaData::Protected },
	{ "next()", &slot_6, QMetaData::Protected },
	{ "help()", &slot_7, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"helpClicked", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"selected", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "helpClicked()", &signal_0, QMetaData::Protected },
	{ "selected(const QString&)", &signal_1, QMetaData::Protected }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[1] = {
 	{ "QFont","titleFont", 0x5000103, &QWizard::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QWizard", parentObject,
	slot_tbl, 8,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	props_tbl, 1,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QWizard.setMetaObject( metaObj );
    return metaObj;
}

void* QWizard::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QWizard" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL helpClicked
void QWizard::helpClicked()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL selected
void QWizard::selected( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

bool QWizard::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setBackEnabled((QWidget*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 1: setNextEnabled((QWidget*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 2: setFinishEnabled((QWidget*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 3: setHelpEnabled((QWidget*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 4: setFinish((QWidget*)static_QUType_ptr.get(_o+1),(bool)static_QUType_bool.get(_o+2)); break;
    case 5: back(); break;
    case 6: next(); break;
    case 7: help(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QWizard::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: helpClicked(); break;
    case 1: selected((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QWizard::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setTitleFont(v->asFont()); break;
	case 1: *v = QVariant( this->titleFont() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QDialog::qt_property( id, f, v );
    }
    return TRUE;
}

bool QWizard::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
