/****************************************************************************
** Form implementation generated from reading ui file 'richtextfontdialog.ui'
**
** Created: Tue Oct 8 10:19:49 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "richtextfontdialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qcombobox.h>
#include <qlabel.h>
#include <qtoolbutton.h>
#include <qframe.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "richtextfontdialog.ui.h"

/*
 *  Constructs a RichTextFontDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
RichTextFontDialog::RichTextFontDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "RichTextFontDialog" );
    setSizeGripEnabled( TRUE );
    RichTextFontDialogLayout = new QGridLayout( this, 1, 1, 11, 6, "RichTextFontDialogLayout"); 

    Layout6 = new QGridLayout( 0, 1, 1, 0, 6, "Layout6"); 

    fontCombo = new QComboBox( FALSE, this, "fontCombo" );

    Layout6->addMultiCellWidget( fontCombo, 0, 0, 1, 2 );

    TextLabel1_2 = new QLabel( this, "TextLabel1_2" );

    Layout6->addWidget( TextLabel1_2, 0, 0 );

    TextLabel2 = new QLabel( this, "TextLabel2" );

    Layout6->addWidget( TextLabel2, 1, 0 );
    Spacer13 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout6->addItem( Spacer13, 2, 2 );

    TextLabel1 = new QLabel( this, "TextLabel1" );

    Layout6->addWidget( TextLabel1, 2, 0 );

    fontSizeCombo = new QComboBox( FALSE, this, "fontSizeCombo" );
    fontSizeCombo->setEditable( TRUE );
    fontSizeCombo->setInsertionPolicy( QComboBox::AtTop );

    Layout6->addMultiCellWidget( fontSizeCombo, 1, 1, 1, 2 );

    colorButton = new QToolButton( this, "colorButton" );
    colorButton->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, colorButton->sizePolicy().hasHeightForWidth() ) );
    colorButton->setMinimumSize( QSize( 40, 20 ) );
    colorButton->setPaletteBackgroundColor( QColor( 0, 0, 0 ) );
    colorButton->setFocusPolicy( QToolButton::TabFocus );

    Layout6->addWidget( colorButton, 2, 1 );

    RichTextFontDialogLayout->addLayout( Layout6, 0, 0 );
    Spacer14 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Expanding );
    RichTextFontDialogLayout->addItem( Spacer14, 1, 0 );

    Line1 = new QFrame( this, "Line1" );
    Line1->setFrameShape( QFrame::HLine );
    Line1->setFrameShadow( QFrame::Sunken );
    Line1->setFrameShape( QFrame::HLine );

    RichTextFontDialogLayout->addWidget( Line1, 2, 0 );

    Layout15 = new QHBoxLayout( 0, 0, 6, "Layout15"); 
    Spacer12 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout15->addItem( Spacer12 );

    okButton = new QPushButton( this, "okButton" );
    Layout15->addWidget( okButton );

    cancelButton = new QPushButton( this, "cancelButton" );
    Layout15->addWidget( cancelButton );

    RichTextFontDialogLayout->addLayout( Layout15, 3, 0 );
    languageChange();
    resize( QSize(255, 158).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( colorButton, SIGNAL( clicked() ), this, SLOT( selectColor() ) );
    connect( okButton, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( cancelButton, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( fontCombo, fontSizeCombo );
    setTabOrder( fontSizeCombo, colorButton );
    setTabOrder( colorButton, okButton );
    setTabOrder( okButton, cancelButton );

    // buddies
    TextLabel1_2->setBuddy( fontCombo );
    TextLabel2->setBuddy( fontSizeCombo );
    TextLabel1->setBuddy( colorButton );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
RichTextFontDialog::~RichTextFontDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void RichTextFontDialog::languageChange()
{
    setCaption( tr( "Font Properties" ) );
    fontCombo->clear();
    fontCombo->insertItem( tr( "default" ) );
    TextLabel1_2->setText( tr( "&Font:" ) );
    TextLabel2->setText( tr( "Rel. &Size:" ) );
    TextLabel1->setText( tr( "C&olor:" ) );
    fontSizeCombo->clear();
    fontSizeCombo->insertItem( tr( "0" ) );
    fontSizeCombo->insertItem( tr( "-4" ) );
    fontSizeCombo->insertItem( tr( "-3" ) );
    fontSizeCombo->insertItem( tr( "-2" ) );
    fontSizeCombo->insertItem( tr( "-1" ) );
    fontSizeCombo->insertItem( tr( "+1" ) );
    fontSizeCombo->insertItem( tr( "+2" ) );
    fontSizeCombo->insertItem( tr( "+3" ) );
    fontSizeCombo->insertItem( tr( "+4" ) );
    colorButton->setText( QString::null );
    okButton->setText( tr( "&OK" ) );
    cancelButton->setText( tr( "&Cancel" ) );
}

