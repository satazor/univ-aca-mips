/****************************************************************************
** Form implementation generated from reading ui file 'listboxeditor.ui'
**
** Created: Tue Oct 8 10:19:32 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "listboxeditor.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlistbox.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a ListBoxEditorBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ListBoxEditorBase::ListBoxEditorBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ListBoxEditorBase" );
    setSizeGripEnabled( TRUE );
    ListBoxEditorBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "ListBoxEditorBaseLayout"); 

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    helpButton = new QPushButton( this, "helpButton" );
    helpButton->setAutoDefault( TRUE );
    Layout1->addWidget( helpButton );
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

    ListBoxEditorBaseLayout->addMultiCellLayout( Layout1, 5, 5, 0, 2 );

    preview = new QListBox( this, "preview" );

    ListBoxEditorBaseLayout->addMultiCellWidget( preview, 0, 4, 0, 0 );

    GroupBox1 = new QGroupBox( this, "GroupBox1" );
    GroupBox1->setColumnLayout(0, Qt::Vertical );
    GroupBox1->layout()->setSpacing( 6 );
    GroupBox1->layout()->setMargin( 11 );
    GroupBox1Layout = new QGridLayout( GroupBox1->layout() );
    GroupBox1Layout->setAlignment( Qt::AlignTop );

    Label2 = new QLabel( GroupBox1, "Label2" );

    GroupBox1Layout->addWidget( Label2, 1, 0 );

    itemPixmap = new QLabel( GroupBox1, "itemPixmap" );

    GroupBox1Layout->addWidget( itemPixmap, 1, 1 );

    itemDeletePixmap = new QPushButton( GroupBox1, "itemDeletePixmap" );
    itemDeletePixmap->setMaximumSize( QSize( 30, 22 ) );
    itemDeletePixmap->setPixmap( QPixmap::fromMimeSource( "designer_s_editcut.png" ) );

    GroupBox1Layout->addWidget( itemDeletePixmap, 1, 2 );

    itemChoosePixmap = new QPushButton( GroupBox1, "itemChoosePixmap" );
    itemChoosePixmap->setMaximumSize( QSize( 30, 22 ) );

    GroupBox1Layout->addWidget( itemChoosePixmap, 1, 3 );

    Label1 = new QLabel( GroupBox1, "Label1" );

    GroupBox1Layout->addWidget( Label1, 0, 0 );

    itemText = new QLineEdit( GroupBox1, "itemText" );
    itemText->setMinimumSize( QSize( 0, 0 ) );

    GroupBox1Layout->addMultiCellWidget( itemText, 0, 0, 1, 3 );

    ListBoxEditorBaseLayout->addMultiCellWidget( GroupBox1, 0, 4, 2, 2 );

    itemNew = new QPushButton( this, "itemNew" );

    ListBoxEditorBaseLayout->addWidget( itemNew, 0, 1 );

    itemDelete = new QPushButton( this, "itemDelete" );

    ListBoxEditorBaseLayout->addWidget( itemDelete, 1, 1 );
    Vertical_Spacing1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    ListBoxEditorBaseLayout->addItem( Vertical_Spacing1, 2, 1 );

    itemUp = new QPushButton( this, "itemUp" );
    itemUp->setPixmap( QPixmap::fromMimeSource( "designer_s_up.png" ) );

    ListBoxEditorBaseLayout->addWidget( itemUp, 3, 1 );

    itemDown = new QPushButton( this, "itemDown" );
    itemDown->setPixmap( QPixmap::fromMimeSource( "designer_s_down.png" ) );

    ListBoxEditorBaseLayout->addWidget( itemDown, 4, 1 );
    languageChange();
    resize( QSize(482, 229).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( itemNew, SIGNAL( clicked() ), this, SLOT( insertNewItem() ) );
    connect( itemDelete, SIGNAL( clicked() ), this, SLOT( deleteCurrentItem() ) );
    connect( itemText, SIGNAL( textChanged( const QString & ) ), this, SLOT( currentTextChanged(const QString&) ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( buttonApply, SIGNAL( clicked() ), this, SLOT( applyClicked() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( cancelClicked() ) );
    connect( itemChoosePixmap, SIGNAL( clicked() ), this, SLOT( choosePixmap() ) );
    connect( itemDeletePixmap, SIGNAL( clicked() ), this, SLOT( deletePixmap() ) );
    connect( itemUp, SIGNAL( clicked() ), this, SLOT( moveItemUp() ) );
    connect( itemDown, SIGNAL( clicked() ), this, SLOT( moveItemDown() ) );
    connect( preview, SIGNAL( selectionChanged(QListBoxItem*) ), this, SLOT( currentItemChanged(QListBoxItem*) ) );
    connect( preview, SIGNAL( currentChanged( QListBoxItem * ) ), this, SLOT( currentItemChanged(QListBoxItem*) ) );

    // tab order
    setTabOrder( buttonOk, buttonCancel );
    setTabOrder( buttonCancel, preview );
    setTabOrder( preview, itemNew );
    setTabOrder( itemNew, itemDelete );
    setTabOrder( itemDelete, itemUp );
    setTabOrder( itemUp, itemDown );
    setTabOrder( itemDown, itemText );
    setTabOrder( itemText, itemDeletePixmap );
    setTabOrder( itemDeletePixmap, itemChoosePixmap );
    setTabOrder( itemChoosePixmap, helpButton );
    setTabOrder( helpButton, buttonApply );

    // buddies
    Label2->setBuddy( itemChoosePixmap );
    Label1->setBuddy( itemText );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ListBoxEditorBase::~ListBoxEditorBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ListBoxEditorBase::languageChange()
{
    setCaption( tr( "Edit Listbox" ) );
    QWhatsThis::add( this, tr( "<b>Edit Listbox</b><p>Add, edit or delete items in the listbox.</p><p>Click the <b>New Item</b>-button to create a new listbox entry, then enter text and choose a pixmap.</p><p>Select an item from the list and click the <b>Delete Item</b>-button to remove the item from the list.</p>" ) );
    helpButton->setText( tr( "&Help" ) );
    buttonApply->setText( tr( "&Apply" ) );
    QWhatsThis::add( buttonApply, tr( "Apply all changes." ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Close the dialog and apply all the changes." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog and discard any changes." ) );
    QToolTip::add( preview, tr( "Item list" ) );
    QWhatsThis::add( preview, tr( "The list of items." ) );
    GroupBox1->setTitle( tr( "&Item Properties" ) );
    Label2->setText( tr( "&Pixmap:" ) );
    itemPixmap->setText( tr( "Label4" ) );
    itemDeletePixmap->setText( QString::null );
    QToolTip::add( itemDeletePixmap, tr( "Delete Pixmap" ) );
    QWhatsThis::add( itemDeletePixmap, tr( "Delete the selected item's pixmap." ) );
    itemChoosePixmap->setText( tr( "..." ) );
    QToolTip::add( itemChoosePixmap, tr( "Select a Pixmap" ) );
    QWhatsThis::add( itemChoosePixmap, tr( "Choose a pixmap file for the selected item." ) );
    Label1->setText( tr( "&Text:" ) );
    QToolTip::add( itemText, tr( "Change text" ) );
    QWhatsThis::add( itemText, tr( "Change the selected item's text." ) );
    itemNew->setText( tr( "&New Item" ) );
    QToolTip::add( itemNew, tr( "Add an item" ) );
    QWhatsThis::add( itemNew, tr( "<b>Add a new item.</b><p>New items are appended to the list.</p>" ) );
    itemDelete->setText( tr( "&Delete Item" ) );
    QToolTip::add( itemDelete, tr( "Delete Item" ) );
    QWhatsThis::add( itemDelete, tr( "Delete the selected item" ) );
    itemUp->setText( QString::null );
    QToolTip::add( itemUp, tr( "Move up" ) );
    QWhatsThis::add( itemUp, tr( "Moves the selected item up." ) );
    itemDown->setText( QString::null );
    QToolTip::add( itemDown, tr( "Move down" ) );
    QWhatsThis::add( itemDown, tr( "Move the selected item down." ) );
}

void ListBoxEditorBase::init()
{
}

void ListBoxEditorBase::destroy()
{
}

void ListBoxEditorBase::insertNewItem()
{
    qWarning( "ListBoxEditorBase::insertNewItem(): Not implemented yet" );
}

void ListBoxEditorBase::deleteCurrentItem()
{
    qWarning( "ListBoxEditorBase::deleteCurrentItem(): Not implemented yet" );
}

void ListBoxEditorBase::currentItemChanged(QListBoxItem*)
{
    qWarning( "ListBoxEditorBase::currentItemChanged(QListBoxItem*): Not implemented yet" );
}

void ListBoxEditorBase::currentTextChanged(const QString&)
{
    qWarning( "ListBoxEditorBase::currentTextChanged(const QString&): Not implemented yet" );
}

void ListBoxEditorBase::okClicked()
{
    qWarning( "ListBoxEditorBase::okClicked(): Not implemented yet" );
}

void ListBoxEditorBase::cancelClicked()
{
    qWarning( "ListBoxEditorBase::cancelClicked(): Not implemented yet" );
}

void ListBoxEditorBase::applyClicked()
{
    qWarning( "ListBoxEditorBase::applyClicked(): Not implemented yet" );
}

void ListBoxEditorBase::choosePixmap()
{
    qWarning( "ListBoxEditorBase::choosePixmap(): Not implemented yet" );
}

void ListBoxEditorBase::deletePixmap()
{
    qWarning( "ListBoxEditorBase::deletePixmap(): Not implemented yet" );
}

void ListBoxEditorBase::moveItemUp()
{
    qWarning( "ListBoxEditorBase::moveItemUp(): Not implemented yet" );
}

void ListBoxEditorBase::moveItemDown()
{
    qWarning( "ListBoxEditorBase::moveItemDown(): Not implemented yet" );
}

