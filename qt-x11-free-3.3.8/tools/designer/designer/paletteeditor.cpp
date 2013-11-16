/****************************************************************************
** Form implementation generated from reading ui file 'paletteeditor.ui'
**
** Created: Qua Out 9 11:04:28 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "paletteeditor.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "styledbutton.h"
#include "previewframe.h"

/*
 *  Constructs a PaletteEditorBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
PaletteEditorBase::PaletteEditorBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "PaletteEditorBase" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, sizePolicy().hasHeightForWidth() ) );
    PaletteEditorBaseLayout = new QVBoxLayout( this, 11, 6, "PaletteEditorBaseLayout"); 

    groupAutoPalette = new QGroupBox( this, "groupAutoPalette" );
    groupAutoPalette->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)4, 0, 0, groupAutoPalette->sizePolicy().hasHeightForWidth() ) );
    groupAutoPalette->setAlignment( int( QGroupBox::AlignAuto ) );
    groupAutoPalette->setColumnLayout(0, Qt::Vertical );
    groupAutoPalette->layout()->setSpacing( 6 );
    groupAutoPalette->layout()->setMargin( 11 );
    groupAutoPaletteLayout = new QHBoxLayout( groupAutoPalette->layout() );
    groupAutoPaletteLayout->setAlignment( Qt::AlignTop );

    labelMainColor = new QLabel( groupAutoPalette, "labelMainColor" );
    labelMainColor->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, labelMainColor->sizePolicy().hasHeightForWidth() ) );
    labelMainColor->setMinimumSize( QSize( 50, 0 ) );
    labelMainColor->setLineWidth( 1 );
    labelMainColor->setMargin( 0 );
    labelMainColor->setMidLineWidth( 0 );
    labelMainColor->setAlignment( int( QLabel::AlignAuto | QLabel::AlignVCenter ) );
    groupAutoPaletteLayout->addWidget( labelMainColor );

    buttonMainColor = new StyledButton( groupAutoPalette, "buttonMainColor" );
    buttonMainColor->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, buttonMainColor->sizePolicy().hasHeightForWidth() ) );
    buttonMainColor->setFocusPolicy( StyledButton::StrongFocus );
    buttonMainColor->setProperty( "scale", QVariant( FALSE, 0 ) );
    groupAutoPaletteLayout->addWidget( buttonMainColor );

    labelMainColor2 = new QLabel( groupAutoPalette, "labelMainColor2" );
    labelMainColor2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, labelMainColor2->sizePolicy().hasHeightForWidth() ) );
    labelMainColor2->setMinimumSize( QSize( 50, 0 ) );
    labelMainColor2->setLineWidth( 1 );
    labelMainColor2->setMargin( 0 );
    labelMainColor2->setMidLineWidth( 0 );
    labelMainColor2->setAlignment( int( QLabel::AlignAuto | QLabel::AlignVCenter ) );
    groupAutoPaletteLayout->addWidget( labelMainColor2 );

    buttonMainColor2 = new StyledButton( groupAutoPalette, "buttonMainColor2" );
    buttonMainColor2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, buttonMainColor2->sizePolicy().hasHeightForWidth() ) );
    buttonMainColor2->setFocusPolicy( StyledButton::StrongFocus );
    buttonMainColor2->setProperty( "scale", QVariant( FALSE, 0 ) );
    groupAutoPaletteLayout->addWidget( buttonMainColor2 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    groupAutoPaletteLayout->addItem( Spacer1 );

    btnAdvanced = new QPushButton( groupAutoPalette, "btnAdvanced" );
    groupAutoPaletteLayout->addWidget( btnAdvanced );
    PaletteEditorBaseLayout->addWidget( groupAutoPalette );

    GroupBox126 = new QGroupBox( this, "GroupBox126" );
    GroupBox126->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)7, 0, 0, GroupBox126->sizePolicy().hasHeightForWidth() ) );
    GroupBox126->setColumnLayout(0, Qt::Vertical );
    GroupBox126->layout()->setSpacing( 6 );
    GroupBox126->layout()->setMargin( 11 );
    GroupBox126Layout = new QVBoxLayout( GroupBox126->layout() );
    GroupBox126Layout->setAlignment( Qt::AlignTop );

    Layout2 = new QHBoxLayout( 0, 0, 6, "Layout2"); 

    TextLabel1 = new QLabel( GroupBox126, "TextLabel1" );
    Layout2->addWidget( TextLabel1 );

    paletteCombo = new QComboBox( FALSE, GroupBox126, "paletteCombo" );
    Layout2->addWidget( paletteCombo );
    GroupBox126Layout->addLayout( Layout2 );

    previewFrame = new PreviewFrame( GroupBox126, "previewFrame" );
    previewFrame->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, previewFrame->sizePolicy().hasHeightForWidth() ) );
    GroupBox126Layout->addWidget( previewFrame );
    PaletteEditorBaseLayout->addWidget( GroupBox126 );

    Layout3 = new QHBoxLayout( 0, 0, 6, "Layout3"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    Layout3->addWidget( buttonHelp );
    Horizontal_Spacing11 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout3->addItem( Horizontal_Spacing11 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout3->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout3->addWidget( buttonCancel );
    PaletteEditorBaseLayout->addLayout( Layout3 );
    languageChange();
    resize( QSize(449, 443).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonMainColor2, SIGNAL( clicked() ), this, SLOT( onChoose2ndMainColor() ) );
    connect( paletteCombo, SIGNAL( activated(int) ), this, SLOT( paletteSelected(int) ) );
    connect( btnAdvanced, SIGNAL( clicked() ), this, SLOT( onTune() ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( buttonMainColor, SIGNAL( changed() ), this, SLOT( onChooseMainColor() ) );
    connect( buttonMainColor, SIGNAL( clicked() ), this, SLOT( onChooseMainColor() ) );
    connect( buttonMainColor2, SIGNAL( changed() ), this, SLOT( onChoose2ndMainColor() ) );

    // tab order
    setTabOrder( buttonOk, buttonCancel );
    setTabOrder( buttonCancel, buttonMainColor );
    setTabOrder( buttonMainColor, buttonMainColor2 );
    setTabOrder( buttonMainColor2, btnAdvanced );
    setTabOrder( btnAdvanced, paletteCombo );
    setTabOrder( paletteCombo, buttonHelp );

    // buddies
    labelMainColor->setBuddy( buttonMainColor );
    labelMainColor2->setBuddy( buttonMainColor2 );
    TextLabel1->setBuddy( paletteCombo );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
PaletteEditorBase::~PaletteEditorBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void PaletteEditorBase::languageChange()
{
    setCaption( tr( "Edit Palette" ) );
    groupAutoPalette->setTitle( tr( "Build Palette" ) );
    labelMainColor->setText( tr( "&3-D Effects:" ) );
    QToolTip::add( buttonMainColor, tr( "Choose a color" ) );
    QWhatsThis::add( buttonMainColor, tr( "Choose the effect-color for the generated palette." ) );
    labelMainColor2->setText( tr( "Back&ground:" ) );
    QToolTip::add( buttonMainColor2, tr( "Choose a color" ) );
    QWhatsThis::add( buttonMainColor2, tr( "Choose the background color for the generated palette." ) );
    btnAdvanced->setText( tr( "&Tune Palette..." ) );
    GroupBox126->setTitle( tr( "Preview" ) );
    TextLabel1->setText( tr( "Select &Palette:" ) );
    paletteCombo->clear();
    paletteCombo->insertItem( tr( "Active Palette" ) );
    paletteCombo->insertItem( tr( "Inactive Palette" ) );
    paletteCombo->insertItem( tr( "Disabled Palette" ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Close the dialog and apply all the changes." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog and discard any changes." ) );
}

void PaletteEditorBase::init()
{
}

void PaletteEditorBase::destroy()
{
}

void PaletteEditorBase::onTune()
{
    qWarning( "PaletteEditorBase::onTune(): Not implemented yet" );
}

void PaletteEditorBase::onChoose2ndMainColor()
{
    qWarning( "PaletteEditorBase::onChoose2ndMainColor(): Not implemented yet" );
}

void PaletteEditorBase::onChooseMainColor()
{
    qWarning( "PaletteEditorBase::onChooseMainColor(): Not implemented yet" );
}

void PaletteEditorBase::paletteSelected(int)
{
    qWarning( "PaletteEditorBase::paletteSelected(int): Not implemented yet" );
}

