/****************************************************************************
** Form implementation generated from reading ui file 'remotectrl.ui'
**
** Created: Tue Oct 8 10:27:41 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "remotectrl.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a RemoteCtrl as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
RemoteCtrl::RemoteCtrl( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "RemoteCtrl" );
    setSizeGripEnabled( TRUE );
    RemoteCtrlLayout = new QHBoxLayout( this, 11, 6, "RemoteCtrlLayout"); 

    Layout5 = new QVBoxLayout( 0, 0, 6, "Layout5"); 

    textToSend = new QLineEdit( this, "textToSend" );
    Layout5->addWidget( textToSend );
    Spacer5_2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout5->addItem( Spacer5_2 );
    RemoteCtrlLayout->addLayout( Layout5 );

    Layout6 = new QVBoxLayout( 0, 0, 6, "Layout6"); 

    sText = new QPushButton( this, "sText" );
    Layout6->addWidget( sText );

    sImage = new QPushButton( this, "sImage" );
    Layout6->addWidget( sImage );

    sPalette = new QPushButton( this, "sPalette" );
    Layout6->addWidget( sPalette );
    Spacer6 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout6->addItem( Spacer6 );

    quitButton = new QPushButton( this, "quitButton" );
    Layout6->addWidget( quitButton );
    RemoteCtrlLayout->addLayout( Layout6 );
    languageChange();
    resize( QSize(279, 185).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( quitButton, SIGNAL( clicked() ), this, SLOT( close() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
RemoteCtrl::~RemoteCtrl()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void RemoteCtrl::languageChange()
{
    setCaption( tr( "Remote control" ) );
    sText->setText( tr( "Send &Text" ) );
    sImage->setText( tr( "Send &Image..." ) );
    sPalette->setText( tr( "Send &Palette..." ) );
    quitButton->setText( tr( "&Quit" ) );
}

