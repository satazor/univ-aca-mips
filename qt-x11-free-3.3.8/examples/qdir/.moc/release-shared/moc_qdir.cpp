/****************************************************************************
** PixmapView meta object code from reading C++ file 'qdir.h'
**
** Created: Wed Oct 9 11:08:07 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../qdir.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *PixmapView::className() const
{
    return "PixmapView";
}

QMetaObject *PixmapView::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PixmapView( "PixmapView", &PixmapView::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PixmapView::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PixmapView", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PixmapView::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PixmapView", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PixmapView::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QScrollView::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PixmapView", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PixmapView.setMetaObject( metaObj );
    return metaObj;
}

void* PixmapView::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PixmapView" ) )
	return this;
    return QScrollView::qt_cast( clname );
}

bool PixmapView::qt_invoke( int _id, QUObject* _o )
{
    return QScrollView::qt_invoke(_id,_o);
}

bool PixmapView::qt_emit( int _id, QUObject* _o )
{
    return QScrollView::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PixmapView::qt_property( int id, int f, QVariant* v)
{
    return QScrollView::qt_property( id, f, v);
}

bool PixmapView::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *Preview::className() const
{
    return "Preview";
}

QMetaObject *Preview::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Preview( "Preview", &Preview::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Preview::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Preview", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Preview::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Preview", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Preview::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidgetStack::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"Preview", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Preview.setMetaObject( metaObj );
    return metaObj;
}

void* Preview::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Preview" ) )
	return this;
    return QWidgetStack::qt_cast( clname );
}

bool Preview::qt_invoke( int _id, QUObject* _o )
{
    return QWidgetStack::qt_invoke(_id,_o);
}

bool Preview::qt_emit( int _id, QUObject* _o )
{
    return QWidgetStack::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool Preview::qt_property( int id, int f, QVariant* v)
{
    return QWidgetStack::qt_property( id, f, v);
}

bool Preview::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *PreviewWidget::className() const
{
    return "PreviewWidget";
}

QMetaObject *PreviewWidget::metaObj = 0;
static QMetaObjectCleanUp cleanUp_PreviewWidget( "PreviewWidget", &PreviewWidget::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString PreviewWidget::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreviewWidget", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString PreviewWidget::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "PreviewWidget", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* PreviewWidget::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QVBox::staticMetaObject();
    metaObj = QMetaObject::new_metaobject(
	"PreviewWidget", parentObject,
	0, 0,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_PreviewWidget.setMetaObject( metaObj );
    return metaObj;
}

void* PreviewWidget::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "PreviewWidget" ) )
	return this;
    if ( !qstrcmp( clname, "QFilePreview" ) )
	return (QFilePreview*)this;
    return QVBox::qt_cast( clname );
}

bool PreviewWidget::qt_invoke( int _id, QUObject* _o )
{
    return QVBox::qt_invoke(_id,_o);
}

bool PreviewWidget::qt_emit( int _id, QUObject* _o )
{
    return QVBox::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool PreviewWidget::qt_property( int id, int f, QVariant* v)
{
    return QVBox::qt_property( id, f, v);
}

bool PreviewWidget::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *CustomFileDialog::className() const
{
    return "CustomFileDialog";
}

QMetaObject *CustomFileDialog::metaObj = 0;
static QMetaObjectCleanUp cleanUp_CustomFileDialog( "CustomFileDialog", &CustomFileDialog::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString CustomFileDialog::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomFileDialog", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString CustomFileDialog::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "CustomFileDialog", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* CustomFileDialog::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QFileDialog::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setDir2", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "i", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_1 = {"bookmarkChosen", 1, param_slot_1 };
    static const QUMethod slot_2 = {"goHome", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setDir2(const QString&)", &slot_0, QMetaData::Public },
	{ "bookmarkChosen(int)", &slot_1, QMetaData::Private },
	{ "goHome()", &slot_2, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"CustomFileDialog", parentObject,
	slot_tbl, 3,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_CustomFileDialog.setMetaObject( metaObj );
    return metaObj;
}

void* CustomFileDialog::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "CustomFileDialog" ) )
	return this;
    return QFileDialog::qt_cast( clname );
}

bool CustomFileDialog::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setDir2((const QString&)static_QUType_QString.get(_o+1)); break;
    case 1: bookmarkChosen((int)static_QUType_int.get(_o+1)); break;
    case 2: goHome(); break;
    default:
	return QFileDialog::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool CustomFileDialog::qt_emit( int _id, QUObject* _o )
{
    return QFileDialog::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool CustomFileDialog::qt_property( int id, int f, QVariant* v)
{
    return QFileDialog::qt_property( id, f, v);
}

bool CustomFileDialog::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
