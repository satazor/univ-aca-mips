/****************************************************************************
** Form implementation generated from reading ui file 'clientbase.ui'
**
** Created: Tue Oct 8 10:27:23 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "clientbase.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qsplitter.h>
#include <qlistbox.h>
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

    Layout15 = new QHBoxLayout( 0, 0, 6, "Layout15"); 

    btnConnect = new QPushButton( this, "btnConnect" );
    Layout15->addWidget( btnConnect );

    TextLabel1 = new QLabel( this, "TextLabel1" );
    Layout15->addWidget( TextLabel1 );

    edHost = new QLineEdit( this, "edHost" );
    edHost->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 1, 0, edHost->sizePolicy().hasHeightForWidth() ) );
    Layout15->addWidget( edHost );

    TextLabel2_2 = new QLabel( this, "TextLabel2_2" );
    Layout15->addWidget( TextLabel2_2 );

    edPort = new QLineEdit( this, "edPort" );
    Layout15->addWidget( edPort );
    ClientInfoBaseLayout->addLayout( Layout15 );

    Splitter4 = new QSplitter( this, "Splitter4" );
    Splitter4->setOrientation( QSplitter::Vertical );

    QWidget* privateLayoutWidget = new QWidget( Splitter4, "Layout16" );
    Layout16 = new QVBoxLayout( privateLayoutWidget, 0, 6, "Layout16"); 

    Layout14 = new QHBoxLayout( 0, 0, 6, "Layout14"); 

    btnBack = new QPushButton( privateLayoutWidget, "btnBack" );
    btnBack->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, btnBack->sizePolicy().hasHeightForWidth() ) );
    Layout14->addWidget( btnBack );

    infoPath = new QLabel( privateLayoutWidget, "infoPath" );
    infoPath->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)5, 0, 0, infoPath->sizePolicy().hasHeightForWidth() ) );
    Layout14->addWidget( infoPath );
    Layout16->addLayout( Layout14 );

    infoList = new QListBox( privateLayoutWidget, "infoList" );
    Layout16->addWidget( infoList );

    QWidget* privateLayoutWidget_2 = new QWidget( Splitter4, "Layout3" );
    Layout3 = new QVBoxLayout( privateLayoutWidget_2, 0, 6, "Layout3"); 

    TextLabel2 = new QLabel( privateLayoutWidget_2, "TextLabel2" );
    Layout3->addWidget( TextLabel2 );

    infoText = new QTextEdit( privateLayoutWidget_2, "infoText" );
    infoText->setReadOnly( TRUE );
    Layout3->addWidget( infoText );
    ClientInfoBaseLayout->addWidget( Splitter4 );

    Layout12 = new QHBoxLayout( 0, 0, 6, "Layout12"); 
    Spacer10 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout12->addItem( Spacer10 );

    btnQuit = new QPushButton( this, "btnQuit" );
    btnQuit->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)0, 0, 0, btnQuit->sizePolicy().hasHeightForWidth() ) );
    Layout12->addWidget( btnQuit );
    Spacer9 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout12->addItem( Spacer9 );
    ClientInfoBaseLayout->addLayout( Layout12 );
    languageChange();
    resize( QSize(384, 488).expandedTo(minimumSizeHint()) );
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
    setCaption( tr( "Info Client" ) );
    btnConnect->setText( tr( "&Connect" ) );
    TextLabel1->setText( tr( "Host:" ) );
    edHost->setText( QString::null );
    TextLabel2_2->setText( tr( "Port:" ) );
    btnBack->setText( tr( "&Back" ) );
    QToolTip::add( btnBack, tr( "go one step back" ) );
    infoPath->setText( tr( "/" ) );
    QToolTip::add( infoPath, tr( "current path" ) );
    QToolTip::add( infoList, tr( "double click to open" ) );
    TextLabel2->setText( tr( "Data:" ) );
    btnQuit->setText( tr( "&Quit" ) );
}

