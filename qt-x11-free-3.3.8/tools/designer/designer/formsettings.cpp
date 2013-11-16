/****************************************************************************
** Form implementation generated from reading ui file 'formsettings.ui'
**
** Created: Tue Oct 8 10:19:39 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "formsettings.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qlineedit.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qmultilineedit.h>
#include <qspinbox.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a FormSettingsBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
FormSettingsBase::FormSettingsBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "FormSettingsBase" );
    setSizeGripEnabled( TRUE );
    FormSettingsBaseLayout = new QGridLayout( this, 1, 1, 11, 6, "FormSettingsBaseLayout"); 

    ButtonGroup1 = new QButtonGroup( this, "ButtonGroup1" );
    ButtonGroup1->setColumnLayout(0, Qt::Vertical );
    ButtonGroup1->layout()->setSpacing( 6 );
    ButtonGroup1->layout()->setMargin( 11 );
    ButtonGroup1Layout = new QGridLayout( ButtonGroup1->layout() );
    ButtonGroup1Layout->setAlignment( Qt::AlignTop );

    radioPixmapInline = new QRadioButton( ButtonGroup1, "radioPixmapInline" );
    radioPixmapInline->setChecked( TRUE );

    ButtonGroup1Layout->addWidget( radioPixmapInline, 0, 0 );

    radioProjectImageFile = new QRadioButton( ButtonGroup1, "radioProjectImageFile" );

    ButtonGroup1Layout->addWidget( radioProjectImageFile, 2, 0 );

    editPixmapFunction = new QLineEdit( ButtonGroup1, "editPixmapFunction" );
    editPixmapFunction->setEnabled( FALSE );

    ButtonGroup1Layout->addWidget( editPixmapFunction, 1, 1 );

    radioPixmapFunction = new QRadioButton( ButtonGroup1, "radioPixmapFunction" );

    ButtonGroup1Layout->addWidget( radioPixmapFunction, 1, 0 );

    FormSettingsBaseLayout->addWidget( ButtonGroup1, 1, 0 );

    GroupBox1 = new QGroupBox( this, "GroupBox1" );
    GroupBox1->setFrameShape( QGroupBox::Box );
    GroupBox1->setFrameShadow( QGroupBox::Sunken );
    GroupBox1->setColumnLayout(0, Qt::Vertical );
    GroupBox1->layout()->setSpacing( 6 );
    GroupBox1->layout()->setMargin( 11 );
    GroupBox1Layout = new QGridLayout( GroupBox1->layout() );
    GroupBox1Layout->setAlignment( Qt::AlignTop );

    editClassName = new QLineEdit( GroupBox1, "editClassName" );

    GroupBox1Layout->addWidget( editClassName, 0, 1 );

    TextLabel1_2 = new QLabel( GroupBox1, "TextLabel1_2" );

    GroupBox1Layout->addWidget( TextLabel1_2, 3, 0 );

    editAuthor = new QLineEdit( GroupBox1, "editAuthor" );

    GroupBox1Layout->addWidget( editAuthor, 3, 1 );

    TextLabel1 = new QLabel( GroupBox1, "TextLabel1" );

    GroupBox1Layout->addWidget( TextLabel1, 0, 0 );

    TextLabel2 = new QLabel( GroupBox1, "TextLabel2" );

    GroupBox1Layout->addWidget( TextLabel2, 1, 0 );

    editComment = new QMultiLineEdit( GroupBox1, "editComment" );

    GroupBox1Layout->addMultiCellWidget( editComment, 1, 2, 1, 1 );
    Spacer1 = new QSpacerItem( 0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding );
    GroupBox1Layout->addItem( Spacer1, 2, 0 );

    FormSettingsBaseLayout->addMultiCellWidget( GroupBox1, 0, 0, 0, 1 );

    GroupBox2 = new QGroupBox( this, "GroupBox2" );
    GroupBox2->setColumnLayout(0, Qt::Vertical );
    GroupBox2->layout()->setSpacing( 6 );
    GroupBox2->layout()->setMargin( 11 );
    GroupBox2Layout = new QGridLayout( GroupBox2->layout() );
    GroupBox2Layout->setAlignment( Qt::AlignTop );

    spinMargin = new QSpinBox( GroupBox2, "spinMargin" );
    spinMargin->setValue( 11 );

    GroupBox2Layout->addWidget( spinMargin, 0, 2 );
    Spacer3 = new QSpacerItem( 0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum );
    GroupBox2Layout->addItem( Spacer3, 0, 3 );

    TextLabel2_2 = new QLabel( GroupBox2, "TextLabel2_2" );

    GroupBox2Layout->addMultiCellWidget( TextLabel2_2, 1, 1, 0, 1 );

    checkLayoutFunctions = new QCheckBox( GroupBox2, "checkLayoutFunctions" );

    GroupBox2Layout->addMultiCellWidget( checkLayoutFunctions, 2, 2, 0, 1 );

    spinSpacing = new QSpinBox( GroupBox2, "spinSpacing" );
    spinSpacing->setValue( 6 );

    GroupBox2Layout->addWidget( spinSpacing, 1, 2 );
    Spacer4 = new QSpacerItem( 0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum );
    GroupBox2Layout->addItem( Spacer4, 1, 3 );

    TextLabel1_3 = new QLabel( GroupBox2, "TextLabel1_3" );

    GroupBox2Layout->addMultiCellWidget( TextLabel1_3, 0, 0, 0, 1 );

    spaFuLabel = new QLabel( GroupBox2, "spaFuLabel" );
    spaFuLabel->setEnabled( FALSE );

    GroupBox2Layout->addWidget( spaFuLabel, 4, 0 );

    marFuLabel = new QLabel( GroupBox2, "marFuLabel" );
    marFuLabel->setEnabled( FALSE );
    marFuLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, marFuLabel->sizePolicy().hasHeightForWidth() ) );

    GroupBox2Layout->addWidget( marFuLabel, 3, 0 );
    Spacer5 = new QSpacerItem( 0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum );
    GroupBox2Layout->addMultiCell( Spacer5, 2, 2, 2, 3 );

    editSpacingFunction = new QLineEdit( GroupBox2, "editSpacingFunction" );
    editSpacingFunction->setEnabled( FALSE );

    GroupBox2Layout->addMultiCellWidget( editSpacingFunction, 4, 4, 1, 3 );

    editMarginFunction = new QLineEdit( GroupBox2, "editMarginFunction" );
    editMarginFunction->setEnabled( FALSE );
    editMarginFunction->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, editMarginFunction->sizePolicy().hasHeightForWidth() ) );

    GroupBox2Layout->addMultiCellWidget( editMarginFunction, 3, 3, 1, 3 );

    FormSettingsBaseLayout->addWidget( GroupBox2, 1, 1 );

    Layout4 = new QHBoxLayout( 0, 0, 6, "Layout4"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAutoDefault( TRUE );
    Layout4->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout4->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout4->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout4->addWidget( buttonCancel );

    FormSettingsBaseLayout->addMultiCellLayout( Layout4, 2, 2, 0, 1 );
    languageChange();
    resize( QSize(597, 458).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( radioPixmapFunction, SIGNAL( toggled(bool) ), editPixmapFunction, SLOT( setEnabled(bool) ) );
    connect( checkLayoutFunctions, SIGNAL( toggled(bool) ), editSpacingFunction, SLOT( setEnabled(bool) ) );
    connect( checkLayoutFunctions, SIGNAL( toggled(bool) ), editMarginFunction, SLOT( setEnabled(bool) ) );
    connect( checkLayoutFunctions, SIGNAL( toggled(bool) ), marFuLabel, SLOT( setEnabled(bool) ) );
    connect( checkLayoutFunctions, SIGNAL( toggled(bool) ), spaFuLabel, SLOT( setEnabled(bool) ) );

    // tab order
    setTabOrder( editClassName, editComment );
    setTabOrder( editComment, editAuthor );
    setTabOrder( editAuthor, radioPixmapInline );
    setTabOrder( radioPixmapInline, radioPixmapFunction );
    setTabOrder( radioPixmapFunction, editPixmapFunction );
    setTabOrder( editPixmapFunction, radioProjectImageFile );
    setTabOrder( radioProjectImageFile, spinMargin );
    setTabOrder( spinMargin, spinSpacing );
    setTabOrder( spinSpacing, checkLayoutFunctions );
    setTabOrder( checkLayoutFunctions, editMarginFunction );
    setTabOrder( editMarginFunction, editSpacingFunction );
    setTabOrder( editSpacingFunction, buttonOk );
    setTabOrder( buttonOk, buttonCancel );
    setTabOrder( buttonCancel, buttonHelp );

    // buddies
    TextLabel1_2->setBuddy( editAuthor );
    TextLabel1->setBuddy( editClassName );
    TextLabel2->setBuddy( editComment );
    TextLabel2_2->setBuddy( spinSpacing );
    TextLabel1_3->setBuddy( spinMargin );
    spaFuLabel->setBuddy( editSpacingFunction );
    marFuLabel->setBuddy( editMarginFunction );
}

/*
 *  Destroys the object and frees any allocated resources
 */
