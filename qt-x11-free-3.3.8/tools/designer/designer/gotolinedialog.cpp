/****************************************************************************
** Form implementation generated from reading ui file 'gotolinedialog.ui'
**
** Created: Tue Oct 8 10:19:44 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "gotolinedialog.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qspinbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "../interfaces/editorinterface.h"
#include "gotolinedialog.ui.h"

/*
 *  Constructs a GotoLineDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
GotoLineDialog::GotoLineDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "GotoLineDialog" );
    GotoLineDialogLayout = new QGridLayout( this, 1, 1, 11, 6, "GotoLineDialogLayout"); 

    TextLabel1 = new QLabel( this, "TextLabel1" );

    GotoLineDialogLayout->addWidget( TextLabel1, 0, 0 );

    spinLine = new QSpinBox( this, "spinLine" );
    spinLine->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, spinLine->sizePolicy().hasHeightForWidth() ) );

    GotoLineDialogLayout->addWidget( spinLine, 0, 1 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Spacer2 );

    PushButton2 = new QPushButton( this, "PushButton2" );
    PushButton2->setDefault( TRUE );
    Layout1->addWidget( PushButton2 );

    PushButton1 = new QPushButton( this, "PushButton1" );
    Layout1->addWidget( PushButton1 );

    GotoLineDialogLayout->addMultiCellLayout( Layout1, 2, 2, 0, 1 );
    Spacer3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    GotoLineDialogLayout->addItem( Spacer3, 1, 1 );
    languageChange();
    resize( QSize(243, 85).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( PushButton2, SIGNAL( clicked() ), this, SLOT( gotoLine() ) );

    // buddies
    TextLabel1->setBuddy( spinLine );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
GotoLineDialog::~GotoLineDialog()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void GotoLineDialog::languageChange()
{
    setCaption( tr( "Goto Line" ) );
    TextLabel1->setText( tr( "&Line:" ) );
    PushButton2->setText( tr( "&Goto" ) );
    PushButton1->setText( tr( "&Close" ) );
}

