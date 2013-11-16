/****************************************************************************
** ListBoxCombo meta object code from reading C++ file 'listboxcombo.h'
**
** Created: Wed Oct 9 11:08:34 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../listboxcombo/listboxcombo.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ListBoxCombo::className() const
{
    return "ListBoxCombo";
}

QMetaObject *ListBoxCombo::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ListBoxCombo( "ListBoxCombo", &ListBoxCombo::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ListBoxCombo::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxCombo", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ListBoxCombo::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ListBoxCombo", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ListBoxCombo::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    static const QUMethod slot_0 = {"slotLeft2Right", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"slotCombo1Activated", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ "s", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"slotCombo2Activated", 1, param_slot_2 };
    static const QMetaData slot_tbl[] = {
	{ "slotLeft2Right()", &slot_0, QMetaData::Protected },
	{ "slotCombo1Activated(const QString&)", &slot_1, QMetaData::Protected },
	{ "slotCombo2Activated(const QString&)", &slot_2, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"ListBoxCombo", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ListBoxCombo.setMetaObject( metaObj );
    return metaObj;
}

void* ListBoxCombo::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ListBoxCombo" ) )
	return this;
    return QVBox::qt_cast( clname );
}

bool ListBoxCombo::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotLeft2Right(); break;
    case 1: slotCombo1Activated((const QString&)static_QUType_QString.get(_o+1)); break;
    case 2: slotCombo2Activated((const QString&)static_QUType_QString.get(_o+1)); break;
    default:
	return QVBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ListBoxCombo::qt_emit( int _id, QUObject* _o )
{
    return QVBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ListBoxCombo::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool ListBoxCombo::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
