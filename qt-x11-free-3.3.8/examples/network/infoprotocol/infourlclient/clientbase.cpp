/****************************************************************************
** Form implementation generated from reading ui file 'clientbase.ui'
**
** Created: Tue Oct 8 10:27:30 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "clientbase.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qtextedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a ClientInfoBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
ClientInfoBase::ClientInfoBase( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "ClientInfoBase" );
    ClientInfoBaseLayout = new QVBoxLayout( this, 11, 6, "ClientInfoBaseLayout"); 

    Layout5 = new QHBoxLayout( 0, 0, 6, "Layout5"); 

    btnOpen = new QPushButton( this, "btnOpen" );
    btnOpen->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, btnOpen->sizePolicy().hasHeightForWidth() ) );
    btnOpen->setDefault( TRUE );
    Layout5->addWidget( btnOpen );
    Spacer4 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout5->addItem( Spacer4 );

    btnQuit = new QPushButton( this, "btnQuit" );
    btnQuit->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, btnQuit->sizePolicy().hasHeightForWidth() ) );
    Layout5->addWidget( btnQuit );
    ClientInfoBaseLayout->addLayout( Layout5 );

    TextLabel2 = new QLabel( this, "TextLabel2" );
    ClientInfoBaseLayout->addWidget( TextLabel2 );

    infoText = new QTextEdit( this, "infoText" );
    infoText->setReadOnly( TRUE );
    ClientInfoBaseLayout->addWidget( infoText );
    languageChange();
    resize( QSize(325, 279).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
}

/*
 *  Destroys the object and frees any allocated resources
 */
ClientInfoBase::~ClientInfoBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ClientInfoBase::languageChange()
{
    setCaption( tr( "Info Client Protocol" ) );
    btnOpen->setText( tr( "&Open" ) );
    QToolTip::add( btnOpen, tr( "open data" ) );
    btnQuit->setText( tr( "&Quit" ) );
    TextLabel2->setText( tr( "Data:" ) );
}

