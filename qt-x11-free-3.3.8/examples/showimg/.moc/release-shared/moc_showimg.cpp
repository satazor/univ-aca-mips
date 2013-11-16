/****************************************************************************
** ImageViewer meta object code from reading C++ file 'showimg.h'
**
** Created: Wed Oct 9 11:08:20 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../showimg.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ImageViewer::className() const
{
    return "ImageViewer";
}

QMetaObject *ImageViewer::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ImageViewer( "ImageViewer", &ImageViewer::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ImageViewer::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ImageViewer", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ImageViewer::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ImageViewer", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ImageViewer::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUMethod slot_0 = {"to1Bit", 0, 0 };
    static const QUMethod slot_1 = {"to8Bit", 0, 0 };
    static const QUMethod slot_2 = {"to32Bit", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"toBitDepth", 1, param_slot_3 };
    static const QUMethod slot_4 = {"copy", 0, 0 };
    static const QUMethod slot_5 = {"paste", 0, 0 };
    static const QUMethod slot_6 = {"hFlip", 0, 0 };
    static const QUMethod slot_7 = {"vFlip", 0, 0 };
    static const QUMethod slot_8 = {"rot180", 0, 0 };
    static const QUMethod slot_9 = {"editText", 0, 0 };
    static const QUMethod slot_10 = {"newWindow", 0, 0 };
    static const QUMethod slot_11 = {"openFile", 0, 0 };
    static const QUParameter param_slot_12[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_12 = {"saveImage", 1, param_slot_12 };
    static const QUParameter param_slot_13[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_13 = {"savePixmap", 1, param_slot_13 };
    static const QUMethod slot_14 = {"giveHelp", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"doOption", 1, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ 0, &static_QUType_ptr, "ImageViewer", QUParameter::In }
    };
    static const QUMethod slot_16 = {"copyFrom", 1, param_slot_16 };
    static const QMetaData slot_tbl[] = {
	{ "to1Bit()", &slot_0, QMetaData::Private },
	{ "to8Bit()", &slot_1, QMetaData::Private },
	{ "to32Bit()", &slot_2, QMetaData::Private },
	{ "toBitDepth(int)", &slot_3, QMetaData::Private },
	{ "copy()", &slot_4, QMetaData::Private },
	{ "paste()", &slot_5, QMetaData::Private },
	{ "hFlip()", &slot_6, QMetaData::Private },
	{ "vFlip()", &slot_7, QMetaData::Private },
	{ "rot180()", &slot_8, QMetaData::Private },
	{ "editText()", &slot_9, QMetaData::Private },
	{ "newWindow()", &slot_10, QMetaData::Private },
	{ "openFile()", &slot_11, QMetaData::Private },
	{ "saveImage(int)", &slot_12, QMetaData::Private },
	{ "savePixmap(int)", &slot_13, QMetaData::Private },
	{ "giveHelp()", &slot_14, QMetaData::Private },
	{ "doOption(int)", &slot_15, QMetaData::Private },
	{ "copyFrom(ImageViewer*)", &slot_16, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ImageViewer", parentObject,
	slot_tbl, 17,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ImageViewer.setMetaObject( metaObj );
    return metaObj;
}

void* ImageViewer::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ImageViewer" ) )
	return this;
    return QWidget::qt_cast( clname );
}

bool ImageViewer::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: to1Bit(); break;
    case 1: to8Bit(); break;
    case 2: to32Bit(); break;
    case 3: toBitDepth((int)static_QUType_int.get(_o+1)); break;
    case 4: copy(); break;
    case 5: paste(); break;
    case 6: hFlip(); break;
    case 7: vFlip(); break;
    case 8: rot180(); break;
    case 9: editText(); break;
    case 10: newWindow(); break;
    case 11: openFile(); break;
    case 12: saveImage((int)static_QUType_int.get(_o+1)); break;
    case 13: savePixmap((int)static_QUType_int.get(_o+1)); break;
    case 14: giveHelp(); break;
    case 15: doOption((int)static_QUType_int.get(_o+1)); break;
    case 16: copyFrom((ImageViewer*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ImageViewer::qt_emit( int _id, QUObject* _o )
{
    return QWidget::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ImageViewer::qt_property( int id, int f, QVariant* v)
{
    return QWidget::qt_property( id, f, v);
}

bool ImageViewer::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
