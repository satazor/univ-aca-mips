/****************************************************************************
** Form implementation generated from reading ui file 'sql/connect.ui'
**
** Created: Tue Oct 8 10:23:54 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "connect.h"

#include <qvariant.h>
#include <qgroupbox.h>
#include <qlineedit.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qspinbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "connect.ui.h"

/*
 *  Constructs a ConnectDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ConnectDialog::ConnectDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ConnectDialog" );
    ConnectDialogLayout = new QVBoxLayout( this, 11, 6, "ConnectDialogLayout"); 

    GroupBox3 = new QGroupBox( this, "GroupBox3" );
    GroupBox3->setColumnLayout(0, Qt::Vertical );
    GroupBox3->layout()->setSpacing( 6 );
    GroupBox3->layout()->setMargin( 11 );
    GroupBox3Layout = new QGridLayout( GroupBox3->layout() );
    GroupBox3Layout->setAlignment( Qt::AlignTop );

    editDatabase = new QLineEdit( GroupBox3, "editDatabase" );

    GroupBox3Layout->addWidget( editDatabase, 1, 1 );

    TextLabel3 = new QLabel( GroupBox3, "TextLabel3" );

    GroupBox3Layout->addWidget( TextLabel3, 1, 0 );

    editPassword = new QLineEdit( GroupBox3, "editPassword" );
    editPassword->setEchoMode( QLineEdit::Password );

    GroupBox3Layout->addWidget( editPassword, 3, 1 );

    TextLabel4 = new QLabel( GroupBox3, "TextLabel4" );

    GroupBox3Layout->addWidget( TextLabel4, 2, 0 );

    TextLabel4_2 = new QLabel( GroupBox3, "TextLabel4_2" );

    GroupBox3Layout->addWidget( TextLabel4_2, 3, 0 );

    comboDriver = new QComboBox( FALSE, GroupBox3, "comboDriver" );

    GroupBox3Layout->addWidget( comboDriver, 0, 1 );

    editUsername = new QLineEdit( GroupBox3, "editUsername" );

    GroupBox3Layout->addWidget( editUsername, 2, 1 );

    editHostname = new QLineEdit( GroupBox3, "editHostname" );

    GroupBox3Layout->addWidget( editHostname, 4, 1 );

    TextLabel5 = new QLabel( GroupBox3, "TextLabel5" );

    GroupBox3Layout->addWidget( TextLabel5, 4, 0 );

    TextLabel5_2 = new QLabel( GroupBox3, "TextLabel5_2" );

    GroupBox3Layout->addWidget( TextLabel5_2, 5, 0 );

    portSpinBox = new QSpinBox( GroupBox3, "portSpinBox" );
    portSpinBox->setMaxValue( 65535 );
    portSpinBox->setMinValue( -1 );
    portSpinBox->setValue( -1 );

    GroupBox3Layout->addWidget( portSpinBox, 5, 1 );

    TextLabel2 = new QLabel( GroupBox3, "TextLabel2" );

    GroupBox3Layout->addWidget( TextLabel2, 0, 0 );
    ConnectDialogLayout->addWidget( GroupBox3 );

    Layout25 = new QHBoxLayout( 0, 0, 6, "Layout25"); 
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout25->addItem( Spacer1 );

    PushButton1 = new QPushButton( this, "PushButton1" );
    PushButton1->setDefault( TRUE );
    Layout25->addWidget( PushButton1 );

    PushButton2 = new QPushButton( this, "PushButton2" );
    Layout25->addWidget( PushButton2 );
    ConnectDialogLayout->addLayout( Layout25 );
    languageChange();
    resize( QSize(303, 247).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( PushButton2, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( comboDriver, editDatabase );
    setTabOrder( editDatabase, editUsername );
    setTabOrder( editUsername, editPassword );
    setTabOrder( editPassword, editHostname );
    setTabOrder( editHostname, portSpinBox );
    setTabOrder( portSpinBox, PushButton1 );
    setTabOrder( PushButton1, PushButton2 );

    // buddies
    TextLabel4->setBuddy( editUsername );
    TextLabel4_2->setBuddy( editPassword );
    TextLabel5->setBuddy( editHostname );
    TextLabel5_2->setBuddy( portSpinBox );
    TextLabel2->setBuddy( comboDriver );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ConnectDialog::~ConnectDialog()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ConnectDialog::languageChange()
{
    setCaption( tr( "Connect..." ) );
    GroupBox3->setTitle( tr( "Connection settings" ) );
    TextLabel3->setText( tr( "Database Name:" ) );
    TextLabel4->setText( tr( "&Username:" ) );
    TextLabel4_2->setText( tr( "&Password:" ) );
    TextLabel5->setText( tr( "&Hostname:" ) );
    TextLabel5_2->setText( tr( "P&ort:" ) );
    portSpinBox->setSpecialValueText( tr( "Default" ) );
    TextLabel2->setText( tr( "D&river" ) );
    PushButton1->setText( tr( "&OK" ) );
    PushButton2->setText( tr( "&Cancel" ) );
}

