/****************************************************************************
** Form implementation generated from reading ui file 'mainwindow.ui'
**
** Created: Tue Oct 8 10:21:52 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "mainwindow.h"

#include <qvariant.h>
#include <qtoolbutton.h>
#include <qmessagebox.h>
#include <qfontdatabase.h>
#include <qaccel.h>
#include <qcombobox.h>
#include <qpaintdevicemetrics.h>
#include <qsimplerichtext.h>
#include <qfileinfo.h>
#include <qtextstream.h>
#include <qdockwindow.h>
#include <stdlib.h>
#include <qmime.h>
#include <qstylesheet.h>
#include <qapplication.h>
#include <qdir.h>
#include <qprinter.h>
#include <qpainter.h>
#include <qurl.h>
#include <qstatusbar.h>
#include <qlineedit.h>
#include <qsettings.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include <qimage.h>
#include <qpixmap.h>

#include "settingsdialogimpl.h"
#include "helpwindow.h"
#include "helpdialogimpl.h"
#include "tabbedbrowser.h"
#include "mainwindow.ui.h"
/*
 *  Constructs a MainWindow as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
MainWindow::MainWindow( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl )
{
    (void)statusBar();
    if ( !name )
	setName( "MainWindow" );

    // actions
    actionFilePrint = new QAction( this, "actionFilePrint" );
    actionFilePrint->setIconSet( QIconSet( QPixmap::fromMimeSource( "print.png" ) ) );
    actionFileExit = new QAction( this, "actionFileExit" );
    actionEditCopy = new QAction( this, "actionEditCopy" );
    actionEditCopy->setIconSet( QIconSet( QPixmap::fromMimeSource( "editcopy.png" ) ) );
    actionEditFind = new QAction( this, "actionEditFind" );
    actionEditFind->setIconSet( QIconSet( QPixmap::fromMimeSource( "find.png" ) ) );
    actionEditFindAgain = new QAction( this, "actionEditFindAgain" );
    actionEditFindAgainPrev = new QAction( this, "actionEditFindAgainPrev" );
    actionGoHome = new QAction( this, "actionGoHome" );
    actionGoHome->setIconSet( QIconSet( QPixmap::fromMimeSource( "home.png" ) ) );
    actionGoPrevious = new QAction( this, "actionGoPrevious" );
    actionGoPrevious->setIconSet( QIconSet( QPixmap::fromMimeSource( "previous.png" ) ) );
    actionGoNext = new QAction( this, "actionGoNext" );
    actionGoNext->setIconSet( QIconSet( QPixmap::fromMimeSource( "next.png" ) ) );
    helpAbout_Qt_AssistantAction = new QAction( this, "helpAbout_Qt_AssistantAction" );
    actionAboutApplication = new QAction( this, "actionAboutApplication" );
    actionZoomIn = new QAction( this, "actionZoomIn" );
    actionZoomIn->setIconSet( QIconSet( QPixmap::fromMimeSource( "zoomin.png" ) ) );
    actionZoomOut = new QAction( this, "actionZoomOut" );
    actionZoomOut->setIconSet( QIconSet( QPixmap::fromMimeSource( "zoomout.png" ) ) );
    actionSettings = new QAction( this, "actionSettings" );
    actionNewWindow = new QAction( this, "actionNewWindow" );
    actionClose = new QAction( this, "actionClose" );
    actionAddBookmark = new QAction( this, "actionAddBookmark" );
    actionHelpWhatsThis = new QAction( this, "actionHelpWhatsThis" );
    actionHelpWhatsThis->setIconSet( QIconSet( QPixmap::fromMimeSource( "whatsthis.xpm" ) ) );
    actionOpenPage = new QAction( this, "actionOpenPage" );
    actionNextPage = new QAction( this, "actionNextPage" );
    actionPrevPage = new QAction( this, "actionPrevPage" );
    actionClosePage = new QAction( this, "actionClosePage" );
    actionHelpAssistant = new QAction( this, "actionHelpAssistant" );
    actionHelpAssistant->setIconSet( QIconSet( QPixmap::fromMimeSource( "assistant.png" ) ) );


    // toolbars
    Toolbar = new QToolBar( QString(""), this, DockTop ); 

    actionGoPrevious->addTo( Toolbar );
    actionGoNext->addTo( Toolbar );
    actionGoHome->addTo( Toolbar );
    Toolbar->addSeparator();
    actionEditCopy->addTo( Toolbar );
    actionEditFind->addTo( Toolbar );
    actionFilePrint->addTo( Toolbar );
    Toolbar->addSeparator();
    actionZoomIn->addTo( Toolbar );
    actionZoomOut->addTo( Toolbar );
    Toolbar->addSeparator();
    actionHelpWhatsThis->addTo( Toolbar );
    goActionToolbar = new QToolBar( QString(""), this, DockTop ); 



    // menubar
    menubar = new QMenuBar( this, "menubar" );

    menubar->setGeometry( QRect( 0, 0, 949, 29 ) );

    fileMenu = new QPopupMenu( this );
    actionNewWindow->addTo( fileMenu );
    actionOpenPage->addTo( fileMenu );
    actionClosePage->addTo( fileMenu );
    fileMenu->insertSeparator();
    actionFilePrint->addTo( fileMenu );
    fileMenu->insertSeparator();
    actionClose->addTo( fileMenu );
    actionFileExit->addTo( fileMenu );
    menubar->insertItem( QString(""), fileMenu, 2 );

    editMenu = new QPopupMenu( this );
    actionEditCopy->addTo( editMenu );
    actionEditFind->addTo( editMenu );
    actionEditFindAgain->addTo( editMenu );
    actionEditFindAgainPrev->addTo( editMenu );
    editMenu->insertSeparator();
    actionSettings->addTo( editMenu );
    menubar->insertItem( QString(""), editMenu, 3 );

    PopupMenu = new QPopupMenu( this );
    actionZoomIn->addTo( PopupMenu );
    actionZoomOut->addTo( PopupMenu );
    PopupMenu->insertSeparator();
    menubar->insertItem( QString(""), PopupMenu, 4 );

    goMenu = new QPopupMenu( this );
    actionGoPrevious->addTo( goMenu );
    actionGoNext->addTo( goMenu );
    actionGoHome->addTo( goMenu );
    goMenu->insertSeparator();
    actionNextPage->addTo( goMenu );
    actionPrevPage->addTo( goMenu );
    menubar->insertItem( QString(""), goMenu, 5 );

    bookmarkMenu = new QPopupMenu( this );
    menubar->insertItem( QString(""), bookmarkMenu, 6 );

    helpMenu = new QPopupMenu( this );
    actionHelpAssistant->addTo( helpMenu );
    helpMenu->insertSeparator();
    helpAbout_Qt_AssistantAction->addTo( helpMenu );
    actionAboutApplication->addTo( helpMenu );
    helpMenu->insertSeparator();
    actionHelpWhatsThis->addTo( helpMenu );
    menubar->insertItem( QString(""), helpMenu, 7 );

    languageChange();
    resize( QSize(949, 670).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( actionGoHome, SIGNAL( activated() ), this, SLOT( goHome() ) );
    connect( helpAbout_Qt_AssistantAction, SIGNAL( activated() ), this, SLOT( about() ) );
    connect( actionEditFind, SIGNAL( activated() ), this, SLOT( find() ) );
    connect( actionEditFindAgain, SIGNAL( activated() ), this, SLOT( findAgain() ) );
    connect( actionEditFindAgainPrev, SIGNAL( activated() ), this, SLOT( findAgainPrev() ) );
    connect( actionFilePrint, SIGNAL( activated() ), this, SLOT( print() ) );
    connect( actionSettings, SIGNAL( activated() ), this, SLOT( showSettingsDialog() ) );
    connect( actionNewWindow, SIGNAL( activated() ), this, SLOT( newWindow() ) );
    connect( actionClose, SIGNAL( activated() ), this, SLOT( close() ) );
    connect( actionHelpWhatsThis, SIGNAL( activated() ), this, SLOT( whatsThis() ) );
    connect( actionHelpAssistant, SIGNAL( activated() ), this, SLOT( showAssistantHelp() ) );
    connect( actionAboutApplication, SIGNAL( activated() ), this, SLOT( aboutApplication() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
MainWindow::~MainWindow()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MainWindow::languageChange()
{
    setCaption( tr( "Qt Assistant by Trolltech" ) );
    actionFilePrint->setText( tr( "Print" ) );
    actionFilePrint->setMenuText( tr( "&Print..." ) );
    actionFilePrint->setWhatsThis( tr( "Print the currently displayed page." ) );
    actionFilePrint->setAccel( tr( "Ctrl+P" ) );
    actionFileExit->setText( tr( "Exit" ) );
    actionFileExit->setMenuText( tr( "E&xit" ) );
    actionFileExit->setWhatsThis( tr( "Quit Qt Assistant." ) );
    actionFileExit->setAccel( tr( "Ctrl+Q" ) );
    actionEditCopy->setText( tr( "Copy" ) );
    actionEditCopy->setMenuText( tr( "&Copy" ) );
    actionEditCopy->setWhatsThis( tr( "Copy the selected text to the clipboard." ) );
    actionEditCopy->setAccel( tr( "Ctrl+C" ) );
    actionEditFind->setText( tr( "Find in Text" ) );
    actionEditFind->setMenuText( tr( "&Find in Text..." ) );
    actionEditFind->setWhatsThis( tr( "Open the Find dialog. Qt Assistant will search the currently displayed page for the text you enter." ) );
    actionEditFind->setAccel( tr( "Ctrl+F" ) );
    actionEditFindAgain->setMenuText( tr( "Find &Next" ) );
    actionEditFindAgain->setText( tr( "Find Next" ) );
    actionEditFindAgain->setAccel( tr( "F3" ) );
    actionEditFindAgainPrev->setMenuText( tr( "Find &Previous" ) );
    actionEditFindAgainPrev->setText( tr( "Find Previous" ) );
    actionEditFindAgainPrev->setAccel( tr( "Shift+F3" ) );
    actionGoHome->setText( tr( "Home" ) );
    actionGoHome->setMenuText( tr( "&Home" ) );
    actionGoHome->setWhatsThis( tr( "Go to the home page. Qt Assistant's home page is the Qt Reference Documentation." ) );
    actionGoHome->setAccel( tr( "Ctrl+Home" ) );
    actionGoPrevious->setText( tr( "Previous" ) );
    actionGoPrevious->setMenuText( tr( "&Previous" ) );
    actionGoPrevious->setWhatsThis( tr( "Go to the previous page." ) );
    actionGoPrevious->setAccel( tr( "Alt+Left" ) );
    actionGoNext->setText( tr( "Next" ) );
    actionGoNext->setMenuText( tr( "&Next" ) );
    actionGoNext->setWhatsThis( tr( "Go to the next page." ) );
    actionGoNext->setAccel( tr( "Alt+Right" ) );
    helpAbout_Qt_AssistantAction->setText( tr( "About Qt Assistant" ) );
    helpAbout_Qt_AssistantAction->setMenuText( tr( "About Qt Assistant" ) );
    helpAbout_Qt_AssistantAction->setWhatsThis( tr( "Display further information about Qt Assistant." ) );
    actionZoomIn->setText( tr( "Zoom in" ) );
    actionZoomIn->setMenuText( tr( "Zoom &in" ) );
    actionZoomIn->setWhatsThis( tr( "Zoom in on the document, i.e. increase the font size." ) );
    actionZoomIn->setAccel( tr( "Ctrl++" ) );
    actionZoomOut->setText( tr( "Zoom out" ) );
    actionZoomOut->setMenuText( tr( "Zoom &out" ) );
    actionZoomOut->setWhatsThis( tr( "Zoom out on the document, i.e. decrease the font size." ) );
    actionZoomOut->setAccel( tr( "Ctrl+-" ) );
    actionSettings->setText( tr( "Settings" ) );
    actionSettings->setMenuText( tr( "&Settings..." ) );
    actionSettings->setWhatsThis( tr( "Open the settings dialog." ) );
    actionNewWindow->setText( tr( "New Window" ) );
    actionNewWindow->setMenuText( tr( "New Window" ) );
    actionNewWindow->setWhatsThis( tr( "Open a new window." ) );
    actionNewWindow->setAccel( tr( "Ctrl+N" ) );
    actionClose->setText( tr( "Close" ) );
    actionClose->setMenuText( tr( "&Close" ) );
    actionClose->setWhatsThis( tr( "Close the current window." ) );
    actionAddBookmark->setText( tr( "Add Bookmark" ) );
    actionAddBookmark->setMenuText( tr( "&Add Bookmark" ) );
    actionAddBookmark->setWhatsThis( tr( "Add the currently displayed page as a new bookmark." ) );
    actionHelpWhatsThis->setText( tr( "What's This?" ) );
    actionHelpWhatsThis->setStatusTip( tr( "\"What's This?\" context sensitive help." ) );
    actionHelpWhatsThis->setWhatsThis( tr( "\"What's This?\" context sensitive help." ) );
    actionHelpWhatsThis->setAccel( tr( "Shift+F1" ) );
    actionHelpWhatsThis->setMenuText(tr( "What's This?" ));
    actionOpenPage->setText( tr( "Add Tab" ) );
    actionOpenPage->setAccel( tr( "Ctrl+Alt+N" ) );
    actionOpenPage->setMenuText(tr( "Add Tab" ));
    actionNextPage->setText( tr( "Next Tab" ) );
    actionNextPage->setAccel( tr( "Ctrl+Alt+Right" ) );
    actionNextPage->setMenuText(tr( "Next Tab" ));
    actionPrevPage->setText( tr( "Previous Tab" ) );
    actionPrevPage->setAccel( tr( "Ctrl+Alt+Left" ) );
    actionPrevPage->setMenuText(tr( "Previous Tab" ));
    actionClosePage->setText( tr( "Close Tab" ) );
    actionClosePage->setAccel( tr( "Ctrl+Alt+Q" ) );
    actionClosePage->setMenuText(tr( "Close Tab" ));
    actionHelpAssistant->setText( tr( "Qt Assistant Manual" ) );
    actionHelpAssistant->setAccel( tr( "F1" ) );
    actionHelpAssistant->setMenuText(tr( "Qt Assistant Manual" ));
    Toolbar->setLabel( tr( "Toolbar" ) );
    goActionToolbar->setLabel( tr( "Go" ) );
    if (menubar->findItem(2))
        menubar->findItem(2)->setText( tr( "&File" ) );
    if (menubar->findItem(3))
        menubar->findItem(3)->setText( tr( "&Edit" ) );
    if (menubar->findItem(4))
        menubar->findItem(4)->setText( tr( "&View" ) );
    if (menubar->findItem(5))
        menubar->findItem(5)->setText( tr( "&Go" ) );
    if (menubar->findItem(6))
        menubar->findItem(6)->setText( tr( "Boo&kmarks" ) );
    if (menubar->findItem(7))
        menubar->findItem(7)->setText( tr( "&Help" ) );
}

