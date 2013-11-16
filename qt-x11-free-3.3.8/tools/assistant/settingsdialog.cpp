/****************************************************************************
** Form implementation generated from reading ui file 'settingsdialog.ui'
**
** Created: Tue Oct 8 10:21:56 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "settingsdialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qcombobox.h>
#include <qlabel.h>
#include <qcheckbox.h>
#include <qtoolbutton.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a SettingsDialogBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
SettingsDialogBase::SettingsDialogBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "SettingsDialogBase" );
    setSizeGripEnabled( TRUE );
    SettingsDialogBaseLayout = new QVBoxLayout( this, 11, 6, "SettingsDialogBaseLayout"); 

    settingsTab = new QTabWidget( this, "settingsTab" );
    settingsTab->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, settingsTab->sizePolicy().hasHeightForWidth() ) );

    tab = new QWidget( settingsTab, "tab" );
    tabLayout = new QVBoxLayout( tab, 11, 6, "tabLayout"); 

    Layout2 = new QGridLayout( 0, 1, 1, 0, 6, "Layout2"); 

    fixedfontCombo = new QComboBox( FALSE, tab, "fixedfontCombo" );
    fixedfontCombo->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, fixedfontCombo->sizePolicy().hasHeightForWidth() ) );
    fixedfontCombo->setEditable( TRUE );

    Layout2->addWidget( fixedfontCombo, 1, 1 );

    TextLabel1 = new QLabel( tab, "TextLabel1" );

    Layout2->addWidget( TextLabel1, 1, 0 );

    TextLabel2 = new QLabel( tab, "TextLabel2" );

    Layout2->addWidget( TextLabel2, 2, 0 );

    fontCombo = new QComboBox( FALSE, tab, "fontCombo" );
    fontCombo->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, fontCombo->sizePolicy().hasHeightForWidth() ) );
    fontCombo->setEditable( TRUE );

    Layout2->addWidget( fontCombo, 0, 1 );

    fontLabel = new QLabel( tab, "fontLabel" );

    Layout2->addWidget( fontLabel, 0, 0 );

    linkUnderlineCB = new QCheckBox( tab, "linkUnderlineCB" );
    linkUnderlineCB->setChecked( TRUE );

    Layout2->addWidget( linkUnderlineCB, 3, 0 );

    colorButton = new QToolButton( tab, "colorButton" );
    colorButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, colorButton->sizePolicy().hasHeightForWidth() ) );
    colorButton->setMinimumSize( QSize( 40, 20 ) );
    colorButton->setPaletteBackgroundColor( QColor( 255, 0, 0 ) );
    colorButton->setFocusPolicy( QToolButton::TabFocus );

    Layout2->addWidget( colorButton, 2, 1 );
    tabLayout->addLayout( Layout2 );
    settingsTab->insertTab( tab, QString::fromLatin1("") );

    tab_2 = new QWidget( settingsTab, "tab_2" );
    tabLayout_2 = new QGridLayout( tab_2, 1, 1, 11, 6, "tabLayout_2"); 
    Spacer11 = new QSpacerItem( 20, 30, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabLayout_2->addItem( Spacer11, 4, 0 );

    TextLabel1_3 = new QLabel( tab_2, "TextLabel1_3" );

    tabLayout_2->addWidget( TextLabel1_3, 0, 0 );

    Layout9 = new QHBoxLayout( 0, 0, 6, "Layout9"); 

    browserApp = new QLineEdit( tab_2, "browserApp" );
    Layout9->addWidget( browserApp );

    buttonBrowse = new QPushButton( tab_2, "buttonBrowse" );
    buttonBrowse->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, buttonBrowse->sizePolicy().hasHeightForWidth() ) );
    buttonBrowse->setMaximumSize( QSize( 30, 32767 ) );
    Layout9->addWidget( buttonBrowse );

    tabLayout_2->addLayout( Layout9, 1, 0 );

    TextLabel1_3_3 = new QLabel( tab_2, "TextLabel1_3_3" );

    tabLayout_2->addWidget( TextLabel1_3_3, 2, 0 );

    layout8 = new QHBoxLayout( 0, 0, 6, "layout8"); 

    homePage = new QLineEdit( tab_2, "homePage" );
    layout8->addWidget( homePage );

    buttonHome = new QPushButton( tab_2, "buttonHome" );
    buttonHome->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, buttonHome->sizePolicy().hasHeightForWidth() ) );
    buttonHome->setMaximumSize( QSize( 30, 32767 ) );
    layout8->addWidget( buttonHome );

    tabLayout_2->addLayout( layout8, 3, 0 );
    settingsTab->insertTab( tab_2, QString::fromLatin1("") );

    pdfTab = new QWidget( settingsTab, "pdfTab" );
    pdfTabLayout = new QGridLayout( pdfTab, 1, 1, 11, 6, "pdfTabLayout"); 

    TextLabel1_3_2 = new QLabel( pdfTab, "TextLabel1_3_2" );

    pdfTabLayout->addWidget( TextLabel1_3_2, 0, 0 );
    spacer10 = new QSpacerItem( 20, 81, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pdfTabLayout->addItem( spacer10, 2, 0 );

    layout9 = new QHBoxLayout( 0, 0, 6, "layout9"); 

    pdfApp = new QLineEdit( pdfTab, "pdfApp" );
    layout9->addWidget( pdfApp );

    buttonPDF = new QPushButton( pdfTab, "buttonPDF" );
    buttonPDF->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, buttonPDF->sizePolicy().hasHeightForWidth() ) );
    buttonPDF->setMaximumSize( QSize( 30, 32767 ) );
    layout9->addWidget( buttonPDF );

    pdfTabLayout->addLayout( layout9, 1, 0 );
    settingsTab->insertTab( pdfTab, QString::fromLatin1("") );
    SettingsDialogBaseLayout->addWidget( settingsTab );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 
    Horizontal_Spacing2 = new QSpacerItem( 0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );
    SettingsDialogBaseLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(389, 253).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( colorButton, SIGNAL( clicked() ), this, SLOT( selectColor() ) );
    connect( buttonBrowse, SIGNAL( clicked() ), this, SLOT( browseWebApp() ) );
    connect( buttonHome, SIGNAL( clicked() ), this, SLOT( browseHomepage() ) );
    connect( buttonPDF, SIGNAL( clicked() ), this, SLOT( browsePDFApplication() ) );

    // tab order
    setTabOrder( settingsTab, fontCombo );
    setTabOrder( fontCombo, fixedfontCombo );
    setTabOrder( fixedfontCombo, colorButton );
    setTabOrder( colorButton, linkUnderlineCB );
    setTabOrder( linkUnderlineCB, browserApp );
    setTabOrder( browserApp, buttonBrowse );
    setTabOrder( buttonBrowse, homePage );
    setTabOrder( homePage, buttonHome );
    setTabOrder( buttonHome, pdfApp );
    setTabOrder( pdfApp, buttonPDF );
    setTabOrder( buttonPDF, buttonOk );
    setTabOrder( buttonOk, buttonCancel );

    // buddies
    TextLabel1->setBuddy( fixedfontCombo );
    fontLabel->setBuddy( fontCombo );
    TextLabel1_3->setBuddy( browserApp );
    TextLabel1_3_3->setBuddy( homePage );
    TextLabel1_3_2->setBuddy( pdfApp );
}

/*
 *  Destroys the object and frees any allocated resources
 */
