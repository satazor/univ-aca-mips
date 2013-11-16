/****************************************************************************
** Form implementation generated from reading ui file 'variabledialog.ui'
**
** Created: Tue Oct 8 10:19:52 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "variabledialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qheader.h>
#include <qlistview.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a VariableDialogBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
VariableDialogBase::VariableDialogBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "VariableDialogBase" );
    VariableDialogBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "VariableDialogBaseLayout"); 

    varView = new QListView( this, "varView" );
    varView->addColumn( tr( "Variable" ) );
    varView->addColumn( tr( "Access" ) );
    varView->setFrameShape( QListView::StyledPanel );
    varView->setFrameShadow( QListView::Sunken );
    varView->setAllColumnsShowFocus( TRUE );
    varView->setResizeMode( QListView::LastColumn );

    VariableDialogBaseLayout->addMultiCellWidget( varView, 0, 0, 0, 3 );

    deleteButton = new QPushButton( this, "deleteButton" );

    VariableDialogBaseLayout->addWidget( deleteButton, 1, 3 );

    propBox = new QGroupBox( this, "propBox" );
    propBox->setColumnLayout(0, Qt::Vertical );
    propBox->layout()->setSpacing( 6 );
    propBox->layout()->setMargin( 11 );
    propBoxLayout = new QGridLayout( propBox->layout() );
    propBoxLayout->setAlignment( Qt::AlignTop );

    TextLabel2 = new QLabel( propBox, "TextLabel2" );

    propBoxLayout->addWidget( TextLabel2, 1, 0 );

    TextLabel1 = new QLabel( propBox, "TextLabel1" );

    propBoxLayout->addWidget( TextLabel1, 0, 0 );

    varName = new QLineEdit( propBox, "varName" );

    propBoxLayout->addWidget( varName, 0, 1 );

    accessCombo = new QComboBox( FALSE, propBox, "accessCombo" );

    propBoxLayout->addWidget( accessCombo, 1, 1 );

    VariableDialogBaseLayout->addMultiCellWidget( propBox, 2, 2, 0, 3 );

    addButton = new QPushButton( this, "addButton" );

    VariableDialogBaseLayout->addWidget( addButton, 1, 2 );
    Spacer2 = new QSpacerItem( 0, 21, QSizePolicy::Expanding, QSizePolicy::Minimum );
    VariableDialogBaseLayout->addMultiCell( Spacer2, 1, 1, 0, 1 );

    cancelButton = new QPushButton( this, "cancelButton" );

    VariableDialogBaseLayout->addWidget( cancelButton, 3, 3 );

    okButton = new QPushButton( this, "okButton" );

    VariableDialogBaseLayout->addMultiCellWidget( okButton, 3, 3, 1, 2 );
    Spacer3 = new QSpacerItem( 0, 21, QSizePolicy::Expanding, QSizePolicy::Minimum );
    VariableDialogBaseLayout->addItem( Spacer3, 3, 0 );
    languageChange();
    resize( QSize(276, 320).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( addButton, SIGNAL( clicked() ), this, SLOT( addVariable() ) );
    connect( okButton, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( varName, SIGNAL( textChanged(const QString&) ), this, SLOT( nameChanged() ) );
    connect( deleteButton, SIGNAL( clicked() ), this, SLOT( deleteVariable() ) );
    connect( accessCombo, SIGNAL( activated(int) ), this, SLOT( accessChanged() ) );
    connect( varView, SIGNAL( currentChanged(QListViewItem*) ), this, SLOT( currentItemChanged(QListViewItem*) ) );
    connect( varView, SIGNAL( selectionChanged(QListViewItem*) ), this, SLOT( currentItemChanged(QListViewItem*) ) );

    // tab order
    setTabOrder( varView, addButton );
    setTabOrder( addButton, deleteButton );
    setTabOrder( deleteButton, varName );
    setTabOrder( varName, accessCombo );
    setTabOrder( accessCombo, okButton );
    setTabOrder( okButton, cancelButton );

    // buddies
    TextLabel2->setBuddy( accessCombo );
    TextLabel1->setBuddy( varName );
}

/*
 *  Destroys the object and frees any allocated resources
 */
VariableDialogBase::~VariableDialogBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void VariableDialogBase::languageChange()
{
    setCaption( tr( "Edit Variables" ) );
    varView->header()->setLabel( 0, tr( "Variable" ) );
    varView->header()->setLabel( 1, tr( "Access" ) );
    deleteButton->setText( tr( "&Delete" ) );
    propBox->setTitle( tr( "Variable Properties" ) );
    TextLabel2->setText( tr( "Acc&ess:" ) );
    TextLabel1->setText( tr( "&Variable:" ) );
    accessCombo->clear();
    accessCombo->insertItem( tr( "public" ) );
    accessCombo->insertItem( tr( "protected" ) );
    accessCombo->insertItem( tr( "private" ) );
    addButton->setText( tr( "&Add" ) );
    cancelButton->setText( tr( "&Cancel" ) );
    okButton->setText( tr( "&OK" ) );
}

void VariableDialogBase::addVariable()
{
    qWarning( "VariableDialogBase::addVariable(): Not implemented yet" );
}

void VariableDialogBase::deleteVariable()
{
    qWarning( "VariableDialogBase::deleteVariable(): Not implemented yet" );
}

void VariableDialogBase::accessChanged()
{
    qWarning( "VariableDialogBase::accessChanged(): Not implemented yet" );
}

void VariableDialogBase::nameChanged()
{
    qWarning( "VariableDialogBase::nameChanged(): Not implemented yet" );
}

void VariableDialogBase::okClicked()
{
    qWarning( "VariableDialogBase::okClicked(): Not implemented yet" );
}

void VariableDialogBase::currentItemChanged(QListViewItem*)
{
    qWarning( "VariableDialogBase::currentItemChanged(QListViewItem*): Not implemented yet" );
}

