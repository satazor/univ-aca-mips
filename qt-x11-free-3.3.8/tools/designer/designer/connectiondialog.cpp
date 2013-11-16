/****************************************************************************
** Form implementation generated from reading ui file 'connectiondialog.ui'
**
** Created: Qua Out 9 11:04:37 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "connectiondialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "connectiontable.h"
#include "connectiondialog.ui.h"

/*
 *  Constructs a ConnectionDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ConnectionDialog::ConnectionDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ConnectionDialog" );
    ConnectionDialogLayout = new QGridLayout( this, 1, 1, 11, 6, "ConnectionDialogLayout"); 

    PushButton1 = new QPushButton( this, "PushButton1" );

    ConnectionDialogLayout->addWidget( PushButton1, 1, 1 );

    TextLabel1 = new QLabel( this, "TextLabel1" );
    TextLabel1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)4, 0, 0, TextLabel1->sizePolicy().hasHeightForWidth() ) );

    ConnectionDialogLayout->addWidget( TextLabel1, 0, 0 );

    PushButton2 = new QPushButton( this, "PushButton2" );

    ConnectionDialogLayout->addWidget( PushButton2, 2, 1 );

    PushButton3 = new QPushButton( this, "PushButton3" );

    ConnectionDialogLayout->addWidget( PushButton3, 6, 1 );

    PushButton7 = new QPushButton( this, "PushButton7" );
    PushButton7->setDefault( TRUE );

    ConnectionDialogLayout->addWidget( PushButton7, 5, 1 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    ConnectionDialogLayout->addItem( Spacer1, 4, 1 );

    buttonEditSlots = new QPushButton( this, "buttonEditSlots" );

    ConnectionDialogLayout->addWidget( buttonEditSlots, 3, 1 );

    connectionsTable = new ConnectionTable( this, "connectionsTable" );

    ConnectionDialogLayout->addMultiCellWidget( connectionsTable, 1, 6, 0, 0 );
    languageChange();
    resize( QSize(600, 365).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( addConnection() ) );
    connect( PushButton7, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( PushButton3, SIGNAL( clicked() ), this, SLOT( cancelClicked() ) );
    connect( PushButton2, SIGNAL( clicked() ), this, SLOT( deleteClicked() ) );
    connect( buttonEditSlots, SIGNAL( clicked() ), this, SLOT( editSlots() ) );

    // buddies
    TextLabel1->setBuddy( connectionsTable );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ConnectionDialog::~ConnectionDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ConnectionDialog::languageChange()
{
    setCaption( tr( "View and Edit Connections" ) );
    PushButton1->setText( tr( "&New" ) );
    TextLabel1->setText( tr( "&Connections:" ) );
    PushButton2->setText( tr( "&Delete" ) );
    PushButton3->setText( tr( "&Cancel" ) );
    PushButton7->setText( tr( "&OK" ) );
    buttonEditSlots->setText( tr( "&Edit Slots..." ) );
}

