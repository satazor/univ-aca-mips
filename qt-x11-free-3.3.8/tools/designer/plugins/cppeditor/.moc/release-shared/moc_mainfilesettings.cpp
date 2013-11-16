/****************************************************************************
** CppMainFile meta object code from reading C++ file 'mainfilesettings.h'
**
** Created: Wed Oct 9 11:05:41 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../mainfilesettings.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *CppMainFile::className() const
{
    return "CppMainFile";
}

QMetaObject *CppMainFile::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CppMainFile( "CppMainFile", &CppMainFile::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CppMainFile::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CppMainFile", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CppMainFile::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CppMainFile", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CppMainFile::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"init", 0, 0 };
    static const QUParameter param_slot_1[] = {
	{ "appIface", &static_QUType_iface, "QUnknownInterface", QUParameter::In }
    };
    static const QUMethod slot_1 = {"setup", 1, param_slot_1 };
    static const QUMethod slot_2 = {"updateOkButton", 0, 0 };
    static const QUMethod slot_3 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "init()", &slot_0, QMetaData::Public },
	{ "setup(QUnknownInterface*)", &slot_1, QMetaData::Public },
	{ "updateOkButton()", &slot_2, QMetaData::Public },
	{ "languageChange()", &slot_3, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"CppMainFile", parentObject,
	slot_tbl, 4,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CppMainFile.setMetaObject( metaObj );
    return metaObj;
}

void* CppMainFile::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CppMainFile" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool CppMainFile::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: init(); break;
    case 1: setup((QUnknownInterface*)static_QUType_iface.get(_o+1)); break;
    case 2: updateOkButton(); break;
    case 3: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CppMainFile::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CppMainFile::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool CppMainFile::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
