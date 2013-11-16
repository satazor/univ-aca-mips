/****************************************************************************
** Form implementation generated from reading ui file 'statistics.ui'
**
** Created: Tue Oct 8 10:22:18 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "statistics.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qframe.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "statistics.ui.h"
/*
 *  Constructs a Statistics as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
Statistics::Statistics( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "Statistics" );
    StatisticsLayout = new QGridLayout( this, 1, 1, 11, 6, "StatisticsLayout"); 

    layout2 = new QHBoxLayout( 0, 0, 6, "layout2"); 
    spacer4_2 = new QSpacerItem( 40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout2->addItem( spacer4_2 );

    closeBtn = new QPushButton( this, "closeBtn" );
    layout2->addWidget( closeBtn );
    spacer4 = new QSpacerItem( 40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout2->addItem( spacer4 );

    StatisticsLayout->addLayout( layout2, 1, 0 );

    frame4 = new QFrame( this, "frame4" );
    frame4->setFrameShape( QFrame::GroupBoxPanel );
    frame4->setFrameShadow( QFrame::Raised );
    frame4Layout = new QGridLayout( frame4, 1, 1, 11, 6, "frame4Layout"); 

    textLabel4 = new QLabel( frame4, "textLabel4" );
    textLabel4->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    frame4Layout->addWidget( textLabel4, 0, 2 );

    textLabel5 = new QLabel( frame4, "textLabel5" );
    textLabel5->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    frame4Layout->addWidget( textLabel5, 0, 1 );

    untrWords = new QLabel( frame4, "untrWords" );
    untrWords->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    frame4Layout->addWidget( untrWords, 1, 1 );

    trWords = new QLabel( frame4, "trWords" );
    trWords->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    frame4Layout->addWidget( trWords, 1, 2 );

    textLabel1 = new QLabel( frame4, "textLabel1" );

    frame4Layout->addWidget( textLabel1, 1, 0 );

    trChars = new QLabel( frame4, "trChars" );
    trChars->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    frame4Layout->addWidget( trChars, 2, 2 );

    untrChars = new QLabel( frame4, "untrChars" );
    untrChars->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    frame4Layout->addWidget( untrChars, 2, 1 );

    textLabel3 = new QLabel( frame4, "textLabel3" );

    frame4Layout->addWidget( textLabel3, 2, 0 );

    textLabel6 = new QLabel( frame4, "textLabel6" );

    frame4Layout->addWidget( textLabel6, 3, 0 );

    trCharsSpc = new QLabel( frame4, "trCharsSpc" );
    trCharsSpc->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    frame4Layout->addWidget( trCharsSpc, 3, 2 );

    untrCharsSpc = new QLabel( frame4, "untrCharsSpc" );
    untrCharsSpc->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );

    frame4Layout->addWidget( untrCharsSpc, 3, 1 );

    StatisticsLayout->addWidget( frame4, 0, 0 );
    languageChange();
    resize( QSize(336, 164).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( closeBtn, SIGNAL( clicked() ), this, SLOT( close() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
Statistics::~Statistics()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void Statistics::languageChange()
{
    setCaption( tr( "Statistics" ) );
    closeBtn->setText( tr( "&Close" ) );
    textLabel4->setText( tr( "Translation" ) );
    textLabel5->setText( tr( "Source" ) );
    untrWords->setText( tr( "0" ) );
    trWords->setText( tr( "0" ) );
    textLabel1->setText( tr( "Words:" ) );
    trChars->setText( tr( "0" ) );
    untrChars->setText( tr( "0" ) );
    textLabel3->setText( tr( "Characters:" ) );
    textLabel6->setText( tr( "Characters (with spaces):" ) );
    trCharsSpc->setText( tr( "0" ) );
    untrCharsSpc->setText( tr( "0" ) );
}

