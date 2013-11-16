/****************************************************************************
** FormFile meta object code from reading C++ file 'formfile.h'
**
** Created: Wed Oct 9 11:04:57 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../formfile.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *FormFile::className() const
{
    return "FormFile";
}

QMetaObject *FormFile::metaObj = 0;
static QMetaObjectCleanUp cleanUp_FormFile( "FormFile", &FormFile::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString FormFile::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FormFile", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString FormFile::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "FormFile", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* FormFile::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"formWindowChangedSomehow", 0, 0 };
    static const QUMethod slot_1 = {"notifyFormWindowChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "formWindowChangedSomehow()", &slot_0, QMetaData::Private },
	{ "notifyFormWindowChange()", &slot_1, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_ptr, "FormFile", QUParameter::In }
    };
    static const QUMethod signal_0 = {"somethingChanged", 1, param_signal_0 };
    static const QMetaData signal_tbl[] = {
	{ "somethingChanged(FormFile*)", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"FormFile", parentObject,
	slot_tbl, 2,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_FormFile.setMetaObject( metaObj );
    return metaObj;
}

void* FormFile::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "FormFile" ) )
	return this;
    return QObject::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL somethingChanged
void FormFile::somethingChanged( FormFile* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool FormFile::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: formWindowChangedSomehow(); break;
    case 1: notifyFormWindowChange(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool FormFile::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: somethingChanged((FormFile*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool FormFile::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool FormFile::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
