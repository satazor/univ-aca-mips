/****************************************************************************
** Form implementation generated from reading ui file 'customwidgeteditor.ui'
**
** Created: Tue Oct 8 10:19:35 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "customwidgeteditor.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlistbox.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qspinbox.h>
#include <qcheckbox.h>
#include <qheader.h>
#include <qlistview.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a CustomWidgetEditorBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
CustomWidgetEditorBase::CustomWidgetEditorBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "CustomWidgetEditorBase" );
    setSizeGripEnabled( TRUE );
    CustomWidgetEditorBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "CustomWidgetEditorBaseLayout"); 

    boxWidgets = new QListBox( this, "boxWidgets" );

    CustomWidgetEditorBaseLayout->addMultiCellWidget( boxWidgets, 0, 4, 0, 0 );

    buttonNewWidget = new QPushButton( this, "buttonNewWidget" );

    CustomWidgetEditorBaseLayout->addWidget( buttonNewWidget, 0, 1 );

    buttonDeleteWidget = new QPushButton( this, "buttonDeleteWidget" );

    CustomWidgetEditorBaseLayout->addWidget( buttonDeleteWidget, 1, 1 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    helpButton = new QPushButton( this, "helpButton" );
    helpButton->setAutoDefault( TRUE );
    Layout1->addWidget( helpButton );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );

    CustomWidgetEditorBaseLayout->addMultiCellLayout( Layout1, 5, 5, 0, 2 );
    Vertical_Spacing1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    CustomWidgetEditorBaseLayout->addItem( Vertical_Spacing1, 2, 1 );

    buttonLoad = new QPushButton( this, "buttonLoad" );

    CustomWidgetEditorBaseLayout->addWidget( buttonLoad, 3, 1 );

    buttonSave = new QPushButton( this, "buttonSave" );

    CustomWidgetEditorBaseLayout->addWidget( buttonSave, 4, 1 );

    TabWidget1 = new QTabWidget( this, "TabWidget1" );

    Widget2 = new QWidget( TabWidget1, "Widget2" );
    Widget2Layout = new QGridLayout( Widget2, 1, 1, 11, 6, "Widget2Layout"); 

    Layout4 = new QHBoxLayout( 0, 0, 6, "Layout4"); 

    previewPixmap = new QLabel( Widget2, "previewPixmap" );
    Layout4->addWidget( previewPixmap );

    buttonChoosePixmap = new QPushButton( Widget2, "buttonChoosePixmap" );
    buttonChoosePixmap->setMaximumSize( QSize( 30, 22 ) );
    Layout4->addWidget( buttonChoosePixmap );

    Widget2Layout->addMultiCellLayout( Layout4, 2, 2, 1, 2 );

    Layout5 = new QHBoxLayout( 0, 0, 6, "Layout5"); 

    editHeader = new QLineEdit( Widget2, "editHeader" );
    Layout5->addWidget( editHeader );

    buttonChooseHeader = new QPushButton( Widget2, "buttonChooseHeader" );
    buttonChooseHeader->setMaximumSize( QSize( 30, 22 ) );
    Layout5->addWidget( buttonChooseHeader );

    localGlobalCombo = new QComboBox( FALSE, Widget2, "localGlobalCombo" );
    Layout5->addWidget( localGlobalCombo );

    Widget2Layout->addMultiCellLayout( Layout5, 1, 1, 1, 2 );

    editClass = new QLineEdit( Widget2, "editClass" );

    Widget2Layout->addMultiCellWidget( editClass, 0, 0, 1, 2 );

    Label11 = new QLabel( Widget2, "Label11" );

    Widget2Layout->addWidget( Label11, 1, 0 );

    Label10 = new QLabel( Widget2, "Label10" );

    Widget2Layout->addWidget( Label10, 0, 0 );

    Label2 = new QLabel( Widget2, "Label2" );

    Widget2Layout->addWidget( Label2, 2, 0 );

    Label7 = new QLabel( Widget2, "Label7" );

    Widget2Layout->addWidget( Label7, 3, 0 );

    TextLabel1_2 = new QLabel( Widget2, "TextLabel1_2" );

    Widget2Layout->addWidget( TextLabel1_2, 4, 0 );

    sizeVer = new QComboBox( FALSE, Widget2, "sizeVer" );

    Widget2Layout->addWidget( sizeVer, 4, 2 );

    spinWidth = new QSpinBox( Widget2, "spinWidth" );
    spinWidth->setMaxValue( 32767 );
    spinWidth->setMinValue( -1 );
    spinWidth->setValue( -1 );

    Widget2Layout->addWidget( spinWidth, 3, 1 );

    spinHeight = new QSpinBox( Widget2, "spinHeight" );
    spinHeight->setMaxValue( 32767 );
    spinHeight->setMinValue( -1 );
    spinHeight->setValue( -1 );

    Widget2Layout->addWidget( spinHeight, 3, 2 );

    sizeHor = new QComboBox( FALSE, Widget2, "sizeHor" );

    Widget2Layout->addWidget( sizeHor, 4, 1 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Widget2Layout->addItem( Spacer1, 6, 2 );

    checkContainer = new QCheckBox( Widget2, "checkContainer" );

    Widget2Layout->addWidget( checkContainer, 5, 1 );
    TabWidget1->insertTab( Widget2, QString::fromLatin1("") );

    Widget3 = new QWidget( TabWidget1, "Widget3" );
    Widget3Layout = new QVBoxLayout( Widget3, 11, 6, "Widget3Layout"); 

    listSignals = new QListBox( Widget3, "listSignals" );
    Widget3Layout->addWidget( listSignals );

    Layout40 = new QHBoxLayout( 0, 0, 6, "Layout40"); 
    Spacer1_2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout40->addItem( Spacer1_2 );

    buttonAddSignal = new QPushButton( Widget3, "buttonAddSignal" );
    buttonAddSignal->setAutoDefault( TRUE );
    Layout40->addWidget( buttonAddSignal );

    buttonRemoveSignal = new QPushButton( Widget3, "buttonRemoveSignal" );
    buttonRemoveSignal->setAutoDefault( TRUE );
    Layout40->addWidget( buttonRemoveSignal );
    Widget3Layout->addLayout( Layout40 );

    Layout38 = new QHBoxLayout( 0, 0, 6, "Layout38"); 

    TextLabel1 = new QLabel( Widget3, "TextLabel1" );
    Layout38->addWidget( TextLabel1 );

    editSignal = new QLineEdit( Widget3, "editSignal" );
    Layout38->addWidget( editSignal );
    Widget3Layout->addLayout( Layout38 );
    TabWidget1->insertTab( Widget3, QString::fromLatin1("") );

    Widget4 = new QWidget( TabWidget1, "Widget4" );
    Widget4Layout = new QGridLayout( Widget4, 1, 1, 11, 6, "Widget4Layout"); 

    listSlots = new QListView( Widget4, "listSlots" );
    listSlots->addColumn( tr( "Slot" ) );
    listSlots->addColumn( tr( "Access" ) );
    listSlots->setAllColumnsShowFocus( TRUE );
    listSlots->setShowSortIndicator( TRUE );

    Widget4Layout->addMultiCellWidget( listSlots, 0, 0, 0, 3 );

    TextLabel2 = new QLabel( Widget4, "TextLabel2" );

    Widget4Layout->addWidget( TextLabel2, 2, 0 );

    editSlot = new QLineEdit( Widget4, "editSlot" );

    Widget4Layout->addWidget( editSlot, 2, 1 );

    TextLabel3 = new QLabel( Widget4, "TextLabel3" );

    Widget4Layout->addWidget( TextLabel3, 2, 2 );

    comboAccess = new QComboBox( FALSE, Widget4, "comboAccess" );

    Widget4Layout->addWidget( comboAccess, 2, 3 );

    Layout7 = new QHBoxLayout( 0, 0, 6, "Layout7"); 
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout7->addItem( Spacer2 );

    buttonAddSlot = new QPushButton( Widget4, "buttonAddSlot" );
    buttonAddSlot->setAutoDefault( TRUE );
    Layout7->addWidget( buttonAddSlot );

    buttonRemoveSlot = new QPushButton( Widget4, "buttonRemoveSlot" );
    buttonRemoveSlot->setAutoDefault( TRUE );
    Layout7->addWidget( buttonRemoveSlot );

    Widget4Layout->addMultiCellLayout( Layout7, 1, 1, 0, 3 );
    TabWidget1->insertTab( Widget4, QString::fromLatin1("") );

    Widget5 = new QWidget( TabWidget1, "Widget5" );
    Widget5Layout = new QGridLayout( Widget5, 1, 1, 11, 6, "Widget5Layout"); 

    Layout7_2 = new QHBoxLayout( 0, 0, 6, "Layout7_2"); 
    Spacer2_2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout7_2->addItem( Spacer2_2 );

    buttonAddProperty = new QPushButton( Widget5, "buttonAddProperty" );
    buttonAddProperty->setAutoDefault( TRUE );
    Layout7_2->addWidget( buttonAddProperty );

    buttonRemoveProperty = new QPushButton( Widget5, "buttonRemoveProperty" );
    buttonRemoveProperty->setAutoDefault( TRUE );
    Layout7_2->addWidget( buttonRemoveProperty );

    Widget5Layout->addMultiCellLayout( Layout7_2, 1, 1, 0, 3 );

    comboType = new QComboBox( FALSE, Widget5, "comboType" );

    Widget5Layout->addWidget( comboType, 2, 3 );

    listProperties = new QListView( Widget5, "listProperties" );
    listProperties->addColumn( tr( "Property" ) );
    listProperties->addColumn( tr( "Type" ) );
    listProperties->setAllColumnsShowFocus( TRUE );
    listProperties->setShowSortIndicator( TRUE );

    Widget5Layout->addMultiCellWidget( listProperties, 0, 0, 0, 3 );

    editProperty = new QLineEdit( Widget5, "editProperty" );

    Widget5Layout->addWidget( editProperty, 2, 1 );

    TextLabel2_2 = new QLabel( Widget5, "TextLabel2_2" );

    Widget5Layout->addWidget( TextLabel2_2, 2, 0 );

    TextLabel3_2 = new QLabel( Widget5, "TextLabel3_2" );

    Widget5Layout->addWidget( TextLabel3_2, 2, 2 );
    TabWidget1->insertTab( Widget5, QString::fromLatin1("") );

    CustomWidgetEditorBaseLayout->addMultiCellWidget( TabWidget1, 0, 4, 2, 2 );
    languageChange();
    resize( QSize(712, 386).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( boxWidgets, SIGNAL( selectionChanged(QListBoxItem*) ), this, SLOT( currentWidgetChanged(QListBoxItem*) ) );
    connect( boxWidgets, SIGNAL( currentChanged(QListBoxItem*) ), this, SLOT( currentWidgetChanged(QListBoxItem*) ) );
    connect( buttonNewWidget, SIGNAL( clicked() ), this, SLOT( addWidgetClicked() ) );
    connect( buttonDeleteWidget, SIGNAL( clicked() ), this, SLOT( deleteWidgetClicked() ) );
    connect( editClass, SIGNAL( textChanged(const QString&) ), this, SLOT( classNameChanged(const QString&) ) );
    connect( editHeader, SIGNAL( textChanged(const QString&) ), this, SLOT( headerFileChanged(const QString&) ) );
    connect( spinWidth, SIGNAL( valueChanged(int) ), this, SLOT( widthChanged(int) ) );
    connect( spinHeight, SIGNAL( valueChanged(int) ), this, SLOT( heightChanged(int) ) );
    connect( buttonChoosePixmap, SIGNAL( clicked() ), this, SLOT( pixmapChoosen() ) );
    connect( localGlobalCombo, SIGNAL( highlighted(int) ), this, SLOT( includePolicyChanged(int) ) );
    connect( buttonChooseHeader, SIGNAL( clicked() ), this, SLOT( chooseHeader() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( closeClicked() ) );
    connect( listSignals, SIGNAL( currentChanged(QListBoxItem*) ), this, SLOT( currentSignalChanged(QListBoxItem*) ) );
    connect( listSignals, SIGNAL( selectionChanged(QListBoxItem*) ), this, SLOT( currentSignalChanged(QListBoxItem*) ) );
    connect( buttonRemoveSignal, SIGNAL( clicked() ), this, SLOT( removeSignal() ) );
    connect( editSignal, SIGNAL( textChanged(const QString&) ), this, SLOT( signalNameChanged(const QString&) ) );
    connect( listSlots, SIGNAL( currentChanged(QListViewItem*) ), this, SLOT( currentSlotChanged(QListViewItem*) ) );
    connect( listSlots, SIGNAL( selectionChanged(QListViewItem*) ), this, SLOT( currentSlotChanged(QListViewItem*) ) );
    connect( buttonRemoveSlot, SIGNAL( clicked() ), this, SLOT( removeSlot() ) );
    connect( editSlot, SIGNAL( textChanged(const QString&) ), this, SLOT( slotNameChanged(const QString&) ) );
    connect( comboAccess, SIGNAL( activated(const QString&) ), this, SLOT( slotAccessChanged(const QString&) ) );
    connect( listProperties, SIGNAL( currentChanged(QListViewItem*) ), this, SLOT( currentPropertyChanged(QListViewItem*) ) );
    connect( listProperties, SIGNAL( selectionChanged(QListViewItem*) ), this, SLOT( currentPropertyChanged(QListViewItem*) ) );
    connect( buttonRemoveProperty, SIGNAL( clicked() ), this, SLOT( removeProperty() ) );
    connect( editProperty, SIGNAL( textChanged(const QString&) ), this, SLOT( propertyNameChanged(const QString&) ) );
    connect( comboType, SIGNAL( activated(const QString&) ), this, SLOT( propertyTypeChanged(const QString&) ) );
    connect( buttonLoad, SIGNAL( clicked() ), this, SLOT( loadDescription() ) );
    connect( buttonSave, SIGNAL( clicked() ), this, SLOT( saveDescription() ) );
    connect( sizeHor, SIGNAL( activated(int) ), this, SLOT( horDataChanged(int) ) );
    connect( sizeVer, SIGNAL( activated(int) ), this, SLOT( verDataChanged(int) ) );
    connect( buttonAddProperty, SIGNAL( clicked() ), this, SLOT( addProperty() ) );
    connect( checkContainer, SIGNAL( toggled(bool) ), this, SLOT( widgetIsContainer(bool) ) );
    connect( buttonAddSignal, SIGNAL( clicked() ), this, SLOT( addSignal() ) );
    connect( buttonAddSlot, SIGNAL( clicked() ), this, SLOT( addSlot() ) );

    // tab order
    setTabOrder( buttonCancel, boxWidgets );
    setTabOrder( boxWidgets, buttonNewWidget );
    setTabOrder( buttonNewWidget, buttonDeleteWidget );
    setTabOrder( buttonDeleteWidget, buttonLoad );
    setTabOrder( buttonLoad, buttonSave );
    setTabOrder( buttonSave, TabWidget1 );
    setTabOrder( TabWidget1, editClass );
    setTabOrder( editClass, editHeader );
    setTabOrder( editHeader, buttonChooseHeader );
    setTabOrder( buttonChooseHeader, localGlobalCombo );
    setTabOrder( localGlobalCombo, buttonChoosePixmap );
    setTabOrder( buttonChoosePixmap, spinWidth );
    setTabOrder( spinWidth, spinHeight );
    setTabOrder( spinHeight, sizeHor );
    setTabOrder( sizeHor, sizeVer );
    setTabOrder( sizeVer, checkContainer );
    setTabOrder( checkContainer, helpButton );
    setTabOrder( helpButton, listSignals );
    setTabOrder( listSignals, buttonAddSignal );
    setTabOrder( buttonAddSignal, buttonRemoveSignal );
    setTabOrder( buttonRemoveSignal, editSignal );
    setTabOrder( editSignal, listSlots );
    setTabOrder( listSlots, buttonAddSlot );
    setTabOrder( buttonAddSlot, buttonRemoveSlot );
    setTabOrder( buttonRemoveSlot, editSlot );
    setTabOrder( editSlot, comboAccess );
    setTabOrder( comboAccess, listProperties );
    setTabOrder( listProperties, buttonAddProperty );
    setTabOrder( buttonAddProperty, buttonRemoveProperty );
    setTabOrder( buttonRemoveProperty, editProperty );
    setTabOrder( editProperty, comboType );

    // buddies
    Label11->setBuddy( editHeader );
    Label10->setBuddy( editClass );
    Label7->setBuddy( spinWidth );
    TextLabel1_2->setBuddy( sizeHor );
    TextLabel1->setBuddy( editSignal );
    TextLabel2->setBuddy( editSlot );
    TextLabel3->setBuddy( comboAccess );
    TextLabel2_2->setBuddy( editProperty );
    TextLabel3_2->setBuddy( comboType );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
CustomWidgetEditorBase::~CustomWidgetEditorBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void CustomWidgetEditorBase::languageChange()
{
    setCaption( tr( "Edit Custom Widgets" ) );
    QWhatsThis::add( this, tr( "<b>Edit Custom Widgets</b><p>Add or delete custom widgets from <i>Qt Designer</i>'s database, and edit the properties of existing widgets.</p>" ) );
    QWhatsThis::add( boxWidgets, tr( "The list of all custom widgets known to Qt Designer." ) );
    buttonNewWidget->setText( tr( "&New Widget" ) );
    QToolTip::add( buttonNewWidget, tr( "Add new custom widget." ) );
    QWhatsThis::add( buttonNewWidget, tr( "<b>Create an empty custom widget and add it to the list.</b><p>New custom widgets have a default name and header file, which must both be changed to appropriate values.</p>" ) );
    buttonDeleteWidget->setText( tr( "&Delete Widget" ) );
    QToolTip::add( buttonDeleteWidget, tr( "Delete custom widget" ) );
    QWhatsThis::add( buttonDeleteWidget, tr( "<b>Delete the selected custom widget.</b><p>You can only delete widgets that are not used in any open form.</p>" ) );
    helpButton->setText( tr( "&Help" ) );
    buttonCancel->setText( tr( "&Close" ) );
    QWhatsThis::add( buttonCancel, tr( "Closes the Dialog." ) );
    buttonLoad->setText( tr( "&Load Descriptions..." ) );
    QToolTip::add( buttonLoad, tr( "Loads widget description file" ) );
    QWhatsThis::add( buttonLoad, tr( "<b>Load Descriptions</b><p>Loads a file which contains descriptions of custom widgets, so that these custom widgets can be used in the Qt Designer.</p>\n"
"<p>Since it is a lot of work to type in all the information for custom widgets, you should consider using the createcw tool which is in $QTDIR/tools/designer/tools/createcw. Using createcw you can create custom widget description files for your custom widgets without the need to type in all the information manually. For more information about the README file in the createcw directory</p>" ) );
    buttonSave->setText( tr( "&Save Descriptions..." ) );
    QToolTip::add( buttonSave, tr( "Saves widget description file" ) );
    QWhatsThis::add( buttonSave, tr( "<b>Save Descriptions</b><p>Saves all the descriptions of the shown custom widgets to a file which can then be used to import the custom widgets elsewhere." ) );
    QWhatsThis::add( TabWidget1, tr( "Change the properties of the selected custom widget." ) );
    previewPixmap->setText( QString::null );
    buttonChoosePixmap->setText( tr( "..." ) );
    QToolTip::add( buttonChoosePixmap, tr( "Select a Pixmap" ) );
    QWhatsThis::add( buttonChoosePixmap, tr( "<b>Select a pixmap file.</b><p>The pixmap will be used to represent the widget in forms.</b>" ) );
    QToolTip::add( editHeader, tr( "Enter filename" ) );
    QWhatsThis::add( editHeader, tr( "<b>Change the header file's name for the selected custom widget.</b><p>The header file will be included by forms using the widget.</p>" ) );
    buttonChooseHeader->setText( tr( "..." ) );
    QToolTip::add( buttonChooseHeader, tr( "Choose headerfile" ) );
    QWhatsThis::add( buttonChooseHeader, tr( "Look for the header file using a filedialog." ) );
    localGlobalCombo->clear();
    localGlobalCombo->insertItem( tr( "Global" ) );
    localGlobalCombo->insertItem( tr( "Local" ) );
    QToolTip::add( localGlobalCombo, tr( "Select access" ) );
    QWhatsThis::add( localGlobalCombo, tr( "<b>Change how the include file will be included.</b><p>Global include files will be included using &lt;&gt;-brackets, while local files will included using quotation marks.</p>" ) );
    QToolTip::add( editClass, tr( "Change classname" ) );
    QWhatsThis::add( editClass, tr( "<b>Enter the classname for the selected custom widget.</b><p>A class of that name must be defined in the header file.</p>" ) );
    Label11->setText( tr( "Heade&rfile:" ) );
    Label10->setText( tr( "Cl&ass:" ) );
    Label2->setText( tr( "Pixmap:" ) );
    Label7->setText( tr( "Si&ze Hint:" ) );
    TextLabel1_2->setText( tr( "Size P&olicy" ) );
    sizeVer->clear();
    sizeVer->insertItem( tr( "Fixed" ) );
    sizeVer->insertItem( tr( "Minimum" ) );
    sizeVer->insertItem( tr( "Maximum" ) );
    sizeVer->insertItem( tr( "Preferred" ) );
    sizeVer->insertItem( tr( "MinimumExpanding" ) );
    sizeVer->insertItem( tr( "Expanding" ) );
    QToolTip::add( sizeVer, tr( "Vertical Sizepolicy" ) );
    QWhatsThis::add( sizeVer, tr( "Choose the Vertical size policy" ) );
    QToolTip::add( spinWidth, tr( "Size hint width" ) );
    QWhatsThis::add( spinWidth, tr( "<b>Set the size hint for the selected widget.</b><p>The size hint provides the recommended size for the widget. Enter a sizehint of -1/-1 if no size is recommended.</p>" ) );
    QToolTip::add( spinHeight, tr( "Size hint height" ) );
    QWhatsThis::add( spinHeight, tr( "<b>Set the size hint for the selected widget.</b><p>The size hint provides the recommended size for the widget. Enter a sizehint of -1/-1 if no size is recommended.</p>" ) );
    sizeHor->clear();
    sizeHor->insertItem( tr( "Fixed" ) );
    sizeHor->insertItem( tr( "Minimum" ) );
    sizeHor->insertItem( tr( "Maximum" ) );
    sizeHor->insertItem( tr( "Preferred" ) );
    sizeHor->insertItem( tr( "MinimumExpanding" ) );
    sizeHor->insertItem( tr( "Expanding" ) );
    QToolTip::add( sizeHor, tr( "Horizontal Sizepolicy" ) );
    QWhatsThis::add( sizeHor, tr( "Choose the horizontal size policy for the widget" ) );
    checkContainer->setText( tr( "Con&tainer Widget" ) );
    QToolTip::add( checkContainer, tr( "Container Widget" ) );
    QWhatsThis::add( checkContainer, tr( "<p><b>Container Widget</b></p>\n"
"<p>If this custom widget is able to contain other widgets (children), check this checkbox.</p>" ) );
    TabWidget1->changeTab( Widget2, tr( "De&finition" ) );
    QWhatsThis::add( listSignals, tr( "The list of all the signals that the selected widget can emit." ) );
    buttonAddSignal->setText( tr( "N&ew Signal" ) );
    QToolTip::add( buttonAddSignal, tr( "Add new signal" ) );
    QWhatsThis::add( buttonAddSignal, tr( "<b>Add a new signal for the current custom widget.</b><p>An argument list should be provided in the signal's name, and the name must be unique.</p>" ) );
    buttonRemoveSignal->setText( tr( "Dele&te Signal" ) );
    QToolTip::add( buttonRemoveSignal, tr( "Delete signal" ) );
    QWhatsThis::add( buttonRemoveSignal, tr( "<b>Delete the signal.</b><p>All connections using this signal will also be deleted.</p>" ) );
    TextLabel1->setText( tr( "S&ignal:" ) );
    QToolTip::add( editSignal, tr( "Change signal name" ) );
    QWhatsThis::add( editSignal, tr( "<b>Change the name of the selected slot.</b><p>An argument list should be provided in the signal's name, and the name must be unique.</p>" ) );
    TabWidget1->changeTab( Widget3, tr( "Si&gnals" ) );
    listSlots->header()->setLabel( 0, tr( "Slot" ) );
    listSlots->header()->setLabel( 1, tr( "Access" ) );
    QWhatsThis::add( listSlots, tr( "The list of all the custom widget's slots." ) );
    TextLabel2->setText( tr( "Sl&ot:" ) );
    QToolTip::add( editSlot, tr( "Change slot name" ) );
    QWhatsThis::add( editSlot, tr( "<b>Change the name of the selected slot.</b><p>An argument list should be provided in the signal's name, and the name must be unique.</p>" ) );
    TextLabel3->setText( tr( "&Access:" ) );
    comboAccess->clear();
    comboAccess->insertItem( tr( "public" ) );
    comboAccess->insertItem( tr( "protected" ) );
    QToolTip::add( comboAccess, tr( "Change slot access" ) );
    QWhatsThis::add( comboAccess, tr( "<b>Change the slot's access policy.</b><p>You can only connect to the widget's public slots.</p>" ) );
    buttonAddSlot->setText( tr( "N&ew Slot" ) );
    QToolTip::add( buttonAddSlot, tr( "Add new slot" ) );
    QWhatsThis::add( buttonAddSlot, tr( "<b>Add a new slot to the current custom widget.</b><p>An argument list should be provided in the signal's name, and the name must be unique.</p>" ) );
    buttonRemoveSlot->setText( tr( "Dele&te Slot" ) );
    QToolTip::add( buttonRemoveSlot, tr( "Delete slot" ) );
    QWhatsThis::add( buttonRemoveSlot, tr( "<b>Delete the slot.</b><p>All connections using this slot will also be deleted.</p>" ) );
    TabWidget1->changeTab( Widget4, tr( "S&lots" ) );
    buttonAddProperty->setText( tr( "N&ew Property" ) );
    QToolTip::add( buttonAddProperty, tr( "Add new property" ) );
    QWhatsThis::add( buttonAddProperty, tr( "<b>Add a new property to the current custom widget.</b><p>The properties must be implemented in the class using Qt's property system.</p>" ) );
    buttonRemoveProperty->setText( tr( "Dele&te Property" ) );
    QToolTip::add( buttonRemoveProperty, tr( "Delete property" ) );
    QWhatsThis::add( buttonRemoveProperty, tr( "Deletes the selected property." ) );
    comboType->clear();
    comboType->insertItem( tr( "String" ) );
    comboType->insertItem( tr( "CString" ) );
    comboType->insertItem( tr( "StringList" ) );
    comboType->insertItem( tr( "Bool" ) );
    comboType->insertItem( tr( "Int" ) );
    comboType->insertItem( tr( "UInt" ) );
    comboType->insertItem( tr( "Font" ) );
    comboType->insertItem( tr( "Color" ) );
    comboType->insertItem( tr( "Rect" ) );
    comboType->insertItem( tr( "Point" ) );
    comboType->insertItem( tr( "Size" ) );
    comboType->insertItem( tr( "Pixmap" ) );
    comboType->insertItem( tr( "Palette" ) );
    comboType->insertItem( tr( "Cursor" ) );
    comboType->insertItem( tr( "SizePolicy" ) );
    QToolTip::add( comboType, tr( "Select property type" ) );
    QWhatsThis::add( comboType, tr( "<b>Select the type of the property.</b><p>The propertiy must be implemented in the class using Qt's property system.</p><p>You can use integer types to support enumeration properties in the property editor.</p>" ) );
    listProperties->header()->setLabel( 0, tr( "Property" ) );
    listProperties->header()->setLabel( 1, tr( "Type" ) );
    QWhatsThis::add( listProperties, tr( "<b>The list of the current widget's properties.</b><p>The properties of the custom widget can be changed in the property editor.</p>" ) );
    QToolTip::add( editProperty, tr( "Change property name" ) );
    QWhatsThis::add( editProperty, tr( "<b>Enter a name for the property.</b><p>The properties must be implemented in the class using Qt's property system.</p>" ) );
    TextLabel2_2->setText( tr( "P&roperty Name:" ) );
    TextLabel3_2->setText( tr( "T&ype:" ) );
    TabWidget1->changeTab( Widget5, tr( "&Properties" ) );
}

void CustomWidgetEditorBase::init()
{
}

void CustomWidgetEditorBase::destroy()
{
}

void CustomWidgetEditorBase::addProperty()
{
    qWarning( "CustomWidgetEditorBase::addProperty(): Not implemented yet" );
}

void CustomWidgetEditorBase::addSignal()
{
    qWarning( "CustomWidgetEditorBase::addSignal(): Not implemented yet" );
}

void CustomWidgetEditorBase::addWidgetClicked()
{
    qWarning( "CustomWidgetEditorBase::addWidgetClicked(): Not implemented yet" );
}

void CustomWidgetEditorBase::chooseHeader()
{
    qWarning( "CustomWidgetEditorBase::chooseHeader(): Not implemented yet" );
}

void CustomWidgetEditorBase::classNameChanged(const QString&)
{
    qWarning( "CustomWidgetEditorBase::classNameChanged(const QString&): Not implemented yet" );
}

void CustomWidgetEditorBase::closeClicked()
{
    qWarning( "CustomWidgetEditorBase::closeClicked(): Not implemented yet" );
}

void CustomWidgetEditorBase::currentPropertyChanged(QListViewItem*)
{
    qWarning( "CustomWidgetEditorBase::currentPropertyChanged(QListViewItem*): Not implemented yet" );
}

void CustomWidgetEditorBase::currentSignalChanged(QListBoxItem*)
{
    qWarning( "CustomWidgetEditorBase::currentSignalChanged(QListBoxItem*): Not implemented yet" );
}

void CustomWidgetEditorBase::currentSlotChanged(QListViewItem*)
{
    qWarning( "CustomWidgetEditorBase::currentSlotChanged(QListViewItem*): Not implemented yet" );
}

void CustomWidgetEditorBase::currentWidgetChanged(QListBoxItem*)
{
    qWarning( "CustomWidgetEditorBase::currentWidgetChanged(QListBoxItem*): Not implemented yet" );
}

void CustomWidgetEditorBase::deleteWidgetClicked()
{
    qWarning( "CustomWidgetEditorBase::deleteWidgetClicked(): Not implemented yet" );
}

void CustomWidgetEditorBase::headerFileChanged(const QString&)
{
    qWarning( "CustomWidgetEditorBase::headerFileChanged(const QString&): Not implemented yet" );
}

void CustomWidgetEditorBase::heightChanged(int)
{
    qWarning( "CustomWidgetEditorBase::heightChanged(int): Not implemented yet" );
}

void CustomWidgetEditorBase::horDataChanged(int)
{
    qWarning( "CustomWidgetEditorBase::horDataChanged(int): Not implemented yet" );
}

void CustomWidgetEditorBase::includePolicyChanged(int)
{
    qWarning( "CustomWidgetEditorBase::includePolicyChanged(int): Not implemented yet" );
}

void CustomWidgetEditorBase::loadDescription()
{
    qWarning( "CustomWidgetEditorBase::loadDescription(): Not implemented yet" );
}

void CustomWidgetEditorBase::addSlot()
{
    qWarning( "CustomWidgetEditorBase::addSlot(): Not implemented yet" );
}

void CustomWidgetEditorBase::pixmapChoosen()
{
    qWarning( "CustomWidgetEditorBase::pixmapChoosen(): Not implemented yet" );
}

void CustomWidgetEditorBase::propertyNameChanged(const QString&)
{
    qWarning( "CustomWidgetEditorBase::propertyNameChanged(const QString&): Not implemented yet" );
}

void CustomWidgetEditorBase::propertyTypeChanged(const QString&)
{
    qWarning( "CustomWidgetEditorBase::propertyTypeChanged(const QString&): Not implemented yet" );
}

void CustomWidgetEditorBase::removeProperty()
{
    qWarning( "CustomWidgetEditorBase::removeProperty(): Not implemented yet" );
}

void CustomWidgetEditorBase::removeSignal()
{
    qWarning( "CustomWidgetEditorBase::removeSignal(): Not implemented yet" );
}

void CustomWidgetEditorBase::removeSlot()
{
    qWarning( "CustomWidgetEditorBase::removeSlot(): Not implemented yet" );
}

void CustomWidgetEditorBase::saveDescription()
{
    qWarning( "CustomWidgetEditorBase::saveDescription(): Not implemented yet" );
}

void CustomWidgetEditorBase::signalNameChanged(const QString&)
{
    qWarning( "CustomWidgetEditorBase::signalNameChanged(const QString&): Not implemented yet" );
}

void CustomWidgetEditorBase::slotAccessChanged(const QString&)
{
    qWarning( "CustomWidgetEditorBase::slotAccessChanged(const QString&): Not implemented yet" );
}

void CustomWidgetEditorBase::slotNameChanged(const QString&)
{
    qWarning( "CustomWidgetEditorBase::slotNameChanged(const QString&): Not implemented yet" );
}

void CustomWidgetEditorBase::verDataChanged(int)
{
    qWarning( "CustomWidgetEditorBase::verDataChanged(int): Not implemented yet" );
}

void CustomWidgetEditorBase::widgetIsContainer(bool)
{
    qWarning( "CustomWidgetEditorBase::widgetIsContainer(bool): Not implemented yet" );
}

void CustomWidgetEditorBase::widthChanged(int)
{
    qWarning( "CustomWidgetEditorBase::widthChanged(int): Not implemented yet" );
}

