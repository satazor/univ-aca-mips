/****************************************************************************
** QFontDialog meta object code from reading C++ file 'qfontdialog.h'
**
** Created: Wed Oct 9 10:53:02 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../dialogs/qfontdialog.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *QFontDialog::className() const
{
    return "QFontDialog";
}

QMetaObject *QFontDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QFontDialog( "QFontDialog", &QFontDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QFontDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFontDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QFontDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QFontDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QFontDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"sizeChanged", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"familyHighlighted", 1, param_slot_1 };
    static const QUParameter param_slot_2[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"scriptHighlighted", 1, param_slot_2 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"styleHighlighted", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"sizeHighlighted", 1, param_slot_4 };
    static const QUMethod slot_5 = {"updateSample", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "sizeChanged(const QString&)", &slot_0, QMetaData::Private },
	{ "familyHighlighted(int)", &slot_1, QMetaData::Private },
	{ "scriptHighlighted(int)", &slot_2, QMetaData::Private },
	{ "styleHighlighted(int)", &slot_3, QMetaData::Private },
	{ "sizeHighlighted(const QString&)", &slot_4, QMetaData::Private },
	{ "updateSample()", &slot_5, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"QFontDialog", parentObject,
	slot_tbl, 6,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QFontDialog.setMetaObject( metaObj );
    return metaObj;
}

void* QFontDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QFontDialog" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool QFontDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: sizeChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: familyHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 2: scriptHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 3: styleHighlighted((int)static_QUType_int.get(_o+1)); break;
    case 4: sizeHighlighted((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: updateSample(); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QFontDialog::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool QFontDialog::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool QFontDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
