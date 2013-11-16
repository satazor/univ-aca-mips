/****************************************************************************
** HelpDemoBase meta object code from reading C++ file 'helpdemobase.h'
**
** Created: Wed Oct 9 11:07:48 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../.ui/helpdemobase.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *HelpDemoBase::className() const
{
    return "HelpDemoBase";
}

QMetaObject *HelpDemoBase::metaObj = 0;
static QMetaObjectCleanUp cleanUp_HelpDemoBase( "HelpDemoBase", &HelpDemoBase::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString HelpDemoBase::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpDemoBase", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString HelpDemoBase::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpDemoBase", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* HelpDemoBase::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"displayPage", 0, 0 };
    static const QUMethod slot_1 = {"openAssistant", 0, 0 };
    static const QUMethod slot_2 = {"closeAssistant", 0, 0 };
    static const QUMethod slot_3 = {"setAssistantArguments", 0, 0 };
    static const QUMethod slot_4 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "displayPage()", &slot_0, QMetaData::Public },
	{ "openAssistant()", &slot_1, QMetaData::Public },
	{ "closeAssistant()", &slot_2, QMetaData::Public },
	{ "setAssistantArguments()", &slot_3, QMetaData::Public },
	{ "languageChange()", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"HelpDemoBase", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_HelpDemoBase.setMetaObject( metaObj );
    return metaObj;
}

void* HelpDemoBase::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "HelpDemoBase" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool HelpDemoBase::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: displayPage(); break;
    case 1: openAssistant(); break;
    case 2: closeAssistant(); break;
    case 3: setAssistantArguments(); break;
    case 4: languageChange(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool HelpDemoBase::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool HelpDemoBase::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool HelpDemoBase::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
