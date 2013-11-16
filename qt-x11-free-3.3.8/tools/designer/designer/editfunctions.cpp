/****************************************************************************
** Form implementation generated from reading ui file 'editfunctions.ui'
**
** Created: Tue Oct 8 10:19:32 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "editfunctions.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qheader.h>
#include <qlistview.h>
#include <qcheckbox.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a EditFunctionsBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
EditFunctionsBase::EditFunctionsBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "EditFunctionsBase" );
    setSizeGripEnabled( TRUE );
    EditFunctionsBaseLayout = new QVBoxLayout( this, 11, 6, "EditFunctionsBaseLayout"); 

    functionListView = new QListView( this, "functionListView" );
    functionListView->addColumn( tr( "Function" ) );
    functionListView->addColumn( tr( "Return Type" ) );
    functionListView->addColumn( tr( "Specifier" ) );
    functionListView->addColumn( tr( "Access" ) );
    functionListView->addColumn( tr( "Type" ) );
    functionListView->addColumn( tr( "In Use" ) );
    functionListView->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, functionListView->sizePolicy().hasHeightForWidth() ) );
    functionListView->setFrameShape( QListView::StyledPanel );
    functionListView->setFrameShadow( QListView::Sunken );
    functionListView->setAllColumnsShowFocus( TRUE );
    functionListView->setShowSortIndicator( TRUE );
    EditFunctionsBaseLayout->addWidget( functionListView );

    Layout11 = new QHBoxLayout( 0, 6, 6, "Layout11"); 

    showOnlySlots = new QCheckBox( this, "showOnlySlots" );
    showOnlySlots->setFocusPolicy( QCheckBox::StrongFocus );
    Layout11->addWidget( showOnlySlots );
    Vertical_Spacing1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout11->addItem( Vertical_Spacing1 );

    addFunction = new QPushButton( this, "addFunction" );
    Layout11->addWidget( addFunction );

    deleteFunction = new QPushButton( this, "deleteFunction" );
    Layout11->addWidget( deleteFunction );
    EditFunctionsBaseLayout->addLayout( Layout11 );

    boxProperties = new QGroupBox( this, "boxProperties" );
    boxProperties->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, boxProperties->sizePolicy().hasHeightForWidth() ) );
    boxProperties->setColumnLayout(0, Qt::Vertical );
    boxProperties->layout()->setSpacing( 6 );
    boxProperties->layout()->setMargin( 11 );
    boxPropertiesLayout = new QVBoxLayout( boxProperties->layout() );
    boxPropertiesLayout->setAlignment( Qt::AlignTop );

    Layout14 = new QVBoxLayout( 0, 0, 6, "Layout14"); 

    Layout5 = new QHBoxLayout( 0, 0, 6, "Layout5"); 

    Label8 = new QLabel( boxProperties, "Label8" );
    Label8->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout5->addWidget( Label8 );

    functionName = new QLineEdit( boxProperties, "functionName" );
    functionName->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, functionName->sizePolicy().hasHeightForWidth() ) );
    Layout5->addWidget( functionName );

    labelType = new QLabel( boxProperties, "labelType" );
    labelType->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout5->addWidget( labelType );

    editType = new QLineEdit( boxProperties, "editType" );
    editType->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, editType->sizePolicy().hasHeightForWidth() ) );
    Layout5->addWidget( editType );
    Layout14->addLayout( Layout5 );
    Spacer6_2 = new QSpacerItem( 20, 16, QSizePolicy::Minimum, QSizePolicy::Fixed );
    Layout14->addItem( Spacer6_2 );

    Layout13 = new QHBoxLayout( 0, 0, 6, "Layout13"); 

    Label9_2 = new QLabel( boxProperties, "Label9_2" );
    Label9_2->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout13->addWidget( Label9_2 );

    functionSpecifier = new QComboBox( FALSE, boxProperties, "functionSpecifier" );
    functionSpecifier->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, functionSpecifier->sizePolicy().hasHeightForWidth() ) );
    Layout13->addWidget( functionSpecifier );

    TextLabel1 = new QLabel( boxProperties, "TextLabel1" );
    TextLabel1->setAlignment( int( QLabel::WordBreak | QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout13->addWidget( TextLabel1 );

    functionAccess = new QComboBox( FALSE, boxProperties, "functionAccess" );
    functionAccess->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, functionAccess->sizePolicy().hasHeightForWidth() ) );
    Layout13->addWidget( functionAccess );

    TextLabel1_2 = new QLabel( boxProperties, "TextLabel1_2" );
    TextLabel1_2->setAlignment( int( QLabel::AlignVCenter | QLabel::AlignRight ) );
    Layout13->addWidget( TextLabel1_2 );

    functionType = new QComboBox( FALSE, boxProperties, "functionType" );
    Layout13->addWidget( functionType );
    Spacer5 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout13->addItem( Spacer5 );
    Layout14->addLayout( Layout13 );
    boxPropertiesLayout->addLayout( Layout14 );
    EditFunctionsBaseLayout->addWidget( boxProperties );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    helpButton = new QPushButton( this, "helpButton" );
    helpButton->setAutoDefault( TRUE );
    Layout1->addWidget( helpButton );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    okButton = new QPushButton( this, "okButton" );
    okButton->setAutoDefault( TRUE );
    okButton->setDefault( TRUE );
    Layout1->addWidget( okButton );

    cancelButton = new QPushButton( this, "cancelButton" );
    cancelButton->setAutoDefault( TRUE );
    Layout1->addWidget( cancelButton );
    EditFunctionsBaseLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(600, 371).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( cancelButton, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( okButton, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( deleteFunction, SIGNAL( clicked() ), this, SLOT( functionRemove() ) );
    connect( addFunction, SIGNAL( clicked() ), this, SLOT( functionAdd() ) );
    connect( functionName, SIGNAL( textChanged(const QString&) ), this, SLOT( currentTextChanged(const QString&) ) );
    connect( functionListView, SIGNAL( selectionChanged(QListViewItem*) ), this, SLOT( currentItemChanged(QListViewItem*) ) );
    connect( functionListView, SIGNAL( currentChanged(QListViewItem*) ), this, SLOT( currentItemChanged(QListViewItem*) ) );
    connect( editType, SIGNAL( textChanged(const QString&) ), this, SLOT( currentReturnTypeChanged(const QString&) ) );
    connect( functionSpecifier, SIGNAL( activated(const QString&) ), this, SLOT( currentSpecifierChanged(const QString&) ) );
    connect( functionAccess, SIGNAL( activated(const QString&) ), this, SLOT( currentAccessChanged(const QString&) ) );
    connect( functionType, SIGNAL( activated(const QString&) ), this, SLOT( currentTypeChanged(const QString&) ) );
    connect( showOnlySlots, SIGNAL( toggled(bool) ), this, SLOT( displaySlots(bool) ) );

    // tab order
    setTabOrder( functionName, editType );
    setTabOrder( editType, functionSpecifier );
    setTabOrder( functionSpecifier, functionAccess );
    setTabOrder( functionAccess, functionType );
    setTabOrder( functionType, helpButton );
    setTabOrder( helpButton, okButton );
    setTabOrder( okButton, cancelButton );
    setTabOrder( cancelButton, functionListView );
    setTabOrder( functionListView, showOnlySlots );
    setTabOrder( showOnlySlots, addFunction );
    setTabOrder( addFunction, deleteFunction );

    // buddies
    Label8->setBuddy( functionName );
    labelType->setBuddy( editType );
    Label9_2->setBuddy( functionSpecifier );
    TextLabel1->setBuddy( functionAccess );
    TextLabel1_2->setBuddy( functionType );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
EditFunctionsBase::~EditFunctionsBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void EditFunctionsBase::languageChange()
{
    setCaption( tr( "Edit Functions" ) );
    QWhatsThis::add( this, tr( "<b>Edit Functions</b><p>Add, edit or delete the current form's slots or functions.</p><p>Click the <b>Add Function</b>-button to create a new function; enter a name, choose an access mode and specify if it should be a slot or normal function.</p><p>Select an entry from the list and click the <b>Delete Function</b>-button to remove a function; in case of a slot all connections using this slot will also be removed.</p>" ) );
    functionListView->header()->setLabel( 0, tr( "Function" ) );
    functionListView->header()->setLabel( 1, tr( "Return Type" ) );
    functionListView->header()->setLabel( 2, tr( "Specifier" ) );
    functionListView->header()->setLabel( 3, tr( "Access" ) );
    functionListView->header()->setLabel( 4, tr( "Type" ) );
    functionListView->header()->setLabel( 5, tr( "In Use" ) );
    QWhatsThis::add( functionListView, tr( "<b>This form's functions.</b><p>Select the function you want to change or delete.</p>" ) );
    showOnlySlots->setText( tr( "Only d&isplay slots" ) );
    QToolTip::add( showOnlySlots, tr( "Change displaying mode for functions" ) );
    QWhatsThis::add( showOnlySlots, tr( "<b>Check this button if only the slots should be displayed</b><p>Otherwise all functions, i.e. normal C++ functions and slots are displayed.</p>\n"
"" ) );
    addFunction->setText( tr( "&New Function" ) );
    QToolTip::add( addFunction, tr( "Add new function" ) );
    QWhatsThis::add( addFunction, tr( "<b>Add a new function.</b><p>New functions have a default name and public access.</p>" ) );
    deleteFunction->setText( tr( "&Delete Function" ) );
    QToolTip::add( deleteFunction, tr( "Delete function" ) );
    QWhatsThis::add( deleteFunction, tr( "<b>Delete the selected function.</b><p>All connections using this function are also removed.</p>" ) );
    boxProperties->setTitle( tr( "Function Properties" ) );
    Label8->setText( tr( "&Function:" ) );
    QToolTip::add( functionName, tr( "Change function name" ) );
    QWhatsThis::add( functionName, tr( "<b>Change the name of the selected function.</b><p>The name should include the argument list and must be syntactically correct.</p>" ) );
    labelType->setText( tr( "&Return type:" ) );
    QToolTip::add( editType, tr( "Change the return type of the function" ) );
    QWhatsThis::add( editType, tr( "<b>Change the return type of the selected function.</b><p>Specifiy here the datatype which should be returned by the function.</p>" ) );
    Label9_2->setText( tr( "S&pecifier:" ) );
    functionSpecifier->clear();
    functionSpecifier->insertItem( tr( "non virtual" ) );
    functionSpecifier->insertItem( tr( "virtual" ) );
    functionSpecifier->insertItem( tr( "pure virtual" ) );
    functionSpecifier->insertItem( tr( "static" ) );
    QToolTip::add( functionSpecifier, tr( "Change function access" ) );
    QWhatsThis::add( functionSpecifier, tr( "<b>Change the access policy of the function</b><p>All functions are created virtual and should be reimplemented in subclasses.</p>" ) );
    TextLabel1->setText( tr( "&Access:" ) );
    functionAccess->clear();
    functionAccess->insertItem( tr( "public" ) );
    functionAccess->insertItem( tr( "protected" ) );
    functionAccess->insertItem( tr( "private" ) );
    QToolTip::add( functionAccess, tr( "Change function access" ) );
    QWhatsThis::add( functionAccess, tr( "<b>Change the access policy of the function</b><p>All functions are created virtual and should be reimplemented in subclasses.</p>" ) );
    TextLabel1_2->setText( tr( "&Type:" ) );
    functionType->clear();
    functionType->insertItem( tr( "slot" ) );
    functionType->insertItem( tr( "function" ) );
    QToolTip::add( functionType, tr( "Change function type" ) );
    QWhatsThis::add( functionType, tr( "<b>Change the type of the function.</b><p>The type specifies if the function is either a slot or a normal C++ function.</p>" ) );
    helpButton->setText( tr( "&Help" ) );
    okButton->setText( tr( "&OK" ) );
    QWhatsThis::add( okButton, tr( "Close the dialog and apply all the changes." ) );
    cancelButton->setText( tr( "&Cancel" ) );
    QWhatsThis::add( cancelButton, tr( "Close the dialog and discard any changes." ) );
}

void EditFunctionsBase::currentItemChanged(QListViewItem*)
{
    qWarning( "EditFunctionsBase::currentItemChanged(QListViewItem*): Not implemented yet" );
}

void EditFunctionsBase::currentSpecifierChanged(const QString&)
{
    qWarning( "EditFunctionsBase::currentSpecifierChanged(const QString&): Not implemented yet" );
}

void EditFunctionsBase::currentTextChanged(const QString&)
{
    qWarning( "EditFunctionsBase::currentTextChanged(const QString&): Not implemented yet" );
}

void EditFunctionsBase::currentReturnTypeChanged(const QString&)
{
    qWarning( "EditFunctionsBase::currentReturnTypeChanged(const QString&): Not implemented yet" );
}

void EditFunctionsBase::destroy()
{
}

void EditFunctionsBase::init()
{
}

void EditFunctionsBase::currentAccessChanged(const QString&)
{
    qWarning( "EditFunctionsBase::currentAccessChanged(const QString&): Not implemented yet" );
}

void EditFunctionsBase::currentTypeChanged(const QString&)
{
    qWarning( "EditFunctionsBase::currentTypeChanged(const QString&): Not implemented yet" );
}

void EditFunctionsBase::okClicked()
{
    qWarning( "EditFunctionsBase::okClicked(): Not implemented yet" );
}

void EditFunctionsBase::functionAdd()
{
    qWarning( "EditFunctionsBase::functionAdd(): Not implemented yet" );
}

void EditFunctionsBase::functionRemove()
{
    qWarning( "EditFunctionsBase::functionRemove(): Not implemented yet" );
}

void EditFunctionsBase::displaySlots(bool)
{
    qWarning( "EditFunctionsBase::displaySlots(bool): Not implemented yet" );
}

