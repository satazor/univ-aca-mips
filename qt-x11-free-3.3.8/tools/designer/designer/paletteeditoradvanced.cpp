/****************************************************************************
** Form implementation generated from reading ui file 'paletteeditoradvanced.ui'
**
** Created: Qua Out 9 11:04:35 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "paletteeditoradvanced.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qbuttongroup.h>
#include <qcheckbox.h>
#include <qgroupbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "styledbutton.h"

/*
 *  Constructs a PaletteEditorAdvancedBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
PaletteEditorAdvancedBase::PaletteEditorAdvancedBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "PaletteEditorAdvancedBase" );
    setEnabled( TRUE );
    setSizeGripEnabled( TRUE );
    PaletteEditorAdvancedBaseLayout = new QVBoxLayout( this, 11, 6, "PaletteEditorAdvancedBaseLayout"); 

    Layout14 = new QHBoxLayout( 0, 0, 6, "Layout14"); 

    TextLabel1 = new QLabel( this, "TextLabel1" );
    TextLabel1->setFrameShape( QLabel::MShape );
    TextLabel1->setFrameShadow( QLabel::MShadow );
    Layout14->addWidget( TextLabel1 );

    paletteCombo = new QComboBox( FALSE, this, "paletteCombo" );
    Layout14->addWidget( paletteCombo );
    PaletteEditorAdvancedBaseLayout->addLayout( Layout14 );

    ButtonGroup1 = new QButtonGroup( this, "ButtonGroup1" );
    ButtonGroup1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)4, 0, 0, ButtonGroup1->sizePolicy().hasHeightForWidth() ) );
    ButtonGroup1->setColumnLayout(0, Qt::Vertical );
    ButtonGroup1->layout()->setSpacing( 6 );
    ButtonGroup1->layout()->setMargin( 11 );
    ButtonGroup1Layout = new QVBoxLayout( ButtonGroup1->layout() );
    ButtonGroup1Layout->setAlignment( Qt::AlignTop );

    checkBuildInactive = new QCheckBox( ButtonGroup1, "checkBuildInactive" );
    checkBuildInactive->setChecked( TRUE );
    ButtonGroup1Layout->addWidget( checkBuildInactive );

    checkBuildDisabled = new QCheckBox( ButtonGroup1, "checkBuildDisabled" );
    checkBuildDisabled->setChecked( TRUE );
    ButtonGroup1Layout->addWidget( checkBuildDisabled );
    PaletteEditorAdvancedBaseLayout->addWidget( ButtonGroup1 );

    groupCentral = new QGroupBox( this, "groupCentral" );
    groupCentral->setColumnLayout(0, Qt::Vertical );
    groupCentral->layout()->setSpacing( 6 );
    groupCentral->layout()->setMargin( 11 );
    groupCentralLayout = new QVBoxLayout( groupCentral->layout() );
    groupCentralLayout->setAlignment( Qt::AlignTop );

    comboCentral = new QComboBox( FALSE, groupCentral, "comboCentral" );
    groupCentralLayout->addWidget( comboCentral );

    Layout32_2 = new QHBoxLayout( 0, 0, 6, "Layout32_2"); 
    Horizontal_Spacing1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout32_2->addItem( Horizontal_Spacing1 );

    labelPixmap = new QLabel( groupCentral, "labelPixmap" );
    labelPixmap->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, labelPixmap->sizePolicy().hasHeightForWidth() ) );
    Layout32_2->addWidget( labelPixmap );

    buttonPixmap = new StyledButton( groupCentral, "buttonPixmap" );
    buttonPixmap->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, buttonPixmap->sizePolicy().hasHeightForWidth() ) );
    buttonPixmap->setFocusPolicy( StyledButton::TabFocus );
    buttonPixmap->setProperty( "scale", QVariant( TRUE, 0 ) );
    Layout32_2->addWidget( buttonPixmap );

    labelCentral = new QLabel( groupCentral, "labelCentral" );
    labelCentral->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, labelCentral->sizePolicy().hasHeightForWidth() ) );
    labelCentral->setMinimumSize( QSize( 0, 0 ) );
    Layout32_2->addWidget( labelCentral );

    buttonCentral = new StyledButton( groupCentral, "buttonCentral" );
    buttonCentral->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, buttonCentral->sizePolicy().hasHeightForWidth() ) );
    buttonCentral->setFocusPolicy( StyledButton::TabFocus );
    buttonCentral->setProperty( "scale", QVariant( FALSE, 0 ) );
    Layout32_2->addWidget( buttonCentral );
    groupCentralLayout->addLayout( Layout32_2 );
    PaletteEditorAdvancedBaseLayout->addWidget( groupCentral );

    groupEffect = new QGroupBox( this, "groupEffect" );
    groupEffect->setColumnLayout(0, Qt::Vertical );
    groupEffect->layout()->setSpacing( 6 );
    groupEffect->layout()->setMargin( 11 );
    groupEffectLayout = new QVBoxLayout( groupEffect->layout() );
    groupEffectLayout->setAlignment( Qt::AlignTop );

    Layout32_3 = new QHBoxLayout( 0, 0, 6, "Layout32_3"); 

    checkBuildEffect = new QCheckBox( groupEffect, "checkBuildEffect" );
    checkBuildEffect->setChecked( TRUE );
    Layout32_3->addWidget( checkBuildEffect );

    comboEffect = new QComboBox( FALSE, groupEffect, "comboEffect" );
    Layout32_3->addWidget( comboEffect );
    groupEffectLayout->addLayout( Layout32_3 );

    Layout31_2 = new QHBoxLayout( 0, 0, 6, "Layout31_2"); 
    Horizontal_Spacing3 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout31_2->addItem( Horizontal_Spacing3 );

    labelEffect = new QLabel( groupEffect, "labelEffect" );
    labelEffect->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, labelEffect->sizePolicy().hasHeightForWidth() ) );
    labelEffect->setMinimumSize( QSize( 0, 0 ) );
    Layout31_2->addWidget( labelEffect );

    buttonEffect = new StyledButton( groupEffect, "buttonEffect" );
    buttonEffect->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, buttonEffect->sizePolicy().hasHeightForWidth() ) );
    buttonEffect->setFocusPolicy( StyledButton::TabFocus );
    buttonEffect->setProperty( "scale", QVariant( FALSE, 0 ) );
    Layout31_2->addWidget( buttonEffect );
    groupEffectLayout->addLayout( Layout31_2 );
    PaletteEditorAdvancedBaseLayout->addWidget( groupEffect );

    Layout3 = new QHBoxLayout( 0, 0, 6, "Layout3"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    Layout3->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout3->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout3->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout3->addWidget( buttonCancel );
    PaletteEditorAdvancedBaseLayout->addLayout( Layout3 );
    languageChange();
    resize( QSize(327, 341).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( paletteCombo, SIGNAL( activated(int) ), this, SLOT( paletteSelected(int) ) );
    connect( comboCentral, SIGNAL( activated(int) ), this, SLOT( onCentral(int) ) );
    connect( buttonPixmap, SIGNAL( clicked() ), this, SLOT( onChoosePixmap() ) );
    connect( buttonCentral, SIGNAL( clicked() ), this, SLOT( onChooseCentralColor() ) );
    connect( buttonEffect, SIGNAL( clicked() ), this, SLOT( onChooseEffectColor() ) );
    connect( comboEffect, SIGNAL( activated(int) ), this, SLOT( onEffect(int) ) );
    connect( checkBuildEffect, SIGNAL( toggled(bool) ), this, SLOT( onToggleBuildEffects(bool) ) );
    connect( buttonHelp, SIGNAL( clicked() ), this, SLOT( showHelp() ) );
    connect( checkBuildEffect, SIGNAL( toggled(bool) ), comboEffect, SLOT( setDisabled(bool) ) );
    connect( checkBuildEffect, SIGNAL( toggled(bool) ), buttonEffect, SLOT( setDisabled(bool) ) );
    connect( checkBuildInactive, SIGNAL( toggled(bool) ), this, SLOT( onToggleBuildInactive(bool) ) );
    connect( checkBuildDisabled, SIGNAL( toggled(bool) ), this, SLOT( onToggleBuildDisabled(bool) ) );

    // tab order
    setTabOrder( buttonOk, buttonCancel );
    setTabOrder( buttonCancel, paletteCombo );
    setTabOrder( paletteCombo, checkBuildInactive );
    setTabOrder( checkBuildInactive, checkBuildDisabled );
    setTabOrder( checkBuildDisabled, comboCentral );
    setTabOrder( comboCentral, buttonPixmap );
    setTabOrder( buttonPixmap, buttonCentral );
    setTabOrder( buttonCentral, checkBuildEffect );
    setTabOrder( checkBuildEffect, comboEffect );
    setTabOrder( comboEffect, buttonEffect );
    setTabOrder( buttonEffect, buttonHelp );

    // buddies
    TextLabel1->setBuddy( paletteCombo );
    labelPixmap->setBuddy( buttonPixmap );
    labelCentral->setBuddy( buttonCentral );
    labelEffect->setBuddy( buttonEffect );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
PaletteEditorAdvancedBase::~PaletteEditorAdvancedBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void PaletteEditorAdvancedBase::languageChange()
{
    setCaption( tr( "Tune Palette" ) );
    QWhatsThis::add( this, tr( "<b>Edit Palette</b><p>Change the current widget or form's palette.</p><p>Use a generated palette or select colors for each color group and each color role.</p><p>The palette can be tested with different widget layouts in the preview section.</p>" ) );
    TextLabel1->setText( tr( "Select &Palette:" ) );
    paletteCombo->clear();
    paletteCombo->insertItem( tr( "Active Palette" ) );
    paletteCombo->insertItem( tr( "Inactive Palette" ) );
    paletteCombo->insertItem( tr( "Disabled Palette" ) );
    ButtonGroup1->setTitle( tr( "Auto" ) );
    checkBuildInactive->setText( tr( "Build the &inactive palette from the active palette." ) );
    checkBuildDisabled->setText( tr( "Build the &disabled palette from the active palette." ) );
    groupCentral->setTitle( tr( "Central color roles" ) );
    comboCentral->clear();
    comboCentral->insertItem( tr( "Background" ) );
    comboCentral->insertItem( tr( "Foreground" ) );
    comboCentral->insertItem( tr( "Button" ) );
    comboCentral->insertItem( tr( "Base" ) );
    comboCentral->insertItem( tr( "Text" ) );
    comboCentral->insertItem( tr( "BrightText" ) );
    comboCentral->insertItem( tr( "ButtonText" ) );
    comboCentral->insertItem( tr( "Highlight" ) );
    comboCentral->insertItem( tr( "HighlightText" ) );
    comboCentral->insertItem( tr( "Link" ) );
    comboCentral->insertItem( tr( "LinkVisited" ) );
    QToolTip::add( comboCentral, tr( "Choose the central color role" ) );
    QWhatsThis::add( comboCentral, tr( "<b>Select a color role.</b><p>Available central color roles are: <ul> <li>Background - general background color.</li> <li>Foreground - general foreground color. </li> <li>Base - used as the background color for example, for text entry widgets; it is usually white or another light color. </li> <li>Text - the forground color used with Base. Usually this is the same as the Foreground, in which case it must provide good contrast both with the Background and with the Base. </li> <li>Button - general button background color; useful where buttons need a background different from Background, as in the Macintosh style. </li> <li>ButtonText - a foreground color used with the Button color. </li> <li>Highlight - a color used to indicate a selected or highlighted item. </li> <li>HighlightedText - a text color that contrasts to Highlight. </li> <li>BrightText - a text color that is very different from Foreground and contrasts well with, for example, black. </li> </ul> </p>" ) );
    labelPixmap->setText( tr( "Choose Pi&xmap:" ) );
    QToolTip::add( buttonPixmap, tr( "Select a pixmap" ) );
    QWhatsThis::add( buttonPixmap, tr( "Choose a pixmap file for the selected central color role." ) );
    labelCentral->setText( tr( "&Select Color:" ) );
    QToolTip::add( buttonCentral, tr( "Choose a color" ) );
    QWhatsThis::add( buttonCentral, tr( "Choose a color for the selected central color role." ) );
    groupEffect->setTitle( tr( "3-D shadow effects" ) );
    checkBuildEffect->setText( tr( "Build &from button color" ) );
    QToolTip::add( checkBuildEffect, tr( "Generate shadings" ) );
    QWhatsThis::add( checkBuildEffect, tr( "Check to let 3D-effect colors be calculated from the button-color." ) );
    comboEffect->clear();
    comboEffect->insertItem( tr( "Light" ) );
    comboEffect->insertItem( tr( "Midlight" ) );
    comboEffect->insertItem( tr( "Mid" ) );
    comboEffect->insertItem( tr( "Dark" ) );
    comboEffect->insertItem( tr( "Shadow" ) );
    QToolTip::add( comboEffect, tr( "Choose 3D-effect color role" ) );
    QWhatsThis::add( comboEffect, tr( "<b>Select a color effect role.</b><p>Available effect roles are: <ul> <li>Light - lighter than Button color. </li> <li>Midlight - between Button and Light. </li> <li>Mid - between Button and Dark. </li> <li>Dark - darker than Button. </li> <li>Shadow - a very dark color. </li> </ul>" ) );
    labelEffect->setText( tr( "Select Co&lor:" ) );
    QToolTip::add( buttonEffect, tr( "Choose a color" ) );
    QWhatsThis::add( buttonEffect, tr( "Choose a color for the selected effect color role." ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Close the dialog and apply all the changes." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog and discard any changes." ) );
}

void PaletteEditorAdvancedBase::init()
{
}

void PaletteEditorAdvancedBase::destroy()
{
}

void PaletteEditorAdvancedBase::onToggleBuildDisabled(bool)
{
    qWarning( "PaletteEditorAdvancedBase::onToggleBuildDisabled(bool): Not implemented yet" );
}

void PaletteEditorAdvancedBase::onCentral(int)
{
    qWarning( "PaletteEditorAdvancedBase::onCentral(int): Not implemented yet" );
}

void PaletteEditorAdvancedBase::onChooseCentralColor()
{
    qWarning( "PaletteEditorAdvancedBase::onChooseCentralColor(): Not implemented yet" );
}

void PaletteEditorAdvancedBase::onChooseEffectColor()
{
    qWarning( "PaletteEditorAdvancedBase::onChooseEffectColor(): Not implemented yet" );
}

void PaletteEditorAdvancedBase::onChoosePixmap()
{
    qWarning( "PaletteEditorAdvancedBase::onChoosePixmap(): Not implemented yet" );
}

void PaletteEditorAdvancedBase::onEffect(int)
{
    qWarning( "PaletteEditorAdvancedBase::onEffect(int): Not implemented yet" );
}

void PaletteEditorAdvancedBase::onToggleBuildEffects(bool)
{
    qWarning( "PaletteEditorAdvancedBase::onToggleBuildEffects(bool): Not implemented yet" );
}

void PaletteEditorAdvancedBase::onToggleBuildInactive(bool)
{
    qWarning( "PaletteEditorAdvancedBase::onToggleBuildInactive(bool): Not implemented yet" );
}

void PaletteEditorAdvancedBase::paletteSelected(int)
{
    qWarning( "PaletteEditorAdvancedBase::paletteSelected(int): Not implemented yet" );
}

void PaletteEditorAdvancedBase::showHelp()
{
    qWarning( "PaletteEditorAdvancedBase::showHelp(): Not implemented yet" );
}

