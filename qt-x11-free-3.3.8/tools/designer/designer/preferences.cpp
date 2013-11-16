/****************************************************************************
** Form implementation generated from reading ui file 'preferences.ui'
**
** Created: Qua Out 9 11:04:29 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "preferences.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qgroupbox.h>
#include <qcheckbox.h>
#include <qlabel.h>
#include <qdatetimeedit.h>
#include <qbuttongroup.h>
#include <qtextedit.h>
#include <qspinbox.h>
#include <qradiobutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "styledbutton.h"

/*
 *  Constructs a Preferences as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
Preferences::Preferences( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "Preferences" );
    setSizeGripEnabled( TRUE );
    PreferencesLayout = new QVBoxLayout( this, 11, 6, "PreferencesLayout"); 

    tabWidget = new QTabWidget( this, "tabWidget" );

    pageGeneral = new QWidget( tabWidget, "pageGeneral" );
    pageGeneralLayout = new QGridLayout( pageGeneral, 1, 1, 11, 6, "pageGeneralLayout"); 

    groupBox4 = new QGroupBox( pageGeneral, "groupBox4" );
    groupBox4->setColumnLayout(0, Qt::Vertical );
    groupBox4->layout()->setSpacing( 6 );
    groupBox4->layout()->setMargin( 11 );
    groupBox4Layout = new QVBoxLayout( groupBox4->layout() );
    groupBox4Layout->setAlignment( Qt::AlignTop );

    checkBoxAutoSave = new QCheckBox( groupBox4, "checkBoxAutoSave" );
    checkBoxAutoSave->setChecked( TRUE );
    groupBox4Layout->addWidget( checkBoxAutoSave );

    layout3 = new QHBoxLayout( 0, 0, 6, "layout3"); 

    textLabelAutoSave = new QLabel( groupBox4, "textLabelAutoSave" );
    layout3->addWidget( textLabelAutoSave );

    timeEditAutoSave = new QTimeEdit( groupBox4, "timeEditAutoSave" );
    timeEditAutoSave->setTime( QTime( 0, 30, 0 ) );
    layout3->addWidget( timeEditAutoSave );
    groupBox4Layout->addLayout( layout3 );

    pageGeneralLayout->addWidget( groupBox4, 1, 1 );

    buttonGroup2 = new QButtonGroup( pageGeneral, "buttonGroup2" );
    buttonGroup2->setColumnLayout(0, Qt::Vertical );
    buttonGroup2->layout()->setSpacing( 6 );
    buttonGroup2->layout()->setMargin( 11 );
    buttonGroup2Layout = new QHBoxLayout( buttonGroup2->layout() );
    buttonGroup2Layout->setAlignment( Qt::AlignTop );

    textEditPluginPaths = new QTextEdit( buttonGroup2, "textEditPluginPaths" );
    buttonGroup2Layout->addWidget( textEditPluginPaths );

    pageGeneralLayout->addMultiCellWidget( buttonGroup2, 2, 2, 0, 1 );
    Spacer3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    pageGeneralLayout->addItem( Spacer3, 3, 1 );

    GroupBox5 = new QGroupBox( pageGeneral, "GroupBox5" );
    GroupBox5->setColumnLayout(0, Qt::Vertical );
    GroupBox5->layout()->setSpacing( 6 );
    GroupBox5->layout()->setMargin( 11 );
    GroupBox5Layout = new QVBoxLayout( GroupBox5->layout() );
    GroupBox5Layout->setAlignment( Qt::AlignTop );

    checkBoxWorkspace = new QCheckBox( GroupBox5, "checkBoxWorkspace" );
    checkBoxWorkspace->setChecked( TRUE );
    GroupBox5Layout->addWidget( checkBoxWorkspace );

    checkBoxSplash = new QCheckBox( GroupBox5, "checkBoxSplash" );
    checkBoxSplash->setChecked( TRUE );
    GroupBox5Layout->addWidget( checkBoxSplash );

    checkBoxStartDialog = new QCheckBox( GroupBox5, "checkBoxStartDialog" );
    checkBoxStartDialog->setChecked( TRUE );
    GroupBox5Layout->addWidget( checkBoxStartDialog );

    checkAutoEdit = new QCheckBox( GroupBox5, "checkAutoEdit" );
    checkAutoEdit->setChecked( TRUE );
    GroupBox5Layout->addWidget( checkAutoEdit );

    checkBoxTextLabels = new QCheckBox( GroupBox5, "checkBoxTextLabels" );
    GroupBox5Layout->addWidget( checkBoxTextLabels );

    pageGeneralLayout->addWidget( GroupBox5, 1, 0 );

    groupBoxGrid = new QGroupBox( pageGeneral, "groupBoxGrid" );
    groupBoxGrid->setCheckable( TRUE );
    groupBoxGrid->setColumnLayout(0, Qt::Vertical );
    groupBoxGrid->layout()->setSpacing( 6 );
    groupBoxGrid->layout()->setMargin( 11 );
    groupBoxGridLayout = new QVBoxLayout( groupBoxGrid->layout() );
    groupBoxGridLayout->setAlignment( Qt::AlignTop );

    checkBoxSnapGrid = new QCheckBox( groupBoxGrid, "checkBoxSnapGrid" );
    checkBoxSnapGrid->setChecked( TRUE );
    groupBoxGridLayout->addWidget( checkBoxSnapGrid );

    Layout4 = new QGridLayout( 0, 1, 1, 0, 6, "Layout4"); 

    spinGridX = new QSpinBox( groupBoxGrid, "spinGridX" );
    spinGridX->setMaxValue( 50 );
    spinGridX->setMinValue( 5 );
    spinGridX->setValue( 10 );

    Layout4->addWidget( spinGridX, 0, 1 );

    spinGridY = new QSpinBox( groupBoxGrid, "spinGridY" );
    spinGridY->setMaxValue( 50 );
    spinGridY->setMinValue( 5 );
    spinGridY->setValue( 10 );

    Layout4->addWidget( spinGridY, 1, 1 );

    Label1 = new QLabel( groupBoxGrid, "Label1" );

    Layout4->addWidget( Label1, 0, 0 );

    Label1_2 = new QLabel( groupBoxGrid, "Label1_2" );

    Layout4->addWidget( Label1_2, 1, 0 );
    groupBoxGridLayout->addLayout( Layout4 );

    pageGeneralLayout->addWidget( groupBoxGrid, 0, 1 );

    ButtonGroup1 = new QButtonGroup( pageGeneral, "ButtonGroup1" );
    ButtonGroup1->setColumnLayout(0, Qt::Vertical );
    ButtonGroup1->layout()->setSpacing( 6 );
    ButtonGroup1->layout()->setMargin( 11 );
    ButtonGroup1Layout = new QGridLayout( ButtonGroup1->layout() );
    ButtonGroup1Layout->setAlignment( Qt::AlignTop );

    buttonColor = new StyledButton( ButtonGroup1, "buttonColor" );
    buttonColor->setEnabled( FALSE );
    buttonColor->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, buttonColor->sizePolicy().hasHeightForWidth() ) );
    buttonColor->setFocusPolicy( StyledButton::TabFocus );
    buttonColor->setProperty( "scale", QVariant( FALSE, 0 ) );

    ButtonGroup1Layout->addWidget( buttonColor, 0, 1 );

    radioColor = new QRadioButton( ButtonGroup1, "radioColor" );
    radioColor->setFocusPolicy( QRadioButton::NoFocus );

    ButtonGroup1Layout->addWidget( radioColor, 0, 0 );

    radioPixmap = new QRadioButton( ButtonGroup1, "radioPixmap" );
    radioPixmap->setChecked( TRUE );

    ButtonGroup1Layout->addWidget( radioPixmap, 1, 0 );

    buttonPixmap = new StyledButton( ButtonGroup1, "buttonPixmap" );
    buttonPixmap->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, buttonPixmap->sizePolicy().hasHeightForWidth() ) );
    buttonPixmap->setFocusPolicy( StyledButton::TabFocus );
    buttonPixmap->setProperty( "scale", QVariant( FALSE, 0 ) );

    ButtonGroup1Layout->addWidget( buttonPixmap, 1, 1 );

    pageGeneralLayout->addWidget( ButtonGroup1, 0, 0 );
    tabWidget->insertTab( pageGeneral, QString::fromLatin1("") );
    PreferencesLayout->addWidget( tabWidget );

    Layout6 = new QHBoxLayout( 0, 0, 6, "Layout6"); 

    helpButton = new QPushButton( this, "helpButton" );
    helpButton->setAutoDefault( TRUE );
    Layout6->addWidget( helpButton );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout6->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout6->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    buttonCancel->setDefault( FALSE );
    Layout6->addWidget( buttonCancel );
    PreferencesLayout->addLayout( Layout6 );
    languageChange();
    resize( QSize(482, 480).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( radioColor, SIGNAL( toggled(bool) ), buttonColor, SLOT( setEnabled(bool) ) );
    connect( radioPixmap, SIGNAL( toggled(bool) ), buttonPixmap, SLOT( setEnabled(bool) ) );

    // tab order
    setTabOrder( buttonOk, buttonCancel );
    setTabOrder( buttonCancel, tabWidget );
    setTabOrder( tabWidget, radioColor );
    setTabOrder( radioColor, radioPixmap );
    setTabOrder( radioPixmap, buttonColor );
    setTabOrder( buttonColor, buttonPixmap );
    setTabOrder( buttonPixmap, checkBoxSnapGrid );
    setTabOrder( checkBoxSnapGrid, spinGridX );
    setTabOrder( spinGridX, spinGridY );
    setTabOrder( spinGridY, checkBoxWorkspace );
    setTabOrder( checkBoxWorkspace, checkBoxSplash );
    setTabOrder( checkBoxSplash, checkBoxStartDialog );
    setTabOrder( checkBoxStartDialog, checkAutoEdit );
    setTabOrder( checkAutoEdit, checkBoxTextLabels );
    setTabOrder( checkBoxTextLabels, helpButton );

    // buddies
    textLabelAutoSave->setBuddy( timeEditAutoSave );
    Label1->setBuddy( spinGridX );
    Label1_2->setBuddy( spinGridY );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
Preferences::~Preferences()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Preferences::languageChange()
{
    setCaption( tr( "Preferences" ) );
    QWhatsThis::add( this, tr( "<b>Preferences</b><p>Change the preferences of Qt Designer. There is always one tab with general preferences. There may be additional tabs, depending on which plugins are installed.</p>" ) );
    groupBox4->setTitle( tr( "File Saving" ) );
    checkBoxAutoSave->setText( tr( "Enable Auto Sa&ve" ) );
    checkBoxAutoSave->setAccel( QKeySequence( tr( "Alt+V" ) ) );
    textLabelAutoSave->setText( tr( "Auto Save &Interval:" ) );
    buttonGroup2->setTitle( tr( "Plu&gin Paths" ) );
    GroupBox5->setTitle( tr( "Ge&neral" ) );
    checkBoxWorkspace->setText( tr( "Restore Last &Workspace on Startup" ) );
    checkBoxWorkspace->setAccel( QKeySequence( tr( "Alt+W" ) ) );
    QToolTip::add( checkBoxWorkspace, tr( "Restore last workspace" ) );
    QWhatsThis::add( checkBoxWorkspace, tr( "The current workspace settings will be restored the next time you start Qt Designer if this option is checked." ) );
    checkBoxSplash->setText( tr( "Show &Splash Screen on Startup" ) );
    QToolTip::add( checkBoxSplash, tr( "Show Splashscreen" ) );
    QWhatsThis::add( checkBoxSplash, tr( "A splash screen is displayed when starting Qt Designer if this option is checked." ) );
    checkBoxStartDialog->setText( tr( "Show Start &Dialog" ) );
    checkAutoEdit->setText( tr( "Disable Data&base Auto-Edit in Preview" ) );
    checkAutoEdit->setAccel( QKeySequence( tr( "Alt+B" ) ) );
    checkBoxTextLabels->setText( tr( "Show Toolbutton Lab&els" ) );
    checkBoxTextLabels->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QToolTip::add( checkBoxTextLabels, tr( "Text Labels" ) );
    QWhatsThis::add( checkBoxTextLabels, tr( "Text labels will be usin in the toolbars if this is checked." ) );
    groupBoxGrid->setTitle( tr( "G&rid" ) );
    QWhatsThis::add( groupBoxGrid, QString::null );
    checkBoxSnapGrid->setText( tr( "Sn&ap to Grid" ) );
    checkBoxSnapGrid->setAccel( QKeySequence( tr( "Alt+A" ) ) );
    QToolTip::add( checkBoxSnapGrid, tr( "Snap to the grid" ) );
    QWhatsThis::add( checkBoxSnapGrid, tr( "<b>Customize the grid-settings for all forms.</b><p>When <b>Snap to Grid</b> is checked, the widgets snap to the grid using the the X/Y resolution.</p>" ) );
    QToolTip::add( spinGridX, tr( "Grid resolution" ) );
    QWhatsThis::add( spinGridX, tr( "<b>Customize the grid-settings for all forms.</b><p>When <b>Show Grid</b> is checked, a grid is shown on all forms using the X/Y resolution.</p>" ) );
    QToolTip::add( spinGridY, tr( "Grid resolution" ) );
    QWhatsThis::add( spinGridY, tr( "<b>Customize the grid-settings for all forms.</b><p>When <b>Show Grid</b> is checked, a grid is shown on all forms using the X/Y resolution.</p>" ) );
    Label1->setText( tr( "Grid-&X:" ) );
    Label1_2->setText( tr( "Grid-&Y:" ) );
    ButtonGroup1->setTitle( tr( "Backgro&und" ) );
    QToolTip::add( buttonColor, tr( "Choose a color" ) );
    QWhatsThis::add( buttonColor, tr( "Select a color in the color dialog." ) );
    radioColor->setText( tr( "Co&lor" ) );
    QToolTip::add( radioColor, tr( "Use a background color" ) );
    QWhatsThis::add( radioColor, tr( "Use a background color." ) );
    radioPixmap->setText( tr( "&Pixmap" ) );
    QToolTip::add( radioPixmap, tr( "Use a background pixmap" ) );
    QWhatsThis::add( radioPixmap, tr( "Use a background pixmap." ) );
    QToolTip::add( buttonPixmap, tr( "Select a pixmap" ) );
    QWhatsThis::add( buttonPixmap, tr( "Choose a pixmap file." ) );
    tabWidget->changeTab( pageGeneral, tr( "General" ) );
    helpButton->setText( tr( "&Help" ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Close the dialog and apply all the changes." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog and discard any changes." ) );
}

void Preferences::init()
{
}

void Preferences::destroy()
{
}

