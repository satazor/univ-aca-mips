/****************************************************************************
** Form implementation generated from reading ui file 'sqlformwizard.ui'
**
** Created: Tue Oct 8 10:21:05 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "sqlformwizard.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qwidget.h>
#include <qlabel.h>
#include <qlistbox.h>
#include <qcheckbox.h>
#include <qgroupbox.h>
#include <qmultilineedit.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qspinbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a SqlFormWizardBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The wizard will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal wizard.
 */
SqlFormWizardBase::SqlFormWizardBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QWizard( parent, name, modal, fl )
{
    if ( !name )
	setName( "SqlFormWizardBase" );
    setIcon( QPixmap::fromMimeSource( "" ) );

    databasePage = new QWidget( this, "databasePage" );
    databasePageLayout = new QHBoxLayout( databasePage, 0, 6, "databasePageLayout"); 

    TextLabel4 = new QLabel( databasePage, "TextLabel4" );
    TextLabel4->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4->sizePolicy().hasHeightForWidth() ) );
    TextLabel4->setPixmap( QPixmap::fromMimeSource( "qtwizards_table_1.png" ) );
    databasePageLayout->addWidget( TextLabel4 );

    Layout5 = new QGridLayout( 0, 1, 1, 0, 6, "Layout5"); 

    TextLabel3_2 = new QLabel( databasePage, "TextLabel3_2" );

    Layout5->addWidget( TextLabel3_2, 1, 1 );

    Layout4 = new QHBoxLayout( 0, 0, 6, "Layout4"); 

    PushButton5 = new QPushButton( databasePage, "PushButton5" );
    Layout4->addWidget( PushButton5 );
    Spacer1_2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout4->addItem( Spacer1_2 );

    Layout5->addMultiCellLayout( Layout4, 4, 4, 0, 1 );

    TextLabel3_3 = new QLabel( databasePage, "TextLabel3_3" );

    Layout5->addWidget( TextLabel3_3, 1, 0 );

    listBoxTable = new QListBox( databasePage, "listBoxTable" );

    Layout5->addWidget( listBoxTable, 2, 1 );

    listBoxConnection = new QListBox( databasePage, "listBoxConnection" );

    Layout5->addWidget( listBoxConnection, 2, 0 );
    databasePageLayout->addLayout( Layout5 );
    addPage( databasePage, QString("") );

    populatePage = new QWidget( this, "populatePage" );
    populatePageLayout = new QGridLayout( populatePage, 1, 1, 0, 6, "populatePageLayout"); 

    TextLabel4_2 = new QLabel( populatePage, "TextLabel4_2" );
    TextLabel4_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2->setPixmap( QPixmap::fromMimeSource( "qtwizards_table_2.png" ) );

    populatePageLayout->addMultiCellWidget( TextLabel4_2, 0, 1, 0, 0 );

    Layout11 = new QGridLayout( 0, 1, 1, 0, 6, "Layout11"); 
    Spacer1_10 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout11->addItem( Spacer1_10, 4, 1 );

    buttonAddField_2 = new QPushButton( populatePage, "buttonAddField_2" );
    buttonAddField_2->setPixmap( QPixmap::fromMimeSource( "designer_right.png" ) );

    Layout11->addWidget( buttonAddField_2, 2, 1 );

    buttonRemoveField_2 = new QPushButton( populatePage, "buttonRemoveField_2" );
    buttonRemoveField_2->setPixmap( QPixmap::fromMimeSource( "designer_left.png" ) );

    Layout11->addWidget( buttonRemoveField_2, 3, 1 );
    Spacer2_5 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout11->addItem( Spacer2_5, 1, 1 );

    buttonFieldUp_2 = new QPushButton( populatePage, "buttonFieldUp_2" );
    buttonFieldUp_2->setPixmap( QPixmap::fromMimeSource( "designer_up.png" ) );

    Layout11->addWidget( buttonFieldUp_2, 5, 1 );
    Spacer3_3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout11->addItem( Spacer3_3, 7, 1 );

    listBoxField = new QListBox( populatePage, "listBoxField" );

    Layout11->addMultiCellWidget( listBoxField, 1, 7, 0, 0 );

    buttonFieldDown_2 = new QPushButton( populatePage, "buttonFieldDown_2" );
    buttonFieldDown_2->setPixmap( QPixmap::fromMimeSource( "designer_down.png" ) );

    Layout11->addWidget( buttonFieldDown_2, 6, 1 );

    listBoxSelectedField = new QListBox( populatePage, "listBoxSelectedField" );

    Layout11->addMultiCellWidget( listBoxSelectedField, 1, 7, 2, 2 );

    TextLabel2_3 = new QLabel( populatePage, "TextLabel2_3" );

    Layout11->addWidget( TextLabel2_3, 0, 2 );

    TextLabel1_7 = new QLabel( populatePage, "TextLabel1_7" );

    Layout11->addWidget( TextLabel1_7, 0, 0 );

    populatePageLayout->addLayout( Layout11, 1, 1 );
    addPage( populatePage, QString("") );

    navigPage = new QWidget( this, "navigPage" );
    navigPageLayout = new QHBoxLayout( navigPage, 0, 6, "navigPageLayout"); 

    TextLabel4_2_2 = new QLabel( navigPage, "TextLabel4_2_2" );
    TextLabel4_2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2_2->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2_2->setPixmap( QPixmap::fromMimeSource( "qtwizards_table_3.png" ) );
    navigPageLayout->addWidget( TextLabel4_2_2 );

    Layout6 = new QVBoxLayout( 0, 0, 6, "Layout6"); 

    checkBoxNavig = new QCheckBox( navigPage, "checkBoxNavig" );
    checkBoxNavig->setChecked( TRUE );
    Layout6->addWidget( checkBoxNavig );

    GroupBox2 = new QGroupBox( navigPage, "GroupBox2" );
    GroupBox2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)7, 0, 0, GroupBox2->sizePolicy().hasHeightForWidth() ) );
    GroupBox2->setColumnLayout(0, Qt::Vertical );
    GroupBox2->layout()->setSpacing( 6 );
    GroupBox2->layout()->setMargin( 11 );
    GroupBox2Layout = new QGridLayout( GroupBox2->layout() );
    GroupBox2Layout->setAlignment( Qt::AlignTop );

    checkBoxPrev = new QCheckBox( GroupBox2, "checkBoxPrev" );
    checkBoxPrev->setChecked( TRUE );

    GroupBox2Layout->addWidget( checkBoxPrev, 0, 0 );

    checkBoxNext = new QCheckBox( GroupBox2, "checkBoxNext" );
    checkBoxNext->setChecked( TRUE );

    GroupBox2Layout->addWidget( checkBoxNext, 1, 0 );

    checkBoxFirst = new QCheckBox( GroupBox2, "checkBoxFirst" );
    checkBoxFirst->setChecked( TRUE );

    GroupBox2Layout->addWidget( checkBoxFirst, 0, 1 );

    checkBoxLast = new QCheckBox( GroupBox2, "checkBoxLast" );
    checkBoxLast->setChecked( TRUE );

    GroupBox2Layout->addWidget( checkBoxLast, 1, 1 );
    Layout6->addWidget( GroupBox2 );

    checkBoxEdit = new QCheckBox( navigPage, "checkBoxEdit" );
    checkBoxEdit->setChecked( TRUE );
    Layout6->addWidget( checkBoxEdit );

    GroupBox3 = new QGroupBox( navigPage, "GroupBox3" );
    GroupBox3->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)7, 0, 0, GroupBox3->sizePolicy().hasHeightForWidth() ) );
    GroupBox3->setColumnLayout(0, Qt::Vertical );
    GroupBox3->layout()->setSpacing( 6 );
    GroupBox3->layout()->setMargin( 11 );
    GroupBox3Layout = new QGridLayout( GroupBox3->layout() );
    GroupBox3Layout->setAlignment( Qt::AlignTop );

    checkBoxInsert = new QCheckBox( GroupBox3, "checkBoxInsert" );
    checkBoxInsert->setChecked( TRUE );

    GroupBox3Layout->addWidget( checkBoxInsert, 0, 0 );

    checkBoxUpdate = new QCheckBox( GroupBox3, "checkBoxUpdate" );
    checkBoxUpdate->setChecked( TRUE );

    GroupBox3Layout->addWidget( checkBoxUpdate, 1, 0 );

    checkBoxDelete = new QCheckBox( GroupBox3, "checkBoxDelete" );
    checkBoxDelete->setChecked( TRUE );

    GroupBox3Layout->addWidget( checkBoxDelete, 0, 1 );
    Layout6->addWidget( GroupBox3 );
    Spacer1_3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout6->addItem( Spacer1_3 );
    navigPageLayout->addLayout( Layout6 );
    addPage( navigPage, QString("") );

    tablePropertiesPage = new QWidget( this, "tablePropertiesPage" );
    tablePropertiesPageLayout = new QGridLayout( tablePropertiesPage, 1, 1, 0, 6, "tablePropertiesPageLayout"); 

    TextLabel4_2_2_2_2 = new QLabel( tablePropertiesPage, "TextLabel4_2_2_2_2" );
    TextLabel4_2_2_2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2_2_2_2->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2_2_2_2->setPixmap( QPixmap::fromMimeSource( "qtwizards_table_4.png" ) );

    tablePropertiesPageLayout->addMultiCellWidget( TextLabel4_2_2_2_2, 0, 3, 0, 0 );
    Spacer1_7 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tablePropertiesPageLayout->addItem( Spacer1_7, 3, 1 );

    GroupBox5 = new QGroupBox( tablePropertiesPage, "GroupBox5" );
    GroupBox5->setColumnLayout(0, Qt::Vertical );
    GroupBox5->layout()->setSpacing( 6 );
    GroupBox5->layout()->setMargin( 11 );
    GroupBox5Layout = new QVBoxLayout( GroupBox5->layout() );
    GroupBox5Layout->setAlignment( Qt::AlignTop );

    checkBoxReadOnly = new QCheckBox( GroupBox5, "checkBoxReadOnly" );
    GroupBox5Layout->addWidget( checkBoxReadOnly );

    GroupBox4 = new QGroupBox( GroupBox5, "GroupBox4" );
    GroupBox4->setColumnLayout(0, Qt::Vertical );
    GroupBox4->layout()->setSpacing( 6 );
    GroupBox4->layout()->setMargin( 11 );
    GroupBox4Layout = new QGridLayout( GroupBox4->layout() );
    GroupBox4Layout->setAlignment( Qt::AlignTop );

    checkBoxConfirmInserts = new QCheckBox( GroupBox4, "checkBoxConfirmInserts" );

    GroupBox4Layout->addWidget( checkBoxConfirmInserts, 0, 0 );

    checkBoxConfirmUpdates = new QCheckBox( GroupBox4, "checkBoxConfirmUpdates" );

    GroupBox4Layout->addWidget( checkBoxConfirmUpdates, 1, 0 );

    checkBoxConfirmCancels = new QCheckBox( GroupBox4, "checkBoxConfirmCancels" );

    GroupBox4Layout->addWidget( checkBoxConfirmCancels, 3, 0 );

    checkBoxConfirmDeletes = new QCheckBox( GroupBox4, "checkBoxConfirmDeletes" );
    checkBoxConfirmDeletes->setChecked( TRUE );

    GroupBox4Layout->addWidget( checkBoxConfirmDeletes, 2, 0 );
    GroupBox5Layout->addWidget( GroupBox4 );

    tablePropertiesPageLayout->addWidget( GroupBox5, 1, 1 );

    checkBoxSorting = new QCheckBox( tablePropertiesPage, "checkBoxSorting" );
    checkBoxSorting->setChecked( TRUE );

    tablePropertiesPageLayout->addWidget( checkBoxSorting, 2, 1 );
    addPage( tablePropertiesPage, QString("") );

    sqlPage = new QWidget( this, "sqlPage" );
    sqlPageLayout = new QGridLayout( sqlPage, 1, 1, 0, 6, "sqlPageLayout"); 

    TextLabel4_2_2_2 = new QLabel( sqlPage, "TextLabel4_2_2_2" );
    TextLabel4_2_2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2_2_2->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2_2_2->setPixmap( QPixmap::fromMimeSource( "qtwizards_table_2.png" ) );

    sqlPageLayout->addMultiCellWidget( TextLabel4_2_2_2, 0, 1, 0, 0 );

    Layout8 = new QVBoxLayout( 0, 0, 6, "Layout8"); 

    TextLabel3_2_2_2 = new QLabel( sqlPage, "TextLabel3_2_2_2" );
    Layout8->addWidget( TextLabel3_2_2_2 );
    Spacer1_5 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout8->addItem( Spacer1_5 );

    sqlPageLayout->addLayout( Layout8, 1, 1 );

    Layout10 = new QVBoxLayout( 0, 0, 6, "Layout10"); 

    TextLabel3_2_2 = new QLabel( sqlPage, "TextLabel3_2_2" );
    Layout10->addWidget( TextLabel3_2_2 );
    Spacer1_4 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout10->addItem( Spacer1_4 );

    sqlPageLayout->addLayout( Layout10, 0, 1 );

    Layout13 = new QVBoxLayout( 0, 0, 6, "Layout13"); 

    TextLabel1_3 = new QLabel( sqlPage, "TextLabel1_3" );
    Layout13->addWidget( TextLabel1_3 );

    editFilter = new QMultiLineEdit( sqlPage, "editFilter" );
    Layout13->addWidget( editFilter );

    sqlPageLayout->addMultiCellLayout( Layout13, 0, 0, 2, 4 );

    Layout10_2 = new QVBoxLayout( 0, 0, 6, "Layout10_2"); 

    TextLabel2 = new QLabel( sqlPage, "TextLabel2" );
    Layout10_2->addWidget( TextLabel2 );

    listBoxSortedField = new QListBox( sqlPage, "listBoxSortedField" );
    Layout10_2->addWidget( listBoxSortedField );

    sqlPageLayout->addLayout( Layout10_2, 1, 4 );

    Layout11_2 = new QVBoxLayout( 0, 0, 6, "Layout11_2"); 
    Spacer2_2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout11_2->addItem( Spacer2_2 );

    buttonAddSortField = new QPushButton( sqlPage, "buttonAddSortField" );
    buttonAddSortField->setPixmap( QPixmap::fromMimeSource( "designer_right.png" ) );
    Layout11_2->addWidget( buttonAddSortField );

    buttonRemoveSortField = new QPushButton( sqlPage, "buttonRemoveSortField" );
    buttonRemoveSortField->setPixmap( QPixmap::fromMimeSource( "designer_left.png" ) );
    Layout11_2->addWidget( buttonRemoveSortField );
    Spacer1_6 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout11_2->addItem( Spacer1_6 );

    buttonUpSortField = new QPushButton( sqlPage, "buttonUpSortField" );
    buttonUpSortField->setPixmap( QPixmap::fromMimeSource( "designer_up.png" ) );
    Layout11_2->addWidget( buttonUpSortField );

    buttonDownSortField = new QPushButton( sqlPage, "buttonDownSortField" );
    buttonDownSortField->setPixmap( QPixmap::fromMimeSource( "designer_down.png" ) );
    Layout11_2->addWidget( buttonDownSortField );
    Spacer2_3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout11_2->addItem( Spacer2_3 );

    buttonReSortField = new QPushButton( sqlPage, "buttonReSortField" );
    buttonReSortField->setPixmap( QPixmap::fromMimeSource( "re-sort.png" ) );
    Layout11_2->addWidget( buttonReSortField );

    sqlPageLayout->addLayout( Layout11_2, 1, 3 );

    Layout12 = new QVBoxLayout( 0, 0, 6, "Layout12"); 

    TextLabel1_4 = new QLabel( sqlPage, "TextLabel1_4" );
    Layout12->addWidget( TextLabel1_4 );

    listBoxSortField = new QListBox( sqlPage, "listBoxSortField" );
    Layout12->addWidget( listBoxSortField );

    sqlPageLayout->addLayout( Layout12, 1, 2 );
    addPage( sqlPage, QString("") );

    layoutPage = new QWidget( this, "layoutPage" );
    layoutPageLayout = new QGridLayout( layoutPage, 1, 1, 0, 6, "layoutPageLayout"); 

    TextLabel4_2_2_2_3_2 = new QLabel( layoutPage, "TextLabel4_2_2_2_3_2" );
    TextLabel4_2_2_2_3_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2_2_2_3_2->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2_2_2_3_2->setPixmap( QPixmap::fromMimeSource( "qtwizards_table_3.png" ) );

    layoutPageLayout->addMultiCellWidget( TextLabel4_2_2_2_3_2, 0, 5, 0, 0 );
    Spacer1_9 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layoutPageLayout->addItem( Spacer1_9, 5, 5 );

    ButtonGroup1 = new QButtonGroup( layoutPage, "ButtonGroup1" );
    ButtonGroup1->setColumnLayout(0, Qt::Vertical );
    ButtonGroup1->layout()->setSpacing( 6 );
    ButtonGroup1->layout()->setMargin( 11 );
    ButtonGroup1Layout = new QGridLayout( ButtonGroup1->layout() );
    ButtonGroup1Layout->setAlignment( Qt::AlignTop );

    radioLabelsLeft = new QRadioButton( ButtonGroup1, "radioLabelsLeft" );
    radioLabelsLeft->setEnabled( TRUE );
    radioLabelsLeft->setChecked( TRUE );

    ButtonGroup1Layout->addMultiCellWidget( radioLabelsLeft, 0, 0, 0, 1 );

    TextLabel3 = new QLabel( ButtonGroup1, "TextLabel3" );
    TextLabel3->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)1, 0, 0, TextLabel3->sizePolicy().hasHeightForWidth() ) );

    ButtonGroup1Layout->addWidget( TextLabel3, 3, 1 );

    TextLabel2_2 = new QLabel( ButtonGroup1, "TextLabel2_2" );
    TextLabel2_2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)3, (QSizePolicy::SizeType)1, 0, 0, TextLabel2_2->sizePolicy().hasHeightForWidth() ) );

    ButtonGroup1Layout->addWidget( TextLabel2_2, 1, 1 );
    Spacer4 = new QSpacerItem( 20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum );
    ButtonGroup1Layout->addItem( Spacer4, 1, 0 );
    Spacer5 = new QSpacerItem( 16, 20, QSizePolicy::Maximum, QSizePolicy::Minimum );
    ButtonGroup1Layout->addItem( Spacer5, 3, 0 );

    radioLabelsTop = new QRadioButton( ButtonGroup1, "radioLabelsTop" );

    ButtonGroup1Layout->addMultiCellWidget( radioLabelsTop, 2, 2, 0, 1 );

    layoutPageLayout->addMultiCellWidget( ButtonGroup1, 1, 1, 1, 5 );

    checkCreateLayouts = new QCheckBox( layoutPage, "checkCreateLayouts" );
    checkCreateLayouts->setChecked( TRUE );

    layoutPageLayout->addMultiCellWidget( checkCreateLayouts, 4, 4, 1, 2 );

    checkCreateButtonLayout = new QCheckBox( layoutPage, "checkCreateButtonLayout" );
    checkCreateButtonLayout->setChecked( TRUE );

    layoutPageLayout->addMultiCellWidget( checkCreateButtonLayout, 3, 3, 1, 2 );

    checkCreateFieldLayout = new QCheckBox( layoutPage, "checkCreateFieldLayout" );
    checkCreateFieldLayout->setChecked( TRUE );

    layoutPageLayout->addMultiCellWidget( checkCreateFieldLayout, 2, 2, 1, 4 );

    spinNumberOfColumns = new QSpinBox( layoutPage, "spinNumberOfColumns" );
    spinNumberOfColumns->setMaxValue( 20 );
    spinNumberOfColumns->setValue( 2 );

    layoutPageLayout->addWidget( spinNumberOfColumns, 0, 2 );

    TextLabel1_6 = new QLabel( layoutPage, "TextLabel1_6" );

    layoutPageLayout->addWidget( TextLabel1_6, 0, 1 );
    Spacer3_2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layoutPageLayout->addItem( Spacer3_2, 0, 3 );
    addPage( layoutPage, QString("") );

    finishPage = new QWidget( this, "finishPage" );
    finishPageLayout = new QGridLayout( finishPage, 1, 1, 0, 6, "finishPageLayout"); 

    TextLabel4_2_2_2_3 = new QLabel( finishPage, "TextLabel4_2_2_2_3" );
    TextLabel4_2_2_2_3->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)7, 0, 0, TextLabel4_2_2_2_3->sizePolicy().hasHeightForWidth() ) );
    TextLabel4_2_2_2_3->setPixmap( QPixmap::fromMimeSource( "qtwizards_table_1.png" ) );

    finishPageLayout->addMultiCellWidget( TextLabel4_2_2_2_3, 0, 4, 0, 0 );

    TextLabel1_5 = new QLabel( finishPage, "TextLabel1_5" );

    finishPageLayout->addMultiCellWidget( TextLabel1_5, 3, 3, 1, 3 );
    Spacer2_4 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    finishPageLayout->addItem( Spacer2_4, 4, 3 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    finishPageLayout->addMultiCell( Spacer1, 2, 2, 2, 3 );
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    finishPageLayout->addItem( Spacer2, 0, 2 );

    checkBoxAutoEdit = new QCheckBox( finishPage, "checkBoxAutoEdit" );

    finishPageLayout->addWidget( checkBoxAutoEdit, 1, 1 );
    addPage( finishPage, QString("") );
    languageChange();
    resize( QSize(577, 570).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton5, SIGNAL( clicked() ), this, SLOT( setupDatabaseConnections() ) );
    connect( checkBoxNavig, SIGNAL( toggled(bool) ), GroupBox2, SLOT( setEnabled(bool) ) );
    connect( checkBoxEdit, SIGNAL( toggled(bool) ), GroupBox3, SLOT( setEnabled(bool) ) );
    connect( buttonReSortField, SIGNAL( clicked() ), this, SLOT( reSortSortField() ) );
    connect( buttonRemoveSortField, SIGNAL( clicked() ), this, SLOT( removeSortField() ) );
    connect( buttonAddSortField, SIGNAL( clicked() ), this, SLOT( addSortField() ) );
    connect( buttonUpSortField, SIGNAL( clicked() ), this, SLOT( sortFieldUp() ) );
    connect( buttonDownSortField, SIGNAL( clicked() ), this, SLOT( sortFieldDown() ) );
    connect( listBoxSortField, SIGNAL( doubleClicked(QListBoxItem*) ), this, SLOT( addSortField() ) );
    connect( listBoxSortedField, SIGNAL( doubleClicked(QListBoxItem*) ), this, SLOT( removeSortField() ) );
    connect( listBoxSortedField, SIGNAL( rightButtonClicked(QListBoxItem*,const QPoint&) ), this, SLOT( reSortSortField() ) );
    connect( checkBoxReadOnly, SIGNAL( toggled(bool) ), GroupBox4, SLOT( setDisabled(bool) ) );
    connect( listBoxConnection, SIGNAL( highlighted(const QString&) ), this, SLOT( connectionSelected(const QString&) ) );
    connect( listBoxTable, SIGNAL( highlighted(const QString&) ), this, SLOT( tableSelected(const QString&) ) );
    connect( buttonAddField_2, SIGNAL( released() ), this, SLOT( addField() ) );
    connect( buttonRemoveField_2, SIGNAL( clicked() ), this, SLOT( removeField() ) );
    connect( buttonFieldUp_2, SIGNAL( clicked() ), this, SLOT( fieldUp() ) );
    connect( buttonFieldDown_2, SIGNAL( clicked() ), this, SLOT( fieldDown() ) );

    // tab order
    setTabOrder( PushButton5, listBoxConnection );
    setTabOrder( listBoxConnection, listBoxTable );
    setTabOrder( listBoxTable, checkBoxNavig );
    setTabOrder( checkBoxNavig, checkBoxPrev );
    setTabOrder( checkBoxPrev, checkBoxNext );
    setTabOrder( checkBoxNext, checkBoxFirst );
    setTabOrder( checkBoxFirst, checkBoxLast );
    setTabOrder( checkBoxLast, checkBoxEdit );
    setTabOrder( checkBoxEdit, checkBoxInsert );
    setTabOrder( checkBoxInsert, checkBoxUpdate );
    setTabOrder( checkBoxUpdate, checkBoxDelete );
    setTabOrder( checkBoxDelete, checkBoxReadOnly );
    setTabOrder( checkBoxReadOnly, checkBoxConfirmInserts );
    setTabOrder( checkBoxConfirmInserts, checkBoxConfirmUpdates );
    setTabOrder( checkBoxConfirmUpdates, checkBoxConfirmDeletes );
    setTabOrder( checkBoxConfirmDeletes, checkBoxConfirmCancels );
    setTabOrder( checkBoxConfirmCancels, checkBoxSorting );
    setTabOrder( checkBoxSorting, editFilter );
    setTabOrder( editFilter, listBoxSortField );
    setTabOrder( listBoxSortField, buttonAddSortField );
    setTabOrder( buttonAddSortField, buttonRemoveSortField );
    setTabOrder( buttonRemoveSortField, buttonUpSortField );
    setTabOrder( buttonUpSortField, buttonDownSortField );
    setTabOrder( buttonDownSortField, buttonReSortField );
    setTabOrder( buttonReSortField, listBoxSortedField );
    setTabOrder( listBoxSortedField, spinNumberOfColumns );
    setTabOrder( spinNumberOfColumns, radioLabelsLeft );
    setTabOrder( radioLabelsLeft, radioLabelsTop );
    setTabOrder( radioLabelsTop, checkCreateFieldLayout );
    setTabOrder( checkCreateFieldLayout, checkCreateButtonLayout );
    setTabOrder( checkCreateButtonLayout, checkCreateLayouts );

    // buddies
    TextLabel3_2->setBuddy( listBoxTable );
    TextLabel3_3->setBuddy( listBoxConnection );
    TextLabel3_2_2_2->setBuddy( listBoxTable );
    TextLabel3_2_2->setBuddy( listBoxTable );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
SqlFormWizardBase::~SqlFormWizardBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SqlFormWizardBase::languageChange()
{
    setCaption( tr( "Sql Wizard" ) );
    TextLabel4->setText( QString::null );
    TextLabel3_2->setText( tr( "&Table:" ) );
    PushButton5->setText( tr( "&Setup Database Connections..." ) );
    QToolTip::add( PushButton5, tr( "Click here to manage your database connections" ) );
    QWhatsThis::add( PushButton5, tr( "Here you can add, modify and delete your database connections" ) );
    TextLabel3_3->setText( tr( "Database &Connection:" ) );
    QWhatsThis::add( listBoxTable, tr( "Displays all tables inside the selected Database" ) );
    QWhatsThis::add( listBoxConnection, tr( "Displays a list of available connections on your system" ) );
    setTitle( databasePage, tr( "Choose the Database and Table" ) );
    TextLabel4_2->setText( QString::null );
    buttonAddField_2->setText( QString::null );
    QToolTip::add( buttonAddField_2, tr( "Move field to list of displayed fields" ) );
    QWhatsThis::add( buttonAddField_2, tr( "Click here to add the selected field to the list of fields that will be displayed." ) );
    buttonRemoveField_2->setText( QString::null );
    QToolTip::add( buttonRemoveField_2, tr( "remove field from list of displayed fields" ) );
    QWhatsThis::add( buttonRemoveField_2, tr( "Click here to remove the selected field from the list of fields that will be displayed." ) );
    buttonFieldUp_2->setText( QString::null );
    QToolTip::add( buttonFieldUp_2, tr( "Move Field up" ) );
    QWhatsThis::add( buttonFieldUp_2, tr( "Click here to move the selected field in the displayed fields list up." ) );
    QWhatsThis::add( listBoxField, tr( "This is a list of all available fields in your selected table. Fields in this list will not be displayed." ) );
    buttonFieldDown_2->setText( QString::null );
    QToolTip::add( buttonFieldDown_2, tr( "Move field down" ) );
    QWhatsThis::add( buttonFieldDown_2, tr( "Click here to move the selected field in the displayed fields list down." ) );
    QWhatsThis::add( listBoxSelectedField, tr( "All fields in this list will be displayed." ) );
    TextLabel2_3->setText( tr( "Displayed Fields:" ) );
    TextLabel1_7->setText( tr( "Available Fields:" ) );
    setTitle( populatePage, tr( "Displayed Fields" ) );
    TextLabel4_2_2->setText( QString::null );
    checkBoxNavig->setText( tr( "&Include Navigation Buttons" ) );
    QToolTip::add( checkBoxNavig, tr( "Activates the navigation bar" ) );
    QWhatsThis::add( checkBoxNavig, tr( "Activates the navigation bar" ) );
    GroupBox2->setTitle( tr( "&Navigation" ) );
    checkBoxPrev->setText( tr( "&Previous" ) );
    QToolTip::add( checkBoxPrev, tr( "Toggles whether the \"Previous\" button will be displayed" ) );
    QWhatsThis::add( checkBoxPrev, tr( "Toggles whether the \"Previous\" button will be displayed" ) );
    checkBoxNext->setText( tr( "&Next" ) );
    QToolTip::add( checkBoxNext, tr( "Toggles whether the \"Next\" button will be displayed" ) );
    QWhatsThis::add( checkBoxNext, tr( "Toggles whether the \"Next\" button will be displayed" ) );
    checkBoxFirst->setText( tr( "&First" ) );
    QToolTip::add( checkBoxFirst, tr( "Toggles whether the \"First\" button will be displayed" ) );
    QWhatsThis::add( checkBoxFirst, tr( "Toggles whether the \"First\" button will be displayed" ) );
    checkBoxLast->setText( tr( "&Last" ) );
    QToolTip::add( checkBoxLast, tr( "Toggles whether the \"Last\" button will be displayed" ) );
    QWhatsThis::add( checkBoxLast, tr( "Toggles whether the \"Last\" button will be displayed" ) );
    checkBoxEdit->setText( tr( "In&clude Edit Buttons" ) );
    QToolTip::add( checkBoxEdit, tr( "Activates the edit bar" ) );
    QWhatsThis::add( checkBoxEdit, tr( "Activates the edit bar" ) );
    GroupBox3->setTitle( tr( "&Editing" ) );
    checkBoxInsert->setText( tr( "&Insert" ) );
    QToolTip::add( checkBoxInsert, tr( "User can insert new rows" ) );
    QWhatsThis::add( checkBoxInsert, tr( "User can insert new rows" ) );
    checkBoxUpdate->setText( tr( "&Update" ) );
    QToolTip::add( checkBoxUpdate, tr( "user can edit existing rows" ) );
    QWhatsThis::add( checkBoxUpdate, tr( "user can edit existing rows" ) );
    checkBoxDelete->setText( tr( "&Delete" ) );
    QToolTip::add( checkBoxDelete, tr( "user can delete rows" ) );
    QWhatsThis::add( checkBoxDelete, tr( "user can delete rows" ) );
    setTitle( navigPage, tr( "Navigation and Editing" ) );
    TextLabel4_2_2_2_2->setText( QString::null );
    GroupBox5->setTitle( tr( "Editing" ) );
    checkBoxReadOnly->setText( tr( "&Read-Only" ) );
    QToolTip::add( checkBoxReadOnly, tr( "Table will be read-only" ) );
    QWhatsThis::add( checkBoxReadOnly, tr( "Activate this to prevent editing, deleting and adding of rows" ) );
    GroupBox4->setTitle( tr( "Confirmations" ) );
    checkBoxConfirmInserts->setText( tr( "Confirm &Inserts" ) );
    QToolTip::add( checkBoxConfirmInserts, tr( "Query user on inserting rows" ) );
    QWhatsThis::add( checkBoxConfirmInserts, tr( "User will be asked for confirmation if he inserts a new row" ) );
    checkBoxConfirmUpdates->setText( tr( "Confirm &Updates" ) );
    QToolTip::add( checkBoxConfirmUpdates, tr( "Query user on editing rows" ) );
    QWhatsThis::add( checkBoxConfirmUpdates, tr( "User will be asked for confirmation if he edits a row" ) );
    checkBoxConfirmCancels->setText( tr( "Confirm &Cancels" ) );
    QToolTip::add( checkBoxConfirmCancels, tr( "Query user on canceling" ) );
    QWhatsThis::add( checkBoxConfirmCancels, tr( "User will be asked for confirmation if he cancels an action" ) );
    checkBoxConfirmDeletes->setText( tr( "Confirm &Deletes" ) );
    QToolTip::add( checkBoxConfirmDeletes, tr( "Query user on deleting rows" ) );
    QWhatsThis::add( checkBoxConfirmDeletes, tr( "User will be asked for confirmation if he deletes a row" ) );
    checkBoxSorting->setText( tr( "Allow column &sorting" ) );
    QToolTip::add( checkBoxSorting, tr( "User may change sorting" ) );
    QWhatsThis::add( checkBoxSorting, tr( "User may change sorting of data by clicking on a field in the top row of the table" ) );
    setTitle( tablePropertiesPage, tr( "Table Properties" ) );
    TextLabel4_2_2_2->setText( QString::null );
    TextLabel3_2_2_2->setText( tr( "&Sort:" ) );
    TextLabel3_2_2->setText( tr( "&Filter:" ) );
    TextLabel1_3->setText( tr( "(a valid WHERE clause, e.g. id > 100)" ) );
    QWhatsThis::add( editFilter, tr( "Enter a valid SQL WHERE statement, for example:\n"
"name like \"qt%\"\n"
"(name like \"q%\") and (version > 3)\n"
"((version > 3) and (price > 1000)) or (name like \"%embed%\")" ) );
    TextLabel2->setText( tr( "Sort By" ) );
    QWhatsThis::add( listBoxSortedField, tr( "Data will be sorted according to the selected fields." ) );
    buttonAddSortField->setText( QString::null );
    QToolTip::add( buttonAddSortField, tr( "Move field to the right list" ) );
    QWhatsThis::add( buttonAddSortField, tr( "Klick here to add the currently selected field from the available fields list to the sorting criteria" ) );
    buttonRemoveSortField->setText( QString::null );
    QToolTip::add( buttonRemoveSortField, tr( "remove field from the right list" ) );
    QWhatsThis::add( buttonRemoveSortField, tr( "Klick here to remove the currently selected field from the sorting criteria" ) );
    buttonUpSortField->setText( QString::null );
    QToolTip::add( buttonUpSortField, tr( "move field up" ) );
    QWhatsThis::add( buttonUpSortField, tr( "Move selected field in the sort by list up" ) );
    buttonDownSortField->setText( QString::null );
    QToolTip::add( buttonDownSortField, tr( "move field down" ) );
    QWhatsThis::add( buttonDownSortField, tr( "Move selected field in the sort by list down" ) );
    buttonReSortField->setText( QString::null );
    QToolTip::add( buttonReSortField, tr( "Change field sort from ASC to DESC and back" ) );
    QWhatsThis::add( buttonReSortField, tr( "Changes the field sort order from ascending to descending for the selected field in the sort by list." ) );
    TextLabel1_4->setText( tr( "Available Fields" ) );
    QWhatsThis::add( listBoxSortField, tr( "This is the list of all available fields in the selected table" ) );
    setTitle( sqlPage, tr( "SQL" ) );
    TextLabel4_2_2_2_3_2->setText( QString::null );
    ButtonGroup1->setTitle( tr( "&Labels" ) );
    radioLabelsLeft->setText( tr( "Labels to &left" ) );
    QWhatsThis::add( radioLabelsLeft, tr( "Create labels to the left of data entry fields." ) );
    TextLabel3->setText( tr( "Create labels above data entry fields." ) );
    TextLabel2_2->setText( tr( "Create labels to the left of data entry fields." ) );
    radioLabelsTop->setText( tr( "Labels on &top" ) );
    QWhatsThis::add( radioLabelsTop, tr( "Create labels above data entry fields." ) );
    checkCreateLayouts->setText( tr( "&Create layout for all" ) );
    QToolTip::add( checkCreateLayouts, tr( "Create a BoxLayout around the whole widget" ) );
    QWhatsThis::add( checkCreateLayouts, tr( "If you select this a BoxLayout will be created for the whole widget" ) );
    checkCreateButtonLayout->setText( tr( "Create layout for &buttons" ) );
    QToolTip::add( checkCreateButtonLayout, tr( "Create a BoxLayout around the buttons" ) );
    QWhatsThis::add( checkCreateButtonLayout, tr( "If you select this the designer will arrange all buttons inside an BoxLayout" ) );
    checkCreateFieldLayout->setText( tr( "Create layout for &fields" ) );
    QToolTip::add( checkCreateFieldLayout, tr( "Create a BoxLayout around the fields" ) );
    QWhatsThis::add( checkCreateFieldLayout, tr( "If you select this the designer will arrange all fields inside an BoxLayout" ) );
    QToolTip::add( spinNumberOfColumns, tr( "Enter the number of desired columns" ) );
    QWhatsThis::add( spinNumberOfColumns, tr( "Enter the number of desired columns" ) );
    TextLabel1_6->setText( tr( "Number of Columns:" ) );
    setTitle( layoutPage, tr( "Layout" ) );
    TextLabel4_2_2_2_3->setText( QString::null );
    TextLabel1_5->setText( tr( "Press Finish to create the widget." ) );
    checkBoxAutoEdit->setText( tr( "&AutoEditing" ) );
    QToolTip::add( checkBoxAutoEdit, tr( "Discard changes when user klicks into another row" ) );
    QWhatsThis::add( checkBoxAutoEdit, tr( "This property holds whether the table automatically applies edits. When the user begins an insert or update in the table there are two possible outcomes when they navigate to another record\n"
"1.the insert or update is is performed -- this occurs if AutoEditing is on\n"
"2.the insert or update is abandoned -- this occurs if AutoEditing is off" ) );
    setTitle( finishPage, tr( "Finish" ) );
}

void SqlFormWizardBase::init()
{
}

void SqlFormWizardBase::destroy()
{
}

void SqlFormWizardBase::addField()
{
    qWarning( "SqlFormWizardBase::addField(): Not implemented yet" );
}

void SqlFormWizardBase::addSortField()
{
    qWarning( "SqlFormWizardBase::addSortField(): Not implemented yet" );
}

void SqlFormWizardBase::fieldDown()
{
    qWarning( "SqlFormWizardBase::fieldDown(): Not implemented yet" );
}

void SqlFormWizardBase::fieldUp()
{
    qWarning( "SqlFormWizardBase::fieldUp(): Not implemented yet" );
}

void SqlFormWizardBase::reSortSortField()
{
    qWarning( "SqlFormWizardBase::reSortSortField(): Not implemented yet" );
}

void SqlFormWizardBase::removeField()
{
    qWarning( "SqlFormWizardBase::removeField(): Not implemented yet" );
}

void SqlFormWizardBase::removeSortField()
{
    qWarning( "SqlFormWizardBase::removeSortField(): Not implemented yet" );
}

void SqlFormWizardBase::setupDatabaseConnections()
{
    qWarning( "SqlFormWizardBase::setupDatabaseConnections(): Not implemented yet" );
}

void SqlFormWizardBase::sortFieldDown()
{
    qWarning( "SqlFormWizardBase::sortFieldDown(): Not implemented yet" );
}

void SqlFormWizardBase::sortFieldUp()
{
    qWarning( "SqlFormWizardBase::sortFieldUp(): Not implemented yet" );
}

void SqlFormWizardBase::connectionSelected(const QString&)
{
    qWarning( "SqlFormWizardBase::connectionSelected(const QString&): Not implemented yet" );
}

void SqlFormWizardBase::tableSelected(const QString&)
{
    qWarning( "SqlFormWizardBase::tableSelected(const QString&): Not implemented yet" );
}

