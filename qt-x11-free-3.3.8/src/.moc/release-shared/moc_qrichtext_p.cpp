/****************************************************************************
** QTextDocument meta object code from reading C++ file 'qrichtext_p.h'
**
** Created: Wed Oct 9 10:52:36 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../kernel/qrichtext_p.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QTextDocument::className() const
{
    return "QTextDocument";
}

QMetaObject *QTextDocument::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QTextDocument( "QTextDocument", &QTextDocument::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QTextDocument::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextDocument", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QTextDocument::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QTextDocument", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QTextDocument::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"minimumWidthChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "minimumWidthChanged(int)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"QTextDocument", parentObject,
	0, 0,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QTextDocument.setMetaObject( metaObj );
    return metaObj;
}

void* QTextDocument::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QTextDocument" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL minimumWidthChanged
void QTextDocument::minimumWidthChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

bool QTextDocument::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool QTextDocument::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: minimumWidthChanged((int)static_QUType_int.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QTextDocument::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool QTextDocument::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
