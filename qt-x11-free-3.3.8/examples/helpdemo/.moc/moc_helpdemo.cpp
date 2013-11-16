/****************************************************************************
** HelpDemo meta object code from reading C++ file 'helpdemo.h'
**
** Created: Wed Oct 9 11:07:48 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../helpdemo.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *HelpDemo::className() const
{
    return "HelpDemo";
}

QMetaObject *HelpDemo::metaObj = 0;
static QMetaObjectCleanUp cleanUp_HelpDemo( "HelpDemo", &HelpDemo::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString HelpDemo::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpDemo", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString HelpDemo::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "HelpDemo", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* HelpDemo::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = HelpDemoBase::staticMetaObject();
    static const QUMethod slot_0 = {"setAssistantArguments", 0, 0 };
    static const QUMethod slot_1 = {"openAssistant", 0, 0 };
    static const QUMethod slot_2 = {"closeAssistant", 0, 0 };
    static const QUMethod slot_3 = {"displayPage", 0, 0 };
    static const QUParameter param_slot_4[] = {
	{ "err", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"showAssistantErrors", 1, param_slot_4 };
    static const QUMethod slot_5 = {"assistantOpened", 0, 0 };
    static const QUMethod slot_6 = {"assistantClosed", 0, 0 };
    static const QUMethod slot_7 = {"showHelp", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setAssistantArguments()", &slot_0, QMetaData::Private },
	{ "openAssistant()", &slot_1, QMetaData::Private },
	{ "closeAssistant()", &slot_2, QMetaData::Private },
	{ "displayPage()", &slot_3, QMetaData::Private },
	{ "showAssistantErrors(const QString&)", &slot_4, QMetaData::Private },
	{ "assistantOpened()", &slot_5, QMetaData::Private },
	{ "assistantClosed()", &slot_6, QMetaData::Private },
	{ "showHelp()", &slot_7, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"HelpDemo", parentObject,
	slot_tbl, 8,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_HelpDemo.setMetaObject( metaObj );
    return metaObj;
}

void* HelpDemo::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "HelpDemo" ) )
	return this;
    return HelpDemoBase::qt_cast( clname );
}

bool HelpDemo::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setAssistantArguments(); break;
    case 1: openAssistant(); break;
    case 2: closeAssistant(); break;
    case 3: displayPage(); break;
    case 4: showAssistantErrors((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: assistantOpened(); break;
    case 6: assistantClosed(); break;
    case 7: showHelp(); break;
    default:
	return HelpDemoBase::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool HelpDemo::qt_emit( int _id, QUObject* _o )
{
    return HelpDemoBase::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool HelpDemo::qt_property( int id, int f, QVariant* v)
{
    return HelpDemoBase::qt_property( id, f, v);
}

bool HelpDemo::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
