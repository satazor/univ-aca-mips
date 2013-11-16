/****************************************************************************
** Form implementation generated from reading ui file 'mainwindowwizard.ui'
**
** Created: Tue Oct 8 10:21:07 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "mainwindowwizard.h"

#include <qvariant.h>
#include <designerinterface.h>
#include <qiconset.h>
#include <qaction.h>
#include <qpixmap.h>
#include <qdict.h>
#include <qpushbutton.h>
#include <qwidget.h>
#include <qlabel.h>
#include <qgroupbox.h>
#include <qcheckbox.h>
#include <qlistbox.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "mainwindowwizard.ui.h"
/*
 *  Constructs a MainWindowWizardBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The wizard will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal wizard.
 */
MainWindowWizardBase::MainWindowWizardBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QWizard( parent, name, modal, fl )
{
    if ( !name )
	setName( "MainWindowWizardBase" );

    menuToolbarPage = new QWidget( this, "menuToolbarPage" );
    menuToolbarPageLayout = new QGridLayout( menuToolbarPage, 1, 1, 0, 6, "menuToolbarPageLayout"); 
    Spacer7 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    menuToolbarPageLayout->addItem( Spacer7, 4, 1 );

    TextLabel4_2 = new QLabel( menuToolbarPage, "TextLabel4_2" );
    TextLabel4_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2->setPixmap( QPixmap::fromMimeSource( "qtwizards_menu_1.png" ) );

    menuToolbarPageLayout->addMultiCellWidget( TextLabel4_2, 0, 4, 0, 0 );

    GroupBox1 = new QGroupBox( menuToolbarPage, "GroupBox1" );
    GroupBox1->setColumnLayout(0, Qt::Vertical );
    GroupBox1->layout()->setSpacing( 6 );
    GroupBox1->layout()->setMargin( 11 );
    GroupBox1Layout = new QGridLayout( GroupBox1->layout() );
    GroupBox1Layout->setAlignment( Qt::AlignTop );

    checkFileMenu = new QCheckBox( GroupBox1, "checkFileMenu" );
    checkFileMenu->setChecked( TRUE );

    GroupBox1Layout->addWidget( checkFileMenu, 1, 0 );

    checkFileToolbar = new QCheckBox( GroupBox1, "checkFileToolbar" );
    checkFileToolbar->setChecked( TRUE );

    GroupBox1Layout->addWidget( checkFileToolbar, 1, 1 );
    Spacer4 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    GroupBox1Layout->addItem( Spacer4, 1, 2 );

    checkCreateConnectionsFile = new QCheckBox( GroupBox1, "checkCreateConnectionsFile" );
    checkCreateConnectionsFile->setChecked( TRUE );

    GroupBox1Layout->addWidget( checkCreateConnectionsFile, 1, 3 );

    TextLabel2 = new QLabel( GroupBox1, "TextLabel2" );

    GroupBox1Layout->addMultiCellWidget( TextLabel2, 0, 0, 0, 3 );

    menuToolbarPageLayout->addWidget( GroupBox1, 1, 1 );

    GroupBox2 = new QGroupBox( menuToolbarPage, "GroupBox2" );
    GroupBox2->setColumnLayout(0, Qt::Vertical );
    GroupBox2->layout()->setSpacing( 6 );
    GroupBox2->layout()->setMargin( 11 );
    GroupBox2Layout = new QGridLayout( GroupBox2->layout() );
    GroupBox2Layout->setAlignment( Qt::AlignTop );

    checkEditToolbar = new QCheckBox( GroupBox2, "checkEditToolbar" );
    checkEditToolbar->setChecked( TRUE );

    GroupBox2Layout->addWidget( checkEditToolbar, 1, 1 );

    checkEditMenu = new QCheckBox( GroupBox2, "checkEditMenu" );
    checkEditMenu->setChecked( TRUE );

    GroupBox2Layout->addWidget( checkEditMenu, 1, 0 );
    Spacer5 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    GroupBox2Layout->addItem( Spacer5, 1, 2 );

    checkCreateConnectionsEdit = new QCheckBox( GroupBox2, "checkCreateConnectionsEdit" );
    checkCreateConnectionsEdit->setChecked( TRUE );

    GroupBox2Layout->addWidget( checkCreateConnectionsEdit, 1, 3 );

    TextLabel2_2 = new QLabel( GroupBox2, "TextLabel2_2" );
    TextLabel2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, TextLabel2_2->sizePolicy().hasHeightForWidth() ) );

    GroupBox2Layout->addMultiCellWidget( TextLabel2_2, 0, 0, 0, 3 );

    menuToolbarPageLayout->addWidget( GroupBox2, 2, 1 );

    GroupBox3 = new QGroupBox( menuToolbarPage, "GroupBox3" );
    GroupBox3->setColumnLayout(0, Qt::Vertical );
    GroupBox3->layout()->setSpacing( 6 );
    GroupBox3->layout()->setMargin( 11 );
    GroupBox3Layout = new QGridLayout( GroupBox3->layout() );
    GroupBox3Layout->setAlignment( Qt::AlignTop );

    TextLabel2_2_2 = new QLabel( GroupBox3, "TextLabel2_2_2" );
    TextLabel2_2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, TextLabel2_2_2->sizePolicy().hasHeightForWidth() ) );

    GroupBox3Layout->addMultiCellWidget( TextLabel2_2_2, 0, 0, 0, 3 );

    checkHelpMenu = new QCheckBox( GroupBox3, "checkHelpMenu" );
    checkHelpMenu->setChecked( TRUE );

    GroupBox3Layout->addWidget( checkHelpMenu, 1, 0 );

    checkHelpToolbar = new QCheckBox( GroupBox3, "checkHelpToolbar" );
    checkHelpToolbar->setChecked( TRUE );

    GroupBox3Layout->addWidget( checkHelpToolbar, 1, 1 );
    Spacer6 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    GroupBox3Layout->addItem( Spacer6, 1, 2 );

    checkCreateConnectionsHelp = new QCheckBox( GroupBox3, "checkCreateConnectionsHelp" );
    checkCreateConnectionsHelp->setChecked( TRUE );

    GroupBox3Layout->addWidget( checkCreateConnectionsHelp, 1, 3 );

    menuToolbarPageLayout->addWidget( GroupBox3, 3, 1 );
    addPage( menuToolbarPage, QString("") );

    toolbarsPage = new QWidget( this, "toolbarsPage" );
    toolbarsPageLayout = new QGridLayout( toolbarsPage, 1, 1, 0, 6, "toolbarsPageLayout"); 

    buttonToolbarActionUp = new QPushButton( toolbarsPage, "buttonToolbarActionUp" );
    buttonToolbarActionUp->setPixmap( QPixmap::fromMimeSource( "designer_up.png" ) );

    toolbarsPageLayout->addWidget( buttonToolbarActionUp, 7, 2 );

    TextLabel4_3_2 = new QLabel( toolbarsPage, "TextLabel4_3_2" );

    toolbarsPageLayout->addWidget( TextLabel4_3_2, 2, 3 );

    buttonToolbarActionDown = new QPushButton( toolbarsPage, "buttonToolbarActionDown" );
    buttonToolbarActionDown->setPixmap( QPixmap::fromMimeSource( "designer_down.png" ) );

    toolbarsPageLayout->addWidget( buttonToolbarActionDown, 8, 2 );

    listToolbarActions = new QListBox( toolbarsPage, "listToolbarActions" );

    toolbarsPageLayout->addMultiCellWidget( listToolbarActions, 3, 9, 1, 1 );

    listToolbar = new QListBox( toolbarsPage, "listToolbar" );

    toolbarsPageLayout->addMultiCellWidget( listToolbar, 3, 9, 3, 3 );

    Layout20_2 = new QHBoxLayout( 0, 0, 6, "Layout20_2"); 

    TextLabel5_2 = new QLabel( toolbarsPage, "TextLabel5_2" );
    Layout20_2->addWidget( TextLabel5_2 );

    comboToolbar = new QComboBox( FALSE, toolbarsPage, "comboToolbar" );
    comboToolbar->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, comboToolbar->sizePolicy().hasHeightForWidth() ) );
    Layout20_2->addWidget( comboToolbar );

    toolbarsPageLayout->addMultiCellLayout( Layout20_2, 1, 1, 1, 2 );

    TextLabel4_4 = new QLabel( toolbarsPage, "TextLabel4_4" );

    toolbarsPageLayout->addWidget( TextLabel4_4, 2, 1 );

    buttonToolbarRemoveAction = new QPushButton( toolbarsPage, "buttonToolbarRemoveAction" );
    buttonToolbarRemoveAction->setPixmap( QPixmap::fromMimeSource( "designer_left.png" ) );

    toolbarsPageLayout->addWidget( buttonToolbarRemoveAction, 5, 2 );

    TextLabel4_2_2_2 = new QLabel( toolbarsPage, "TextLabel4_2_2_2" );
    TextLabel4_2_2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2_2_2->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2_2_2->setPixmap( QPixmap::fromMimeSource( "qtwizards_menu_2.png" ) );

    toolbarsPageLayout->addMultiCellWidget( TextLabel4_2_2_2, 0, 9, 0, 0 );

    buttonToolbarAddAction = new QPushButton( toolbarsPage, "buttonToolbarAddAction" );
    buttonToolbarAddAction->setPixmap( QPixmap::fromMimeSource( "designer_right.png" ) );

    toolbarsPageLayout->addWidget( buttonToolbarAddAction, 4, 2 );
    Spacer11 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    toolbarsPageLayout->addItem( Spacer11, 3, 2 );
    Spacer12 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    toolbarsPageLayout->addItem( Spacer12, 6, 2 );
    Spacer13 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    toolbarsPageLayout->addItem( Spacer13, 9, 2 );
    addPage( toolbarsPage, QString("") );

    finishPage = new QWidget( this, "finishPage" );
    finishPageLayout = new QGridLayout( finishPage, 1, 1, 0, 6, "finishPageLayout"); 

    TextLabel4_2_2_2_2 = new QLabel( finishPage, "TextLabel4_2_2_2_2" );
    TextLabel4_2_2_2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2_2_2_2->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2_2_2_2->setPixmap( QPixmap::fromMimeSource( "qtwizards_menu_3.png" ) );

    finishPageLayout->addMultiCellWidget( TextLabel4_2_2_2_2, 0, 2, 0, 0 );

    TextLabel1_5 = new QLabel( finishPage, "TextLabel1_5" );

    finishPageLayout->addWidget( TextLabel1_5, 1, 1 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    finishPageLayout->addItem( Spacer1, 0, 1 );
    Spacer1_2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    finishPageLayout->addItem( Spacer1_2, 2, 1 );
    addPage( finishPage, QString("") );
    languageChange();
    resize( QSize(604, 392).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( comboToolbar, SIGNAL( activated(const QString&) ), this, SLOT( currentToolbarChanged(const QString&) ) );
    connect( buttonToolbarAddAction, SIGNAL( clicked() ), this, SLOT( toolbarAddAction() ) );
    connect( buttonToolbarRemoveAction, SIGNAL( clicked() ), this, SLOT( toolbarRemoveAction() ) );
    connect( buttonToolbarActionUp, SIGNAL( clicked() ), this, SLOT( toolbarActionUp() ) );
    connect( buttonToolbarActionDown, SIGNAL( clicked() ), this, SLOT( toolbarActionDown() ) );
    connect( this, SIGNAL( selected(const QString&) ), this, SLOT( pageSelected(const QString&) ) );
    connect( checkHelpMenu, SIGNAL( toggled(bool) ), this, SLOT( currentSettingChanged() ) );
    connect( checkHelpToolbar, SIGNAL( toggled(bool) ), this, SLOT( currentSettingChanged() ) );
    connect( checkEditMenu, SIGNAL( toggled(bool) ), this, SLOT( currentSettingChanged() ) );
    connect( checkEditToolbar, SIGNAL( toggled(bool) ), this, SLOT( currentSettingChanged() ) );
    connect( checkFileMenu, SIGNAL( toggled(bool) ), this, SLOT( currentSettingChanged() ) );
    connect( checkFileToolbar, SIGNAL( toggled(bool) ), this, SLOT( currentSettingChanged() ) );

    // tab order
    setTabOrder( checkFileMenu, checkFileToolbar );
    setTabOrder( checkFileToolbar, checkEditMenu );
    setTabOrder( checkEditMenu, checkEditToolbar );
    setTabOrder( checkEditToolbar, checkHelpMenu );
    setTabOrder( checkHelpMenu, checkHelpToolbar );
    setTabOrder( checkHelpToolbar, comboToolbar );
    setTabOrder( comboToolbar, listToolbarActions );
    setTabOrder( listToolbarActions, buttonToolbarAddAction );
    setTabOrder( buttonToolbarAddAction, buttonToolbarRemoveAction );
    setTabOrder( buttonToolbarRemoveAction, buttonToolbarActionUp );
    setTabOrder( buttonToolbarActionUp, buttonToolbarActionDown );
    setTabOrder( buttonToolbarActionDown, listToolbar );

    // buddies
    TextLabel4_3_2->setBuddy( listToolbar );
    TextLabel5_2->setBuddy( comboToolbar );
    TextLabel4_4->setBuddy( listToolbarActions );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
MainWindowWizardBase::~MainWindowWizardBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MainWindowWizardBase::languageChange()
{
    setCaption( tr( "Main Window Wizard" ) );
    TextLabel4_2->setText( QString::null );
    GroupBox1->setTitle( tr( "File Actions" ) );
    checkFileMenu->setText( tr( "Menu" ) );
    checkFileToolbar->setText( tr( "Toolbar" ) );
    checkCreateConnectionsFile->setText( tr( "Create Slots and Connections for the actions" ) );
    TextLabel2->setText( tr( "like New, Open File, Save, Print, etc." ) );
    GroupBox2->setTitle( tr( "Edit Actions" ) );
    checkEditToolbar->setText( tr( "Toolbar" ) );
    checkEditMenu->setText( tr( "Menu" ) );
    checkCreateConnectionsEdit->setText( tr( "Create Slots and Connections for the actions" ) );
    TextLabel2_2->setText( tr( "like Cut, Copy, Paste, Undo and Redo, etc." ) );
    GroupBox3->setTitle( tr( "Help Actions" ) );
    TextLabel2_2_2->setText( tr( "like Contents and About, etc." ) );
    checkHelpMenu->setText( tr( "Menu" ) );
    checkHelpToolbar->setText( tr( "Toolbar" ) );
    checkCreateConnectionsHelp->setText( tr( "Create Slots and Connections for the actions" ) );
    setTitle( menuToolbarPage, tr( "Choose available menus and toolbars" ) );
    buttonToolbarActionUp->setText( QString::null );
    TextLabel4_3_2->setText( tr( "&Toolbar" ) );
    buttonToolbarActionDown->setText( QString::null );
    TextLabel5_2->setText( tr( "&Category" ) );
    TextLabel4_4->setText( tr( "&Actions" ) );
    buttonToolbarRemoveAction->setText( QString::null );
    TextLabel4_2_2_2->setText( QString::null );
    buttonToolbarAddAction->setText( QString::null );
    setTitle( toolbarsPage, tr( "Setup Toolbar" ) );
    TextLabel4_2_2_2_2->setText( QString::null );
    TextLabel1_5->setText( tr( "Press Finish to populate the main window." ) );
    setTitle( finishPage, tr( "Finish" ) );
}