SettingsDialogBase::~SettingsDialogBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SettingsDialogBase::languageChange()
{
    setCaption( tr( "Qt Assistant - Settings" ) );
    TextLabel1->setText( tr( "Fix&ed font:" ) );
    TextLabel2->setText( tr( "Link color:" ) );
    fontLabel->setText( tr( "&Font:" ) );
    linkUnderlineCB->setText( tr( "&Underline links" ) );
    colorButton->setText( QString::null );
    settingsTab->changeTab( tab, tr( "&General" ) );
    TextLabel1_3->setText( tr( "Web &Browser Application:" ) );
    buttonBrowse->setText( tr( "..." ) );
    TextLabel1_3_3->setText( tr( "&Home page" ) );
    buttonHome->setText( tr( "..." ) );
    settingsTab->changeTab( tab_2, tr( "&Web" ) );
    TextLabel1_3_2->setText( tr( "PDF &Application" ) );
    buttonPDF->setText( tr( "..." ) );
    settingsTab->changeTab( pdfTab, tr( "&PDF" ) );
    buttonOk->setText( tr( "&OK" ) );
    buttonCancel->setText( tr( "&Cancel" ) );
}

void SettingsDialogBase::selectColor()
{
    qWarning( "SettingsDialogBase::selectColor(): Not implemented yet" );
}

void SettingsDialogBase::browseWebApp()
{
    qWarning( "SettingsDialogBase::browseWebApp(): Not implemented yet" );
}

void SettingsDialogBase::browsePDFApplication()
{
    qWarning( "SettingsDialogBase::browsePDFApplication(): Not implemented yet" );
}

void SettingsDialogBase::browseHomepage()
{
    qWarning( "SettingsDialogBase::browseHomepage(): Not implemented yet" );
}

