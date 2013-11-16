/****************************************************************************
** Form implementation generated from reading ui file 'listvieweditor.ui'
**
** Created: Tue Oct 8 10:19:34 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "listvieweditor.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qspinbox.h>
#include <qheader.h>
#include <qlistview.h>
#include <qcheckbox.h>
#include <qlistbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a ListViewEditorBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
ListViewEditorBase::ListViewEditorBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "ListViewEditorBase" );
    setSizeGripEnabled( TRUE );
    ListViewEditorBaseLayout = new QVBoxLayout( this, 11, 6, "ListViewEditorBaseLayout"); 

    tabWidget = new QTabWidget( this, "tabWidget" );

    Widget10 = new QWidget( tabWidget, "Widget10" );
    Widget10Layout = new QGridLayout( Widget10, 1, 1, 11, 6, "Widget10Layout"); 

    itemDelete = new QPushButton( Widget10, "itemDelete" );

    Widget10Layout->addWidget( itemDelete, 2, 1 );

    GroupBox1 = new QGroupBox( Widget10, "GroupBox1" );
    GroupBox1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, GroupBox1->sizePolicy().hasHeightForWidth() ) );
    GroupBox1->setColumnLayout(0, Qt::Vertical );
    GroupBox1->layout()->setSpacing( 6 );
    GroupBox1->layout()->setMargin( 11 );
    GroupBox1Layout = new QGridLayout( GroupBox1->layout() );
    GroupBox1Layout->setAlignment( Qt::AlignTop );

    Label2 = new QLabel( GroupBox1, "Label2" );

    GroupBox1Layout->addWidget( Label2, 2, 0 );

    Label1 = new QLabel( GroupBox1, "Label1" );

    GroupBox1Layout->addWidget( Label1, 1, 0 );

    itemText = new QLineEdit( GroupBox1, "itemText" );
    itemText->setMinimumSize( QSize( 0, 0 ) );

    GroupBox1Layout->addWidget( itemText, 1, 1 );

    itemColumn = new QSpinBox( GroupBox1, "itemColumn" );

    GroupBox1Layout->addWidget( itemColumn, 0, 1 );

    Label4 = new QLabel( GroupBox1, "Label4" );

    GroupBox1Layout->addWidget( Label4, 0, 0 );

    Layout2 = new QHBoxLayout( 0, 0, 6, "Layout2"); 

    itemPixmap = new QLabel( GroupBox1, "itemPixmap" );
    Layout2->addWidget( itemPixmap );

    itemDeletePixmap = new QPushButton( GroupBox1, "itemDeletePixmap" );
    itemDeletePixmap->setMaximumSize( QSize( 30, 22 ) );
    itemDeletePixmap->setPixmap( QPixmap::fromMimeSource( "designer_s_editcut.png" ) );
    Layout2->addWidget( itemDeletePixmap );

    itemChoosePixmap = new QPushButton( GroupBox1, "itemChoosePixmap" );
    itemChoosePixmap->setMaximumSize( QSize( 30, 22 ) );
    Layout2->addWidget( itemChoosePixmap );

    GroupBox1Layout->addLayout( Layout2, 2, 1 );

    Widget10Layout->addMultiCellWidget( GroupBox1, 0, 7, 2, 2 );

    itemNew = new QPushButton( Widget10, "itemNew" );

    Widget10Layout->addWidget( itemNew, 0, 1 );

    itemsPreview = new QListView( Widget10, "itemsPreview" );

    Widget10Layout->addMultiCellWidget( itemsPreview, 0, 7, 0, 0 );

    itemNewSub = new QPushButton( Widget10, "itemNewSub" );

    Widget10Layout->addWidget( itemNewSub, 1, 1 );
    Vertical_Spacing1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Widget10Layout->addItem( Vertical_Spacing1, 3, 1 );

    itemUp = new QPushButton( Widget10, "itemUp" );
    itemUp->setPixmap( QPixmap::fromMimeSource( "designer_s_up.png" ) );

    Widget10Layout->addWidget( itemUp, 4, 1 );

    itemDown = new QPushButton( Widget10, "itemDown" );
    itemDown->setPixmap( QPixmap::fromMimeSource( "designer_s_down.png" ) );

    Widget10Layout->addWidget( itemDown, 5, 1 );

    itemLeft = new QPushButton( Widget10, "itemLeft" );
    itemLeft->setPixmap( QPixmap::fromMimeSource( "designer_s_left.png" ) );

    Widget10Layout->addWidget( itemLeft, 6, 1 );

    itemRight = new QPushButton( Widget10, "itemRight" );
    itemRight->setPixmap( QPixmap::fromMimeSource( "designer_s_right.png" ) );

    Widget10Layout->addWidget( itemRight, 7, 1 );
    tabWidget->insertTab( Widget10, QString::fromLatin1("") );

    Widget11 = new QWidget( tabWidget, "Widget11" );
    Widget11Layout = new QGridLayout( Widget11, 1, 1, 11, 6, "Widget11Layout"); 

    GroupBox1_2 = new QGroupBox( Widget11, "GroupBox1_2" );
    GroupBox1_2->setColumnLayout(0, Qt::Vertical );
    GroupBox1_2->layout()->setSpacing( 6 );
    GroupBox1_2->layout()->setMargin( 11 );
    GroupBox1Layout_2 = new QGridLayout( GroupBox1_2->layout() );
    GroupBox1Layout_2->setAlignment( Qt::AlignTop );

    Label2_2 = new QLabel( GroupBox1_2, "Label2_2" );

    GroupBox1Layout_2->addWidget( Label2_2, 1, 0 );

    colPixmap = new QLabel( GroupBox1_2, "colPixmap" );

    GroupBox1Layout_2->addWidget( colPixmap, 1, 1 );

    colDeletePixmap = new QPushButton( GroupBox1_2, "colDeletePixmap" );
    colDeletePixmap->setMaximumSize( QSize( 30, 22 ) );
    colDeletePixmap->setPixmap( QPixmap::fromMimeSource( "designer_s_editcut.png" ) );

    GroupBox1Layout_2->addWidget( colDeletePixmap, 1, 2 );

    colChoosePixmap = new QPushButton( GroupBox1_2, "colChoosePixmap" );
    colChoosePixmap->setMaximumSize( QSize( 30, 22 ) );

    GroupBox1Layout_2->addWidget( colChoosePixmap, 1, 3 );

    Label1_2 = new QLabel( GroupBox1_2, "Label1_2" );

    GroupBox1Layout_2->addWidget( Label1_2, 0, 0 );

    colText = new QLineEdit( GroupBox1_2, "colText" );
    colText->setMinimumSize( QSize( 0, 0 ) );

    GroupBox1Layout_2->addMultiCellWidget( colText, 0, 0, 1, 3 );

    colClickable = new QCheckBox( GroupBox1_2, "colClickable" );

    GroupBox1Layout_2->addMultiCellWidget( colClickable, 2, 2, 0, 1 );

    colResizable = new QCheckBox( GroupBox1_2, "colResizable" );

    GroupBox1Layout_2->addMultiCellWidget( colResizable, 3, 3, 0, 1 );

    Widget11Layout->addMultiCellWidget( GroupBox1_2, 0, 4, 2, 2 );

    colDelete = new QPushButton( Widget11, "colDelete" );

    Widget11Layout->addWidget( colDelete, 1, 1 );

    colDown = new QPushButton( Widget11, "colDown" );
    colDown->setPixmap( QPixmap::fromMimeSource( "designer_s_down.png" ) );

    Widget11Layout->addWidget( colDown, 4, 1 );

    colNew = new QPushButton( Widget11, "colNew" );

    Widget11Layout->addWidget( colNew, 0, 1 );

    colUp = new QPushButton( Widget11, "colUp" );
    colUp->setPixmap( QPixmap::fromMimeSource( "designer_s_up.png" ) );

    Widget11Layout->addWidget( colUp, 3, 1 );

    colPreview = new QListBox( Widget11, "colPreview" );

    Widget11Layout->addMultiCellWidget( colPreview, 0, 4, 0, 0 );
    Vertical_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Widget11Layout->addItem( Vertical_Spacing2, 2, 1 );
    tabWidget->insertTab( Widget11, QString::fromLatin1("") );
    ListViewEditorBaseLayout->addWidget( tabWidget );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    helpButton = new QPushButton( this, "helpButton" );
    helpButton->setAutoDefault( TRUE );
    Layout1->addWidget( helpButton );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    applyButton = new QPushButton( this, "applyButton" );
    applyButton->setAutoDefault( TRUE );
    Layout1->addWidget( applyButton );

    okButton = new QPushButton( this, "okButton" );
    okButton->setAutoDefault( TRUE );
    okButton->setDefault( TRUE );
    Layout1->addWidget( okButton );

    cancelButton = new QPushButton( this, "cancelButton" );
    cancelButton->setAutoDefault( TRUE );
    Layout1->addWidget( cancelButton );
    ListViewEditorBaseLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(567, 398).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( itemNew, SIGNAL( clicked() ), this, SLOT( itemNewClicked() ) );
    connect( itemDelete, SIGNAL( clicked() ), this, SLOT( itemDeleteClicked() ) );
    connect( itemUp, SIGNAL( clicked() ), this, SLOT( itemUpClicked() ) );
    connect( itemDown, SIGNAL( clicked() ), this, SLOT( itemDownClicked() ) );
    connect( itemColumn, SIGNAL( valueChanged(int) ), this, SLOT( itemColChanged(int) ) );
    connect( itemText, SIGNAL( textChanged(const QString&) ), this, SLOT( itemTextChanged(const QString&) ) );
    connect( itemDeletePixmap, SIGNAL( clicked() ), this, SLOT( itemPixmapDeleted() ) );
    connect( itemChoosePixmap, SIGNAL( clicked() ), this, SLOT( itemPixmapChoosen() ) );
    connect( colNew, SIGNAL( clicked() ), this, SLOT( newColumnClicked() ) );
    connect( colDelete, SIGNAL( clicked() ), this, SLOT( deleteColumnClicked() ) );
    connect( colUp, SIGNAL( clicked() ), this, SLOT( columnUpClicked() ) );
    connect( colDown, SIGNAL( clicked() ), this, SLOT( columnDownClicked() ) );
    connect( colText, SIGNAL( textChanged(const QString&) ), this, SLOT( columnTextChanged(const QString&) ) );
    connect( colDeletePixmap, SIGNAL( clicked() ), this, SLOT( columnPixmapDeleted() ) );
    connect( colChoosePixmap, SIGNAL( clicked() ), this, SLOT( columnPixmapChosen() ) );
    connect( colResizable, SIGNAL( toggled(bool) ), this, SLOT( columnResizable(bool) ) );
    connect( colClickable, SIGNAL( toggled(bool) ), this, SLOT( columnClickable(bool) ) );
    connect( tabWidget, SIGNAL( selected(const QString&) ), this, SLOT( initTabPage(const QString&) ) );
    connect( okButton, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( applyButton, SIGNAL( clicked() ), this, SLOT( applyClicked() ) );
    connect( colPreview, SIGNAL( currentChanged(QListBoxItem*) ), this, SLOT( currentColumnChanged(QListBoxItem*) ) );
    connect( colPreview, SIGNAL( selectionChanged(QListBoxItem*) ), this, SLOT( currentColumnChanged(QListBoxItem*) ) );
    connect( itemsPreview, SIGNAL( currentChanged(QListViewItem*) ), this, SLOT( currentItemChanged(QListViewItem*) ) );
    connect( itemsPreview, SIGNAL( selectionChanged(QListViewItem*) ), this, SLOT( currentItemChanged(QListViewItem*) ) );
    connect( itemNewSub, SIGNAL( clicked() ), this, SLOT( itemNewSubClicked() ) );
    connect( itemLeft, SIGNAL( clicked() ), this, SLOT( itemLeftClicked() ) );
    connect( itemRight, SIGNAL( clicked() ), this, SLOT( itemRightClicked() ) );

    // tab order
    setTabOrder( okButton, cancelButton );
    setTabOrder( cancelButton, tabWidget );
    setTabOrder( tabWidget, itemsPreview );
    setTabOrder( itemsPreview, itemNew );
    setTabOrder( itemNew, itemNewSub );
    setTabOrder( itemNewSub, itemDelete );
    setTabOrder( itemDelete, itemUp );
    setTabOrder( itemUp, itemDown );
    setTabOrder( itemDown, itemLeft );
    setTabOrder( itemLeft, itemRight );
    setTabOrder( itemRight, itemColumn );
    setTabOrder( itemColumn, itemText );
    setTabOrder( itemText, itemDeletePixmap );
    setTabOrder( itemDeletePixmap, itemChoosePixmap );
    setTabOrder( itemChoosePixmap, helpButton );
    setTabOrder( helpButton, applyButton );
    setTabOrder( applyButton, colPreview );
    setTabOrder( colPreview, colNew );
    setTabOrder( colNew, colDelete );
    setTabOrder( colDelete, colUp );
    setTabOrder( colUp, colDown );
    setTabOrder( colDown, colText );
    setTabOrder( colText, colDeletePixmap );
    setTabOrder( colDeletePixmap, colChoosePixmap );
    setTabOrder( colChoosePixmap, colClickable );
    setTabOrder( colClickable, colResizable );

    // buddies
    Label2->setBuddy( itemChoosePixmap );
    Label1->setBuddy( itemText );
    Label4->setBuddy( itemColumn );
    Label2_2->setBuddy( colChoosePixmap );
    Label1_2->setBuddy( colText );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
ListViewEditorBase::~ListViewEditorBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void ListViewEditorBase::languageChange()
{
    setCaption( tr( "Edit Listview" ) );
    QWhatsThis::add( this, tr( "<b>Edit Listview</b><p>Use the controls on the <b>Items</b>-tab to add, edit or delete items in the listview. Change the column configuration of the listview using the controls on the <b>Columns</b>-tab.</p>Click the <b>New Item</b>-button to create a new item, then enter text and add a pixmap.</p><p>Select an item from the list and click the <b>Delete Item</b>-button to remove the item from the list.</p>" ) );
    itemDelete->setText( tr( "&Delete Item" ) );
    QToolTip::add( itemDelete, tr( "Delete item" ) );
    QWhatsThis::add( itemDelete, tr( "<b>Deletes the selected item.</b><p>Any sub-items are also deleted.</p>" ) );
    GroupBox1->setTitle( tr( "Item Properties" ) );
    Label2->setText( tr( "Pi&xmap:" ) );
    Label1->setText( tr( "&Text:" ) );
    QToolTip::add( itemText, tr( "Change text" ) );
    QWhatsThis::add( itemText, tr( "<b>Change the text of the item.</b><p>The text will be changed in the current column of the selected item.</p>" ) );
    QToolTip::add( itemColumn, tr( "Change column" ) );
    QWhatsThis::add( itemColumn, tr( "<b>Select the current column.</b><p>The item's text and pixmap will be changed for the current column</p>" ) );
    Label4->setText( tr( "Colu&mn:" ) );
    itemPixmap->setText( tr( "Label4" ) );
    itemDeletePixmap->setText( QString::null );
    QToolTip::add( itemDeletePixmap, tr( "Delete Pixmap" ) );
    QWhatsThis::add( itemDeletePixmap, tr( "<b>Delete the selected item's pixmap.</b><p>The pixmap in the current column of the selected item will be deleted.</p>" ) );
    itemChoosePixmap->setText( tr( "..." ) );
    QToolTip::add( itemChoosePixmap, tr( "Select a Pixmap" ) );
    QWhatsThis::add( itemChoosePixmap, tr( "<b>Select a pixmap file for the item.</b><p>The pixmap will be changed in the current column of the selected item.</p>" ) );
    itemNew->setText( tr( "&New Item" ) );
    QToolTip::add( itemNew, tr( "Add an item" ) );
    QWhatsThis::add( itemNew, tr( "<b>Adds a new item to the list.</b><p>The item will be inserted at the top of the list and can be moved using the up- and down-buttons.</p>" ) );
    QWhatsThis::add( itemsPreview, tr( "The list of items." ) );
    itemNewSub->setText( tr( "New &Subitem" ) );
    QToolTip::add( itemNewSub, tr( "Add a subitem" ) );
    QWhatsThis::add( itemNewSub, tr( "<b>Create a new sub-item for the selected item.</b><p>New sub-items are inserted at the top of the list of sub-items, and new levels are created automatically.</p>" ) );
    itemUp->setText( QString::null );
    QToolTip::add( itemUp, tr( "Move up" ) );
    QWhatsThis::add( itemUp, tr( "<b>Move the selected item up.</b><p>The item will be moved within its level in the hierarchy.</p>" ) );
    itemDown->setText( QString::null );
    QToolTip::add( itemDown, tr( "Move down" ) );
    QWhatsThis::add( itemDown, tr( "<b>Move the selected item down.</b><p>The item will be moved within its level in the hierarchy.</p>" ) );
    itemLeft->setText( QString::null );
    QToolTip::add( itemLeft, tr( "Move left" ) );
    QWhatsThis::add( itemLeft, tr( "<b>Move the selected item one level up.</b><p>This will also change the level of the item's sub-items.</p>" ) );
    itemRight->setText( QString::null );
    QToolTip::add( itemRight, tr( "Move right" ) );
    QWhatsThis::add( itemRight, tr( "<b>Move the selected item one level down.</b><p>This will also change the level of the item's sub-items.</p>" ) );
    tabWidget->changeTab( Widget10, tr( "&Items" ) );
    GroupBox1_2->setTitle( tr( "Column Properties" ) );
    Label2_2->setText( tr( "&Pixmap:" ) );
    colPixmap->setText( tr( "Label4" ) );
    colDeletePixmap->setText( QString::null );
    QToolTip::add( colDeletePixmap, tr( "Delete Pixmap" ) );
    QWhatsThis::add( colDeletePixmap, tr( "Delete the pixmap of the selected column." ) );
    colChoosePixmap->setText( tr( "..." ) );
    QToolTip::add( colChoosePixmap, tr( "Select a Pixmap" ) );
    QWhatsThis::add( colChoosePixmap, tr( "<b>Select a pixmap file for the selected column.</b><p>The pixmap will be displayed in the header of the listview.</p>" ) );
    Label1_2->setText( tr( "&Text:" ) );
    QToolTip::add( colText, tr( "Enter column text" ) );
    QWhatsThis::add( colText, tr( "<b>Enter the text for the selected column.</b><p>The text will be displayed in the header of the listview.</p>" ) );
    colClickable->setText( tr( "Clicka&ble" ) );
    QWhatsThis::add( colClickable, tr( "If this option is checked, the selected column will react to mouse clicks on the header." ) );
    colResizable->setText( tr( "Re&sizable" ) );
    QWhatsThis::add( colResizable, tr( "The column's width will be resizable if this option is checked." ) );
    colDelete->setText( tr( "&Delete Column" ) );
    QToolTip::add( colDelete, tr( "Delete column" ) );
    QWhatsThis::add( colDelete, tr( "Deletes the selected Column." ) );
    colDown->setText( QString::null );
    QToolTip::add( colDown, tr( "Move down" ) );
    QWhatsThis::add( colDown, tr( "<b>Move the selected item down.</b><p>The top-most column will be the first column in the list.</p>" ) );
    colNew->setText( tr( "&New Column" ) );
    QToolTip::add( colNew, tr( "Add a Column" ) );
    QWhatsThis::add( colNew, tr( "<b>Create a new column.</b><p>New columns are appended at the end of (right of) the list and may be moved using the up- and down-buttons.</p>" ) );
    colUp->setText( QString::null );
    QToolTip::add( colUp, tr( "Move up" ) );
    QWhatsThis::add( colUp, tr( "<b>Move the selected item up.</b><p>The top-most column will be the first column in the list.</p>" ) );
    QWhatsThis::add( colPreview, tr( "The list of columns." ) );
    tabWidget->changeTab( Widget11, tr( "Co&lumns" ) );
    helpButton->setText( tr( "&Help" ) );
    applyButton->setText( tr( "&Apply" ) );
    QWhatsThis::add( applyButton, tr( "Apply all changes." ) );
    okButton->setText( tr( "&OK" ) );
    QWhatsThis::add( okButton, tr( "Close the dialog and apply all the changes." ) );
    cancelButton->setText( tr( "&Cancel" ) );
    QWhatsThis::add( cancelButton, tr( "Close the dialog and discard any changes." ) );
}

void ListViewEditorBase::init()
{
}

void ListViewEditorBase::destroy()
{
}

void ListViewEditorBase::applyClicked()
{
    qWarning( "ListViewEditorBase::applyClicked(): Not implemented yet" );
}

void ListViewEditorBase::columnClickable(bool)
{
    qWarning( "ListViewEditorBase::columnClickable(bool): Not implemented yet" );
}

void ListViewEditorBase::columnDownClicked()
{
    qWarning( "ListViewEditorBase::columnDownClicked(): Not implemented yet" );
}

void ListViewEditorBase::columnPixmapChosen()
{
    qWarning( "ListViewEditorBase::columnPixmapChosen(): Not implemented yet" );
}

void ListViewEditorBase::columnPixmapDeleted()
{
    qWarning( "ListViewEditorBase::columnPixmapDeleted(): Not implemented yet" );
}

void ListViewEditorBase::columnResizable(bool)
{
    qWarning( "ListViewEditorBase::columnResizable(bool): Not implemented yet" );
}

void ListViewEditorBase::columnTextChanged(const QString&)
{
    qWarning( "ListViewEditorBase::columnTextChanged(const QString&): Not implemented yet" );
}

void ListViewEditorBase::columnUpClicked()
{
    qWarning( "ListViewEditorBase::columnUpClicked(): Not implemented yet" );
}

void ListViewEditorBase::currentColumnChanged(QListBoxItem*)
{
    qWarning( "ListViewEditorBase::currentColumnChanged(QListBoxItem*): Not implemented yet" );
}

void ListViewEditorBase::currentItemChanged(QListViewItem*)
{
    qWarning( "ListViewEditorBase::currentItemChanged(QListViewItem*): Not implemented yet" );
}

void ListViewEditorBase::deleteColumnClicked()
{
    qWarning( "ListViewEditorBase::deleteColumnClicked(): Not implemented yet" );
}

void ListViewEditorBase::initTabPage(const QString&)
{
    qWarning( "ListViewEditorBase::initTabPage(const QString&): Not implemented yet" );
}

void ListViewEditorBase::itemColChanged(int)
{
    qWarning( "ListViewEditorBase::itemColChanged(int): Not implemented yet" );
}

void ListViewEditorBase::itemDeleteClicked()
{
    qWarning( "ListViewEditorBase::itemDeleteClicked(): Not implemented yet" );
}

void ListViewEditorBase::itemDownClicked()
{
    qWarning( "ListViewEditorBase::itemDownClicked(): Not implemented yet" );
}

void ListViewEditorBase::itemLeftClicked()
{
    qWarning( "ListViewEditorBase::itemLeftClicked(): Not implemented yet" );
}

void ListViewEditorBase::itemNewClicked()
{
    qWarning( "ListViewEditorBase::itemNewClicked(): Not implemented yet" );
}

void ListViewEditorBase::itemNewSubClicked()
{
    qWarning( "ListViewEditorBase::itemNewSubClicked(): Not implemented yet" );
}

void ListViewEditorBase::itemPixmapChoosen()
{
    qWarning( "ListViewEditorBase::itemPixmapChoosen(): Not implemented yet" );
}

void ListViewEditorBase::itemPixmapDeleted()
{
    qWarning( "ListViewEditorBase::itemPixmapDeleted(): Not implemented yet" );
}

void ListViewEditorBase::itemTextChanged(const QString&)
{
    qWarning( "ListViewEditorBase::itemTextChanged(const QString&): Not implemented yet" );
}

void ListViewEditorBase::itemUpClicked()
{
    qWarning( "ListViewEditorBase::itemUpClicked(): Not implemented yet" );
}

void ListViewEditorBase::newColumnClicked()
{
    qWarning( "ListViewEditorBase::newColumnClicked(): Not implemented yet" );
}

void ListViewEditorBase::itemRightClicked()
{
    qWarning( "ListViewEditorBase::itemRightClicked(): Not implemented yet" );
}

void ListViewEditorBase::okClicked()
{
    qWarning( "ListViewEditorBase::okClicked(): Not implemented yet" );
}

