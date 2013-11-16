/****************************************************************************
** ProgressBar meta object code from reading C++ file 'progressbar.h'
**
** Created: Wed Oct 9 11:08:05 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../progressbar.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ProgressBar::className() const
{
    return "ProgressBar";
}

QMetaObject *ProgressBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ProgressBar( "ProgressBar", &ProgressBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ProgressBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProgressBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ProgressBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ProgressBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ProgressBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QButtonGroup::staticMetaObject();
    static const QUMethod slot_0 = {"slotStart", 0, 0 };
    static const QUMethod slot_1 = {"slotReset", 0, 0 };
    static const QUMethod slot_2 = {"slotTimeout", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "slotStart()", &slot_0, QMetaData::Protected },
	{ "slotReset()", &slot_1, QMetaData::Protected },
	{ "slotTimeout()", &slot_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ProgressBar", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ProgressBar.setMetaObject( metaObj );
    return metaObj;
}

void* ProgressBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ProgressBar" ) )
	return this;
    return QButtonGroup::qt_cast( clname );
}

bool ProgressBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotStart(); break;
    case 1: slotReset(); break;
    case 2: slotTimeout(); break;
    default:
	return QButtonGroup::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ProgressBar::qt_emit( int _id, QUObject* _o )
{
    return QButtonGroup::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ProgressBar::qt_property( int id, int f, QVariant* v)
{
    return QButtonGroup::qt_property( id, f, v);
}

bool ProgressBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
