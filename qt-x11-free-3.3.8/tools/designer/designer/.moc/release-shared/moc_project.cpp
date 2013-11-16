/****************************************************************************
** Project meta object code from reading C++ file 'project.h'
**
** Created: Wed Oct 9 11:04:53 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../project.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *Project::className() const
{
    return "Project";
}

QMetaObject *Project::metaObj = 0;
static QMetaObjectCleanUp cleanUp_Project( "Project", &Project::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString Project::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Project", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString Project::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "Project", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* Project::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod signal_0 = {"projectModified", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_ptr, "SourceFile", QUParameter::In }
    };
    static const QUMethod signal_1 = {"sourceFileAdded", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_ptr, "SourceFile", QUParameter::In }
    };
    static const QUMethod signal_2 = {"sourceFileRemoved", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_ptr, "FormFile", QUParameter::In }
    };
    static const QUMethod signal_3 = {"formFileAdded", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_ptr, "FormFile", QUParameter::In }
    };
    static const QUMethod signal_4 = {"formFileRemoved", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod signal_5 = {"objectAdded", 1, param_signal_5 };
    static const QUParameter param_signal_6[] = {
	{ 0, &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod signal_6 = {"objectRemoved", 1, param_signal_6 };
    static const QUParameter param_signal_7[] = {
	{ "fw", &static_QUType_ptr, "FormWindow", QUParameter::In }
    };
    static const QUMethod signal_7 = {"newFormOpened", 1, param_signal_7 };
    static const QMetaData signal_tbl[] = {
	{ "projectModified()", &signal_0, QMetaData::Public },
	{ "sourceFileAdded(SourceFile*)", &signal_1, QMetaData::Public },
	{ "sourceFileRemoved(SourceFile*)", &signal_2, QMetaData::Public },
	{ "formFileAdded(FormFile*)", &signal_3, QMetaData::Public },
	{ "formFileRemoved(FormFile*)", &signal_4, QMetaData::Public },
	{ "objectAdded(QObject*)", &signal_5, QMetaData::Public },
	{ "objectRemoved(QObject*)", &signal_6, QMetaData::Public },
	{ "newFormOpened(FormWindow*)", &signal_7, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"Project", parentObject,
	0, 0,
	signal_tbl, 8,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_Project.setMetaObject( metaObj );
    return metaObj;
}

void* Project::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "Project" ) )
	return this;
    return QObject::qt_cast( clname );
}

// SIGNAL projectModified
void Project::projectModified()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL sourceFileAdded
void Project::sourceFileAdded( SourceFile* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL sourceFileRemoved
void Project::sourceFileRemoved( SourceFile* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 2 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL formFileAdded
void Project::formFileAdded( FormFile* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 3 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL formFileRemoved
void Project::formFileRemoved( FormFile* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 4 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL objectAdded
void Project::objectAdded( QObject* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 5 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL objectRemoved
void Project::objectRemoved( QObject* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 6 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL newFormOpened
void Project::newFormOpened( FormWindow* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 7 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_ptr.set(o+1,t0);
    activate_signal( clist, o );
}

bool Project::qt_invoke( int _id, QUObject* _o )
{
    return QObject::qt_invoke(_id,_o);
}

bool Project::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: projectModified(); break;
    case 1: sourceFileAdded((SourceFile*)static_QUType_ptr.get(_o+1)); break;
    case 2: sourceFileRemoved((SourceFile*)static_QUType_ptr.get(_o+1)); break;
    case 3: formFileAdded((FormFile*)static_QUType_ptr.get(_o+1)); break;
    case 4: formFileRemoved((FormFile*)static_QUType_ptr.get(_o+1)); break;
    case 5: objectAdded((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 6: objectRemoved((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 7: newFormOpened((FormWindow*)static_QUType_ptr.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool Project::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool Project::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
