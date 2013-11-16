/****************************************************************************
** Form implementation generated from reading ui file 'listeditor.ui'
**
** Created: Tue Oct 8 10:19:48 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "listeditor.h"

#include <qvariant.h>
#include <qheader.h>
#include <qlistview.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "listeditor.ui.h"
/*
 *  Constructs a ListEditor as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ListEditor::ListEditor( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ListEditor" );
    ListEditorLayout = new QGridLayout( this, 1, 1, 11, 6, "ListEditorLayout"); 

    listview = new QListView( this, "listview" );
    listview->addColumn( tr( "Column 1" ) );
    listview->setSelectionMode( QListView::Extended );
    listview->setResizeMode( QListView::AllColumns );

    ListEditorLayout->addMultiCellWidget( listview, 0, 4, 0, 0 );

    PushButton1 = new QPushButton( this, "PushButton1" );

    ListEditorLayout->addWidget( PushButton1, 0, 1 );

    PushButton2 = new QPushButton( this, "PushButton2" );

    ListEditorLayout->addWidget( PushButton2, 1, 1 );

    PushButton3 = new QPushButton( this, "PushButton3" );

    ListEditorLayout->addWidget( PushButton3, 2, 1 );

    PushButton4 = new QPushButton( this, "PushButton4" );

    ListEditorLayout->addWidget( PushButton4, 4, 1 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    ListEditorLayout->addItem( Spacer1, 3, 1 );
    languageChange();
    resize( QSize(331, 301).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( addItem() ) );
    connect( PushButton2, SIGNAL( clicked() ), this, SLOT( removeItems() ) );
    connect( PushButton4, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( listview, SIGNAL( itemRenamed(QListViewItem*,int) ), this, SLOT( renamed(QListViewItem*) ) );
    connect( PushButton3, SIGNAL( clicked() ), this, SLOT( renameItem() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ListEditor::~ListEditor()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ListEditor::languageChange()
{
    setCaption( tr( "Edit..." ) );
    listview->header()->setLabel( 0, tr( "Column 1" ) );
    PushButton1->setText( tr( "&Add" ) );
    PushButton2->setText( tr( "&Remove" ) );
    PushButton3->setText( tr( "Re&name" ) );
    PushButton4->setText( tr( "&Close" ) );
}

