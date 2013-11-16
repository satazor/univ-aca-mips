/****************************************************************************
** Form implementation generated from reading ui file 'preferences.ui'
**
** Created: Tue Oct 8 10:20:58 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "preferences.h"

#include <qvariant.h>
#include <qpalette.h>
#include <qlineedit.h>
#include <qpixmap.h>
#include <qcombobox.h>
#include <qfontdatabase.h>
#include <qpushbutton.h>
#include <qcheckbox.h>
#include <qcolordialog.h>
#include <qsettings.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qtoolbutton.h>
#include <qspinbox.h>
#include <qlistbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "editor.h"
#include "preferences.ui.h"

/*
 *  Constructs a PreferencesBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
PreferencesBase::PreferencesBase( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "PreferencesBase" );
    PreferencesBaseLayout = new QGridLayout( this, 1, 1, 6, 6, "PreferencesBaseLayout"); 

    GroupBox2 = new QGroupBox( this, "GroupBox2" );
    GroupBox2->setFrameShape( QGroupBox::Box );
    GroupBox2->setFrameShadow( QGroupBox::Sunken );
    GroupBox2->setColumnLayout(0, Qt::Vertical );
    GroupBox2->layout()->setSpacing( 6 );
    GroupBox2->layout()->setMargin( 11 );
    GroupBox2Layout = new QGridLayout( GroupBox2->layout() );
    GroupBox2Layout->setAlignment( Qt::AlignTop );

    TextLabel1 = new QLabel( GroupBox2, "TextLabel1" );

    GroupBox2Layout->addWidget( TextLabel1, 0, 0 );

    Layout1 = new QGridLayout( 0, 1, 1, 0, 6, "Layout1"); 

    checkBold = new QCheckBox( GroupBox2, "checkBold" );

    Layout1->addMultiCellWidget( checkBold, 2, 2, 0, 1 );

    buttonColor = new QToolButton( GroupBox2, "buttonColor" );
    buttonColor->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, buttonColor->sizePolicy().hasHeightForWidth() ) );

    Layout1->addWidget( buttonColor, 5, 1 );

    comboFamily = new QComboBox( FALSE, GroupBox2, "comboFamily" );
    comboFamily->setEditable( TRUE );

    Layout1->addWidget( comboFamily, 0, 1 );

    TextLabel2 = new QLabel( GroupBox2, "TextLabel2" );

    Layout1->addWidget( TextLabel2, 0, 0 );

    checkUnderline = new QCheckBox( GroupBox2, "checkUnderline" );

    Layout1->addMultiCellWidget( checkUnderline, 4, 4, 0, 1 );

    spinSize = new QSpinBox( GroupBox2, "spinSize" );
    spinSize->setMinValue( 1 );

    Layout1->addWidget( spinSize, 1, 1 );

    checkItalic = new QCheckBox( GroupBox2, "checkItalic" );

    Layout1->addMultiCellWidget( checkItalic, 3, 3, 0, 1 );

    TextLabel4 = new QLabel( GroupBox2, "TextLabel4" );

    Layout1->addWidget( TextLabel4, 5, 0 );

    TextLabel3 = new QLabel( GroupBox2, "TextLabel3" );

    Layout1->addWidget( TextLabel3, 1, 0 );

    GroupBox2Layout->addMultiCellLayout( Layout1, 1, 3, 1, 1 );

    listElements = new QListBox( GroupBox2, "listElements" );

    GroupBox2Layout->addWidget( listElements, 1, 0 );

    TextLabel2_2 = new QLabel( GroupBox2, "TextLabel2_2" );

    GroupBox2Layout->addWidget( TextLabel2_2, 2, 0 );

    editPreview = new QLineEdit( GroupBox2, "editPreview" );

    GroupBox2Layout->addWidget( editPreview, 3, 0 );
    Spacer2 = new QSpacerItem( 20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding );
    GroupBox2Layout->addItem( Spacer2, 4, 1 );

    PreferencesBaseLayout->addMultiCellWidget( GroupBox2, 0, 0, 0, 1 );

    GroupBox3 = new QGroupBox( this, "GroupBox3" );
    GroupBox3->setColumnLayout(0, Qt::Vertical );
    GroupBox3->layout()->setSpacing( 6 );
    GroupBox3->layout()->setMargin( 11 );
    GroupBox3Layout = new QVBoxLayout( GroupBox3->layout() );
    GroupBox3Layout->setAlignment( Qt::AlignTop );

    checkWordWrap = new QCheckBox( GroupBox3, "checkWordWrap" );
    GroupBox3Layout->addWidget( checkWordWrap );

    checkCompletion = new QCheckBox( GroupBox3, "checkCompletion" );
    GroupBox3Layout->addWidget( checkCompletion );

    checkParenMatching = new QCheckBox( GroupBox3, "checkParenMatching" );
    GroupBox3Layout->addWidget( checkParenMatching );

    PreferencesBaseLayout->addWidget( GroupBox3, 1, 0 );

    GroupBox3_2 = new QGroupBox( this, "GroupBox3_2" );
    GroupBox3_2->setColumnLayout(0, Qt::Vertical );
    GroupBox3_2->layout()->setSpacing( 6 );
    GroupBox3_2->layout()->setMargin( 11 );
    GroupBox3_2Layout = new QVBoxLayout( GroupBox3_2->layout() );
    GroupBox3_2Layout->setAlignment( Qt::AlignTop );

    Layout2 = new QGridLayout( 0, 1, 1, 0, 6, "Layout2"); 

    spinTabSize = new QSpinBox( GroupBox3_2, "spinTabSize" );
    spinTabSize->setValue( 8 );

    Layout2->addWidget( spinTabSize, 0, 1 );

    TextLabel1_2 = new QLabel( GroupBox3_2, "TextLabel1_2" );

    Layout2->addWidget( TextLabel1_2, 0, 0 );

    spinIndentSize = new QSpinBox( GroupBox3_2, "spinIndentSize" );
    spinIndentSize->setValue( 4 );

    Layout2->addWidget( spinIndentSize, 1, 1 );

    TextLabel2_3 = new QLabel( GroupBox3_2, "TextLabel2_3" );

    Layout2->addWidget( TextLabel2_3, 1, 0 );
    GroupBox3_2Layout->addLayout( Layout2 );

    checkKeepTabs = new QCheckBox( GroupBox3_2, "checkKeepTabs" );
    checkKeepTabs->setChecked( TRUE );
    GroupBox3_2Layout->addWidget( checkKeepTabs );

    checkAutoIndent = new QCheckBox( GroupBox3_2, "checkAutoIndent" );
    checkAutoIndent->setChecked( TRUE );
    GroupBox3_2Layout->addWidget( checkAutoIndent );

    PreferencesBaseLayout->addWidget( GroupBox3_2, 1, 1 );
    languageChange();
    resize( QSize(362, 396).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( spinSize, SIGNAL( valueChanged(int) ), this, SLOT( sizeChanged(int) ) );
    connect( checkBold, SIGNAL( toggled(bool) ), this, SLOT( boldChanged(bool) ) );
    connect( checkItalic, SIGNAL( toggled(bool) ), this, SLOT( italicChanged(bool) ) );
    connect( checkUnderline, SIGNAL( toggled(bool) ), this, SLOT( underlineChanged(bool) ) );
    connect( buttonColor, SIGNAL( clicked() ), this, SLOT( colorClicked() ) );
    connect( comboFamily, SIGNAL( activated(const QString&) ), this, SLOT( familyChanged(const QString&) ) );
    connect( listElements, SIGNAL( highlighted(const QString&) ), this, SLOT( elementChanged(const QString&) ) );

    // tab order
    setTabOrder( listElements, editPreview );
    setTabOrder( editPreview, comboFamily );
    setTabOrder( comboFamily, spinSize );
    setTabOrder( spinSize, checkBold );
    setTabOrder( checkBold, checkItalic );
    setTabOrder( checkItalic, checkUnderline );
    setTabOrder( checkUnderline, checkWordWrap );
    setTabOrder( checkWordWrap, checkCompletion );
    setTabOrder( checkCompletion, checkParenMatching );

    // buddies
    TextLabel1->setBuddy( listElements );
    TextLabel2->setBuddy( comboFamily );
    TextLabel4->setBuddy( buttonColor );
    TextLabel3->setBuddy( spinSize );
    TextLabel2_2->setBuddy( editPreview );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
PreferencesBase::~PreferencesBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void PreferencesBase::languageChange()
{
    setCaption( tr( "Form1" ) );
    GroupBox2->setTitle( tr( "S&yntax Highlighting" ) );
    TextLabel1->setText( tr( "&Element:" ) );
    checkBold->setText( tr( "&Bold" ) );
    buttonColor->setText( tr( "..." ) );
    TextLabel2->setText( tr( "&Family:" ) );
    checkUnderline->setText( tr( "&Underline" ) );
    checkItalic->setText( tr( "&Italic" ) );
    TextLabel4->setText( tr( "Change co&lor:" ) );
    TextLabel3->setText( tr( "&Size:" ) );
    listElements->clear();
    listElements->insertItem( tr( "Comment" ) );
    listElements->insertItem( tr( "Number" ) );
    listElements->insertItem( tr( "String" ) );
    listElements->insertItem( tr( "Type" ) );
    listElements->insertItem( tr( "Keyword" ) );
    listElements->insertItem( tr( "Preprocessor" ) );
    listElements->insertItem( tr( "Label" ) );
    listElements->insertItem( tr( "Standard" ) );
    TextLabel2_2->setText( tr( "&Preview:" ) );
    editPreview->setText( tr( "Some Text" ) );
    GroupBox3->setTitle( tr( "Optio&ns" ) );
    checkWordWrap->setText( tr( "&Word Wrap" ) );
    checkCompletion->setText( tr( "Comple&tion" ) );
    checkParenMatching->setText( tr( "Parentheses &Matching" ) );
    GroupBox3_2->setTitle( tr( "Indentation" ) );
    TextLabel1_2->setText( tr( "Tab Size:" ) );
    TextLabel2_3->setText( tr( "Indent Size:" ) );
    checkKeepTabs->setText( tr( "Keep Tabs" ) );
    checkAutoIndent->setText( tr( "Auto Indent" ) );
}

