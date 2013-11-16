/****************************************************************************
** Form implementation generated from reading ui file 'projectsettings.ui'
**
** Created: Tue Oct 8 10:19:42 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "projectsettings.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qlabel.h>
#include <qtoolbutton.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a ProjectSettingsBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ProjectSettingsBase::ProjectSettingsBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ProjectSettingsBase" );
    setSizeGripEnabled( TRUE );
    ProjectSettingsBaseLayout = new QVBoxLayout( this, 11, 6, "ProjectSettingsBaseLayout"); 

    tabWidget = new QTabWidget( this, "tabWidget" );

    tabSettings = new QWidget( tabWidget, "tabSettings" );
    tabSettingsLayout = new QGridLayout( tabSettings, 1, 1, 11, 6, "tabSettingsLayout"); 

    TextLabel1_2 = new QLabel( tabSettings, "TextLabel1_2" );

    tabSettingsLayout->addWidget( TextLabel1_2, 0, 0 );

    TextLabel1_3 = new QLabel( tabSettings, "TextLabel1_3" );

    tabSettingsLayout->addWidget( TextLabel1_3, 1, 0 );

    buttonDatabaseFile_2 = new QToolButton( tabSettings, "buttonDatabaseFile_2" );

    tabSettingsLayout->addWidget( buttonDatabaseFile_2, 2, 2 );

    editDatabaseFile = new QLineEdit( tabSettings, "editDatabaseFile" );

    tabSettingsLayout->addWidget( editDatabaseFile, 2, 1 );

    TextLabel1_2_2_2 = new QLabel( tabSettings, "TextLabel1_2_2_2" );

    tabSettingsLayout->addWidget( TextLabel1_2_2_2, 2, 0 );

    comboLanguage = new QComboBox( FALSE, tabSettings, "comboLanguage" );
    comboLanguage->setEnabled( FALSE );

    tabSettingsLayout->addMultiCellWidget( comboLanguage, 1, 1, 1, 2 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    editProjectFile = new QLineEdit( tabSettings, "editProjectFile" );
    Layout1->addWidget( editProjectFile );

    buttonProject = new QToolButton( tabSettings, "buttonProject" );
    Layout1->addWidget( buttonProject );

    tabSettingsLayout->addMultiCellLayout( Layout1, 0, 0, 1, 2 );
    Spacer3 = new QSpacerItem( 21, 71, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabSettingsLayout->addItem( Spacer3, 4, 1 );
    tabWidget->insertTab( tabSettings, QString::fromLatin1("") );
    ProjectSettingsBaseLayout->addWidget( tabWidget );

    Layout4 = new QHBoxLayout( 0, 0, 6, "Layout4"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    Layout4->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout4->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout4->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout4->addWidget( buttonCancel );
    ProjectSettingsBaseLayout->addLayout( Layout4 );
    languageChange();
    resize( QSize(375, 224).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonProject, SIGNAL( clicked() ), this, SLOT( chooseProjectFile() ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( buttonHelp, SIGNAL( clicked() ), this, SLOT( helpClicked() ) );
    connect( comboLanguage, SIGNAL( activated(const QString&) ), this, SLOT( languageChanged(const QString&) ) );

    // tab order
    setTabOrder( tabWidget, editProjectFile );
    setTabOrder( editProjectFile, comboLanguage );
    setTabOrder( comboLanguage, buttonHelp );
    setTabOrder( buttonHelp, buttonOk );
    setTabOrder( buttonOk, buttonCancel );

    // buddies
    TextLabel1_2->setBuddy( editProjectFile );
    TextLabel1_3->setBuddy( comboLanguage );
    TextLabel1_2_2_2->setBuddy( editDatabaseFile );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ProjectSettingsBase::~ProjectSettingsBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ProjectSettingsBase::languageChange()
{
    setCaption( tr( "Project Settings" ) );
    TextLabel1_2->setText( tr( "&Project File:" ) );
    TextLabel1_3->setText( tr( "&Language" ) );
    buttonDatabaseFile_2->setText( tr( "..." ) );
    TextLabel1_2_2_2->setText( tr( "&Database File:" ) );
    buttonProject->setText( tr( "..." ) );
    tabWidget->changeTab( tabSettings, tr( "&Settings" ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Close the dialog and apply all the changes." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog and discard any changes." ) );
}

void ProjectSettingsBase::chooseDatabaseFile()
{
    qWarning( "ProjectSettingsBase::chooseDatabaseFile(): Not implemented yet" );
}

void ProjectSettingsBase::chooseProjectFile()
{
    qWarning( "ProjectSettingsBase::chooseProjectFile(): Not implemented yet" );
}

void ProjectSettingsBase::destroy()
{
}

void ProjectSettingsBase::helpClicked()
{
    qWarning( "ProjectSettingsBase::helpClicked(): Not implemented yet" );
}

void ProjectSettingsBase::init()
{
}

void ProjectSettingsBase::languageChanged(const QString&)
{
    qWarning( "ProjectSettingsBase::languageChanged(const QString&): Not implemented yet" );
}

void ProjectSettingsBase::okClicked()
{
    qWarning( "ProjectSettingsBase::okClicked(): Not implemented yet" );
}

