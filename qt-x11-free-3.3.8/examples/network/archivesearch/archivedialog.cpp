/****************************************************************************
** Form implementation generated from reading ui file 'archivedialog.ui'
**
** Created: Tue Oct 8 10:27:13 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "archivedialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qsplitter.h>
#include <qheader.h>
#include <qlistview.h>
#include <qtextbrowser.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "archivedialog.ui.h"

/*
 *  Constructs a ArchiveDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ArchiveDialog::ArchiveDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ArchiveDialog" );
    ArchiveDialogLayout = new QVBoxLayout( this, 11, 6, "ArchiveDialogLayout"); 

    layout1 = new QHBoxLayout( 0, 0, 6, "layout1"); 

    myTextLabel = new QLabel( this, "myTextLabel" );
    layout1->addWidget( myTextLabel );

    myLineEdit = new QLineEdit( this, "myLineEdit" );
    layout1->addWidget( myLineEdit );
    ArchiveDialogLayout->addLayout( layout1 );

    splitter1 = new QSplitter( this, "splitter1" );
    splitter1->setOrientation( QSplitter::Horizontal );

    myListView = new QListView( splitter1, "myListView" );
    myListView->addColumn( tr( "Matching documents" ) );

    myTextBrowser = new QTextBrowser( splitter1, "myTextBrowser" );
    ArchiveDialogLayout->addWidget( splitter1 );

    layout3 = new QHBoxLayout( 0, 0, 6, "layout3"); 
    mySpacer = new QSpacerItem( 281, 21, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout3->addItem( mySpacer );

    myPushButton = new QPushButton( this, "myPushButton" );
    myPushButton->setAutoDefault( FALSE );
    layout3->addWidget( myPushButton );
    ArchiveDialogLayout->addLayout( layout3 );
    languageChange();
    resize( QSize(673, 561).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ArchiveDialog::~ArchiveDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ArchiveDialog::languageChange()
{
    setCaption( tr( "Qt-interest Archive Search Tool" ) );
    myTextLabel->setText( tr( "Search phrase" ) );
    myListView->header()->setLabel( 0, tr( "Matching documents" ) );
    myPushButton->setText( tr( "&Quit" ) );
}

