/****************************************************************************
** Form implementation generated from reading ui file 'dialogform.ui'
**
** Created: Tue Oct 8 10:24:18 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "dialogform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "extension.h"
#include "dialogform.ui.h"
/*
 *  Constructs a DialogForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
DialogForm::DialogForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "DialogForm" );
    DialogFormLayout = new QVBoxLayout( this, 11, 6, "DialogFormLayout"); 

    Layout7 = new QHBoxLayout( 0, 0, 6, "Layout7"); 

    Layout5 = new QVBoxLayout( 0, 0, 6, "Layout5"); 

    Layout1 = new QVBoxLayout( 0, 0, 6, "Layout1"); 

    sessionsCheckBox = new QCheckBox( this, "sessionsCheckBox" );
    sessionsCheckBox->setChecked( TRUE );
    Layout1->addWidget( sessionsCheckBox );

    loggingCheckBox = new QCheckBox( this, "loggingCheckBox" );
    Layout1->addWidget( loggingCheckBox );
    Layout5->addLayout( Layout1 );
    Spacer2 = new QSpacerItem( 20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout5->addItem( Spacer2 );

    Layout4 = new QHBoxLayout( 0, 0, 6, "Layout4"); 

    detailsPushButton = new QPushButton( this, "detailsPushButton" );
    Layout4->addWidget( detailsPushButton );
    Spacer4 = new QSpacerItem( 0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout4->addItem( Spacer4 );
    Layout5->addLayout( Layout4 );
    Layout7->addLayout( Layout5 );

    Layout3 = new QVBoxLayout( 0, 0, 6, "Layout3"); 

    okPushButton = new QPushButton( this, "okPushButton" );
    okPushButton->setDefault( TRUE );
    Layout3->addWidget( okPushButton );

    cancelPushButton = new QPushButton( this, "cancelPushButton" );
    Layout3->addWidget( cancelPushButton );
    Spacer3 = new QSpacerItem( 20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout3->addItem( Spacer3 );
    Layout7->addLayout( Layout3 );
    DialogFormLayout->addLayout( Layout7 );
    languageChange();
    resize( QSize(288, 145).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( okPushButton, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( cancelPushButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( detailsPushButton, SIGNAL( clicked() ), this, SLOT( toggleDetails() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
DialogForm::~DialogForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void DialogForm::languageChange()
{
    setCaption( tr( "Dialog" ) );
    sessionsCheckBox->setText( tr( "Save/Restore &Sessions" ) );
    loggingCheckBox->setText( tr( "&Log Activities" ) );
    detailsPushButton->setText( tr( "&Details >>>" ) );
    okPushButton->setText( tr( "OK" ) );
    cancelPushButton->setText( tr( "Cancel" ) );
}

