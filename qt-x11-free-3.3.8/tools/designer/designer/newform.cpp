/****************************************************************************
** Form implementation generated from reading ui file 'newform.ui'
**
** Created: Tue Oct 8 10:19:33 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "newform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qiconview.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a NewFormBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
NewFormBase::NewFormBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "NewFormBase" );
    setSizeGripEnabled( TRUE );
    NewFormBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "NewFormBaseLayout"); 

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    helpButton = new QPushButton( this, "helpButton" );
    helpButton->setAutoDefault( TRUE );
    Layout1->addWidget( helpButton );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );

    NewFormBaseLayout->addMultiCellLayout( Layout1, 2, 2, 0, 2 );

    templateView = new QIconView( this, "templateView" );
    templateView->setGridX( 120 );
    templateView->setResizeMode( QIconView::Adjust );
    templateView->setItemsMovable( FALSE );
    templateView->setWordWrapIconText( TRUE );

    NewFormBaseLayout->addMultiCellWidget( templateView, 1, 1, 0, 2 );

    labelProject = new QLabel( this, "labelProject" );

    NewFormBaseLayout->addWidget( labelProject, 0, 0 );

    projectCombo = new QComboBox( FALSE, this, "projectCombo" );

    NewFormBaseLayout->addWidget( projectCombo, 0, 1 );
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    NewFormBaseLayout->addItem( Spacer2, 0, 2 );
    languageChange();
    resize( QSize(557, 436).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( projectCombo, SIGNAL( activated(const QString&) ), this, SLOT( projectChanged(const QString&) ) );
    connect( templateView, SIGNAL( currentChanged(QIconViewItem*) ), this, SLOT( itemChanged(QIconViewItem*) ) );
    connect( templateView, SIGNAL( doubleClicked(QIconViewItem*) ), this, SLOT( accept() ) );
    connect( templateView, SIGNAL( returnPressed(QIconViewItem*) ), this, SLOT( accept() ) );

    // tab order
    setTabOrder( templateView, helpButton );
    setTabOrder( helpButton, buttonOk );
    setTabOrder( buttonOk, buttonCancel );

    // buddies
    labelProject->setBuddy( projectCombo );
}

/*
 *  Destroys the object and frees any allocated resources
 */
NewFormBase::~NewFormBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void NewFormBase::languageChange()
{
    setCaption( tr( "New File" ) );
    QWhatsThis::add( this, tr( "<b>New Form</b><p>Select a template for the new form and click the <b>OK</b>-button to create it.</p>" ) );
    helpButton->setText( tr( "&Help" ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Create a new form using the selected template." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog without creating a new form." ) );
    QWhatsThis::add( templateView, tr( "Displays a list of the available templates." ) );
    labelProject->setText( tr( "&Insert into:" ) );
}

void NewFormBase::itemChanged(QIconViewItem*)
{
    qWarning( "NewFormBase::itemChanged(QIconViewItem*): Not implemented yet" );
}

void NewFormBase::projectChanged(const QString&)
{
    qWarning( "NewFormBase::projectChanged(const QString&): Not implemented yet" );
}

