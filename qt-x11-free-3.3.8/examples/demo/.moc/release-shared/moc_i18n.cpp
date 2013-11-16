/****************************************************************************
** I18nDemo meta object code from reading C++ file 'i18n.h'
**
** Created: Wed Oct 9 11:07:30 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../i18n/i18n.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *I18nDemo::className() const
{
    return "I18nDemo";
}

QMetaObject *I18nDemo::metaObj = 0;
static QMetaObjectCleanUp cleanUp_I18nDemo( "I18nDemo", &I18nDemo::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString I18nDemo::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I18nDemo", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString I18nDemo::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "I18nDemo", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* I18nDemo::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"newSlot", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"windowSlot", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_2 = {"windowActivated", 1, param_slot_2 };
    static const QUMethod slot_3 = {"closeSlot", 0, 0 };
    static const QUMethod slot_4 = {"closeAllSlot", 0, 0 };
    static const QUMethod slot_5 = {"tileSlot", 0, 0 };
    static const QUMethod slot_6 = {"cascadeSlot", 0, 0 };
    static const QUMethod slot_7 = {"wrapperDead", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "newSlot(int)", &slot_0, QMetaData::Public },
	{ "windowSlot(int)", &slot_1, QMetaData::Public },
	{ "windowActivated(QWidget*)", &slot_2, QMetaData::Public },
	{ "closeSlot()", &slot_3, QMetaData::Public },
	{ "closeAllSlot()", &slot_4, QMetaData::Public },
	{ "tileSlot()", &slot_5, QMetaData::Public },
	{ "cascadeSlot()", &slot_6, QMetaData::Public },
	{ "wrapperDead()", &slot_7, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"I18nDemo", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_I18nDemo.setMetaObject( metaObj );
    return metaObj;
}

void* I18nDemo::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "I18nDemo" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool I18nDemo::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: newSlot((int)static_QUType_int.get(_o+1)); break;
    case 1: windowSlot((int)static_QUType_int.get(_o+1)); break;
    case 2: windowActivated((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 3: closeSlot(); break;
    case 4: closeAllSlot(); break;
    case 5: tileSlot(); break;
    case 6: cascadeSlot(); break;
    case 7: wrapperDead(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool I18nDemo::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool I18nDemo::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool I18nDemo::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
