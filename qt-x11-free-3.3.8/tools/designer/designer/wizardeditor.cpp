/****************************************************************************
** Form implementation generated from reading ui file 'wizardeditor.ui'
**
** Created: Tue Oct 8 10:19:47 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "wizardeditor.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qlistbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a WizardEditorBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
WizardEditorBase::WizardEditorBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "WizardEditorBase" );
    WizardEditorBaseLayout = new QVBoxLayout( this, 11, 6, "WizardEditorBaseLayout"); 

    Layout19 = new QHBoxLayout( 0, 0, 6, "Layout19"); 

    Layout14 = new QVBoxLayout( 0, 0, 2, "Layout14"); 

    pagesLabel = new QLabel( this, "pagesLabel" );
    Layout14->addWidget( pagesLabel );

    listBox = new QListBox( this, "listBox" );
    Layout14->addWidget( listBox );
    Layout19->addLayout( Layout14 );

    Layout18 = new QVBoxLayout( 0, 0, 6, "Layout18"); 

    buttonAdd = new QPushButton( this, "buttonAdd" );
    Layout18->addWidget( buttonAdd );

    buttonRemove = new QPushButton( this, "buttonRemove" );
    Layout18->addWidget( buttonRemove );
    Spacer11 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout18->addItem( Spacer11 );

    buttonUp = new QPushButton( this, "buttonUp" );
    buttonUp->setPixmap( QPixmap::fromMimeSource( "designer_s_up.png" ) );
    Layout18->addWidget( buttonUp );

    buttonDown = new QPushButton( this, "buttonDown" );
    buttonDown->setPixmap( QPixmap::fromMimeSource( "designer_s_down.png" ) );
    Layout18->addWidget( buttonDown );
    Layout19->addLayout( Layout18 );
    WizardEditorBaseLayout->addLayout( Layout19 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    Layout1->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonApply = new QPushButton( this, "buttonApply" );
    buttonApply->setAutoDefault( TRUE );
    Layout1->addWidget( buttonApply );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );
    WizardEditorBaseLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(396, 233).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonHelp, SIGNAL( clicked() ), this, SLOT( helpClicked() ) );
    connect( buttonApply, SIGNAL( clicked() ), this, SLOT( applyClicked() ) );
    connect( buttonUp, SIGNAL( clicked() ), this, SLOT( upClicked() ) );
    connect( buttonDown, SIGNAL( clicked() ), this, SLOT( downClicked() ) );
    connect( buttonAdd, SIGNAL( clicked() ), this, SLOT( addClicked() ) );
    connect( buttonRemove, SIGNAL( clicked() ), this, SLOT( removeClicked() ) );
    connect( listBox, SIGNAL( selected(int) ), this, SLOT( itemSelected(int) ) );
    connect( listBox, SIGNAL( highlighted(int) ), this, SLOT( itemHighlighted(int) ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( cancelClicked() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
WizardEditorBase::~WizardEditorBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void WizardEditorBase::languageChange()
{
    setCaption( tr( "Wizard Page Editor" ) );
    pagesLabel->setText( tr( "Wizard Pages:" ) );
    buttonAdd->setText( tr( "A&dd" ) );
    buttonRemove->setText( tr( "&Remove" ) );
    buttonUp->setText( QString::null );
    buttonDown->setText( QString::null );
    buttonHelp->setText( tr( "&Help" ) );
    buttonApply->setText( tr( "&Apply" ) );
    QWhatsThis::add( buttonApply, tr( "Apply all changes." ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Close the dialog and apply all the changes." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog and discard any changes." ) );
}

void WizardEditorBase::init()
{
}

void WizardEditorBase::destroy()
{
}

void WizardEditorBase::addClicked()
{
    qWarning( "WizardEditorBase::addClicked(): Not implemented yet" );
}

void WizardEditorBase::applyClicked()
{
    qWarning( "WizardEditorBase::applyClicked(): Not implemented yet" );
}

void WizardEditorBase::cancelClicked()
{
    qWarning( "WizardEditorBase::cancelClicked(): Not implemented yet" );
}

void WizardEditorBase::downClicked()
{
    qWarning( "WizardEditorBase::downClicked(): Not implemented yet" );
}

void WizardEditorBase::helpClicked()
{
    qWarning( "WizardEditorBase::helpClicked(): Not implemented yet" );
}

void WizardEditorBase::itemHighlighted(int)
{
    qWarning( "WizardEditorBase::itemHighlighted(int): Not implemented yet" );
}

void WizardEditorBase::itemSelected(int)
{
    qWarning( "WizardEditorBase::itemSelected(int): Not implemented yet" );
}

void WizardEditorBase::okClicked()
{
    qWarning( "WizardEditorBase::okClicked(): Not implemented yet" );
}

void WizardEditorBase::removeClicked()
{
    qWarning( "WizardEditorBase::removeClicked(): Not implemented yet" );
}

void WizardEditorBase::upClicked()
{
    qWarning( "WizardEditorBase::upClicked(): Not implemented yet" );
}

