/****************************************************************************
** Form implementation generated from reading ui file 'replacedialog.ui'
**
** Created: Tue Oct 8 10:19:44 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "replacedialog.h"

#include <qvariant.h>
#include <qlineedit.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qbuttongroup.h>
#include <qcheckbox.h>
#include <qradiobutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "../interfaces/editorinterface.h"
#include "replacedialog.ui.h"

/*
 *  Constructs a ReplaceDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ReplaceDialog::ReplaceDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ReplaceDialog" );
    ReplaceDialogLayout = new QGridLayout( this, 1, 1, 11, 6, "ReplaceDialogLayout"); 

    Layout3 = new QGridLayout( 0, 1, 1, 0, 6, "Layout3"); 

    TextLabel2 = new QLabel( this, "TextLabel2" );

    Layout3->addWidget( TextLabel2, 1, 0 );

    TextLabel1 = new QLabel( this, "TextLabel1" );

    Layout3->addWidget( TextLabel1, 0, 0 );

    comboFind = new QComboBox( FALSE, this, "comboFind" );
    comboFind->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, comboFind->sizePolicy().hasHeightForWidth() ) );
    comboFind->setEditable( TRUE );

    Layout3->addWidget( comboFind, 0, 1 );

    comboReplace = new QComboBox( FALSE, this, "comboReplace" );
    comboReplace->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, comboReplace->sizePolicy().hasHeightForWidth() ) );
    comboReplace->setEditable( TRUE );

    Layout3->addWidget( comboReplace, 1, 1 );

    ReplaceDialogLayout->addMultiCellLayout( Layout3, 0, 0, 0, 1 );

    Layout5 = new QHBoxLayout( 0, 0, 6, "Layout5"); 
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout5->addItem( Spacer1 );

    buttonReplace = new QPushButton( this, "buttonReplace" );
    buttonReplace->setDefault( TRUE );
    Layout5->addWidget( buttonReplace );

    buttonReplaceAll = new QPushButton( this, "buttonReplaceAll" );
    Layout5->addWidget( buttonReplaceAll );

    PushButton2 = new QPushButton( this, "PushButton2" );
    Layout5->addWidget( PushButton2 );

    ReplaceDialogLayout->addMultiCellLayout( Layout5, 2, 2, 0, 1 );

    ButtonGroup1 = new QButtonGroup( this, "ButtonGroup1" );
    ButtonGroup1->setColumnLayout(0, Qt::Vertical );
    ButtonGroup1->layout()->setSpacing( 6 );
    ButtonGroup1->layout()->setMargin( 11 );
    ButtonGroup1Layout = new QVBoxLayout( ButtonGroup1->layout() );
    ButtonGroup1Layout->setAlignment( Qt::AlignTop );

    checkWords = new QCheckBox( ButtonGroup1, "checkWords" );
    ButtonGroup1Layout->addWidget( checkWords );

    checkCase = new QCheckBox( ButtonGroup1, "checkCase" );
    ButtonGroup1Layout->addWidget( checkCase );

    checkBegin = new QCheckBox( ButtonGroup1, "checkBegin" );
    ButtonGroup1Layout->addWidget( checkBegin );

    ReplaceDialogLayout->addWidget( ButtonGroup1, 1, 0 );

    ButtonGroup2 = new QButtonGroup( this, "ButtonGroup2" );
    ButtonGroup2->setColumnLayout(0, Qt::Vertical );
    ButtonGroup2->layout()->setSpacing( 6 );
    ButtonGroup2->layout()->setMargin( 11 );
    ButtonGroup2Layout = new QVBoxLayout( ButtonGroup2->layout() );
    ButtonGroup2Layout->setAlignment( Qt::AlignTop );

    radioForward = new QRadioButton( ButtonGroup2, "radioForward" );
    radioForward->setChecked( TRUE );
    ButtonGroup2Layout->addWidget( radioForward );

    radioBackward = new QRadioButton( ButtonGroup2, "radioBackward" );
    ButtonGroup2Layout->addWidget( radioBackward );

    ReplaceDialogLayout->addWidget( ButtonGroup2, 1, 1 );
    languageChange();
    resize( QSize(286, 217).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonReplace, SIGNAL( clicked() ), this, SLOT( doReplace() ) );
    connect( buttonReplaceAll, SIGNAL( clicked() ), this, SLOT( doReplaceAll() ) );
    connect( PushButton2, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( comboFind, comboReplace );
    setTabOrder( comboReplace, checkWords );
    setTabOrder( checkWords, checkCase );
    setTabOrder( checkCase, checkBegin );
    setTabOrder( checkBegin, radioForward );
    setTabOrder( radioForward, radioBackward );
    setTabOrder( radioBackward, buttonReplace );
    setTabOrder( buttonReplace, buttonReplaceAll );
    setTabOrder( buttonReplaceAll, PushButton2 );

    // buddies
    TextLabel2->setBuddy( comboReplace );
    TextLabel1->setBuddy( comboFind );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ReplaceDialog::~ReplaceDialog()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ReplaceDialog::languageChange()
{
    setCaption( tr( "Replace Text" ) );
    TextLabel2->setText( tr( "R&eplace" ) );
    TextLabel1->setText( tr( "&Find" ) );
    buttonReplace->setText( tr( "&Replace" ) );
    buttonReplaceAll->setText( tr( "Replace &All" ) );
    PushButton2->setText( tr( "&Close" ) );
    ButtonGroup1->setTitle( tr( "Options" ) );
    checkWords->setText( tr( "&Whole words only" ) );
    checkCase->setText( tr( "Case &sensitive" ) );
    checkBegin->setText( tr( "Start at &Beginning" ) );
    ButtonGroup2->setTitle( tr( "Direction" ) );
    radioForward->setText( tr( "Forwar&d" ) );
    radioBackward->setText( tr( "Bac&kward" ) );
}

