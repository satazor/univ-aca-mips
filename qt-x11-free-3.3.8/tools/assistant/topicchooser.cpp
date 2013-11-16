/****************************************************************************
** Form implementation generated from reading ui file 'topicchooser.ui'
**
** Created: Tue Oct 8 10:21:54 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "topicchooser.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qlistbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a TopicChooserBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
TopicChooserBase::TopicChooserBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "TopicChooserBase" );
    setSizeGripEnabled( TRUE );
    TopicChooserBaseLayout = new QVBoxLayout( this, 11, 6, "TopicChooserBaseLayout"); 

    label = new QLabel( this, "label" );
    TopicChooserBaseLayout->addWidget( label );

    listbox = new QListBox( this, "listbox" );
    TopicChooserBaseLayout->addWidget( listbox );

    Layout16 = new QHBoxLayout( 0, 0, 6, "Layout16"); 
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout16->addItem( Horizontal_Spacing2 );

    buttonDisplay = new QPushButton( this, "buttonDisplay" );
    buttonDisplay->setAutoDefault( TRUE );
    buttonDisplay->setDefault( TRUE );
    Layout16->addWidget( buttonDisplay );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout16->addWidget( buttonCancel );
    TopicChooserBaseLayout->addLayout( Layout16 );
    languageChange();
    resize( QSize(391, 223).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonDisplay, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( listbox, SIGNAL( doubleClicked(QListBoxItem*) ), this, SLOT( accept() ) );
    connect( listbox, SIGNAL( returnPressed(QListBoxItem*) ), this, SLOT( accept() ) );

    // buddies
    label->setBuddy( listbox );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
TopicChooserBase::~TopicChooserBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void TopicChooserBase::languageChange()
{
    setCaption( tr( "Choose Topic" ) );
    QWhatsThis::add( this, tr( "Select a topic from the list and click the <b>Display</b>-button to open the online help." ) );
    label->setText( tr( "&Topics" ) );
    QWhatsThis::add( listbox, tr( "Displays a list of available help topics for the keyword." ) );
    buttonDisplay->setText( tr( "&Display" ) );
    QWhatsThis::add( buttonDisplay, tr( "Open the topic selected in the list." ) );
    buttonCancel->setText( tr( "&Close" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the Dialog." ) );
}

void TopicChooserBase::init()
{
}

void TopicChooserBase::destroy()
{
}

