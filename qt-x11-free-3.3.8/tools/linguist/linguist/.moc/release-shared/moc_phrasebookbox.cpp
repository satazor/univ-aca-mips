/****************************************************************************
** PhraseBookBox meta object code from reading C++ file 'phrasebookbox.h'
**
** Created: Wed Oct 9 11:06:19 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../phrasebookbox.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PhraseBookBox::className() const
{
    return "PhraseBookBox";
}

QMetaObject *PhraseBookBox::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PhraseBookBox( "PhraseBookBox", &PhraseBookBox::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PhraseBookBox::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PhraseBookBox", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PhraseBookBox::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PhraseBookBox", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PhraseBookBox::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QDialog::staticMetaObject();
    static const QUMethod slot_0 = {"newPhrase", 0, 0 };
    static const QUMethod slot_1 = {"removePhrase", 0, 0 };
    static const QUMethod slot_2 = {"save", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "source", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"sourceChanged", 1, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "target", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"targetChanged", 1, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "definition", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"definitionChanged", 1, param_slot_5 };
    static const QUParameter param_slot_6[] = {
	{ "item", &static_QUType_ptr, "QListViewItem", QUParameter::In }
    };
    static const QUMethod slot_6 = {"selectionChanged", 1, param_slot_6 };
    static const QMetaData slot_tbl[] = {
	{ "newPhrase()", &slot_0, QMetaData::Private },
	{ "removePhrase()", &slot_1, QMetaData::Private },
	{ "save()", &slot_2, QMetaData::Private },
	{ "sourceChanged(const QString&)", &slot_3, QMetaData::Private },
	{ "targetChanged(const QString&)", &slot_4, QMetaData::Private },
	{ "definitionChanged(const QString&)", &slot_5, QMetaData::Private },
	{ "selectionChanged(QListViewItem*)", &slot_6, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"PhraseBookBox", parentObject,
	slot_tbl, 7,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PhraseBookBox.setMetaObject( metaObj );
    return metaObj;
}

void* PhraseBookBox::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PhraseBookBox" ) )
	return this;
    return QDialog::qt_cast( clname );
}

bool PhraseBookBox::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: newPhrase(); break;
    case 1: removePhrase(); break;
    case 2: save(); break;
    case 3: sourceChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 4: targetChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 5: definitionChanged((const QString&)static_QUType_QString.get(_o+1)); break;
    case 6: selectionChanged((QListViewItem*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool PhraseBookBox::qt_emit( int _id, QUObject* _o )
{
    return QDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PhraseBookBox::qt_property( int id, int f, QVariant* v)
{
    return QDialog::qt_property( id, f, v);
}

bool PhraseBookBox::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
