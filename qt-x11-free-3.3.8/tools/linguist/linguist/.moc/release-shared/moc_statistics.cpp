/****************************************************************************
** Statistics meta object code from reading C++ file 'statistics.h'
**
** Created: Wed Oct 9 11:06:21 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../statistics.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Statistics::className() const
{
    return "Statistics";
}

QMetaObject *Statistics::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Statistics( "Statistics", &Statistics::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Statistics::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Statistics", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Statistics::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Statistics", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Statistics::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "w1", &static_QUType_int, 0, QUParameter::In },
	{ "c1", &static_QUType_int, 0, QUParameter::In },
	{ "cs1", &static_QUType_int, 0, QUParameter::In },
	{ "w2", &static_QUType_int, 0, QUParameter::In },
	{ "c2", &static_QUType_int, 0, QUParameter::In },
	{ "cs2", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"updateStats", 6, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "e", &static_QUType_ptr, "QCloseEvent", QUParameter::In }
    };
    static const QUMethod slot_1 = {"closeEvent", 1, param_slot_1 };
    static const QUMethod slot_2 = {"languageChange", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "updateStats(int,int,int,int,int,int)", &slot_0, QMetaData::Public },
	{ "closeEvent(QCloseEvent*)", &slot_1, QMetaData::Public },
	{ "languageChange()", &slot_2, QMetaData::Protected }
    };
    static const QUMethod signal_0 = {"closed", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "closed()", &signal_0, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Statistics", parentObject,
	slot_tbl, 3,
	signal_tbl, 1,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Statistics.setMetaObject( metaObj );
    return metaObj;
}

void* Statistics::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Statistics" ) )
	return this;
    return QDialog::qt_cast( clname );
}

// SIGNAL closed
void Statistics::closed()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

bool Statistics::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: updateStats((int)static_QUType_int.get(_o+1),(int)static_QUType_int.get(_o+2),(int)static_QUType_int.get(_o+3),(int)static_QUType_int.get(_o+4),(int)static_QUType_int.get(_o+5),(int)static_QUType_int.get(_o+6)); break;
    case 1: closeEvent((QCloseEvent*)static_QUType_ptr.get(_o+1)); break;
    case 2: languageChange(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool Statistics::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: closed(); break;
    default:
	return QDialog::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool Statistics::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool Statistics::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
