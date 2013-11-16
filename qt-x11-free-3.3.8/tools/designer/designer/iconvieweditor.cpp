/****************************************************************************
** Form implementation generated from reading ui file 'iconvieweditor.ui'
**
** Created: Tue Oct 8 10:19:37 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "iconvieweditor.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qiconview.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a IconViewEditorBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
IconViewEditorBase::IconViewEditorBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "IconViewEditorBase" );
    setSizeGripEnabled( TRUE );
    IconViewEditorBaseLayout = new QVBoxLayout( this, 11, 6, "IconViewEditorBaseLayout"); 

    Layout6 = new QHBoxLayout( 0, 0, 6, "Layout6"); 

    preview = new QIconView( this, "preview" );
    Layout6->addWidget( preview );

    Layout5 = new QVBoxLayout( 0, 0, 6, "Layout5"); 

    itemNew = new QPushButton( this, "itemNew" );
    Layout5->addWidget( itemNew );

    itemDelete = new QPushButton( this, "itemDelete" );
    Layout5->addWidget( itemDelete );
    Vertical_Spacing1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout5->addItem( Vertical_Spacing1 );
    Layout6->addLayout( Layout5 );

    GroupBox1 = new QGroupBox( this, "GroupBox1" );
    GroupBox1->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)5, 0, 0, GroupBox1->sizePolicy().hasHeightForWidth() ) );
    GroupBox1->setColumnLayout(0, Qt::Vertical );
    GroupBox1->layout()->setSpacing( 6 );
    GroupBox1->layout()->setMargin( 11 );
    GroupBox1Layout = new QGridLayout( GroupBox1->layout() );
    GroupBox1Layout->setAlignment( Qt::AlignTop );

    Label1 = new QLabel( GroupBox1, "Label1" );

    GroupBox1Layout->addWidget( Label1, 0, 0 );

    itemText = new QLineEdit( GroupBox1, "itemText" );
    itemText->setMinimumSize( QSize( 0, 0 ) );

    GroupBox1Layout->addWidget( itemText, 0, 1 );

    Label2 = new QLabel( GroupBox1, "Label2" );

    GroupBox1Layout->addWidget( Label2, 1, 0 );

    Layout4 = new QHBoxLayout( 0, 0, 6, "Layout4"); 

    itemPixmap = new QLabel( GroupBox1, "itemPixmap" );
    Layout4->addWidget( itemPixmap );

    itemDeletePixmap = new QPushButton( GroupBox1, "itemDeletePixmap" );
    itemDeletePixmap->setMaximumSize( QSize( 30, 22 ) );
    itemDeletePixmap->setPixmap( QPixmap::fromMimeSource( "designer_s_editcut.png" ) );
    Layout4->addWidget( itemDeletePixmap );

    itemChoosePixmap = new QPushButton( GroupBox1, "itemChoosePixmap" );
    itemChoosePixmap->setMaximumSize( QSize( 30, 22 ) );
    Layout4->addWidget( itemChoosePixmap );

    GroupBox1Layout->addLayout( Layout4, 1, 1 );
    Layout6->addWidget( GroupBox1 );
    IconViewEditorBaseLayout->addLayout( Layout6 );

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
    IconViewEditorBaseLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(567, 321).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( itemNew, SIGNAL( clicked() ), this, SLOT( insertNewItem() ) );
    connect( itemDelete, SIGNAL( clicked() ), this, SLOT( deleteCurrentItem() ) );
    connect( itemText, SIGNAL( textChanged( const QString & ) ), this, SLOT( currentTextChanged(const QString&) ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( buttonApply, SIGNAL( clicked() ), this, SLOT( applyClicked() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( cancelClicked() ) );
    connect( itemChoosePixmap, SIGNAL( clicked() ), this, SLOT( choosePixmap() ) );
    connect( preview, SIGNAL( selectionChanged(QIconViewItem*) ), this, SLOT( currentItemChanged(QIconViewItem*) ) );
    connect( preview, SIGNAL( currentChanged(QIconViewItem*) ), this, SLOT( currentItemChanged(QIconViewItem*) ) );
    connect( itemDeletePixmap, SIGNAL( clicked() ), this, SLOT( deletePixmap() ) );

    // tab order
    setTabOrder( buttonOk, buttonCancel );
    setTabOrder( buttonCancel, preview );
    setTabOrder( preview, itemNew );
    setTabOrder( itemNew, itemDelete );
    setTabOrder( itemDelete, itemText );
    setTabOrder( itemText, itemDeletePixmap );
    setTabOrder( itemDeletePixmap, itemChoosePixmap );
    setTabOrder( itemChoosePixmap, buttonHelp );
    setTabOrder( buttonHelp, buttonApply );

    // buddies
    Label1->setBuddy( itemText );
    Label2->setBuddy( itemChoosePixmap );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
IconViewEditorBase::~IconViewEditorBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void IconViewEditorBase::languageChange()
{
    setCaption( tr( "Edit Iconview" ) );
    QWhatsThis::add( this, tr( "<b>Edit Iconview</b><p>Add, edit or delete items in the icon view.</p><p>Click the <b>New Item</b>-button to create a new item, then enter text and choose a pixmap.</p><p>Select an item from the view and click the <b>Delete Item</b>-button to remove the item from the iconview.</p>" ) );
    QWhatsThis::add( preview, tr( "All items in the iconview." ) );
    itemNew->setText( tr( "&New Item" ) );
    QToolTip::add( itemNew, tr( "Add an item" ) );
    QWhatsThis::add( itemNew, tr( "Create a new item for the iconview." ) );
    itemDelete->setText( tr( "&Delete Item" ) );
    QToolTip::add( itemDelete, tr( "Delete item" ) );
    QWhatsThis::add( itemDelete, tr( "Delete the selected item." ) );
    GroupBox1->setTitle( tr( "&Item Properties" ) );
    Label1->setText( tr( "&Text:" ) );
    QToolTip::add( itemText, tr( "Change text" ) );
    QWhatsThis::add( itemText, tr( "Change the text for the selected item." ) );
    Label2->setText( tr( "&Pixmap:" ) );
    itemPixmap->setText( tr( "Label4" ) );
    itemDeletePixmap->setText( QString::null );
    QToolTip::add( itemDeletePixmap, tr( "Delete Pixmap" ) );
    QWhatsThis::add( itemDeletePixmap, tr( "Delete the selected item's pixmap." ) );
    itemChoosePixmap->setText( tr( "..." ) );
    QToolTip::add( itemChoosePixmap, tr( "Select a Pixmap" ) );
    QWhatsThis::add( itemChoosePixmap, tr( "Select a pixmap file for the current item." ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonApply->setText( tr( "&Apply" ) );
    QWhatsThis::add( buttonApply, tr( "Apply all changes." ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Close the dialog and apply all the changes." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog and discard any changes." ) );
}

void IconViewEditorBase::init()
{
}

void IconViewEditorBase::destroy()
{
}

void IconViewEditorBase::applyClicked()
{
    qWarning( "IconViewEditorBase::applyClicked(): Not implemented yet" );
}

void IconViewEditorBase::cancelClicked()
{
    qWarning( "IconViewEditorBase::cancelClicked(): Not implemented yet" );
}

void IconViewEditorBase::choosePixmap()
{
    qWarning( "IconViewEditorBase::choosePixmap(): Not implemented yet" );
}

void IconViewEditorBase::currentItemChanged(QIconViewItem*)
{
    qWarning( "IconViewEditorBase::currentItemChanged(QIconViewItem*): Not implemented yet" );
}

void IconViewEditorBase::currentTextChanged(const QString&)
{
    qWarning( "IconViewEditorBase::currentTextChanged(const QString&): Not implemented yet" );
}

void IconViewEditorBase::deleteCurrentItem()
{
    qWarning( "IconViewEditorBase::deleteCurrentItem(): Not implemented yet" );
}

void IconViewEditorBase::insertNewItem()
{
    qWarning( "IconViewEditorBase::insertNewItem(): Not implemented yet" );
}

void IconViewEditorBase::deletePixmap()
{
    qWarning( "IconViewEditorBase::deletePixmap(): Not implemented yet" );
}

void IconViewEditorBase::okClicked()
{
    qWarning( "IconViewEditorBase::okClicked(): Not implemented yet" );
}