FormSettingsBase::~FormSettingsBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void FormSettingsBase::languageChange()
{
    setCaption( tr( "Form Settings" ) );
    QWhatsThis::add( this, tr( "<b>Form Settings</b><p>Change settings for the form. Settings like <b>Comment</b> and <b>Author</b> are for your own use and are not required.</p>" ) );
    ButtonGroup1->setTitle( tr( "Pixmaps" ) );
    radioPixmapInline->setText( tr( "Save In&line" ) );
    QToolTip::add( radioPixmapInline, tr( "Save pixmaps in the .ui files" ) );
    QWhatsThis::add( radioPixmapInline, tr( "<b>Save Inline</b><p>Saves the pixmaps as binary data in the .ui files. Pixmaps saved like this are not shared between forms. We recommend using Project image files instead." ) );
    radioProjectImageFile->setText( tr( "Project &Imagefile" ) );
    QToolTip::add( radioProjectImageFile, tr( "Use the Project's Image file for pixmaps" ) );
    QWhatsThis::add( radioProjectImageFile, tr( "<b>Use the Project's Image file for pixmaps</b>\n"
"<p>Each project may have a collection of pixmaps. If you use a project, we recommend that you use this option since it shares the images and is the fastest and most efficient way to use pixmaps in your forms.</p>" ) );
    QToolTip::add( editPixmapFunction, tr( "Specify Pixmap-Loader function (only the function's name, no parentheses!)" ) );
    QWhatsThis::add( editPixmapFunction, tr( "<b>Specify Pixmap-Loader function</b><p>Specify the function which should be used for loading a pixmap in the generated code. <em>Only enter the function's name, with no parentheses.</em>" ) );
    radioPixmapFunction->setText( tr( "Use &Function:" ) );
    QToolTip::add( radioPixmapFunction, tr( "Use the given function for pixmaps" ) );
    QWhatsThis::add( radioPixmapFunction, tr( "<b>Use a given function for pixmaps</b><p>If you choose this option you must define a function in the line edit at the right which will be used in the generated code for loading pixmaps. When choosing a pixmap in <i>Qt Designer</i> you will be asked to specify the arguments which will be passed to the function in the generated code.<p> This approach makes it possible to use your own icon-loader function for loading pixmaps.  <i>Qt Designer</i> can't preview the correct image if you use your own function." ) );
    GroupBox1->setTitle( tr( "Settings" ) );
    QToolTip::add( editClassName, tr( "Change class name" ) );
    QWhatsThis::add( editClassName, tr( "<b>Enter the name of the class that will be created.</b><p><em>classname.h</em> and <em>classname.cpp</em> will be generated as C++ output when it is compiled by uic.</p>" ) );
    TextLabel1_2->setText( tr( "A&uthor:" ) );
    QToolTip::add( editAuthor, tr( "Enter your name" ) );
    QWhatsThis::add( editAuthor, tr( "Enter your name." ) );
    TextLabel1->setText( tr( "Class &Name:" ) );
    TextLabel2->setText( tr( "Co&mment:" ) );
    QWhatsThis::add( editComment, tr( "Enter a comment about the form." ) );
    GroupBox2->setTitle( tr( "La&youts" ) );
    TextLabel2_2->setText( tr( "D&efault Spacing:" ) );
    checkLayoutFunctions->setText( tr( "Use Func&tions:" ) );
    QToolTip::add( checkLayoutFunctions, tr( "Use functions to get the margin and spacing" ) );
    QWhatsThis::add( checkLayoutFunctions, tr( "<b>Use a given function for margin and/or spacing</b><p>If you choose this option you must define functions in the line edit below which will be used in the generated code for getting the margin and spacing value. <i>Qt Designer</i> can't preview the correct margin or spacing if you use your own function. Instead, the default values will be used for preview." ) );
    TextLabel1_3->setText( tr( "Default Mar&gin:" ) );
    spaFuLabel->setText( tr( "S&pacing:" ) );
    marFuLabel->setText( tr( "Ma&rgin:" ) );
    QToolTip::add( editSpacingFunction, tr( "Specify spacing function (only the function's name, no parentheses!)" ) );
    QWhatsThis::add( editSpacingFunction, tr( "<b>Specify spacing function</b><p>Specify the function which should be used for getting the spacing in the generated code. <em>Only enter the function's name, with no parentheses.</em>" ) );
    QToolTip::add( editMarginFunction, tr( "Specify margin function (only the function's name, no parentheses!)" ) );
    QWhatsThis::add( editMarginFunction, tr( "<b>Specify margin function</b><p>Specify the function which should be used for getting the margin in the generated code. <em>Only enter the function's name, with no parentheses.</em>" ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonOk->setText( tr( "&OK" ) );
    QWhatsThis::add( buttonOk, tr( "Close the dialog and apply all the changes." ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    QWhatsThis::add( buttonCancel, tr( "Close the dialog and discard any changes." ) );
}

void FormSettingsBase::okClicked()
{
    qWarning( "FormSettingsBase::okClicked(): Not implemented yet" );
}

