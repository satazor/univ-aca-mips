/****************************************************************************
** KAsteroidsView meta object code from reading C++ file 'view.h'
**
** Created: Wed Oct 9 11:07:31 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qasteroids/view.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *KAsteroidsView::className() const
{
    return "KAsteroidsView";
}

QMetaObject *KAsteroidsView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_KAsteroidsView( "KAsteroidsView", &KAsteroidsView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString KAsteroidsView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KAsteroidsView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString KAsteroidsView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "KAsteroidsView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* KAsteroidsView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"hideShield", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "hideShield()", &slot_0, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"shipKilled", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ "size", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"rockHit", 1, param_signal_1 };
    static const QUMethod signal_2 = {"rocksRemoved", 0, 0 };
    static const QUMethod signal_3 = {"updateVitals", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "shipKilled()", &signal_0, QMetaData::Public },
	{ "rockHit(int)", &signal_1, QMetaData::Public },
	{ "rocksRemoved()", &signal_2, QMetaData::Public },
	{ "updateVitals()", &signal_3, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"KAsteroidsView", parentObject,
	slot_tbl, 1,
	signal_tbl, 4,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_KAsteroidsView.setMetaObject( metaObj );
    return metaObj;
}

void* KAsteroidsView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "KAsteroidsView" ) )
	return this;
    return QWidget::qt_cast( clname );
}

// SIGNAL shipKilled
void KAsteroidsView::shipKilled()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL rockHit
void KAsteroidsView::rockHit( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL rocksRemoved
void KAsteroidsView::rocksRemoved()
{
    activate_signal( staticMetaObject()->signalOffset() + 2 );
}

// SIGNAL updateVitals
void KAsteroidsView::updateVitals()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

bool KAsteroidsView::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: hideShield(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool KAsteroidsView::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: shipKilled(); break;
    case 1: rockHit((int)static_QUType_int.get(_o+1)); break;
    case 2: rocksRemoved(); break;
    case 3: updateVitals(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool KAsteroidsView::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool KAsteroidsView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
