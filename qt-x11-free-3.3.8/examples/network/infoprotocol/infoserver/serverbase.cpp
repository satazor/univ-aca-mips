/****************************************************************************
** Form implementation generated from reading ui file 'serverbase.ui'
**
** Created: Tue Oct 8 10:27:27 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "serverbase.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qtextedit.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a ServerInfoBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
ServerInfoBase::ServerInfoBase( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "ServerInfoBase" );
    ServerInfoBaseLayout = new QVBoxLayout( this, 11, 6, "ServerInfoBaseLayout"); 

    TextLabel1 = new QLabel( this, "TextLabel1" );
    TextLabel1->setAlignment( int( QLabel::AlignCenter ) );
    ServerInfoBaseLayout->addWidget( TextLabel1 );

    infoText = new QTextEdit( this, "infoText" );
    infoText->setReadOnly( TRUE );
    ServerInfoBaseLayout->addWidget( infoText );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Spacer2 );

    btnQuit = new QPushButton( this, "btnQuit" );
    btnQuit->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, btnQuit->sizePolicy().hasHeightForWidth() ) );
    Layout1->addWidget( btnQuit );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Spacer1 );
    ServerInfoBaseLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(272, 282).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
ServerInfoBase::~ServerInfoBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ServerInfoBase::languageChange()
{
    setCaption( tr( "Info Server" ) );
    TextLabel1->setText( tr( "This is a small Information Server.\n"
"Accepting client requests..." ) );
    btnQuit->setText( tr( "&Quit" ) );
}

