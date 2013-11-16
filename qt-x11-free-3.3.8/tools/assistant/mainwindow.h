/****************************************************************************
** Form interface generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Oct 8 10:21:41 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qvariant.h>
#include <qmainwindow.h>
#include <qptrlist.h>
#include <qguardedptr.h>
#include <qmap.h>
#include <qstringlist.h>
#include "finddialog.h"
#include "helpwindow.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class SettingsDialog;
class HelpDialog;
class TabbedBrowser;
class QTimerEvent;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~MainWindow();

    QMenuBar *menubar;
    QPopupMenu *fileMenu;
    QPopupMenu *editMenu;
    QPopupMenu *PopupMenu;
    QPopupMenu *goMenu;
    QPopupMenu *bookmarkMenu;
    QPopupMenu *helpMenu;
    QToolBar *Toolbar;
    QToolBar *goActionToolbar;
    QAction* actionFilePrint;
    QAction* actionFileExit;
    QAction* actionEditCopy;
    QAction* actionEditFind;
    QAction* actionEditFindAgain;
    QAction* actionEditFindAgainPrev;
    QAction* actionGoHome;
    QAction* actionGoPrevious;
    QAction* actionGoNext;
    QAction* helpAbout_Qt_AssistantAction;
    QAction* actionAboutApplication;
    QAction* actionZoomIn;
    QAction* actionZoomOut;
    QAction* actionSettings;
    QAction* actionNewWindow;
    QAction* actionClose;
    QAction* actionAddBookmark;
    QAction* actionHelpWhatsThis;
    QAction* actionOpenPage;
    QAction* actionNextPage;
    QAction* actionPrevPage;
    QAction* actionClosePage;
    QAction* actionHelpAssistant;

    virtual bool close( bool alsoDelete );
    TabbedBrowser * browsers();
    virtual HelpDialog* helpDialog();
    virtual void timerEvent(QTimerEvent *);

public slots:
    virtual void init();
    virtual void setup();
    virtual void destroy();
    virtual void about();
    virtual void aboutApplication();
    virtual void find();
    virtual void findAgain();
    virtual void findAgainPrev();
    virtual void goHome();
    virtual void print();
    virtual void updateBookmarkMenu();
    virtual void setupBookmarkMenu();
    virtual void showBookmark( int id );
    virtual void showLinkFromClient( const QString & link );
    virtual void showLink( const QString & link );
    virtual void showLinks( const QStringList & links );
    virtual void showQtHelp();
    virtual void showSettingsDialog();
    virtual void showWebBrowserSettings();
    virtual void showSettingsDialog( int page );
    virtual void hide();
    virtual MainWindow * newWindow();
    virtual void saveSettings();
    virtual void saveToolbarSettings();
    virtual void showSearchLink( const QString & link, const QStringList & terms );
    virtual void showGoActionLink();
    virtual void showAssistantHelp();
    virtual void updateProfileSettings();
    virtual void backwardAvailable(bool);
    virtual void forwardAvailable(bool);
    virtual void browserTabChanged();

protected:
    QPtrList<QAction> *goActions;
    int setupCompleted:1;
    TabbedBrowser *tabs;
    SettingsDialog * settingsDia;
    QMap<int, QString> bookmarks;
    HelpDialog *helpDock;
    QDockWindow *dw;
    QGuardedPtr<FindDialog> findDialog;
    static QPtrList<MainWindow> *windows;
    QMap<QAction*,QString> *goActionDocFiles;
    QStringList pendingLinks;
    QPtrList<HelpWindow> pendingBrowsers;


protected slots:
    virtual void languageChange();

private:
    virtual void setupGoActions();
    virtual bool insertActionSeparator();

};

#endif // MAINWINDOW_H
