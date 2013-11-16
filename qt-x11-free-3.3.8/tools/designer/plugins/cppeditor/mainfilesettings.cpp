/****************************************************************************
** Form implementation generated from reading ui file 'mainfilesettings.ui'
**
** Created: Tue Oct 8 10:21:21 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "mainfilesettings.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlistbox.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "mainfilesettings.ui.h"
/*
 *  Constructs a CppMainFile as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
CppMainFile::CppMainFile( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "CppMainFile" );
    CppMainFileLayout = new QGridLayout( this, 1, 1, 11, 6, "CppMainFileLayout"); 

    TextLabel1 = new QLabel( this, "TextLabel1" );

    CppMainFileLayout->addWidget( TextLabel1, 0, 0 );

    editFileName = new QLineEdit( this, "editFileName" );

    CppMainFileLayout->addWidget( editFileName, 0, 1 );

    TextLabel2 = new QLabel( this, "TextLabel2" );

    CppMainFileLayout->addWidget( TextLabel2, 1, 0 );

    listForms = new QListBox( this, "listForms" );

    CppMainFileLayout->addMultiCellWidget( listForms, 2, 2, 0, 1 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAccel( QKeySequence( 4144 ) );
    buttonHelp->setAutoDefault( TRUE );
    Layout1->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
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

    CppMainFileLayout->addMultiCellLayout( Layout1, 3, 3, 0, 1 );
    languageChange();
    resize( QSize(308, 283).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( listForms, SIGNAL( selectionChanged() ), this, SLOT( updateOkButton() ) );
    connect( listForms, SIGNAL( currentChanged(QListBoxItem*) ), this, SLOT( updateOkButton() ) );
    connect( editFileName, SIGNAL( textChanged(const QString&) ), this, SLOT( updateOkButton() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
CppMainFile::~CppMainFile()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void CppMainFile::languageChange()
{
    setCaption( tr( "Configure Main-File" ) );
    TextLabel1->setText( tr( "Filename:" ) );
    TextLabel2->setText( tr( "Main-Form:" ) );
    buttonHelp->setText( tr( "Help" ) );
    buttonOk->setText( tr( "OK" ) );
    buttonCancel->setText( tr( "Cancel" ) );
}

