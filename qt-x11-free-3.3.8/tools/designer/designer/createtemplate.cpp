/****************************************************************************
** Form implementation generated from reading ui file 'createtemplate.ui'
**
** Created: Tue Oct 8 10:19:41 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "createtemplate.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlistbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a CreateTemplate as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
CreateTemplate::CreateTemplate( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "CreateTemplate" );
    setSizeGripEnabled( TRUE );
    CreateTemplateLayout = new QGridLayout( this, 1, 1, 11, 6, "CreateTemplateLayout"); 

    TextLabel1 = new QLabel( this, "TextLabel1" );

    CreateTemplateLayout->addWidget( TextLabel1, 0, 0 );

    editName = new QLineEdit( this, "editName" );

    CreateTemplateLayout->addWidget( editName, 0, 1 );

    listClass = new QListBox( this, "listClass" );

    CreateTemplateLayout->addMultiCellWidget( listClass, 1, 2, 1, 1 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Spacer1 );

    buttonCreate = new QPushButton( this, "buttonCreate" );
    buttonCreate->setDefault( TRUE );
    Layout1->addWidget( buttonCreate );

    PushButton1 = new QPushButton( this, "PushButton1" );
    Layout1->addWidget( PushButton1 );

    CreateTemplateLayout->addMultiCellLayout( Layout1, 3, 3, 0, 1 );

    TextLabel2 = new QLabel( this, "TextLabel2" );

    CreateTemplateLayout->addWidget( TextLabel2, 1, 0 );
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    CreateTemplateLayout->addItem( Spacer2, 2, 0 );
    languageChange();
    resize( QSize(347, 248).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonCreate, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // buddies
    TextLabel1->setBuddy( editName );
    TextLabel2->setBuddy( listClass );
}

/*
 *  Destroys the object and frees any allocated resources
 */
CreateTemplate::~CreateTemplate()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void CreateTemplate::languageChange()
{
    setCaption( tr( "Create Template" ) );
    TextLabel1->setText( tr( "Template &Name:" ) );
    QToolTip::add( editName, tr( "Name of the new template" ) );
    QWhatsThis::add( editName, tr( "Enter the name of the new template" ) );
    QToolTip::add( listClass, tr( "Class of the new template" ) );
    QWhatsThis::add( listClass, tr( "Enter the name of the class which should be used as the template's base class" ) );
    buttonCreate->setText( tr( "C&reate" ) );
    QWhatsThis::add( buttonCreate, tr( "Creates the new template" ) );
    PushButton1->setText( tr( "&Cancel" ) );
    QWhatsThis::add( PushButton1, tr( "Closes the Dialog" ) );
    TextLabel2->setText( tr( "&Baseclass for Template:" ) );
}

