/****************************************************************************
** Editor meta object code from reading C++ file 'qwerty.h'
**
** Created: Wed Oct 9 11:08:11 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qwerty.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Editor::className() const
{
    return "Editor";
}

QMetaObject *Editor::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Editor( "Editor", &Editor::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Editor::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Editor", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Editor::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Editor", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Editor::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"newDoc", 0, 0 };
    static const QUMethod slot_1 = {"load", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_2 = {"save", 1, param_slot_2 };
    static const QUMethod slot_3 = {"print", 0, 0 };
    static const QUMethod slot_4 = {"addEncoding", 0, 0 };
    static const QUMethod slot_5 = {"toUpper", 0, 0 };
    static const QUMethod slot_6 = {"toLower", 0, 0 };
    static const QUMethod slot_7 = {"font", 0, 0 };
    static const QUParameter param_slot_8[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_8 = {"saveAsEncoding", 1, param_slot_8 };
    static const QUParameter param_slot_9[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_9 = {"openAsEncoding", 1, param_slot_9 };
    static const QUMethod slot_10 = {"textChanged", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "newDoc()", &slot_0, QMetaData::Public },
	{ "load()", &slot_1, QMetaData::Public },
	{ "save()", &slot_2, QMetaData::Public },
	{ "print()", &slot_3, QMetaData::Public },
	{ "addEncoding()", &slot_4, QMetaData::Public },
	{ "toUpper()", &slot_5, QMetaData::Public },
	{ "toLower()", &slot_6, QMetaData::Public },
	{ "font()", &slot_7, QMetaData::Public },
	{ "saveAsEncoding(int)", &slot_8, QMetaData::Private },
	{ "openAsEncoding(int)", &slot_9, QMetaData::Private },
	{ "textChanged()", &slot_10, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"Editor", parentObject,
	slot_tbl, 11,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Editor.setMetaObject( metaObj );
    return metaObj;
}

void* Editor::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Editor" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool Editor::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: newDoc(); break;
    case 1: load(); break;
    case 2: static_QUType_bool.set(_o,save()); break;
    case 3: print(); break;
    case 4: addEncoding(); break;
    case 5: toUpper(); break;
    case 6: toLower(); break;
    case 7: font(); break;
    case 8: saveAsEncoding((int)static_QUType_int.get(_o+1)); break;
    case 9: openAsEncoding((int)static_QUType_int.get(_o+1)); break;
    case 10: textChanged(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Editor::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Editor::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool Editor::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
