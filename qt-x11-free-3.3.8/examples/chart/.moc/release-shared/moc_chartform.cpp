/****************************************************************************
** ChartForm meta object code from reading C++ file 'chartform.h'
**
** Created: Wed Oct 9 11:08:53 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../chartform.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *ChartForm::className() const
{
    return "ChartForm";
}

QMetaObject *ChartForm::metaObj = 0;
static QMetaObjectCleanUp cleanUp_ChartForm( "ChartForm", &ChartForm::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString ChartForm::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ChartForm", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString ChartForm::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "ChartForm", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* ChartForm::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUMethod slot_0 = {"fileNew", 0, 0 };
    static const QUMethod slot_1 = {"fileOpen", 0, 0 };
    static const QUParameter param_slot_2[] = {
	{ "index", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_2 = {"fileOpenRecent", 1, param_slot_2 };
    static const QUMethod slot_3 = {"fileSave", 0, 0 };
    static const QUMethod slot_4 = {"fileSaveAs", 0, 0 };
    static const QUMethod slot_5 = {"fileSaveAsPixmap", 0, 0 };
    static const QUMethod slot_6 = {"filePrint", 0, 0 };
    static const QUMethod slot_7 = {"fileQuit", 0, 0 };
    static const QUMethod slot_8 = {"optionsSetData", 0, 0 };
    static const QUParameter param_slot_9[] = {
	{ "action", &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod slot_9 = {"updateChartType", 1, param_slot_9 };
    static const QUMethod slot_10 = {"optionsSetFont", 0, 0 };
    static const QUMethod slot_11 = {"optionsSetOptions", 0, 0 };
    static const QUMethod slot_12 = {"helpHelp", 0, 0 };
    static const QUMethod slot_13 = {"helpAbout", 0, 0 };
    static const QUMethod slot_14 = {"helpAboutQt", 0, 0 };
    static const QUMethod slot_15 = {"saveOptions", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "fileNew()", &slot_0, QMetaData::Private },
	{ "fileOpen()", &slot_1, QMetaData::Private },
	{ "fileOpenRecent(int)", &slot_2, QMetaData::Private },
	{ "fileSave()", &slot_3, QMetaData::Private },
	{ "fileSaveAs()", &slot_4, QMetaData::Private },
	{ "fileSaveAsPixmap()", &slot_5, QMetaData::Private },
	{ "filePrint()", &slot_6, QMetaData::Private },
	{ "fileQuit()", &slot_7, QMetaData::Private },
	{ "optionsSetData()", &slot_8, QMetaData::Private },
	{ "updateChartType(QAction*)", &slot_9, QMetaData::Private },
	{ "optionsSetFont()", &slot_10, QMetaData::Private },
	{ "optionsSetOptions()", &slot_11, QMetaData::Private },
	{ "helpHelp()", &slot_12, QMetaData::Private },
	{ "helpAbout()", &slot_13, QMetaData::Private },
	{ "helpAboutQt()", &slot_14, QMetaData::Private },
	{ "saveOptions()", &slot_15, QMetaData::Private }
    };
    metaObj = QMetaObject::new_metaobject(
	"ChartForm", parentObject,
	slot_tbl, 16,
	0, 0,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_ChartForm.setMetaObject( metaObj );
    return metaObj;
}

void* ChartForm::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "ChartForm" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

bool ChartForm::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: fileNew(); break;
    case 1: fileOpen(); break;
    case 2: fileOpenRecent((int)static_QUType_int.get(_o+1)); break;
    case 3: fileSave(); break;
    case 4: fileSaveAs(); break;
    case 5: fileSaveAsPixmap(); break;
    case 6: filePrint(); break;
    case 7: fileQuit(); break;
    case 8: optionsSetData(); break;
    case 9: updateChartType((QAction*)static_QUType_ptr.get(_o+1)); break;
    case 10: optionsSetFont(); break;
    case 11: optionsSetOptions(); break;
    case 12: helpHelp(); break;
    case 13: helpAbout(); break;
    case 14: helpAboutQt(); break;
    case 15: saveOptions(); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool ChartForm::qt_emit( int _id, QUObject* _o )
{
    return QMainWindow::qt_emit(_id,_o);
}
#ifndef QT_NO_PROPERTIES

bool ChartForm::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool ChartForm::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
