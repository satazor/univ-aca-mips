/****************************************************************************
** Form implementation generated from reading ui file 'configtoolboxdialog.ui'
**
** Created: Tue Oct 8 10:19:52 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "configtoolboxdialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qheader.h>
#include <qlistview.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "configtoolboxdialog.ui.h"
/*
 *  Constructs a ConfigToolboxDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ConfigToolboxDialog::ConfigToolboxDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ConfigToolboxDialog" );
    ConfigToolboxDialogLayout = new QGridLayout( this, 1, 1, 11, 6, "ConfigToolboxDialogLayout"); 

    Layout2 = new QHBoxLayout( 0, 0, 6, "Layout2"); 
    Spacer2 = new QSpacerItem( 342, 0, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout2->addItem( Spacer2 );

    PushButton3 = new QPushButton( this, "PushButton3" );
    PushButton3->setDefault( TRUE );
    Layout2->addWidget( PushButton3 );

    PushButton4 = new QPushButton( this, "PushButton4" );
    Layout2->addWidget( PushButton4 );

    ConfigToolboxDialogLayout->addMultiCellLayout( Layout2, 1, 1, 0, 1 );

    Layout4 = new QGridLayout( 0, 1, 1, 0, 6, "Layout4"); 

    buttonAdd = new QPushButton( this, "buttonAdd" );
    buttonAdd->setEnabled( FALSE );

    Layout4->addWidget( buttonAdd, 1, 1 );
    Spacer3 = new QSpacerItem( 111, 0, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout4->addItem( Spacer3, 1, 0 );

    listViewTools = new QListView( this, "listViewTools" );
    listViewTools->addColumn( tr( "Available Tools" ) );
    listViewTools->setSelectionMode( QListView::Extended );
    listViewTools->setResizeMode( QListView::LastColumn );

    Layout4->addMultiCellWidget( listViewTools, 0, 0, 0, 1 );

    ConfigToolboxDialogLayout->addLayout( Layout4, 0, 0 );

    Layout5 = new QGridLayout( 0, 1, 1, 0, 6, "Layout5"); 

    buttonRemove = new QPushButton( this, "buttonRemove" );
    buttonRemove->setEnabled( FALSE );

    Layout5->addWidget( buttonRemove, 1, 0 );

    listViewCommon = new QListView( this, "listViewCommon" );
    listViewCommon->addColumn( tr( "Common Widgets Page" ) );
    listViewCommon->setSelectionMode( QListView::Extended );
    listViewCommon->setResizeMode( QListView::LastColumn );

    Layout5->addMultiCellWidget( listViewCommon, 0, 0, 0, 3 );

    buttonDown = new QToolButton( this, "buttonDown" );
    buttonDown->setEnabled( FALSE );
    buttonDown->setPixmap( QPixmap::fromMimeSource( "designer_s_down.png" ) );

    Layout5->addWidget( buttonDown, 1, 3 );
    Spacer4 = new QSpacerItem( 41, 0, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout5->addItem( Spacer4, 1, 1 );

    buttonUp = new QToolButton( this, "buttonUp" );
    buttonUp->setEnabled( FALSE );
    buttonUp->setPixmap( QPixmap::fromMimeSource( "designer_s_up.png" ) );

    Layout5->addWidget( buttonUp, 1, 2 );

    ConfigToolboxDialogLayout->addLayout( Layout5, 0, 1 );
    languageChange();
    resize( QSize(403, 467).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonAdd, SIGNAL( clicked() ), this, SLOT( addTool() ) );
    connect( buttonRemove, SIGNAL( clicked() ), this, SLOT( removeTool() ) );
    connect( buttonUp, SIGNAL( clicked() ), this, SLOT( moveToolUp() ) );
    connect( buttonDown, SIGNAL( clicked() ), this, SLOT( moveToolDown() ) );
    connect( listViewTools, SIGNAL( clicked(QListViewItem*) ), this, SLOT( currentToolChanged(QListViewItem*) ) );
    connect( listViewCommon, SIGNAL( clicked(QListViewItem*) ), this, SLOT( currentCommonToolChanged(QListViewItem*) ) );
    connect( PushButton3, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( PushButton4, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( PushButton3, SIGNAL( clicked() ), this, SLOT( ok() ) );
    connect( listViewTools, SIGNAL( doubleClicked(QListViewItem*) ), this, SLOT( addTool() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ConfigToolboxDialog::~ConfigToolboxDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ConfigToolboxDialog::languageChange()
{
    setCaption( tr( "Configure Toolbox" ) );
    PushButton3->setText( tr( "OK" ) );
    PushButton4->setText( tr( "Cancel" ) );
    buttonAdd->setText( tr( "&Add" ) );
    listViewTools->header()->setLabel( 0, tr( "Available Tools" ) );
    buttonRemove->setText( tr( "&Remove" ) );
    listViewCommon->header()->setLabel( 0, tr( "Common Widgets Page" ) );
    buttonDown->setText( QString::null );
    buttonUp->setText( QString::null );
}

