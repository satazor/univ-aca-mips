/****************************************************************************
** Form implementation generated from reading ui file 'helpdemobase.ui'
**
** Created: Tue Oct 8 10:24:27 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "helpdemobase.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qframe.h>
#include <qcheckbox.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qtextedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a HelpDemoBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
HelpDemoBase::HelpDemoBase( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "HelpDemoBase" );
    HelpDemoBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "HelpDemoBaseLayout"); 

    layout2 = new QHBoxLayout( 0, 0, 6, "layout2"); 
    spacer1 = new QSpacerItem( 301, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout2->addItem( spacer1 );

    closeButton = new QPushButton( this, "closeButton" );
    closeButton->setAutoDefault( TRUE );
    layout2->addWidget( closeButton );

    HelpDemoBaseLayout->addLayout( layout2, 3, 0 );

    frame5 = new QFrame( this, "frame5" );
    frame5->setFrameShape( QFrame::StyledPanel );
    frame5->setFrameShadow( QFrame::Sunken );
    frame5Layout = new QGridLayout( frame5, 1, 1, 11, 6, "frame5Layout"); 

    openQAButton = new QPushButton( frame5, "openQAButton" );
    openQAButton->setAutoDefault( TRUE );

    frame5Layout->addMultiCellWidget( openQAButton, 1, 1, 0, 1 );

    displayButton = new QPushButton( frame5, "displayButton" );
    displayButton->setAutoDefault( TRUE );

    frame5Layout->addWidget( displayButton, 4, 3 );

    checkHide = new QCheckBox( frame5, "checkHide" );

    frame5Layout->addMultiCellWidget( checkHide, 3, 3, 0, 3 );

    closeQAButton = new QPushButton( frame5, "closeQAButton" );
    closeQAButton->setAutoDefault( TRUE );

    frame5Layout->addMultiCellWidget( closeQAButton, 1, 1, 2, 3 );

    textLabel3 = new QLabel( frame5, "textLabel3" );

    frame5Layout->addWidget( textLabel3, 4, 0 );

    leFileName = new QLineEdit( frame5, "leFileName" );

    frame5Layout->addMultiCellWidget( leFileName, 4, 4, 1, 2 );

    checkOnlyExampleDoc = new QCheckBox( frame5, "checkOnlyExampleDoc" );

    frame5Layout->addMultiCellWidget( checkOnlyExampleDoc, 2, 2, 0, 3 );

    HelpDemoBaseLayout->addWidget( frame5, 1, 0 );

    textEdit1 = new QTextEdit( this, "textEdit1" );
    textEdit1->setWordWrap( QTextEdit::WidgetWidth );
    textEdit1->setReadOnly( TRUE );

    HelpDemoBaseLayout->addWidget( textEdit1, 0, 0 );
    spacer2 = new QSpacerItem( 31, 30, QSizePolicy::Minimum, QSizePolicy::Expanding );
    HelpDemoBaseLayout->addItem( spacer2, 2, 0 );
    languageChange();
    resize( QSize(315, 346).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( closeButton, SIGNAL( clicked() ), this, SLOT( close() ) );
    connect( openQAButton, SIGNAL( clicked() ), this, SLOT( openAssistant() ) );
    connect( closeQAButton, SIGNAL( clicked() ), this, SLOT( closeAssistant() ) );
    connect( displayButton, SIGNAL( clicked() ), this, SLOT( displayPage() ) );
    connect( checkOnlyExampleDoc, SIGNAL( toggled(bool) ), this, SLOT( setAssistantArguments() ) );
    connect( checkHide, SIGNAL( toggled(bool) ), this, SLOT( setAssistantArguments() ) );

    // buddies
    textLabel3->setBuddy( leFileName );
}

/*
 *  Destroys the object and frees any allocated resources
 */
HelpDemoBase::~HelpDemoBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void HelpDemoBase::languageChange()
{
    setCaption( tr( "Help Example" ) );
    closeButton->setText( tr( "&Close" ) );
    closeButton->setAccel( QKeySequence( tr( "Alt+C" ) ) );
    openQAButton->setText( tr( "&Open Assistant" ) );
    openQAButton->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    displayButton->setText( tr( "&Display" ) );
    displayButton->setAccel( QKeySequence( tr( "Alt+D" ) ) );
    checkHide->setText( tr( "&Hide Sidebar when Opening" ) );
    checkHide->setAccel( QKeySequence( tr( "Alt+H" ) ) );
    closeQAButton->setText( tr( "C&lose Assistant" ) );
    closeQAButton->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    textLabel3->setText( tr( "&Filename:" ) );
    checkOnlyExampleDoc->setText( tr( "Run Qt Assistant customized for HelpDemo" ) );
    checkOnlyExampleDoc->setAccel( QKeySequence( QString::null ) );
    textEdit1->setText( tr( "<p>\n"
"This example demonstrates how Qt Assistant can be used as a help system for your application. If the button <i>\"Run Qt Assistant customized for HelpDemo\"</i> is checked Qt Assistant will be customized for this application.\n"
"</p>" ) );
}

void HelpDemoBase::displayPage()
{
    qWarning( "HelpDemoBase::displayPage(): Not implemented yet" );
}

void HelpDemoBase::openAssistant()
{
    qWarning( "HelpDemoBase::openAssistant(): Not implemented yet" );
}

void HelpDemoBase::closeAssistant()
{
    qWarning( "HelpDemoBase::closeAssistant(): Not implemented yet" );
}

void HelpDemoBase::setAssistantArguments()
{
    qWarning( "HelpDemoBase::setAssistantArguments(): Not implemented yet" );
}

