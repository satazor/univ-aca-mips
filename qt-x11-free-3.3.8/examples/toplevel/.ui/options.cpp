/****************************************************************************
** Form implementation generated from reading ui file 'options.ui'
**
** Created: Tue Oct 8 10:26:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "options.h"

#include <qvariant.h>
#include <qfiledialog.h>
#include <qpushbutton.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qcheckbox.h>
#include <qgroupbox.h>
#include <qlineedit.h>
#include <qtoolbutton.h>
#include <qslider.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "../options.ui.h"

/*
 *  Constructs a OptionsDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
OptionsDialog::OptionsDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "OptionsDialog" );
    OptionsDialogLayout = new QVBoxLayout( this, 11, 6, "OptionsDialogLayout"); 

    layout5 = new QHBoxLayout( 0, 0, 6, "layout5"); 

    layout4 = new QVBoxLayout( 0, 0, 6, "layout4"); 

    bgBorder = new QButtonGroup( this, "bgBorder" );
    bgBorder->setFlat( TRUE );
    bgBorder->setCheckable( TRUE );
    bgBorder->setColumnLayout(0, Qt::Vertical );
    bgBorder->layout()->setSpacing( 6 );
    bgBorder->layout()->setMargin( 11 );
    bgBorderLayout = new QVBoxLayout( bgBorder->layout() );
    bgBorderLayout->setAlignment( Qt::AlignTop );

    rbBorderNormal = new QRadioButton( bgBorder, "rbBorderNormal" );
    rbBorderNormal->setChecked( TRUE );
    bgBorderLayout->addWidget( rbBorderNormal );

    rbBorderDialog = new QRadioButton( bgBorder, "rbBorderDialog" );
    bgBorderLayout->addWidget( rbBorderDialog );
    layout4->addWidget( bgBorder );

    bgTitle = new QButtonGroup( this, "bgTitle" );
    bgTitle->setFlat( TRUE );
    bgTitle->setCheckable( TRUE );
    bgTitle->setColumnLayout(0, Qt::Vertical );
    bgTitle->layout()->setSpacing( 6 );
    bgTitle->layout()->setMargin( 11 );
    bgTitleLayout = new QVBoxLayout( bgTitle->layout() );
    bgTitleLayout->setAlignment( Qt::AlignTop );

    cbTitleSystem = new QCheckBox( bgTitle, "cbTitleSystem" );
    cbTitleSystem->setChecked( TRUE );
    bgTitleLayout->addWidget( cbTitleSystem );

    cbTitleMinimize = new QCheckBox( bgTitle, "cbTitleMinimize" );
    bgTitleLayout->addWidget( cbTitleMinimize );

    cbTitleMaximize = new QCheckBox( bgTitle, "cbTitleMaximize" );
    bgTitleLayout->addWidget( cbTitleMaximize );

    cbTitleContext = new QCheckBox( bgTitle, "cbTitleContext" );
    bgTitleLayout->addWidget( cbTitleContext );
    layout4->addWidget( bgTitle );
    layout5->addLayout( layout4 );

    layout3 = new QVBoxLayout( 0, 0, 6, "layout3"); 

    bgBehavior = new QButtonGroup( this, "bgBehavior" );
    bgBehavior->setFlat( TRUE );
    bgBehavior->setColumnLayout(0, Qt::Vertical );
    bgBehavior->layout()->setSpacing( 6 );
    bgBehavior->layout()->setMargin( 11 );
    bgBehaviorLayout = new QVBoxLayout( bgBehavior->layout() );
    bgBehaviorLayout->setAlignment( Qt::AlignTop );

    cbBehaviorTaskbar = new QCheckBox( bgBehavior, "cbBehaviorTaskbar" );
    bgBehaviorLayout->addWidget( cbBehaviorTaskbar );

    cbBehaviorStays = new QCheckBox( bgBehavior, "cbBehaviorStays" );
    bgBehaviorLayout->addWidget( cbBehaviorStays );

    cbBehaviorPopup = new QCheckBox( bgBehavior, "cbBehaviorPopup" );
    cbBehaviorPopup->setEnabled( FALSE );
    bgBehaviorLayout->addWidget( cbBehaviorPopup );

    cbBehaviorTool = new QCheckBox( bgBehavior, "cbBehaviorTool" );
    bgBehaviorLayout->addWidget( cbBehaviorTool );

    cbBehaviorModal = new QCheckBox( bgBehavior, "cbBehaviorModal" );
    bgBehaviorLayout->addWidget( cbBehaviorModal );
    layout3->addWidget( bgBehavior );
    spacer2 = new QSpacerItem( 20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding );
    layout3->addItem( spacer2 );
    layout5->addLayout( layout3 );
    OptionsDialogLayout->addLayout( layout5 );

    gbProperties = new QGroupBox( this, "gbProperties" );
    gbProperties->setFlat( TRUE );
    gbProperties->setColumnLayout(0, Qt::Vertical );
    gbProperties->layout()->setSpacing( 6 );
    gbProperties->layout()->setMargin( 11 );
    gbPropertiesLayout = new QGridLayout( gbProperties->layout() );
    gbPropertiesLayout->setAlignment( Qt::AlignTop );

    leCaption = new QLineEdit( gbProperties, "leCaption" );

    gbPropertiesLayout->addWidget( leCaption, 0, 1 );

    layout2 = new QHBoxLayout( 0, 0, 6, "layout2"); 

    leIcon = new QLineEdit( gbProperties, "leIcon" );
    layout2->addWidget( leIcon );

    tbPick = new QToolButton( gbProperties, "tbPick" );
    layout2->addWidget( tbPick );

    gbPropertiesLayout->addLayout( layout2, 1, 1 );

    slTransparency = new QSlider( gbProperties, "slTransparency" );
    slTransparency->setMaxValue( 100 );
    slTransparency->setPageStep( 10 );
    slTransparency->setOrientation( QSlider::Horizontal );
    slTransparency->setTickmarks( QSlider::Below );
    slTransparency->setTickInterval( 10 );

    gbPropertiesLayout->addWidget( slTransparency, 2, 1 );

    textLabel3 = new QLabel( gbProperties, "textLabel3" );

    gbPropertiesLayout->addWidget( textLabel3, 2, 0 );

    textLabel2 = new QLabel( gbProperties, "textLabel2" );

    gbPropertiesLayout->addWidget( textLabel2, 1, 0 );

    textLabel1 = new QLabel( gbProperties, "textLabel1" );

    gbPropertiesLayout->addWidget( textLabel1, 0, 0 );
    OptionsDialogLayout->addWidget( gbProperties );

    layout1 = new QHBoxLayout( 0, 0, 6, "layout1"); 
    spacer1 = new QSpacerItem( 70, 21, QSizePolicy::Expanding, QSizePolicy::Minimum );
    layout1->addItem( spacer1 );

    pbApply = new QPushButton( this, "pbApply" );
    pbApply->setDefault( TRUE );
    layout1->addWidget( pbApply );

    pbClose = new QPushButton( this, "pbClose" );
    layout1->addWidget( pbClose );
    OptionsDialogLayout->addLayout( layout1 );
    languageChange();
    resize( QSize(371, 482).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( pbClose, SIGNAL( clicked() ), this, SLOT( close() ) );
    connect( pbApply, SIGNAL( clicked() ), this, SLOT( apply() ) );
    connect( bgBorder, SIGNAL( toggled(bool) ), bgTitle, SLOT( setEnabled(bool) ) );
    connect( cbTitleSystem, SIGNAL( toggled(bool) ), cbTitleMinimize, SLOT( setEnabled(bool) ) );
    connect( cbTitleSystem, SIGNAL( toggled(bool) ), cbTitleMaximize, SLOT( setEnabled(bool) ) );
    connect( cbTitleSystem, SIGNAL( toggled(bool) ), cbTitleContext, SLOT( setEnabled(bool) ) );
    connect( bgTitle, SIGNAL( toggled(bool) ), cbBehaviorPopup, SLOT( setDisabled(bool) ) );
    connect( cbBehaviorPopup, SIGNAL( toggled(bool) ), bgTitle, SLOT( setDisabled(bool) ) );
    connect( tbPick, SIGNAL( clicked() ), this, SLOT( pickIcon() ) );

    // buddies
    textLabel3->setBuddy( slTransparency );
    textLabel2->setBuddy( leIcon );
    textLabel1->setBuddy( leCaption );
}

/*
 *  Destroys the object and frees any allocated resources
 */
