/****************************************************************************
** LineEdits meta object code from reading C++ file 'lineedits.h'
**
** Created: Wed Oct 9 11:08:34 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../../lineedits/lineedits.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *LineEdits::className() const
{
    return "LineEdits";
}

QMetaObject *LineEdits::metaObj = 0;
static QMetaObjectCleanUp cleanUp_LineEdits( "LineEdits", &LineEdits::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString LineEdits::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LineEdits", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString LineEdits::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "LineEdits", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* LineEdits::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QGroupBox::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"slotEchoChanged", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"slotValidatorChanged", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"slotAlignmentChanged", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"slotInputMaskChanged", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"slotReadOnlyChanged", 1, param_slot_4 };
    static const QMetaData slot_tbl[] = {
	{ "slotEchoChanged(int)", &slot_0, QMetaData::Protected },
	{ "slotValidatorChanged(int)", &slot_1, QMetaData::Protected },
	{ "slotAlignmentChanged(int)", &slot_2, QMetaData::Protected },
	{ "slotInputMaskChanged(int)", &slot_3, QMetaData::Protected },
	{ "slotReadOnlyChanged(int)", &slot_4, QMetaData::Protected }
    };
    metaObj = QMetaObject::new_metaobject(
	"LineEdits", parentObject,
	slot_tbl, 5,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_LineEdits.setMetaObject( metaObj );
    return metaObj;
}

void* LineEdits::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "LineEdits" ) )
	return this;
    return QGroupBox::qt_cast( clname );
}

bool LineEdits::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: slotEchoChanged((int)static_QUType_int.get(_o+1)); break;
    case 1: slotValidatorChanged((int)static_QUType_int.get(_o+1)); break;
    case 2: slotAlignmentChanged((int)static_QUType_int.get(_o+1)); break;
    case 3: slotInputMaskChanged((int)static_QUType_int.get(_o+1)); break;
    case 4: slotReadOnlyChanged((int)static_QUType_int.get(_o+1)); break;
    default:
	return QGroupBox::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool LineEdits::qt_emit( int _id, QUObject* _o )
{
    return QGroupBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool LineEdits::qt_property( int id, int f, QVariant* v)
{
    return QGroupBox::qt_property( id, f, v);
}

bool LineEdits::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
