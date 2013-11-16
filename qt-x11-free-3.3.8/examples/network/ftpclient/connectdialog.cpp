/****************************************************************************
** Form implementation generated from reading ui file 'connectdialog.ui'
**
** Created: Tue Oct 8 10:27:18 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "connectdialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qframe.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qspinbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

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
    setSizeGripEnabled( TRUE );
    ConnectDialogLayout = new QVBoxLayout( this, 11, 6, "ConnectDialogLayout"); 

    Frame3 = new QFrame( this, "Frame3" );
    Frame3->setFrameShape( QFrame::StyledPanel );
    Frame3->setFrameShadow( QFrame::Raised );
    Frame3Layout = new QGridLayout( Frame3, 1, 1, 11, 6, "Frame3Layout"); 

    TextLabel2 = new QLabel( Frame3, "TextLabel2" );

    Frame3Layout->addWidget( TextLabel2, 0, 0 );

    TextLabel5 = new QLabel( Frame3, "TextLabel5" );

    Frame3Layout->addWidget( TextLabel5, 1, 0 );

    TextLabel6 = new QLabel( Frame3, "TextLabel6" );

    Frame3Layout->addWidget( TextLabel6, 2, 0 );

    password = new QLineEdit( Frame3, "password" );
    password->setEchoMode( QLineEdit::Password );

    Frame3Layout->addWidget( password, 2, 1 );

    username = new QLineEdit( Frame3, "username" );

    Frame3Layout->addWidget( username, 1, 1 );

    Layout21 = new QHBoxLayout( 0, 0, 6, "Layout21"); 

    host = new QLineEdit( Frame3, "host" );
    Layout21->addWidget( host );

    TextLabel3 = new QLabel( Frame3, "TextLabel3" );
    Layout21->addWidget( TextLabel3 );

    port = new QSpinBox( Frame3, "port" );
    port->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, port->sizePolicy().hasHeightForWidth() ) );
    port->setMaxValue( 1000 );
    port->setValue( 21 );
    Layout21->addWidget( port );

    Frame3Layout->addLayout( Layout21, 0, 1 );
    ConnectDialogLayout->addWidget( Frame3 );
    Spacer5 = new QSpacerItem( 31, 0, QSizePolicy::Minimum, QSizePolicy::Expanding );
    ConnectDialogLayout->addItem( Spacer5 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 
    Horizontal_Spacing2 = new QSpacerItem( 0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAccel( QKeySequence( 0 ) );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAccel( QKeySequence( 0 ) );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );
    ConnectDialogLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(384, 165).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // tab order
    setTabOrder( host, port );
    setTabOrder( port, username );
    setTabOrder( username, password );
    setTabOrder( password, buttonOk );
    setTabOrder( buttonOk, buttonCancel );

    // buddies
    TextLabel2->setBuddy( host );
    TextLabel5->setBuddy( username );
    TextLabel6->setBuddy( password );
    TextLabel3->setBuddy( port );
}

/*
 *  Destroys the object and frees any allocated resources
 */
ConnectDialog::~ConnectDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ConnectDialog::languageChange()
{
    setCaption( tr( "Choose host to connect to" ) );
    TextLabel2->setText( tr( "&Remote Host:" ) );
    TextLabel5->setText( tr( "&Username:" ) );
    TextLabel6->setText( tr( "&Password:" ) );
    password->setText( QString::null );
    username->setText( tr( "anonymous" ) );
    TextLabel3->setText( tr( "P&ort:" ) );
    buttonOk->setText( tr( "OK" ) );
    buttonCancel->setText( tr( "Cancel" ) );
}

