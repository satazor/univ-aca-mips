/****************************************************************************
** Form implementation generated from reading ui file 'extension.ui'
**
** Created: Tue Oct 8 10:24:18 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "extension.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qbuttongroup.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "extension.ui.h"
/*
 *  Constructs a Extension as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
Extension::Extension( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "Extension" );
    ExtensionLayout = new QVBoxLayout( this, 11, 6, "ExtensionLayout"); 

    Layout6 = new QHBoxLayout( 0, 0, 6, "Layout6"); 

    TextLabel1 = new QLabel( this, "TextLabel1" );
    Layout6->addWidget( TextLabel1 );

    logfileLineEdit = new QLineEdit( this, "logfileLineEdit" );
    Layout6->addWidget( logfileLineEdit );

    browsePushButton = new QPushButton( this, "browsePushButton" );
    Layout6->addWidget( browsePushButton );
    ExtensionLayout->addLayout( Layout6 );

    ButtonGroup1 = new QButtonGroup( this, "ButtonGroup1" );
    ButtonGroup1->setColumnLayout(0, Qt::Vertical );
    ButtonGroup1->layout()->setSpacing( 6 );
    ButtonGroup1->layout()->setMargin( 11 );
    ButtonGroup1Layout = new QHBoxLayout( ButtonGroup1->layout() );
    ButtonGroup1Layout->setAlignment( Qt::AlignTop );

    Layout7 = new QHBoxLayout( 0, 0, 0, "Layout7"); 

    logActionsCheckBox = new QCheckBox( ButtonGroup1, "logActionsCheckBox" );
    logActionsCheckBox->setChecked( TRUE );
    Layout7->addWidget( logActionsCheckBox );

    logErrorsCheckBox = new QCheckBox( ButtonGroup1, "logErrorsCheckBox" );
    logErrorsCheckBox->setChecked( TRUE );
    Layout7->addWidget( logErrorsCheckBox );
    ButtonGroup1Layout->addLayout( Layout7 );
    ExtensionLayout->addWidget( ButtonGroup1 );
    languageChange();
    resize( QSize(258, 128).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // buddies
    TextLabel1->setBuddy( logfileLineEdit );
}

/*
 *  Destroys the object and frees any allocated resources
 */
Extension::~Extension()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Extension::languageChange()
{
    setCaption( tr( "Extension" ) );
    TextLabel1->setText( tr( "Log &File" ) );
    browsePushButton->setText( tr( "&Browse..." ) );
    ButtonGroup1->setTitle( tr( "Log What?" ) );
    logActionsCheckBox->setText( tr( "&Actions" ) );
    logErrorsCheckBox->setText( tr( "&Errors" ) );
}

