/****************************************************************************
** Form implementation generated from reading ui file 'helpdialog.ui'
**
** Created: Tue Oct 8 10:21:56 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "helpdialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qheader.h>
#include <qlistview.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlistbox.h>
#include <qframe.h>
#include <qprogressbar.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a HelpDialogBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
HelpDialogBase::HelpDialogBase( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "HelpDialogBase" );
    HelpDialogBaseLayout = new QVBoxLayout( this, 0, 6, "HelpDialogBaseLayout"); 

    tabWidget = new QTabWidget( this, "tabWidget" );

    contentPage = new QWidget( tabWidget, "contentPage" );
    contentPageLayout = new QVBoxLayout( contentPage, 5, 6, "contentPageLayout"); 

    listContents = new QListView( contentPage, "listContents" );
    listContents->addColumn( tr( "Column 1" ) );
    listContents->setRootIsDecorated( TRUE );
    contentPageLayout->addWidget( listContents );
    tabWidget->insertTab( contentPage, QString::fromLatin1("") );

    Widget8 = new QWidget( tabWidget, "Widget8" );
    Widget8Layout = new QVBoxLayout( Widget8, 5, 6, "Widget8Layout"); 

    TextLabel1 = new QLabel( Widget8, "TextLabel1" );
    Widget8Layout->addWidget( TextLabel1 );

    editIndex = new QLineEdit( Widget8, "editIndex" );
    Widget8Layout->addWidget( editIndex );

    listIndex = new QListBox( Widget8, "listIndex" );
    Widget8Layout->addWidget( listIndex );
    tabWidget->insertTab( Widget8, QString::fromLatin1("") );

    Widget9 = new QWidget( tabWidget, "Widget9" );
    Widget9Layout = new QVBoxLayout( Widget9, 5, 6, "Widget9Layout"); 

    listBookmarks = new QListView( Widget9, "listBookmarks" );
    listBookmarks->addColumn( tr( "Column 1" ) );
    Widget9Layout->addWidget( listBookmarks );

    Layout3 = new QHBoxLayout( 0, 0, 6, "Layout3"); 
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout3->addItem( Spacer1 );

    buttonAdd = new QPushButton( Widget9, "buttonAdd" );
    Layout3->addWidget( buttonAdd );

    buttonRemove = new QPushButton( Widget9, "buttonRemove" );
    Layout3->addWidget( buttonRemove );
    Widget9Layout->addLayout( Layout3 );
    tabWidget->insertTab( Widget9, QString::fromLatin1("") );

    searchTab = new QWidget( tabWidget, "searchTab" );
    searchTabLayout = new QGridLayout( searchTab, 1, 1, 5, 6, "searchTabLayout"); 
    Spacer3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed );
    searchTabLayout->addItem( Spacer3, 3, 0 );

    TextLabel1_2 = new QLabel( searchTab, "TextLabel1_2" );

    searchTabLayout->addWidget( TextLabel1_2, 0, 0 );

    termsEdit = new QLineEdit( searchTab, "termsEdit" );

    searchTabLayout->addWidget( termsEdit, 1, 0 );

    resultBox = new QListBox( searchTab, "resultBox" );

    searchTabLayout->addWidget( resultBox, 5, 0 );

    TextLabel2 = new QLabel( searchTab, "TextLabel2" );

    searchTabLayout->addWidget( TextLabel2, 4, 0 );

    Layout2 = new QHBoxLayout( 0, 0, 6, "Layout2"); 

    helpButton = new QPushButton( searchTab, "helpButton" );
    Layout2->addWidget( helpButton );
    Spacer2 = new QSpacerItem( 61, 21, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout2->addItem( Spacer2 );

    searchButton = new QPushButton( searchTab, "searchButton" );
    Layout2->addWidget( searchButton );

    searchTabLayout->addLayout( Layout2, 2, 0 );
    tabWidget->insertTab( searchTab, QString::fromLatin1("") );
    HelpDialogBaseLayout->addWidget( tabWidget );

    framePrepare = new QFrame( this, "framePrepare" );
    framePrepare->setFrameShape( QFrame::StyledPanel );
    framePrepare->setFrameShadow( QFrame::Raised );
    framePrepareLayout = new QHBoxLayout( framePrepare, 3, 6, "framePrepareLayout"); 

    labelPrepare = new QLabel( framePrepare, "labelPrepare" );
    framePrepareLayout->addWidget( labelPrepare );

    progressPrepare = new QProgressBar( framePrepare, "progressPrepare" );
    framePrepareLayout->addWidget( progressPrepare );
    HelpDialogBaseLayout->addWidget( framePrepare );
    languageChange();
    resize( QSize(268, 448).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonAdd, SIGNAL( clicked() ), this, SLOT( addBookmark() ) );
    connect( buttonRemove, SIGNAL( clicked() ), this, SLOT( removeBookmark() ) );
    connect( termsEdit, SIGNAL( returnPressed() ), searchButton, SLOT( animateClick() ) );
    connect( helpButton, SIGNAL( clicked() ), this, SLOT( showSearchHelp() ) );
    connect( searchButton, SIGNAL( clicked() ), this, SLOT( startSearch() ) );
    connect( resultBox, SIGNAL( returnPressed(QListBoxItem*) ), this, SLOT( showResultPage(QListBoxItem*) ) );
    connect( resultBox, SIGNAL( mouseButtonClicked(int, QListBoxItem*, const QPoint &) ), this, SLOT( showResultPage(int, QListBoxItem*, const QPoint & ) ) );

    // tab order
    setTabOrder( tabWidget, listContents );
    setTabOrder( listContents, editIndex );
    setTabOrder( editIndex, listIndex );
    setTabOrder( listIndex, listBookmarks );
    setTabOrder( listBookmarks, buttonAdd );
    setTabOrder( buttonAdd, buttonRemove );
    setTabOrder( buttonRemove, termsEdit );
    setTabOrder( termsEdit, searchButton );
    setTabOrder( searchButton, helpButton );
    setTabOrder( helpButton, resultBox );

    // buddies
    TextLabel1->setBuddy( editIndex );
    TextLabel1_2->setBuddy( termsEdit );
    TextLabel2->setBuddy( resultBox );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
HelpDialogBase::~HelpDialogBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void HelpDialogBase::languageChange()
{
    setCaption( tr( "Help" ) );
    QWhatsThis::add( this, tr( "<b>Help</b><p>Choose the topic you want help on from the contents list, or search the index for keywords.</p>" ) );
    QWhatsThis::add( tabWidget, tr( "Displays help topics organized by category, index or bookmarks. Another tab inherits the full text search." ) );
    listContents->header()->setLabel( 0, tr( "Column 1" ) );
    QWhatsThis::add( listContents, tr( "<b>Help topics organized by category.</b><p>Double-click an item to see the topics in that category. To view a topic, just double-click it.</p>" ) );
    tabWidget->changeTab( contentPage, tr( "Con&tents" ) );
    TextLabel1->setText( tr( "&Look For:" ) );
    QToolTip::add( editIndex, tr( "Enter keyword" ) );
    QWhatsThis::add( editIndex, tr( "<b>Enter a keyword.</b><p>The list will select an item that matches the entered string best.</p>" ) );
    QWhatsThis::add( listIndex, tr( "<b>List of available help topics.</b><p>Double-click on an item to open its help page. If more than one is found, you must specify which page you want.</p>" ) );
    tabWidget->changeTab( Widget8, tr( "&Index" ) );
    listBookmarks->header()->setLabel( 0, tr( "Column 1" ) );
    QWhatsThis::add( listBookmarks, tr( "Displays the list of bookmarks." ) );
    buttonAdd->setText( tr( "&New" ) );
    QToolTip::add( buttonAdd, tr( "Add new bookmark" ) );
    QWhatsThis::add( buttonAdd, tr( "Add the currently displayed page as a new bookmark." ) );
    buttonRemove->setText( tr( "&Delete" ) );
    QToolTip::add( buttonRemove, tr( "Delete bookmark" ) );
    QWhatsThis::add( buttonRemove, tr( "Delete the selected bookmark." ) );
    tabWidget->changeTab( Widget9, tr( "&Bookmarks" ) );
    TextLabel1_2->setText( tr( "Searching f&or:" ) );
    QToolTip::add( termsEdit, tr( "Enter searchword(s)." ) );
    QWhatsThis::add( termsEdit, tr( "<b>Enter search word(s).</b><p>Enter here the word(s) you are looking for. The words may contain wildcards (*). For a sequence of words quote them.</p>" ) );
    QWhatsThis::add( resultBox, tr( "<b>Found documents</b><p>This list contains all found documents from the last search. The documents are ordered, i.e. the first document has the most matches.</p>" ) );
    TextLabel2->setText( tr( "Found &Documents:" ) );
    helpButton->setText( tr( "He&lp" ) );
    QToolTip::add( helpButton, tr( "Display the help page." ) );
    QWhatsThis::add( helpButton, tr( "Display the help page for the full text search." ) );
    searchButton->setText( tr( "&Search" ) );
    QToolTip::add( searchButton, tr( "Start searching." ) );
    QWhatsThis::add( searchButton, tr( "Pressing this button starts the search." ) );
    tabWidget->changeTab( searchTab, tr( "&Search" ) );
    labelPrepare->setText( tr( "Preparing..." ) );
}

void HelpDialogBase::init()
{
}

void HelpDialogBase::destroy()
{
}

void HelpDialogBase::addBookmark()
{
    qWarning( "HelpDialogBase::addBookmark(): Not implemented yet" );
}

void HelpDialogBase::currentBookmarkChanged(QListViewItem*)
{
    qWarning( "HelpDialogBase::currentBookmarkChanged(QListViewItem*): Not implemented yet" );
}

void HelpDialogBase::currentIndexChanged(QListBoxItem*)
{
    qWarning( "HelpDialogBase::currentIndexChanged(QListBoxItem*): Not implemented yet" );
}

void HelpDialogBase::currentTabChanged(const QString&)
{
    qWarning( "HelpDialogBase::currentTabChanged(const QString&): Not implemented yet" );
}

void HelpDialogBase::loadIndexFile()
{
    qWarning( "HelpDialogBase::loadIndexFile(): Not implemented yet" );
}

void HelpDialogBase::currentContentsChanged(QListViewItem*)
{
    qWarning( "HelpDialogBase::currentContentsChanged(QListViewItem*): Not implemented yet" );
}

void HelpDialogBase::removeBookmark()
{
    qWarning( "HelpDialogBase::removeBookmark(): Not implemented yet" );
}

void HelpDialogBase::searchInIndex(const QString&)
{
    qWarning( "HelpDialogBase::searchInIndex(const QString&): Not implemented yet" );
}

void HelpDialogBase::showTopic()
{
    qWarning( "HelpDialogBase::showTopic(): Not implemented yet" );
}

void HelpDialogBase::showTopic(int,QListBoxItem*,const QPoint&)
{
    qWarning( "HelpDialogBase::showTopic(int,QListBoxItem*,const QPoint&): Not implemented yet" );
}

void HelpDialogBase::showSearchHelp()
{
    qWarning( "HelpDialogBase::showSearchHelp(): Not implemented yet" );
}

void HelpDialogBase::startSearch()
{
    qWarning( "HelpDialogBase::startSearch(): Not implemented yet" );
}

void HelpDialogBase::showResultPage(QListBoxItem*)
{
    qWarning( "HelpDialogBase::showResultPage(QListBoxItem*): Not implemented yet" );
}

void HelpDialogBase::showResultPage(int,QListBoxItem*,const QPoint&)
{
    qWarning( "HelpDialogBase::showResultPage(int,QListBoxItem*,const QPoint&): Not implemented yet" );
}

void HelpDialogBase::showResultPage(int,QListViewItem*,const QPoint&)
{
    qWarning( "HelpDialogBase::showResultPage(int,QListViewItem*,const QPoint&): Not implemented yet" );
}

