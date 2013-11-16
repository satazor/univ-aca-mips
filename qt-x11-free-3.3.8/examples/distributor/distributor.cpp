/****************************************************************************
** Form implementation generated from reading ui file 'distributor.ui'
**
** Created: Tue Oct 8 10:24:11 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "distributor.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qwidget.h>
#include <qlineedit.h>
#include <qlabel.h>
#include <qframe.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "distributor.ui.h"
/*
 *  Constructs a Distributor as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The wizard will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal wizard.
 */
Distributor::Distributor( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QWizard( parent, name, modal, fl )
{
    if ( !name )
	setName( "Distributor" );

    selectLibrary = new QWidget( this, "selectLibrary" );
    selectLibraryLayout = new QGridLayout( selectLibrary, 1, 1, 11, 6, "selectLibraryLayout"); 
    spacer2 = new QSpacerItem( 20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding );
    selectLibraryLayout->addItem( spacer2, 2, 0 );

    libFilename = new QLineEdit( selectLibrary, "libFilename" );
    libFilename->setFrameShape( QLineEdit::LineEditPanel );
    libFilename->setFrameShadow( QLineEdit::Sunken );

    selectLibraryLayout->addWidget( libFilename, 1, 0 );

    libBrowseButton = new QPushButton( selectLibrary, "libBrowseButton" );

    selectLibraryLayout->addWidget( libBrowseButton, 1, 1 );

    textLabel1 = new QLabel( selectLibrary, "textLabel1" );

    selectLibraryLayout->addMultiCellWidget( textLabel1, 0, 0, 0, 1 );
    addPage( selectLibrary, QString("") );

    modifyPaths = new QWidget( this, "modifyPaths" );
    modifyPathsLayout = new QGridLayout( modifyPaths, 1, 1, 11, 6, "modifyPathsLayout"); 
    spacer2_2 = new QSpacerItem( 20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding );
    modifyPathsLayout->addItem( spacer2_2, 11, 1 );

    prefixBuddy = new QLabel( modifyPaths, "prefixBuddy" );

    modifyPathsLayout->addWidget( prefixBuddy, 1, 0 );

    libPath = new QLineEdit( modifyPaths, "libPath" );
    libPath->setEnabled( FALSE );
    libPath->setMaxLength( 255 );

    modifyPathsLayout->addMultiCellWidget( libPath, 8, 8, 1, 2 );

    prefixPath = new QLineEdit( modifyPaths, "prefixPath" );
    prefixPath->setMaxLength( 255 );

    modifyPathsLayout->addWidget( prefixPath, 1, 1 );

    plgPath = new QLineEdit( modifyPaths, "plgPath" );
    plgPath->setEnabled( FALSE );
    plgPath->setMaxLength( 255 );

    modifyPathsLayout->addMultiCellWidget( plgPath, 9, 9, 1, 2 );

    prefixBrowseButton = new QPushButton( modifyPaths, "prefixBrowseButton" );

    modifyPathsLayout->addWidget( prefixBrowseButton, 1, 2 );

    datPath = new QLineEdit( modifyPaths, "datPath" );
    datPath->setEnabled( FALSE );
    datPath->setMaxLength( 255 );

    modifyPathsLayout->addMultiCellWidget( datPath, 10, 10, 1, 2 );

    textLabel2 = new QLabel( modifyPaths, "textLabel2" );

    modifyPathsLayout->addMultiCellWidget( textLabel2, 0, 0, 0, 2 );

    line1 = new QFrame( modifyPaths, "line1" );
    line1->setFrameShape( QFrame::HLine );
    line1->setFrameShadow( QFrame::Sunken );
    line1->setFrameShape( QFrame::HLine );

    modifyPathsLayout->addMultiCellWidget( line1, 2, 2, 0, 2 );

    docPath = new QLineEdit( modifyPaths, "docPath" );
    docPath->setEnabled( FALSE );
    docPath->setMaxLength( 255 );

    modifyPathsLayout->addMultiCellWidget( docPath, 6, 6, 1, 2 );

    hdrPath = new QLineEdit( modifyPaths, "hdrPath" );
    hdrPath->setEnabled( FALSE );
    hdrPath->setMaxLength( 255 );

    modifyPathsLayout->addMultiCellWidget( hdrPath, 7, 7, 1, 2 );

    textLabel3 = new QLabel( modifyPaths, "textLabel3" );

    modifyPathsLayout->addMultiCellWidget( textLabel3, 3, 3, 0, 2 );

    binPath = new QLineEdit( modifyPaths, "binPath" );
    binPath->setEnabled( FALSE );
    binPath->setMaxLength( 255 );

    modifyPathsLayout->addMultiCellWidget( binPath, 5, 5, 1, 2 );

    autoSet = new QCheckBox( modifyPaths, "autoSet" );
    autoSet->setChecked( TRUE );

    modifyPathsLayout->addMultiCellWidget( autoSet, 4, 4, 0, 2 );

    docBuddy = new QLabel( modifyPaths, "docBuddy" );

    modifyPathsLayout->addWidget( docBuddy, 6, 0 );

    datBuddy = new QLabel( modifyPaths, "datBuddy" );

    modifyPathsLayout->addWidget( datBuddy, 10, 0 );

    hdrBuddy = new QLabel( modifyPaths, "hdrBuddy" );

    modifyPathsLayout->addWidget( hdrBuddy, 7, 0 );

    libBuddy = new QLabel( modifyPaths, "libBuddy" );

    modifyPathsLayout->addWidget( libBuddy, 8, 0 );

    plgBuddy = new QLabel( modifyPaths, "plgBuddy" );

    modifyPathsLayout->addWidget( plgBuddy, 9, 0 );

    binBuddy = new QLabel( modifyPaths, "binBuddy" );

    modifyPathsLayout->addWidget( binBuddy, 5, 0 );
    addPage( modifyPaths, QString("") );

    verifyMods = new QWidget( this, "verifyMods" );
    verifyModsLayout = new QHBoxLayout( verifyMods, 11, 6, "verifyModsLayout"); 

    textLabel4 = new QLabel( verifyMods, "textLabel4" );
    textLabel4->setAlignment( int( QLabel::WordBreak | QLabel::AlignTop ) );
    verifyModsLayout->addWidget( textLabel4 );
    addPage( verifyMods, QString("") );
    languageChange();
    resize( QSize(522, 422).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( autoSet, SIGNAL( toggled(bool) ), binPath, SLOT( setDisabled(bool) ) );
    connect( autoSet, SIGNAL( toggled(bool) ), docPath, SLOT( setDisabled(bool) ) );
    connect( autoSet, SIGNAL( toggled(bool) ), hdrPath, SLOT( setDisabled(bool) ) );
    connect( autoSet, SIGNAL( toggled(bool) ), libPath, SLOT( setDisabled(bool) ) );
    connect( autoSet, SIGNAL( toggled(bool) ), plgPath, SLOT( setDisabled(bool) ) );
    connect( autoSet, SIGNAL( toggled(bool) ), datPath, SLOT( setDisabled(bool) ) );
    connect( libFilename, SIGNAL( textChanged(const QString&) ), this, SLOT( checkLibFilename(const QString&) ) );
    connect( libBrowseButton, SIGNAL( clicked() ), this, SLOT( browseLibFilename() ) );
    connect( prefixPath, SIGNAL( textChanged(const QString&) ), this, SLOT( checkInstallationPrefix(const QString&) ) );
    connect( prefixBrowseButton, SIGNAL( clicked() ), this, SLOT( browseInstallationPrefix() ) );
    connect( autoSet, SIGNAL( toggled(bool) ), this, SLOT( toggleAutoSet(bool) ) );

    // tab order
    setTabOrder( libFilename, libBrowseButton );
    setTabOrder( libBrowseButton, prefixPath );
    setTabOrder( prefixPath, prefixBrowseButton );
    setTabOrder( prefixBrowseButton, autoSet );
    setTabOrder( autoSet, binPath );
    setTabOrder( binPath, docPath );
    setTabOrder( docPath, hdrPath );
    setTabOrder( hdrPath, libPath );
    setTabOrder( libPath, plgPath );
    setTabOrder( plgPath, datPath );

    // buddies
    prefixBuddy->setBuddy( prefixPath );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
Distributor::~Distributor()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Distributor::languageChange()
{
    setCaption( tr( "Qt Distribution Wizard" ) );
    libBrowseButton->setText( tr( "&Browse..." ) );
    textLabel1->setText( tr( "<p>Enter the filename of the Qt library to modify, or use the <i>Browse</i> button to browse for the library.</p>\n"
"<p>This wizard will allow you to modify the installation paths stored in the library.</p>" ) );
    setTitle( selectLibrary, tr( "<b>Select Qt Library File</b>" ) );
    prefixBuddy->setText( tr( "Installation &Prefix" ) );
    prefixBrowseButton->setText( tr( "&Browse..." ) );
    textLabel2->setText( tr( "<p>Enter the new <i>Installation Prefix</i> for the selected Qt library, or use the <i>Browse</i> button to browse for the desired directory.</p>\n"
"<p>Use the <i>Next</i> button to review your choices and perform the modification.</p>" ) );
    textLabel3->setText( tr( "<p>The various paths below are set automatically according to the chosen <i>Installation Prefix</i>.  Uncheck the <i>Set paths from Installation Prefix</i> box to enter custom values.</p>" ) );
    autoSet->setText( tr( "Set paths from Installation Prefix" ) );
    docBuddy->setText( tr( "Documentation" ) );
    datBuddy->setText( tr( "Data" ) );
    hdrBuddy->setText( tr( "Headers" ) );
    libBuddy->setText( tr( "Libraries" ) );
    plgBuddy->setText( tr( "Plugins" ) );
    binBuddy->setText( tr( "Binaries" ) );
    setTitle( modifyPaths, tr( "<b>Modify Installation Paths</b>" ) );
    textLabel4->setText( tr( "<p><b>Current Library File:</b> %1</p>\n"
"<table border=0>\n"
" <tr><td><b>New Installation Prefix:</b></td><td>%2</td></tr>\n"
" <tr><td></td><td></td></tr>\n"
" <tr><td><b>Binaries Path:</b></td><td>%3</td></tr>\n"
" <tr><td><b>Documentation Path:</b></td><td>%4</td></tr>\n"
" <tr><td><b>Headers Path:</b></td><td>%5</td></tr>\n"
" <tr><td><b>Libraries Path:</b></td><td>%6</td></tr>\n"
" <tr><td><b>Plugins Path:</b></td><td>%7</td></tr>\n"
" <tr><td><b>Data Path:</b></td><td>%8</td></tr>\n"
"</table>\n"
"<p>Please verify that these options are correct.  Press the <i>Finish</i> button to apply these modifications to the Qt library.  Use the <i>Back</i> button to make corrections.  Use the <i>Cancel</i> button to abort.</p>" ) );
    setTitle( verifyMods, tr( "<b>Verify Modifications</b>" ) );
}

