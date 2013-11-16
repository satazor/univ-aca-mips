/****************************************************************************
** Form implementation generated from reading ui file 'finddialog.ui'
**
** Created: Tue Oct 8 10:21:55 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "finddialog.h"

#include <qvariant.h>
#include <qstatusbar.h>
#include <qtextbrowser.h>
#include <qpushbutton.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "mainwindow.h"
#include "tabbedbrowser.h"
#include "finddialog.ui.h"

/*
 *  Constructs a FindDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
FindDialog::FindDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "FindDialog" );
    FindDialogLayout = new QVBoxLayout( this, 0, 6, "FindDialogLayout"); 

    Layout5 = new QGridLayout( 0, 1, 1, 11, 6, "Layout5"); 

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

    Layout5->addMultiCellWidget( ButtonGroup2, 1, 2, 1, 1 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    TextLabel1 = new QLabel( this, "TextLabel1" );
    Layout1->addWidget( TextLabel1 );

    comboFind = new QComboBox( FALSE, this, "comboFind" );
    comboFind->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, comboFind->sizePolicy().hasHeightForWidth() ) );
    comboFind->setEditable( TRUE );
    comboFind->setDuplicatesEnabled( FALSE );
    Layout1->addWidget( comboFind );

    Layout5->addMultiCellLayout( Layout1, 0, 0, 0, 1 );
    Spacer2 = new QSpacerItem( 31, 0, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout5->addItem( Spacer2, 2, 2 );

    PushButton2 = new QPushButton( this, "PushButton2" );

    Layout5->addWidget( PushButton2, 1, 2 );

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

    Layout5->addMultiCellWidget( ButtonGroup1, 1, 2, 0, 0 );

    PushButton1 = new QPushButton( this, "PushButton1" );
    PushButton1->setDefault( TRUE );

    Layout5->addWidget( PushButton1, 0, 2 );
    FindDialogLayout->addLayout( Layout5 );
    languageChange();
    resize( QSize(362, 156).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( doFind() ) );
    connect( PushButton2, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( comboFind, checkWords );
    setTabOrder( checkWords, checkCase );
    setTabOrder( checkCase, radioForward );
    setTabOrder( radioForward, radioBackward );
    setTabOrder( radioBackward, PushButton1 );
    setTabOrder( PushButton1, PushButton2 );

    // buddies
    TextLabel1->setBuddy( comboFind );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
FindDialog::~FindDialog()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void FindDialog::languageChange()
{
    setCaption( tr( "Qt Assistant - Find Text" ) );
    ButtonGroup2->setTitle( tr( "&Direction" ) );
    radioForward->setText( tr( "Fo&rward" ) );
    radioBackward->setText( tr( "&Backward" ) );
    TextLabel1->setText( tr( "F&ind:" ) );
    PushButton2->setText( tr( "C&lose" ) );
    PushButton2->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    ButtonGroup1->setTitle( tr( "&Options" ) );
    checkWords->setText( tr( "&Whole words only" ) );
    checkCase->setText( tr( "&Case sensitive" ) );
    PushButton1->setText( tr( "&Find" ) );
    PushButton1->setAccel( QKeySequence( tr( "Alt+F" ) ) );
}

