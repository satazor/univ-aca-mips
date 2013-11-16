/****************************************************************************
** QScrollBar meta object code from reading C++ file 'qscrollbar.h'
**
** Created: Wed Oct 9 10:52:50 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../widgets/qscrollbar.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#include <qvariant.h>
const char *QScrollBar::className() const
{
    return "QScrollBar";
}

QMetaObject *QScrollBar::metaObj = 0;
static QMetaObjectCleanUp cleanUp_QScrollBar( "QScrollBar", &QScrollBar::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString QScrollBar::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QScrollBar", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString QScrollBar::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "QScrollBar", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* QScrollBar::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QWidget::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ 0, &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_0 = {"setValue", 1, param_slot_0 };
    static const QUMethod slot_1 = {"doAutoRepeat", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "setValue(int)", &slot_0, QMetaData::Public },
	{ "doAutoRepeat()", &slot_1, QMetaData::Private }
    };
    static const QUParameter param_signal_0[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_0 = {"valueChanged", 1, param_signal_0 };
    static const QUMethod signal_1 = {"sliderPressed", 0, 0 };
    static const QUParameter param_signal_2[] = {
	{ "value", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"sliderMoved", 1, param_signal_2 };
    static const QUMethod signal_3 = {"sliderReleased", 0, 0 };
    static const QUMethod signal_4 = {"nextLine", 0, 0 };
    static const QUMethod signal_5 = {"prevLine", 0, 0 };
    static const QUMethod signal_6 = {"nextPage", 0, 0 };
    static const QUMethod signal_7 = {"prevPage", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "valueChanged(int)", &signal_0, QMetaData::Public },
	{ "sliderPressed()", &signal_1, QMetaData::Public },
	{ "sliderMoved(int)", &signal_2, QMetaData::Public },
	{ "sliderReleased()", &signal_3, QMetaData::Public },
	{ "nextLine()", &signal_4, QMetaData::Public },
	{ "prevLine()", &signal_5, QMetaData::Public },
	{ "nextPage()", &signal_6, QMetaData::Public },
	{ "prevPage()", &signal_7, QMetaData::Public }
    };
#ifndef QT_NO_PROPERTIES
    static const QMetaProperty props_tbl[8] = {
 	{ "int","minValue", 0x10000103, &QScrollBar::metaObj, 0, -1 },
	{ "int","maxValue", 0x10000103, &QScrollBar::metaObj, 0, -1 },
	{ "int","lineStep", 0x10000103, &QScrollBar::metaObj, 0, -1 },
	{ "int","pageStep", 0x10000103, &QScrollBar::metaObj, 0, -1 },
	{ "int","value", 0x10000103, &QScrollBar::metaObj, 0, -1 },
	{ "bool","tracking", 0x12000103, &QScrollBar::metaObj, 0, -1 },
	{ "bool","draggingSlider", 0x12000001, &QScrollBar::metaObj, 0, -1 },
	{ "Orientation","orientation", 0x010f, &QScrollBar::metaObj, 0, -1 }
    };
#endif // QT_NO_PROPERTIES
    metaObj = QMetaObject::new_metaobject(
	"QScrollBar", parentObject,
	slot_tbl, 2,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	props_tbl, 8,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_QScrollBar.setMetaObject( metaObj );
    return metaObj;
}

void* QScrollBar::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "QScrollBar" ) )
	return this;
    if ( !qstrcmp( clname, "QRangeControl" ) )
	return (QRangeControl*)this;
    return QWidget::qt_cast( clname );
}

// SIGNAL valueChanged
void QScrollBar::valueChanged( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 0, t0 );
}

// SIGNAL sliderPressed
void QScrollBar::sliderPressed()
{
    activate_signal( staticMetaObject()->signalOffset() + 1 );
}

// SIGNAL sliderMoved
void QScrollBar::sliderMoved( int t0 )
{
    activate_signal( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL sliderReleased
void QScrollBar::sliderReleased()
{
    activate_signal( staticMetaObject()->signalOffset() + 3 );
}

// SIGNAL nextLine
void QScrollBar::nextLine()
{
    activate_signal( staticMetaObject()->signalOffset() + 4 );
}

// SIGNAL prevLine
void QScrollBar::prevLine()
{
    activate_signal( staticMetaObject()->signalOffset() + 5 );
}

// SIGNAL nextPage
void QScrollBar::nextPage()
{
    activate_signal( staticMetaObject()->signalOffset() + 6 );
}

// SIGNAL prevPage
void QScrollBar::prevPage()
{
    activate_signal( staticMetaObject()->signalOffset() + 7 );
}

bool QScrollBar::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: setValue((int)static_QUType_int.get(_o+1)); break;
    case 1: doAutoRepeat(); break;
    default:
	return QWidget::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool QScrollBar::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: valueChanged((int)static_QUType_int.get(_o+1)); break;
    case 1: sliderPressed(); break;
    case 2: sliderMoved((int)static_QUType_int.get(_o+1)); break;
    case 3: sliderReleased(); break;
    case 4: nextLine(); break;
    case 5: prevLine(); break;
    case 6: nextPage(); break;
    case 7: prevPage(); break;
    default:
	return QWidget::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool QScrollBar::qt_property( int id, int f, QVariant* v)
{
    switch ( id - staticMetaObject()->propertyOffset() ) {
    case 0: switch( f ) {
	case 0: setMinValue(v->asInt()); break;
	case 1: *v = QVariant( this->minValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 1: switch( f ) {
	case 0: setMaxValue(v->asInt()); break;
	case 1: *v = QVariant( this->maxValue() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 2: switch( f ) {
	case 0: setLineStep(v->asInt()); break;
	case 1: *v = QVariant( this->lineStep() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 3: switch( f ) {
	case 0: setPageStep(v->asInt()); break;
	case 1: *v = QVariant( this->pageStep() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 4: switch( f ) {
	case 0: setValue(v->asInt()); break;
	case 1: *v = QVariant( this->value() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 5: switch( f ) {
	case 0: setTracking(v->asBool()); break;
	case 1: *v = QVariant( this->tracking(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 6: switch( f ) {
	case 1: *v = QVariant( this->draggingSlider(), 0 ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    case 7: switch( f ) {
	case 0: setOrientation((Orientation&)v->asInt()); break;
	case 1: *v = QVariant( (int)this->orientation() ); break;
	case 3: case 4: case 5: break;
	default: return FALSE;
    } break;
    default:
	return QWidget::qt_property( id, f, v );
    }
    return TRUE;
}

bool QScrollBar::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