OptionsDialog::~OptionsDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void OptionsDialog::languageChange()
{
    setCaption( tr( "Select Options" ) );
    bgBorder->setTitle( tr( "&Border" ) );
    QWhatsThis::add( bgBorder, tr( "Select different types of borders, or turn the border off. Windows without a border are ignored by the window manager." ) );
    rbBorderNormal->setText( tr( "&Normal" ) );
    rbBorderNormal->setAccel( QKeySequence( tr( "Alt+N" ) ) );
    QToolTip::add( rbBorderNormal, tr( "A normal border" ) );
    QWhatsThis::add( rbBorderNormal, tr( "Gives the window a normal, resizable border. The window should have a layout installed to handle the resizing gracefully." ) );
    rbBorderDialog->setText( tr( "&Dialog" ) );
    rbBorderDialog->setAccel( QKeySequence( tr( "Alt+D" ) ) );
    QToolTip::add( rbBorderDialog, tr( "A thin dialog border" ) );
    QWhatsThis::add( rbBorderDialog, tr( "Gives the window a thin dialog border. Depending on the window manager the window will not be resizable. Use QWidget::setFixedSize() in addition to enforce a static size on all systems." ) );
    bgTitle->setTitle( tr( "&Titlebar" ) );
    QWhatsThis::add( bgTitle, tr( "Select different controls you want to see in the titlebar, or turn the titlebar off. Popup windows should not have a titlebar." ) );
    cbTitleSystem->setText( tr( "S&ystem Menu" ) );
    cbTitleSystem->setAccel( QKeySequence( tr( "Alt+Y" ) ) );
    QToolTip::add( cbTitleSystem, tr( "A window system menu." ) );
    QWhatsThis::add( cbTitleSystem, tr( "Adds a window system menu. Many window managers require a system menu to be able to provide minimize or maximize controls. A system menu implies a close button." ) );
    cbTitleMinimize->setText( tr( "Minimi&ze" ) );
    cbTitleMinimize->setAccel( QKeySequence( tr( "Alt+Z" ) ) );
    QToolTip::add( cbTitleMinimize, tr( "A minimize button" ) );
    QWhatsThis::add( cbTitleMinimize, tr( "Adds a minimze button. This option requires a system menu on many window managers." ) );
    cbTitleMaximize->setText( tr( "Ma&ximize" ) );
    cbTitleMaximize->setAccel( QKeySequence( tr( "Alt+X" ) ) );
    QToolTip::add( cbTitleMaximize, tr( "A maximize button" ) );
    QWhatsThis::add( cbTitleMaximize, tr( "Adds a maximze button. This option requires a system menu on many window managers." ) );
    cbTitleContext->setText( tr( "&What's This" ) );
    cbTitleContext->setAccel( QKeySequence( tr( "Alt+W" ) ) );
    QToolTip::add( cbTitleContext, tr( "A context help button" ) );
    QWhatsThis::add( cbTitleContext, tr( "Adds a context help button. This option requires a system menu on many window managers, and often doesn't work together with minimize and maximize buttons." ) );
    bgBehavior->setTitle( tr( "Behavior" ) );
    QWhatsThis::add( bgBehavior, tr( "Select different behaviors of the window in runtime." ) );
    cbBehaviorTaskbar->setText( tr( "Taskbar &Entry" ) );
    cbBehaviorTaskbar->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    QToolTip::add( cbBehaviorTaskbar, tr( "Entry in the taskbar" ) );
    QWhatsThis::add( cbBehaviorTaskbar, tr( "Gives the window a separate task bar entry." ) );
    cbBehaviorStays->setText( tr( "Stays on T&op" ) );
    cbBehaviorStays->setAccel( QKeySequence( tr( "Alt+O" ) ) );
    QToolTip::add( cbBehaviorStays, tr( "Stay on top of the desktop" ) );
    QWhatsThis::add( cbBehaviorStays, tr( "Informs the window system that the window should stay on top of all other windows, including windows from other applications. This is not supported on all X11 window managers." ) );
    cbBehaviorPopup->setText( tr( "&Popup" ) );
    cbBehaviorPopup->setAccel( QKeySequence( tr( "Alt+P" ) ) );
    QToolTip::add( cbBehaviorPopup, tr( "A popup window" ) );
    QWhatsThis::add( cbBehaviorPopup, tr( "Indicates that this widget is a popup window. Popup windows are modal, but close automatically when the mouse is clicked." ) );
    cbBehaviorTool->setText( tr( "Too&l" ) );
    cbBehaviorTool->setAccel( QKeySequence( tr( "Alt+L" ) ) );
    QToolTip::add( cbBehaviorTool, tr( "A tool window" ) );
    QWhatsThis::add( cbBehaviorTool, tr( "Makes the window a tool window. Tool windows often have a smaller titlebar and decoration, and don't activate automtically when displayed. Tool windows often cannot have their own taskbar entry." ) );
    cbBehaviorModal->setText( tr( "&Modal" ) );
    cbBehaviorModal->setAccel( QKeySequence( tr( "Alt+M" ) ) );
    QToolTip::add( cbBehaviorModal, tr( "Show modal" ) );
    QWhatsThis::add( cbBehaviorModal, tr( "The window is modal for the application, e.g. input for other windows are blocked by this window." ) );
    gbProperties->setTitle( tr( "Properties" ) );
    QWhatsThis::add( gbProperties, tr( "Set other properties of the window." ) );
    leCaption->setText( tr( "Caption" ) );
    QToolTip::add( leCaption, tr( "Window caption" ) );
    QWhatsThis::add( leCaption, tr( "The caption of the window." ) );
    QToolTip::add( leIcon, tr( "Icon file" ) );
    QWhatsThis::add( leIcon, tr( "Provide an image file." ) );
    tbPick->setText( tr( "..." ) );
    QToolTip::add( tbPick, tr( "Pick an icon" ) );
    QWhatsThis::add( tbPick, tr( "Select an image file." ) );
    QToolTip::add( slTransparency, tr( "Window transparency" ) );
    QWhatsThis::add( slTransparency, tr( "Set the transparency of the window.\n"
"A high value gives a high window transparency, e.g. it is less visible.\n"
"\n"
"Note that this attribute is not supported on many windowing systems and will have no effect." ) );
    textLabel3->setText( tr( "Transp&arency:" ) );
    textLabel2->setText( tr( "&Icon:" ) );
    textLabel1->setText( tr( "&Caption:" ) );
    pbApply->setText( tr( "Apply" ) );
    pbApply->setAccel( QKeySequence( QString::null ) );
    QWhatsThis::add( pbApply, tr( "Creates a new window with the selected flags, or modifies the visible window." ) );
    pbClose->setText( tr( "Close" ) );
    pbClose->setAccel( QKeySequence( QString::null ) );
    QWhatsThis::add( pbClose, tr( "Closes this dialog and exits the application." ) );
}

