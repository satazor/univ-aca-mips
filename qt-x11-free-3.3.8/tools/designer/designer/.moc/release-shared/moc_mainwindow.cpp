/****************************************************************************
** MainWindow meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Oct 9 11:04:44 2013
**      by: The Qt MOC ($Id: qt/moc_yacc.cpp   3.3.8   edited Feb 2 14:59 $)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#undef QT_NO_COMPAT
#include "../../mainwindow.h"
#include <qmetaobject.h>
#include <qapplication.h>

#include <private/qucomextra_p.h>
#if !defined(Q_MOC_OUTPUT_REVISION) || (Q_MOC_OUTPUT_REVISION != 26)
#error "This file was generated using the moc from 3.3.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

const char *MainWindow::className() const
{
    return "MainWindow";
}

QMetaObject *MainWindow::metaObj = 0;
static QMetaObjectCleanUp cleanUp_MainWindow( "MainWindow", &MainWindow::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString MainWindow::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindow", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString MainWindow::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "MainWindow", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* MainWindow::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QMainWindow::staticMetaObject();
    static const QUParameter param_slot_0[] = {
	{ "w", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_0 = {"showProperties", 1, param_slot_0 };
    static const QUParameter param_slot_1[] = {
	{ "w", &static_QUType_ptr, "QObject", QUParameter::In }
    };
    static const QUMethod slot_1 = {"updateProperties", 1, param_slot_1 };
    static const QUMethod slot_2 = {"showDialogHelp", 0, 0 };
    static const QUParameter param_slot_3[] = {
	{ "o", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_3 = {"showDebugStep", 2, param_slot_3 };
    static const QUParameter param_slot_4[] = {
	{ "o", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "line", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_4 = {"showStackFrame", 2, param_slot_4 };
    static const QUParameter param_slot_5[] = {
	{ "o", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "line", &static_QUType_int, 0, QUParameter::In },
	{ "errorMessage", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_5 = {"showErrorMessage", 3, param_slot_5 };
    static const QUMethod slot_6 = {"finishedRun", 0, 0 };
    static const QUMethod slot_7 = {"breakPointsChanged", 0, 0 };
    static const QUMethod slot_8 = {"fileNew", 0, 0 };
    static const QUMethod slot_9 = {"fileNewDialog", 0, 0 };
    static const QUMethod slot_10 = {"fileNewFile", 0, 0 };
    static const QUMethod slot_11 = {"fileClose", 0, 0 };
    static const QUMethod slot_12 = {"fileQuit", 0, 0 };
    static const QUMethod slot_13 = {"fileCloseProject", 0, 0 };
    static const QUMethod slot_14 = {"fileOpen", 0, 0 };
    static const QUParameter param_slot_15[] = {
	{ "filter", &static_QUType_QString, 0, QUParameter::In },
	{ "extension", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_15 = {"fileOpen", 2, param_slot_15 };
    static const QUParameter param_slot_16[] = {
	{ "filter", &static_QUType_QString, 0, QUParameter::In },
	{ "extension", &static_QUType_QString, 0, QUParameter::In },
	{ "filename", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_16 = {"fileOpen", 3, param_slot_16 };
    static const QUParameter param_slot_17[] = {
	{ "filter", &static_QUType_QString, 0, QUParameter::In },
	{ "extension", &static_QUType_QString, 0, QUParameter::In },
	{ "filename", &static_QUType_QString, 0, QUParameter::In },
	{ "inProject", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_17 = {"fileOpen", 4, param_slot_17 };
    static const QUParameter param_slot_18[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_18 = {"fileSave", 1, param_slot_18 };
    static const QUParameter param_slot_19[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_19 = {"fileSaveForm", 1, param_slot_19 };
    static const QUParameter param_slot_20[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_20 = {"fileSaveProject", 1, param_slot_20 };
    static const QUParameter param_slot_21[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out }
    };
    static const QUMethod slot_21 = {"fileSaveAs", 1, param_slot_21 };
    static const QUMethod slot_22 = {"fileSaveAll", 0, 0 };
    static const QUMethod slot_23 = {"fileCreateTemplate", 0, 0 };
    static const QUMethod slot_24 = {"editUndo", 0, 0 };
    static const QUMethod slot_25 = {"editRedo", 0, 0 };
    static const QUMethod slot_26 = {"editCut", 0, 0 };
    static const QUMethod slot_27 = {"editCopy", 0, 0 };
    static const QUMethod slot_28 = {"editPaste", 0, 0 };
    static const QUMethod slot_29 = {"editDelete", 0, 0 };
    static const QUMethod slot_30 = {"editSelectAll", 0, 0 };
    static const QUMethod slot_31 = {"editLower", 0, 0 };
    static const QUMethod slot_32 = {"editRaise", 0, 0 };
    static const QUMethod slot_33 = {"editAdjustSize", 0, 0 };
    static const QUMethod slot_34 = {"editLayoutHorizontal", 0, 0 };
    static const QUMethod slot_35 = {"editLayoutVertical", 0, 0 };
    static const QUMethod slot_36 = {"editLayoutHorizontalSplit", 0, 0 };
    static const QUMethod slot_37 = {"editLayoutVerticalSplit", 0, 0 };
    static const QUMethod slot_38 = {"editLayoutGrid", 0, 0 };
    static const QUMethod slot_39 = {"editLayoutContainerHorizontal", 0, 0 };
    static const QUMethod slot_40 = {"editLayoutContainerVertical", 0, 0 };
    static const QUMethod slot_41 = {"editLayoutContainerGrid", 0, 0 };
    static const QUMethod slot_42 = {"editBreakLayout", 0, 0 };
    static const QUMethod slot_43 = {"editAccels", 0, 0 };
    static const QUMethod slot_44 = {"editFunctions", 0, 0 };
    static const QUMethod slot_45 = {"editConnections", 0, 0 };
    static const QUParameter param_slot_46[] = {
	{ 0, &static_QUType_ptr, "SourceEditor", QUParameter::Out }
    };
    static const QUMethod slot_46 = {"editSource", 1, param_slot_46 };
    static const QUParameter param_slot_47[] = {
	{ 0, &static_QUType_ptr, "SourceEditor", QUParameter::Out },
	{ "f", &static_QUType_ptr, "SourceFile", QUParameter::In }
    };
    static const QUMethod slot_47 = {"editSource", 2, param_slot_47 };
    static const QUParameter param_slot_48[] = {
	{ 0, &static_QUType_ptr, "SourceEditor", QUParameter::Out }
    };
    static const QUMethod slot_48 = {"openSourceEditor", 1, param_slot_48 };
    static const QUParameter param_slot_49[] = {
	{ 0, &static_QUType_ptr, "SourceEditor", QUParameter::Out },
	{ "object", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "project", &static_QUType_ptr, "Project", QUParameter::In }
    };
    static const QUMethod slot_49 = {"createSourceEditor", 3, param_slot_49 };
    static const QUParameter param_slot_50[] = {
	{ 0, &static_QUType_ptr, "SourceEditor", QUParameter::Out },
	{ "object", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "project", &static_QUType_ptr, "Project", QUParameter::In },
	{ "lang", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_50 = {"createSourceEditor", 4, param_slot_50 };
    static const QUParameter param_slot_51[] = {
	{ 0, &static_QUType_ptr, "SourceEditor", QUParameter::Out },
	{ "object", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "project", &static_QUType_ptr, "Project", QUParameter::In },
	{ "lang", &static_QUType_QString, 0, QUParameter::In },
	{ "func", &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_51 = {"createSourceEditor", 5, param_slot_51 };
    static const QUParameter param_slot_52[] = {
	{ 0, &static_QUType_ptr, "SourceEditor", QUParameter::Out },
	{ "object", &static_QUType_ptr, "QObject", QUParameter::In },
	{ "project", &static_QUType_ptr, "Project", QUParameter::In },
	{ "lang", &static_QUType_QString, 0, QUParameter::In },
	{ "func", &static_QUType_QString, 0, QUParameter::In },
	{ "rereadSource", &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod slot_52 = {"createSourceEditor", 6, param_slot_52 };
    static const QUMethod slot_53 = {"editFormSettings", 0, 0 };
    static const QUMethod slot_54 = {"editProjectSettings", 0, 0 };
    static const QUMethod slot_55 = {"editPixmapCollection", 0, 0 };
    static const QUMethod slot_56 = {"editDatabaseConnections", 0, 0 };
    static const QUMethod slot_57 = {"editPreferences", 0, 0 };
    static const QUMethod slot_58 = {"projectInsertFile", 0, 0 };
    static const QUMethod slot_59 = {"searchFind", 0, 0 };
    static const QUMethod slot_60 = {"searchIncremetalFindMenu", 0, 0 };
    static const QUMethod slot_61 = {"searchIncremetalFind", 0, 0 };
    static const QUMethod slot_62 = {"searchIncremetalFindNext", 0, 0 };
    static const QUMethod slot_63 = {"searchReplace", 0, 0 };
    static const QUMethod slot_64 = {"searchGotoLine", 0, 0 };
    static const QUMethod slot_65 = {"previewForm", 0, 0 };
    static const QUParameter param_slot_66[] = {
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_66 = {"previewForm", 1, param_slot_66 };
    static const QUMethod slot_67 = {"toolsCustomWidget", 0, 0 };
    static const QUMethod slot_68 = {"toolsConfigure", 0, 0 };
    static const QUMethod slot_69 = {"helpContents", 0, 0 };
    static const QUMethod slot_70 = {"helpManual", 0, 0 };
    static const QUMethod slot_71 = {"helpAbout", 0, 0 };
    static const QUMethod slot_72 = {"helpAboutQt", 0, 0 };
    static const QUMethod slot_73 = {"helpRegister", 0, 0 };
    static const QUParameter param_slot_74[] = {
	{ "w", &static_QUType_ptr, "QWidget", QUParameter::In }
    };
    static const QUMethod slot_74 = {"activeWindowChanged", 1, param_slot_74 };
    static const QUParameter param_slot_75[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In },
	{ 0, &static_QUType_bool, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In },
	{ 0, &static_QUType_QString, 0, QUParameter::In }
    };
    static const QUMethod slot_75 = {"updateUndoRedo", 4, param_slot_75 };
    static const QUMethod slot_76 = {"updateEditorUndoRedo", 0, 0 };
    static const QUParameter param_slot_77[] = {
	{ 0, &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod slot_77 = {"toolSelected", 1, param_slot_77 };
    static const QUMethod slot_78 = {"clipboardChanged", 0, 0 };
    static const QUMethod slot_79 = {"selectionChanged", 0, 0 };
    static const QUParameter param_slot_80[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_80 = {"windowsMenuActivated", 1, param_slot_80 };
    static const QUMethod slot_81 = {"setupWindowActions", 0, 0 };
    static const QUMethod slot_82 = {"createNewTemplate", 0, 0 };
    static const QUParameter param_slot_83[] = {
	{ "a", &static_QUType_ptr, "QAction", QUParameter::In }
    };
    static const QUMethod slot_83 = {"projectSelected", 1, param_slot_83 };
    static const QUMethod slot_84 = {"setupRecentlyFilesMenu", 0, 0 };
    static const QUMethod slot_85 = {"setupRecentlyProjectsMenu", 0, 0 };
    static const QUParameter param_slot_86[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_86 = {"recentlyFilesMenuActivated", 1, param_slot_86 };
    static const QUParameter param_slot_87[] = {
	{ "id", &static_QUType_int, 0, QUParameter::In }
    };
    static const QUMethod slot_87 = {"recentlyProjectsMenuActivated", 1, param_slot_87 };
    static const QUMethod slot_88 = {"emitProjectSignals", 0, 0 };
    static const QUMethod slot_89 = {"showStartDialog", 0, 0 };
    static const QUMethod slot_90 = {"doFunctionsChanged", 0, 0 };
    static const QUParameter param_slot_91[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::Out },
	{ "pro", &static_QUType_ptr, "Project", QUParameter::In }
    };
    static const QUMethod slot_91 = {"openProjectSettings", 2, param_slot_91 };
    static const QMetaData slot_tbl[] = {
	{ "showProperties(QObject*)", &slot_0, QMetaData::Public },
	{ "updateProperties(QObject*)", &slot_1, QMetaData::Public },
	{ "showDialogHelp()", &slot_2, QMetaData::Public },
	{ "showDebugStep(QObject*,int)", &slot_3, QMetaData::Public },
	{ "showStackFrame(QObject*,int)", &slot_4, QMetaData::Public },
	{ "showErrorMessage(QObject*,int,const QString&)", &slot_5, QMetaData::Public },
	{ "finishedRun()", &slot_6, QMetaData::Public },
	{ "breakPointsChanged()", &slot_7, QMetaData::Public },
	{ "fileNew()", &slot_8, QMetaData::Public },
	{ "fileNewDialog()", &slot_9, QMetaData::Public },
	{ "fileNewFile()", &slot_10, QMetaData::Public },
	{ "fileClose()", &slot_11, QMetaData::Public },
	{ "fileQuit()", &slot_12, QMetaData::Public },
	{ "fileCloseProject()", &slot_13, QMetaData::Public },
	{ "fileOpen()", &slot_14, QMetaData::Public },
	{ "fileOpen(const QString&,const QString&)", &slot_15, QMetaData::Public },
	{ "fileOpen(const QString&,const QString&,const QString&)", &slot_16, QMetaData::Public },
	{ "fileOpen(const QString&,const QString&,const QString&,bool)", &slot_17, QMetaData::Public },
	{ "fileSave()", &slot_18, QMetaData::Public },
	{ "fileSaveForm()", &slot_19, QMetaData::Public },
	{ "fileSaveProject()", &slot_20, QMetaData::Public },
	{ "fileSaveAs()", &slot_21, QMetaData::Public },
	{ "fileSaveAll()", &slot_22, QMetaData::Public },
	{ "fileCreateTemplate()", &slot_23, QMetaData::Public },
	{ "editUndo()", &slot_24, QMetaData::Public },
	{ "editRedo()", &slot_25, QMetaData::Public },
	{ "editCut()", &slot_26, QMetaData::Public },
	{ "editCopy()", &slot_27, QMetaData::Public },
	{ "editPaste()", &slot_28, QMetaData::Public },
	{ "editDelete()", &slot_29, QMetaData::Public },
	{ "editSelectAll()", &slot_30, QMetaData::Public },
	{ "editLower()", &slot_31, QMetaData::Public },
	{ "editRaise()", &slot_32, QMetaData::Public },
	{ "editAdjustSize()", &slot_33, QMetaData::Public },
	{ "editLayoutHorizontal()", &slot_34, QMetaData::Public },
	{ "editLayoutVertical()", &slot_35, QMetaData::Public },
	{ "editLayoutHorizontalSplit()", &slot_36, QMetaData::Public },
	{ "editLayoutVerticalSplit()", &slot_37, QMetaData::Public },
	{ "editLayoutGrid()", &slot_38, QMetaData::Public },
	{ "editLayoutContainerHorizontal()", &slot_39, QMetaData::Public },
	{ "editLayoutContainerVertical()", &slot_40, QMetaData::Public },
	{ "editLayoutContainerGrid()", &slot_41, QMetaData::Public },
	{ "editBreakLayout()", &slot_42, QMetaData::Public },
	{ "editAccels()", &slot_43, QMetaData::Public },
	{ "editFunctions()", &slot_44, QMetaData::Public },
	{ "editConnections()", &slot_45, QMetaData::Public },
	{ "editSource()", &slot_46, QMetaData::Public },
	{ "editSource(SourceFile*)", &slot_47, QMetaData::Public },
	{ "openSourceEditor()", &slot_48, QMetaData::Public },
	{ "createSourceEditor(QObject*,Project*)", &slot_49, QMetaData::Public },
	{ "createSourceEditor(QObject*,Project*,const QString&)", &slot_50, QMetaData::Public },
	{ "createSourceEditor(QObject*,Project*,const QString&,const QString&)", &slot_51, QMetaData::Public },
	{ "createSourceEditor(QObject*,Project*,const QString&,const QString&,bool)", &slot_52, QMetaData::Public },
	{ "editFormSettings()", &slot_53, QMetaData::Public },
	{ "editProjectSettings()", &slot_54, QMetaData::Public },
	{ "editPixmapCollection()", &slot_55, QMetaData::Public },
	{ "editDatabaseConnections()", &slot_56, QMetaData::Public },
	{ "editPreferences()", &slot_57, QMetaData::Public },
	{ "projectInsertFile()", &slot_58, QMetaData::Public },
	{ "searchFind()", &slot_59, QMetaData::Public },
	{ "searchIncremetalFindMenu()", &slot_60, QMetaData::Public },
	{ "searchIncremetalFind()", &slot_61, QMetaData::Public },
	{ "searchIncremetalFindNext()", &slot_62, QMetaData::Public },
	{ "searchReplace()", &slot_63, QMetaData::Public },
	{ "searchGotoLine()", &slot_64, QMetaData::Public },
	{ "previewForm()", &slot_65, QMetaData::Public },
	{ "previewForm(const QString&)", &slot_66, QMetaData::Public },
	{ "toolsCustomWidget()", &slot_67, QMetaData::Public },
	{ "toolsConfigure()", &slot_68, QMetaData::Public },
	{ "helpContents()", &slot_69, QMetaData::Public },
	{ "helpManual()", &slot_70, QMetaData::Public },
	{ "helpAbout()", &slot_71, QMetaData::Public },
	{ "helpAboutQt()", &slot_72, QMetaData::Public },
	{ "helpRegister()", &slot_73, QMetaData::Public },
	{ "activeWindowChanged(QWidget*)", &slot_74, QMetaData::Private },
	{ "updateUndoRedo(bool,bool,const QString&,const QString&)", &slot_75, QMetaData::Private },
	{ "updateEditorUndoRedo()", &slot_76, QMetaData::Private },
	{ "toolSelected(QAction*)", &slot_77, QMetaData::Private },
	{ "clipboardChanged()", &slot_78, QMetaData::Private },
	{ "selectionChanged()", &slot_79, QMetaData::Private },
	{ "windowsMenuActivated(int)", &slot_80, QMetaData::Private },
	{ "setupWindowActions()", &slot_81, QMetaData::Private },
	{ "createNewTemplate()", &slot_82, QMetaData::Private },
	{ "projectSelected(QAction*)", &slot_83, QMetaData::Private },
	{ "setupRecentlyFilesMenu()", &slot_84, QMetaData::Private },
	{ "setupRecentlyProjectsMenu()", &slot_85, QMetaData::Private },
	{ "recentlyFilesMenuActivated(int)", &slot_86, QMetaData::Private },
	{ "recentlyProjectsMenuActivated(int)", &slot_87, QMetaData::Private },
	{ "emitProjectSignals()", &slot_88, QMetaData::Private },
	{ "showStartDialog()", &slot_89, QMetaData::Private },
	{ "doFunctionsChanged()", &slot_90, QMetaData::Private },
	{ "openProjectSettings(Project*)", &slot_91, QMetaData::Private }
    };
    static const QUMethod signal_0 = {"currentToolChanged", 0, 0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_1 = {"hasActiveForm", 1, param_signal_1 };
    static const QUParameter param_signal_2[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_2 = {"hasActiveWindow", 1, param_signal_2 };
    static const QUParameter param_signal_3[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_3 = {"hasActiveWindowOrProject", 1, param_signal_3 };
    static const QUParameter param_signal_4[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_4 = {"hasNonDummyProject", 1, param_signal_4 };
    static const QUParameter param_signal_5[] = {
	{ 0, &static_QUType_bool, 0, QUParameter::In }
    };
    static const QUMethod signal_5 = {"formModified", 1, param_signal_5 };
    static const QUMethod signal_6 = {"formWindowsChanged", 0, 0 };
    static const QUMethod signal_7 = {"formWindowChanged", 0, 0 };
    static const QUMethod signal_8 = {"projectChanged", 0, 0 };
    static const QUMethod signal_9 = {"editorChanged", 0, 0 };
    static const QMetaData signal_tbl[] = {
	{ "currentToolChanged()", &signal_0, QMetaData::Public },
	{ "hasActiveForm(bool)", &signal_1, QMetaData::Public },
	{ "hasActiveWindow(bool)", &signal_2, QMetaData::Public },
	{ "hasActiveWindowOrProject(bool)", &signal_3, QMetaData::Public },
	{ "hasNonDummyProject(bool)", &signal_4, QMetaData::Public },
	{ "formModified(bool)", &signal_5, QMetaData::Public },
	{ "formWindowsChanged()", &signal_6, QMetaData::Public },
	{ "formWindowChanged()", &signal_7, QMetaData::Public },
	{ "projectChanged()", &signal_8, QMetaData::Public },
	{ "editorChanged()", &signal_9, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"MainWindow", parentObject,
	slot_tbl, 92,
	signal_tbl, 10,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_MainWindow.setMetaObject( metaObj );
    return metaObj;
}

void* MainWindow::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "MainWindow" ) )
	return this;
    return QMainWindow::qt_cast( clname );
}

// SIGNAL currentToolChanged
void MainWindow::currentToolChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 0 );
}

// SIGNAL hasActiveForm
void MainWindow::hasActiveForm( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 1, t0 );
}

// SIGNAL hasActiveWindow
void MainWindow::hasActiveWindow( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 2, t0 );
}

// SIGNAL hasActiveWindowOrProject
void MainWindow::hasActiveWindowOrProject( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 3, t0 );
}

// SIGNAL hasNonDummyProject
void MainWindow::hasNonDummyProject( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 4, t0 );
}

// SIGNAL formModified
void MainWindow::formModified( bool t0 )
{
    activate_signal_bool( staticMetaObject()->signalOffset() + 5, t0 );
}

// SIGNAL formWindowsChanged
void MainWindow::formWindowsChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 6 );
}

// SIGNAL formWindowChanged
void MainWindow::formWindowChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 7 );
}

// SIGNAL projectChanged
void MainWindow::projectChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 8 );
}

// SIGNAL editorChanged
void MainWindow::editorChanged()
{
    activate_signal( staticMetaObject()->signalOffset() + 9 );
}

bool MainWindow::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: showProperties((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 1: updateProperties((QObject*)static_QUType_ptr.get(_o+1)); break;
    case 2: showDialogHelp(); break;
    case 3: showDebugStep((QObject*)static_QUType_ptr.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 4: showStackFrame((QObject*)static_QUType_ptr.get(_o+1),(int)static_QUType_int.get(_o+2)); break;
    case 5: showErrorMessage((QObject*)static_QUType_ptr.get(_o+1),(int)static_QUType_int.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 6: finishedRun(); break;
    case 7: breakPointsChanged(); break;
    case 8: fileNew(); break;
    case 9: fileNewDialog(); break;
    case 10: fileNewFile(); break;
    case 11: fileClose(); break;
    case 12: fileQuit(); break;
    case 13: fileCloseProject(); break;
    case 14: fileOpen(); break;
    case 15: fileOpen((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2)); break;
    case 16: fileOpen((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3)); break;
    case 17: fileOpen((const QString&)static_QUType_QString.get(_o+1),(const QString&)static_QUType_QString.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(bool)static_QUType_bool.get(_o+4)); break;
    case 18: static_QUType_bool.set(_o,fileSave()); break;
    case 19: static_QUType_bool.set(_o,fileSaveForm()); break;
    case 20: static_QUType_bool.set(_o,fileSaveProject()); break;
    case 21: static_QUType_bool.set(_o,fileSaveAs()); break;
    case 22: fileSaveAll(); break;
    case 23: fileCreateTemplate(); break;
    case 24: editUndo(); break;
    case 25: editRedo(); break;
    case 26: editCut(); break;
    case 27: editCopy(); break;
    case 28: editPaste(); break;
    case 29: editDelete(); break;
    case 30: editSelectAll(); break;
    case 31: editLower(); break;
    case 32: editRaise(); break;
    case 33: editAdjustSize(); break;
    case 34: editLayoutHorizontal(); break;
    case 35: editLayoutVertical(); break;
    case 36: editLayoutHorizontalSplit(); break;
    case 37: editLayoutVerticalSplit(); break;
    case 38: editLayoutGrid(); break;
    case 39: editLayoutContainerHorizontal(); break;
    case 40: editLayoutContainerVertical(); break;
    case 41: editLayoutContainerGrid(); break;
    case 42: editBreakLayout(); break;
    case 43: editAccels(); break;
    case 44: editFunctions(); break;
    case 45: editConnections(); break;
    case 46: static_QUType_ptr.set(_o,editSource()); break;
    case 47: static_QUType_ptr.set(_o,editSource((SourceFile*)static_QUType_ptr.get(_o+1))); break;
    case 48: static_QUType_ptr.set(_o,openSourceEditor()); break;
    case 49: static_QUType_ptr.set(_o,createSourceEditor((QObject*)static_QUType_ptr.get(_o+1),(Project*)static_QUType_ptr.get(_o+2))); break;
    case 50: static_QUType_ptr.set(_o,createSourceEditor((QObject*)static_QUType_ptr.get(_o+1),(Project*)static_QUType_ptr.get(_o+2),(const QString&)static_QUType_QString.get(_o+3))); break;
    case 51: static_QUType_ptr.set(_o,createSourceEditor((QObject*)static_QUType_ptr.get(_o+1),(Project*)static_QUType_ptr.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4))); break;
    case 52: static_QUType_ptr.set(_o,createSourceEditor((QObject*)static_QUType_ptr.get(_o+1),(Project*)static_QUType_ptr.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4),(bool)static_QUType_bool.get(_o+5))); break;
    case 53: editFormSettings(); break;
    case 54: editProjectSettings(); break;
    case 55: editPixmapCollection(); break;
    case 56: editDatabaseConnections(); break;
    case 57: editPreferences(); break;
    case 58: projectInsertFile(); break;
    case 59: searchFind(); break;
    case 60: searchIncremetalFindMenu(); break;
    case 61: searchIncremetalFind(); break;
    case 62: searchIncremetalFindNext(); break;
    case 63: searchReplace(); break;
    case 64: searchGotoLine(); break;
    case 65: previewForm(); break;
    case 66: previewForm((const QString&)static_QUType_QString.get(_o+1)); break;
    case 67: toolsCustomWidget(); break;
    case 68: toolsConfigure(); break;
    case 69: helpContents(); break;
    case 70: helpManual(); break;
    case 71: helpAbout(); break;
    case 72: helpAboutQt(); break;
    case 73: helpRegister(); break;
    case 74: activeWindowChanged((QWidget*)static_QUType_ptr.get(_o+1)); break;
    case 75: updateUndoRedo((bool)static_QUType_bool.get(_o+1),(bool)static_QUType_bool.get(_o+2),(const QString&)static_QUType_QString.get(_o+3),(const QString&)static_QUType_QString.get(_o+4)); break;
    case 76: updateEditorUndoRedo(); break;
    case 77: toolSelected((QAction*)static_QUType_ptr.get(_o+1)); break;
    case 78: clipboardChanged(); break;
    case 79: selectionChanged(); break;
    case 80: windowsMenuActivated((int)static_QUType_int.get(_o+1)); break;
    case 81: setupWindowActions(); break;
    case 82: createNewTemplate(); break;
    case 83: projectSelected((QAction*)static_QUType_ptr.get(_o+1)); break;
    case 84: setupRecentlyFilesMenu(); break;
    case 85: setupRecentlyProjectsMenu(); break;
    case 86: recentlyFilesMenuActivated((int)static_QUType_int.get(_o+1)); break;
    case 87: recentlyProjectsMenuActivated((int)static_QUType_int.get(_o+1)); break;
    case 88: emitProjectSignals(); break;
    case 89: showStartDialog(); break;
    case 90: doFunctionsChanged(); break;
    case 91: static_QUType_bool.set(_o,openProjectSettings((Project*)static_QUType_ptr.get(_o+1))); break;
    default:
	return QMainWindow::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool MainWindow::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: currentToolChanged(); break;
    case 1: hasActiveForm((bool)static_QUType_bool.get(_o+1)); break;
    case 2: hasActiveWindow((bool)static_QUType_bool.get(_o+1)); break;
    case 3: hasActiveWindowOrProject((bool)static_QUType_bool.get(_o+1)); break;
    case 4: hasNonDummyProject((bool)static_QUType_bool.get(_o+1)); break;
    case 5: formModified((bool)static_QUType_bool.get(_o+1)); break;
    case 6: formWindowsChanged(); break;
    case 7: formWindowChanged(); break;
    case 8: projectChanged(); break;
    case 9: editorChanged(); break;
    default:
	return QMainWindow::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool MainWindow::qt_property( int id, int f, QVariant* v)
{
    return QMainWindow::qt_property( id, f, v);
}

bool MainWindow::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES


const char *SenderObject::className() const
{
    return "SenderObject";
}

QMetaObject *SenderObject::metaObj = 0;
static QMetaObjectCleanUp cleanUp_SenderObject( "SenderObject", &SenderObject::staticMetaObject );

#ifndef QT_NO_TRANSLATION
QString SenderObject::tr( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SenderObject", s, c, QApplication::DefaultCodec );
    else
	return QString::fromLatin1( s );
}
#ifndef QT_NO_TRANSLATION_UTF8
QString SenderObject::trUtf8( const char *s, const char *c )
{
    if ( qApp )
	return qApp->translate( "SenderObject", s, c, QApplication::UnicodeUTF8 );
    else
	return QString::fromUtf8( s );
}
#endif // QT_NO_TRANSLATION_UTF8

#endif // QT_NO_TRANSLATION

QMetaObject* SenderObject::staticMetaObject()
{
    if ( metaObj )
	return metaObj;
    QMetaObject* parentObject = QObject::staticMetaObject();
    static const QUMethod slot_0 = {"emitInitSignal", 0, 0 };
    static const QUMethod slot_1 = {"emitAcceptSignal", 0, 0 };
    static const QMetaData slot_tbl[] = {
	{ "emitInitSignal()", &slot_0, QMetaData::Public },
	{ "emitAcceptSignal()", &slot_1, QMetaData::Public }
    };
    static const QUParameter param_signal_0[] = {
	{ 0, &static_QUType_iface, "QUnknownInterface", QUParameter::In }
    };
    static const QUMethod signal_0 = {"initSignal", 1, param_signal_0 };
    static const QUParameter param_signal_1[] = {
	{ 0, &static_QUType_iface, "QUnknownInterface", QUParameter::In }
    };
    static const QUMethod signal_1 = {"acceptSignal", 1, param_signal_1 };
    static const QMetaData signal_tbl[] = {
	{ "initSignal(QUnknownInterface*)", &signal_0, QMetaData::Public },
	{ "acceptSignal(QUnknownInterface*)", &signal_1, QMetaData::Public }
    };
    metaObj = QMetaObject::new_metaobject(
	"SenderObject", parentObject,
	slot_tbl, 2,
	signal_tbl, 2,
#ifndef QT_NO_PROPERTIES
	0, 0,
	0, 0,
#endif // QT_NO_PROPERTIES
	0, 0 );
    cleanUp_SenderObject.setMetaObject( metaObj );
    return metaObj;
}

void* SenderObject::qt_cast( const char* clname )
{
    if ( !qstrcmp( clname, "SenderObject" ) )
	return this;
    return QObject::qt_cast( clname );
}

#include <qobjectdefs.h>
#include <qsignalslotimp.h>

// SIGNAL initSignal
void SenderObject::initSignal( QUnknownInterface* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 0 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_iface.set(o+1,t0);
    activate_signal( clist, o );
}

// SIGNAL acceptSignal
void SenderObject::acceptSignal( QUnknownInterface* t0 )
{
    if ( signalsBlocked() )
	return;
    QConnectionList *clist = receivers( staticMetaObject()->signalOffset() + 1 );
    if ( !clist )
	return;
    QUObject o[2];
    static_QUType_iface.set(o+1,t0);
    activate_signal( clist, o );
}

bool SenderObject::qt_invoke( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->slotOffset() ) {
    case 0: emitInitSignal(); break;
    case 1: emitAcceptSignal(); break;
    default:
	return QObject::qt_invoke( _id, _o );
    }
    return TRUE;
}

bool SenderObject::qt_emit( int _id, QUObject* _o )
{
    switch ( _id - staticMetaObject()->signalOffset() ) {
    case 0: initSignal((QUnknownInterface*)static_QUType_iface.get(_o+1)); break;
    case 1: acceptSignal((QUnknownInterface*)static_QUType_iface.get(_o+1)); break;
    default:
	return QObject::qt_emit(_id,_o);
    }
    return TRUE;
}
#ifndef QT_NO_PROPERTIES

bool SenderObject::qt_property( int id, int f, QVariant* v)
{
    return QObject::qt_property( id, f, v);
}

bool SenderObject::qt_static_property( QObject* , int , int , QVariant* ){ return FALSE; }
#endif // QT_NO_PROPERTIES
