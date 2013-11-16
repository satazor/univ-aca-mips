/****************************************************************************
** WhatsThis meta object code from reading C++ file 'whatsthis.h'
**
** Created: Wed Oct 9 11:09:29 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../whatsthis.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *WhatsThis::className() const
{
    return "WhatsThis";
}

QMetaObject *WhatsThis::metaObj = 0;
static QMetaObjectCleanUp cleanUp_WhatsThis( "WhatsThis", &WhatsThis::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString WhatsThis::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WhatsThis", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString WhatsThis::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "WhatsThis", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* WhatsThis::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ "link", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"linkClicked", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "linkClicked(const QString&)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"WhatsThis", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_WhatsThis.setMetaObject( metaObj );
    return metaObj;
}

void* WhatsThis::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "WhatsThis" ) )
	return this;
    if ( !qstrcmp( clname, "QWhatsThis" ) )
	return (QWhatsThis*)this;
    return QObject::qt_cast( clname );
}

// SIGNAL linkClicked
void WhatsThis::linkClicked( const QString& t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool WhatsThis::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool WhatsThis::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: linkClicked((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool WhatsThis::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool WhatsThis::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
