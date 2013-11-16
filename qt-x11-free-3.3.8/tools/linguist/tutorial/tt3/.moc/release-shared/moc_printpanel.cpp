/****************************************************************************
** PrintPanel meta object code from reading C++ file 'printpanel.h'
**
** Created: Wed Oct 9 11:06:25 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../printpanel.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PrintPanel::className() const
{
    return "PrintPanel";
}

QMetaObject *PrintPanel::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PrintPanel( "PrintPanel", &PrintPanel::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PrintPanel::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrintPanel", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PrintPanel::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PrintPanel", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PrintPanel::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PrintPanel", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PrintPanel.setMetaObject( metaObj );
    return metaObj;
}

void* PrintPanel::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PrintPanel" ) )
	return this;
    return QVBox::qt_cast( clname );
}

bool PrintPanel::qt_invoke( int _id, QUObject* _o )
{
    return QVBox::qt_invoke(_id,_o);
}

bool PrintPanel::qt_emit( int _id, QUObject* _o )
{
    return QVBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PrintPanel::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool PrintPanel::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
