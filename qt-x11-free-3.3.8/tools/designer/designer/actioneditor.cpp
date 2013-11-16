/****************************************************************************
** Form implementation generated from reading ui file 'actioneditor.ui'
**
** Created: Qua Out 9 11:04:32 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "actioneditor.h"

#include <qvariant.h>
#include <qtoolbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "actionlistview.h"
/*
 *  Constructs a ActionEditorBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
ActionEditorBase::ActionEditorBase( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "ActionEditorBase" );
    ActionEditorBaseLayout = new QVBoxLayout( this, 4, 6, "ActionEditorBaseLayout"); 

    Layout2 = new QHBoxLayout( 0, 0, 6, "Layout2"); 

    buttonNewAction = new QToolButton( this, "buttonNewAction" );
    buttonNewAction->setPixmap( QPixmap::fromMimeSource( "designer_filenew.png" ) );
    buttonNewAction->setAutoRaise( TRUE );
    Layout2->addWidget( buttonNewAction );

    buttonDeleteAction = new QToolButton( this, "buttonDeleteAction" );
    buttonDeleteAction->setPixmap( QPixmap::fromMimeSource( "designer_s_editcut.png" ) );
    buttonDeleteAction->setAutoRaise( TRUE );
    Layout2->addWidget( buttonDeleteAction );

    buttonConnect = new QToolButton( this, "buttonConnect" );
    buttonConnect->setPixmap( QPixmap::fromMimeSource( "designer_connecttool.png" ) );
    buttonConnect->setAutoRaise( TRUE );
    Layout2->addWidget( buttonConnect );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout2->addItem( Spacer1 );
    ActionEditorBaseLayout->addLayout( Layout2 );

    listActions = new ActionListView( this, "listActions" );
    ActionEditorBaseLayout->addWidget( listActions );
    languageChange();
    resize( QSize(206, 227).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( listActions, SIGNAL( currentChanged( QListViewItem * ) ), this, SLOT( currentActionChanged(QListViewItem*) ) );
    connect( listActions, SIGNAL( clicked( QListViewItem * ) ), this, SLOT( currentActionChanged(QListViewItem*) ) );
    connect( listActions, SIGNAL( selectionChanged( QListViewItem * ) ), this, SLOT( currentActionChanged(QListViewItem*) ) );
    connect( buttonNewAction, SIGNAL( clicked() ), this, SLOT( newAction() ) );
    connect( buttonConnect, SIGNAL( clicked() ), this, SLOT( connectionsClicked() ) );
    connect( buttonDeleteAction, SIGNAL( clicked() ), this, SLOT( deleteAction() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ActionEditorBase::~ActionEditorBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ActionEditorBase::languageChange()
{
    setCaption( tr( "Edit Actions" ) );
    buttonNewAction->setText( QString::null );
    QToolTip::add( buttonNewAction, tr( "Create new Action" ) );
    buttonDeleteAction->setText( QString::null );
    QToolTip::add( buttonDeleteAction, tr( "Delete current Action" ) );
    buttonConnect->setText( QString::null );
    QToolTip::add( buttonConnect, tr( "Connect current Action" ) );
}

void ActionEditorBase::init()
{
}

void ActionEditorBase::destroy()
{
}

void ActionEditorBase::connectionsClicked()
{
    qWarning( "ActionEditorBase::connectionsClicked(): Not implemented yet" );
}

void ActionEditorBase::currentActionChanged(QListViewItem*)
{
    qWarning( "ActionEditorBase::currentActionChanged(QListViewItem*): Not implemented yet" );
}

void ActionEditorBase::deleteAction()
{
    qWarning( "ActionEditorBase::deleteAction(): Not implemented yet" );
}

void ActionEditorBase::newAction()
{
    qWarning( "ActionEditorBase::newAction(): Not implemented yet" );
}

