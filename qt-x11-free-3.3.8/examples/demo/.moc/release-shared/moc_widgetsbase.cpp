/****************************************************************************
** WidgetsBase meta object code from reading C++ file 'widgetsbase.h'
**
** Created: Wed Oct 9 11:07:33 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/widgetsbase.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *WidgetsBase::className() const
{
    return "WidgetsBase";
}

QMetaObject *WidgetsBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WidgetsBase( "WidgetsBase", &WidgetsBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WidgetsBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WidgetsBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WidgetsBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WidgetsBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WidgetsBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"resetColors", 0, 0 };
    static const QUMethod slot_1 = {"setColor", 0, 0 };
    static const QUMethod slot_2 = {"updateClock", 0, 0 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QUMethod slot_4 = {"init", 0, 0 };
    static const QUMethod slot_5 = {"destroy", 0, 0 };
    static const QUParameter param_slot_6[] = {
	{ "color", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_6 = {"setColor", 1, param_slot_6 };
    static const QUParameter param_slot_7[] = {
	{ "color", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_7 = {"updateColorTest", 1, param_slot_7 };
    static const QUMethod slot_8 = {"updateDateTimeString", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "resetColors()", &slot_0, QMetaData::Public },
	{ "setColor()", &slot_1, QMetaData::Public },
	{ "updateClock()", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected },
	{ "init()", &slot_4, QMetaData::Protected },
	{ "destroy()", &slot_5, QMetaData::Protected },
	{ "setColor(const QString&)", &slot_6, QMetaData::Protected },
	{ "updateColorTest(const QString&)", &slot_7, QMetaData::Protected },
	{ "updateDateTimeString()", &slot_8, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"WidgetsBase", parentObject,
	slot_tbl, 9,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WidgetsBase.setMetaObject( metaObj );
    return metaObj;
}

void* WidgetsBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WidgetsBase" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool WidgetsBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: resetColors(); break;
    case 1: setColor(); break;
    case 2: updateClock(); break;
    case 3: languageChange(); break;
    case 4: init(); break;
    case 5: destroy(); break;
    case 6: setColor((const QString&)static_QUType_QString.get(_o+1)); break;
    case 7: updateColorTest((const QString&)static_QUType_QString.get(_o+1)); break;
    case 8: updateDateTimeString(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool WidgetsBase::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool WidgetsBase::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool WidgetsBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
