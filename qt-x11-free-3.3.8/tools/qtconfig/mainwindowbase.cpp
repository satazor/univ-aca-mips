/****************************************************************************
** Form implementation generated from reading ui file 'mainwindowbase.ui'
**
** Created: Tue Oct 8 10:22:47 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "mainwindowbase.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtextview.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qgroupbox.h>
#include <qlabel.h>
#include <qcombobox.h>
#include <qlineedit.h>
#include <qframe.h>
#include <qlistbox.h>
#include <qspinbox.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include <qimage.h>
#include <qpixmap.h>

#include "colorbutton.h"
#include "previewframe.h"
/*
 *  Constructs a MainWindowBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
MainWindowBase::MainWindowBase( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl )
{
    (void)statusBar();
    if ( !name )
	setName( "MainWindowBase" );
    setIcon( QPixmap::fromMimeSource( "appicon.png" ) );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );
    MainWindowBaseLayout = new QHBoxLayout( centralWidget(), 8, 4, "MainWindowBaseLayout"); 

    helpview = new QTextView( centralWidget(), "helpview" );
    helpview->setMinimumSize( QSize( 200, 0 ) );
    MainWindowBaseLayout->addWidget( helpview );

    TabWidget3 = new QTabWidget( centralWidget(), "TabWidget3" );

    tab = new QWidget( TabWidget3, "tab" );
    tabLayout = new QVBoxLayout( tab, 4, 4, "tabLayout"); 

    GroupBox40 = new QGroupBox( tab, "GroupBox40" );
    GroupBox40->setColumnLayout(0, Qt::Vertical );
    GroupBox40->layout()->setSpacing( 4 );
    GroupBox40->layout()->setMargin( 8 );
    GroupBox40Layout = new QHBoxLayout( GroupBox40->layout() );
    GroupBox40Layout->setAlignment( Qt::AlignTop );

    gstylebuddy = new QLabel( GroupBox40, "gstylebuddy" );
    GroupBox40Layout->addWidget( gstylebuddy );

    gstylecombo = new QComboBox( FALSE, GroupBox40, "gstylecombo" );
    GroupBox40Layout->addWidget( gstylecombo );
    tabLayout->addWidget( GroupBox40 );

    groupAutoPalette = new QGroupBox( tab, "groupAutoPalette" );
    groupAutoPalette->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)4, 0, 0, groupAutoPalette->sizePolicy().hasHeightForWidth() ) );
    groupAutoPalette->setAlignment( int( QGroupBox::AlignAuto ) );
    groupAutoPalette->setColumnLayout(0, Qt::Vertical );
    groupAutoPalette->layout()->setSpacing( 4 );
    groupAutoPalette->layout()->setMargin( 8 );
    groupAutoPaletteLayout = new QHBoxLayout( groupAutoPalette->layout() );
    groupAutoPaletteLayout->setAlignment( Qt::AlignTop );

    labelMainColor = new QLabel( groupAutoPalette, "labelMainColor" );
    groupAutoPaletteLayout->addWidget( labelMainColor );

    buttonMainColor = new ColorButton( groupAutoPalette, "buttonMainColor" );
    groupAutoPaletteLayout->addWidget( buttonMainColor );

    labelMainColor2 = new QLabel( groupAutoPalette, "labelMainColor2" );
    labelMainColor2->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, labelMainColor2->sizePolicy().hasHeightForWidth() ) );
    labelMainColor2->setMinimumSize( QSize( 50, 0 ) );
    labelMainColor2->setLineWidth( 1 );
    labelMainColor2->setMargin( 0 );
    labelMainColor2->setMidLineWidth( 0 );
    labelMainColor2->setAlignment( int( QLabel::AlignVCenter ) );
    groupAutoPaletteLayout->addWidget( labelMainColor2 );

    buttonMainColor2 = new ColorButton( groupAutoPalette, "buttonMainColor2" );
    groupAutoPaletteLayout->addWidget( buttonMainColor2 );
    Spacer1 = new QSpacerItem( 70, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    groupAutoPaletteLayout->addItem( Spacer1 );

    btnAdvanced = new QPushButton( groupAutoPalette, "btnAdvanced" );
    groupAutoPaletteLayout->addWidget( btnAdvanced );
    tabLayout->addWidget( groupAutoPalette );

    GroupBox126 = new QGroupBox( tab, "GroupBox126" );
    GroupBox126->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)7, 0, 0, GroupBox126->sizePolicy().hasHeightForWidth() ) );
    GroupBox126->setColumnLayout(0, Qt::Vertical );
    GroupBox126->layout()->setSpacing( 4 );
    GroupBox126->layout()->setMargin( 8 );
    GroupBox126Layout = new QGridLayout( GroupBox126->layout() );
    GroupBox126Layout->setAlignment( Qt::AlignTop );

    TextLabel1 = new QLabel( GroupBox126, "TextLabel1" );

    GroupBox126Layout->addWidget( TextLabel1, 0, 0 );

    paletteCombo = new QComboBox( FALSE, GroupBox126, "paletteCombo" );

    GroupBox126Layout->addWidget( paletteCombo, 0, 1 );

    previewFrame = new PreviewFrame( GroupBox126, "previewFrame" );
    previewFrame->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)7, 0, 0, previewFrame->sizePolicy().hasHeightForWidth() ) );
    previewFrame->setMinimumSize( QSize( 410, 260 ) );

    GroupBox126Layout->addMultiCellWidget( previewFrame, 1, 1, 0, 1 );
    tabLayout->addWidget( GroupBox126 );
    TabWidget3->insertTab( tab, QString::fromLatin1("") );

    tab_2 = new QWidget( TabWidget3, "tab_2" );
    tabLayout_2 = new QVBoxLayout( tab_2, 8, 4, "tabLayout_2"); 

    GroupBox1 = new QGroupBox( tab_2, "GroupBox1" );
    GroupBox1->setColumnLayout(0, Qt::Vertical );
    GroupBox1->layout()->setSpacing( 4 );
    GroupBox1->layout()->setMargin( 8 );
    GroupBox1Layout = new QGridLayout( GroupBox1->layout() );
    GroupBox1Layout->setAlignment( Qt::AlignTop );

    stylecombo = new QComboBox( FALSE, GroupBox1, "stylecombo" );
    stylecombo->setAutoCompletion( TRUE );
    stylecombo->setDuplicatesEnabled( FALSE );

    GroupBox1Layout->addWidget( stylecombo, 1, 1 );

    familycombo = new QComboBox( FALSE, GroupBox1, "familycombo" );
    familycombo->setAutoCompletion( TRUE );
    familycombo->setDuplicatesEnabled( FALSE );

    GroupBox1Layout->addWidget( familycombo, 0, 1 );

    psizecombo = new QComboBox( FALSE, GroupBox1, "psizecombo" );
    psizecombo->setEditable( TRUE );
    psizecombo->setAutoCompletion( TRUE );
    psizecombo->setDuplicatesEnabled( FALSE );

    GroupBox1Layout->addWidget( psizecombo, 2, 1 );

    stylebuddy = new QLabel( GroupBox1, "stylebuddy" );

    GroupBox1Layout->addWidget( stylebuddy, 1, 0 );

    psizebuddy = new QLabel( GroupBox1, "psizebuddy" );

    GroupBox1Layout->addWidget( psizebuddy, 2, 0 );

    familybuddy = new QLabel( GroupBox1, "familybuddy" );

    GroupBox1Layout->addWidget( familybuddy, 0, 0 );

    samplelineedit = new QLineEdit( GroupBox1, "samplelineedit" );
    samplelineedit->setAlignment( int( QLineEdit::AlignHCenter ) );

    GroupBox1Layout->addMultiCellWidget( samplelineedit, 3, 3, 0, 1 );
    tabLayout_2->addWidget( GroupBox1 );

    GroupBox2 = new QGroupBox( tab_2, "GroupBox2" );
    GroupBox2->setFrameShape( QGroupBox::Box );
    GroupBox2->setFrameShadow( QGroupBox::Sunken );
    GroupBox2->setColumnLayout(0, Qt::Vertical );
    GroupBox2->layout()->setSpacing( 4 );
    GroupBox2->layout()->setMargin( 8 );
    GroupBox2Layout = new QVBoxLayout( GroupBox2->layout() );
    GroupBox2Layout->setAlignment( Qt::AlignTop );

    Layout2 = new QHBoxLayout( 0, 0, 4, "Layout2"); 

    famsubbuddy = new QLabel( GroupBox2, "famsubbuddy" );
    Layout2->addWidget( famsubbuddy );

    familysubcombo = new QComboBox( FALSE, GroupBox2, "familysubcombo" );
    familysubcombo->setEditable( TRUE );
    familysubcombo->setAutoCompletion( TRUE );
    familysubcombo->setDuplicatesEnabled( FALSE );
    Layout2->addWidget( familysubcombo );
    GroupBox2Layout->addLayout( Layout2 );

    Line1 = new QFrame( GroupBox2, "Line1" );
    Line1->setFrameShape( QFrame::HLine );
    Line1->setFrameShadow( QFrame::Sunken );
    Line1->setFrameShape( QFrame::HLine );
    GroupBox2Layout->addWidget( Line1 );

    TextLabel5 = new QLabel( GroupBox2, "TextLabel5" );
    GroupBox2Layout->addWidget( TextLabel5 );

    sublistbox = new QListBox( GroupBox2, "sublistbox" );
    GroupBox2Layout->addWidget( sublistbox );

    Layout3 = new QHBoxLayout( 0, 0, 4, "Layout3"); 

    PushButton2 = new QPushButton( GroupBox2, "PushButton2" );
    Layout3->addWidget( PushButton2 );

    PushButton3 = new QPushButton( GroupBox2, "PushButton3" );
    Layout3->addWidget( PushButton3 );

    PushButton4 = new QPushButton( GroupBox2, "PushButton4" );
    Layout3->addWidget( PushButton4 );
    GroupBox2Layout->addLayout( Layout3 );

    Line2 = new QFrame( GroupBox2, "Line2" );
    Line2->setFrameShape( QFrame::HLine );
    Line2->setFrameShadow( QFrame::Sunken );
    Line2->setFrameShape( QFrame::HLine );
    GroupBox2Layout->addWidget( Line2 );

    Layout11 = new QHBoxLayout( 0, 0, 4, "Layout11"); 

    choosebuddy = new QLabel( GroupBox2, "choosebuddy" );
    Layout11->addWidget( choosebuddy );

    choosesubcombo = new QComboBox( FALSE, GroupBox2, "choosesubcombo" );
    choosesubcombo->setAutoCompletion( TRUE );
    choosesubcombo->setDuplicatesEnabled( FALSE );
    Layout11->addWidget( choosesubcombo );

    PushButton1 = new QPushButton( GroupBox2, "PushButton1" );
    Layout11->addWidget( PushButton1 );
    GroupBox2Layout->addLayout( Layout11 );
    tabLayout_2->addWidget( GroupBox2 );
    TabWidget3->insertTab( tab_2, QString::fromLatin1("") );

    tab_3 = new QWidget( TabWidget3, "tab_3" );
    tabLayout_3 = new QVBoxLayout( tab_3, 8, 4, "tabLayout_3"); 

    GroupBox4 = new QGroupBox( tab_3, "GroupBox4" );
    GroupBox4->setColumnLayout(0, Qt::Vertical );
    GroupBox4->layout()->setSpacing( 4 );
    GroupBox4->layout()->setMargin( 8 );
    GroupBox4Layout = new QGridLayout( GroupBox4->layout() );
    GroupBox4Layout->setAlignment( Qt::AlignTop );

    dcispin = new QSpinBox( GroupBox4, "dcispin" );
    dcispin->setMaxValue( 10000 );
    dcispin->setMinValue( 10 );

    GroupBox4Layout->addWidget( dcispin, 0, 1 );

    dcibuddy = new QLabel( GroupBox4, "dcibuddy" );

    GroupBox4Layout->addWidget( dcibuddy, 0, 0 );

    cfispin = new QSpinBox( GroupBox4, "cfispin" );
    cfispin->setMaxValue( 10000 );
    cfispin->setMinValue( 9 );

    GroupBox4Layout->addWidget( cfispin, 1, 1 );

    cfibuddy = new QLabel( GroupBox4, "cfibuddy" );

    GroupBox4Layout->addWidget( cfibuddy, 1, 0 );

    wslspin = new QSpinBox( GroupBox4, "wslspin" );
    wslspin->setMaxValue( 20 );
    wslspin->setMinValue( 1 );

    GroupBox4Layout->addWidget( wslspin, 2, 1 );

    wslbuddy = new QLabel( GroupBox4, "wslbuddy" );

    GroupBox4Layout->addWidget( wslbuddy, 2, 0 );

    resolvelinks = new QCheckBox( GroupBox4, "resolvelinks" );

    GroupBox4Layout->addMultiCellWidget( resolvelinks, 3, 3, 0, 1 );
    tabLayout_3->addWidget( GroupBox4 );

    GroupBox3 = new QGroupBox( tab_3, "GroupBox3" );
    GroupBox3->setColumnLayout(0, Qt::Vertical );
    GroupBox3->layout()->setSpacing( 4 );
    GroupBox3->layout()->setMargin( 8 );
    GroupBox3Layout = new QVBoxLayout( GroupBox3->layout() );
    GroupBox3Layout->setAlignment( Qt::AlignTop );

    effectcheckbox = new QCheckBox( GroupBox3, "effectcheckbox" );
    GroupBox3Layout->addWidget( effectcheckbox );

    effectbase = new QFrame( GroupBox3, "effectbase" );
    effectbase->setFrameShape( QFrame::NoFrame );
    effectbase->setFrameShadow( QFrame::Plain );
    effectbaseLayout = new QGridLayout( effectbase, 1, 1, 0, 4, "effectbaseLayout"); 

    meffectbuddy = new QLabel( effectbase, "meffectbuddy" );

    effectbaseLayout->addWidget( meffectbuddy, 0, 0 );

    ceffectbuddy = new QLabel( effectbase, "ceffectbuddy" );

    effectbaseLayout->addWidget( ceffectbuddy, 1, 0 );

    teffectbuddy = new QLabel( effectbase, "teffectbuddy" );

    effectbaseLayout->addWidget( teffectbuddy, 2, 0 );

    beffectbuddy = new QLabel( effectbase, "beffectbuddy" );

    effectbaseLayout->addWidget( beffectbuddy, 3, 0 );

    menueffect = new QComboBox( FALSE, effectbase, "menueffect" );
    menueffect->setAutoCompletion( TRUE );

    effectbaseLayout->addWidget( menueffect, 0, 1 );

    comboeffect = new QComboBox( FALSE, effectbase, "comboeffect" );

    effectbaseLayout->addWidget( comboeffect, 1, 1 );

    tooltipeffect = new QComboBox( FALSE, effectbase, "tooltipeffect" );

    effectbaseLayout->addWidget( tooltipeffect, 2, 1 );

    toolboxeffect = new QComboBox( FALSE, effectbase, "toolboxeffect" );

    effectbaseLayout->addWidget( toolboxeffect, 3, 1 );
    GroupBox3Layout->addWidget( effectbase );
    tabLayout_3->addWidget( GroupBox3 );

    GroupBox5 = new QGroupBox( tab_3, "GroupBox5" );
    GroupBox5->setColumnLayout(0, Qt::Vertical );
    GroupBox5->layout()->setSpacing( 4 );
    GroupBox5->layout()->setMargin( 8 );
    GroupBox5Layout = new QGridLayout( GroupBox5->layout() );
    GroupBox5Layout->setAlignment( Qt::AlignTop );

    swbuddy = new QLabel( GroupBox5, "swbuddy" );

    GroupBox5Layout->addWidget( swbuddy, 0, 0 );

    shbuddy = new QLabel( GroupBox5, "shbuddy" );

    GroupBox5Layout->addWidget( shbuddy, 1, 0 );

    strutwidth = new QSpinBox( GroupBox5, "strutwidth" );
    strutwidth->setMaxValue( 1000 );

    GroupBox5Layout->addWidget( strutwidth, 0, 1 );

    strutheight = new QSpinBox( GroupBox5, "strutheight" );
    strutheight->setMaxValue( 1000 );

    GroupBox5Layout->addWidget( strutheight, 1, 1 );
    tabLayout_3->addWidget( GroupBox5 );

    rtlExtensions = new QCheckBox( tab_3, "rtlExtensions" );
    tabLayout_3->addWidget( rtlExtensions );

    inputStyleLabel = new QLabel( tab_3, "inputStyleLabel" );
    tabLayout_3->addWidget( inputStyleLabel );

    inputStyle = new QComboBox( FALSE, tab_3, "inputStyle" );
    tabLayout_3->addWidget( inputStyle );
    spacer5 = new QSpacerItem( 20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding );
    tabLayout_3->addItem( spacer5 );
    TabWidget3->insertTab( tab_3, QString::fromLatin1("") );

    tab_4 = new QWidget( TabWidget3, "tab_4" );
    tabLayout_4 = new QVBoxLayout( tab_4, 4, 4, "tabLayout_4"); 

    GroupBox39 = new QGroupBox( tab_4, "GroupBox39" );
    GroupBox39->setColumnLayout(0, Qt::Vertical );
    GroupBox39->layout()->setSpacing( 4 );
    GroupBox39->layout()->setMargin( 8 );
    GroupBox39Layout = new QVBoxLayout( GroupBox39->layout() );
    GroupBox39Layout->setAlignment( Qt::AlignTop );

    Layout68 = new QGridLayout( 0, 1, 1, 0, 4, "Layout68"); 

    libpathlistbox = new QListBox( GroupBox39, "libpathlistbox" );
    libpathlistbox->setFrameShape( QListBox::StyledPanel );
    libpathlistbox->setFrameShadow( QListBox::Sunken );

    Layout68->addMultiCellWidget( libpathlistbox, 0, 0, 0, 2 );

    PushButton8 = new QPushButton( GroupBox39, "PushButton8" );

    Layout68->addWidget( PushButton8, 1, 1 );

    PushButton9 = new QPushButton( GroupBox39, "PushButton9" );

    Layout68->addWidget( PushButton9, 1, 2 );

    PushButton7 = new QPushButton( GroupBox39, "PushButton7" );

    Layout68->addWidget( PushButton7, 1, 0 );
    GroupBox39Layout->addLayout( Layout68 );

    Layout71 = new QGridLayout( 0, 1, 1, 0, 4, "Layout71"); 
    Spacer1_2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum );
    Layout71->addItem( Spacer1_2, 2, 0 );

    TextLabel15 = new QLabel( GroupBox39, "TextLabel15" );

    Layout71->addMultiCellWidget( TextLabel15, 0, 0, 0, 2 );

    libpathlineedit = new QLineEdit( GroupBox39, "libpathlineedit" );

    Layout71->addMultiCellWidget( libpathlineedit, 1, 1, 0, 2 );

    PushButton5 = new QPushButton( GroupBox39, "PushButton5" );

    Layout71->addWidget( PushButton5, 2, 1 );

    PushButton6 = new QPushButton( GroupBox39, "PushButton6" );

    Layout71->addWidget( PushButton6, 2, 2 );
    GroupBox39Layout->addLayout( Layout71 );
    tabLayout_4->addWidget( GroupBox39 );
    TabWidget3->insertTab( tab_4, QString::fromLatin1("") );

    tab_5 = new QWidget( TabWidget3, "tab_5" );
    tabLayout_5 = new QVBoxLayout( tab_5, 8, 4, "tabLayout_5"); 

    fontembeddingcheckbox = new QCheckBox( tab_5, "fontembeddingcheckbox" );
    fontembeddingcheckbox->setChecked( TRUE );
    tabLayout_5->addWidget( fontembeddingcheckbox );

    GroupBox10 = new QGroupBox( tab_5, "GroupBox10" );
    GroupBox10->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)7, 0, 0, GroupBox10->sizePolicy().hasHeightForWidth() ) );
    GroupBox10->setColumnLayout(0, Qt::Vertical );
    GroupBox10->layout()->setSpacing( 4 );
    GroupBox10->layout()->setMargin( 8 );
    GroupBox10Layout = new QVBoxLayout( GroupBox10->layout() );
    GroupBox10Layout->setAlignment( Qt::AlignTop );

    Layout9 = new QGridLayout( 0, 1, 1, 0, 4, "Layout9"); 

    PushButton11 = new QPushButton( GroupBox10, "PushButton11" );

    Layout9->addWidget( PushButton11, 1, 0 );

    PushButton13 = new QPushButton( GroupBox10, "PushButton13" );

    Layout9->addWidget( PushButton13, 1, 2 );

    fontpathlistbox = new QListBox( GroupBox10, "fontpathlistbox" );

    Layout9->addMultiCellWidget( fontpathlistbox, 0, 0, 0, 2 );

    PushButton12 = new QPushButton( GroupBox10, "PushButton12" );

    Layout9->addWidget( PushButton12, 1, 1 );
    GroupBox10Layout->addLayout( Layout9 );

    Layout10 = new QGridLayout( 0, 1, 1, 0, 4, "Layout10"); 
    Spacer4 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Minimum );
    Layout10->addItem( Spacer4, 2, 0 );

    TextLabel15_2 = new QLabel( GroupBox10, "TextLabel15_2" );

    Layout10->addMultiCellWidget( TextLabel15_2, 0, 0, 0, 2 );

    PushButton15 = new QPushButton( GroupBox10, "PushButton15" );

    Layout10->addWidget( PushButton15, 2, 2 );

    fontpathlineedit = new QLineEdit( GroupBox10, "fontpathlineedit" );

    Layout10->addMultiCellWidget( fontpathlineedit, 1, 1, 0, 2 );

    PushButton14 = new QPushButton( GroupBox10, "PushButton14" );

    Layout10->addWidget( PushButton14, 2, 1 );
    GroupBox10Layout->addLayout( Layout10 );
    tabLayout_5->addWidget( GroupBox10 );
    TabWidget3->insertTab( tab_5, QString::fromLatin1("") );
    MainWindowBaseLayout->addWidget( TabWidget3 );

    // actions
    fileSaveAction = new QAction( this, "fileSaveAction" );
    fileSaveAction->setIconSet( QIconSet( QPixmap::fromMimeSource( "" ) ) );
    fileExitAction = new QAction( this, "fileExitAction" );
    helpAboutAction = new QAction( this, "helpAboutAction" );
    helpAboutQtAction = new QAction( this, "helpAboutQtAction" );


    // toolbars


    // menubar
    menubar = new QMenuBar( this, "menubar" );


    PopupMenu = new QPopupMenu( this );
    fileSaveAction->addTo( PopupMenu );
    PopupMenu->insertSeparator();
    fileExitAction->addTo( PopupMenu );
    menubar->insertItem( QString(""), PopupMenu, 1 );

    PopupMenu_2 = new QPopupMenu( this );
    helpAboutAction->addTo( PopupMenu_2 );
    helpAboutQtAction->addTo( PopupMenu_2 );
    menubar->insertItem( QString(""), PopupMenu_2, 2 );

    languageChange();
    resize( QSize(700, 600).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( fontpathlineedit, SIGNAL( returnPressed() ), this, SLOT( addFontpath() ) );
    connect( PushButton15, SIGNAL( clicked() ), this, SLOT( addFontpath() ) );
    connect( PushButton6, SIGNAL( clicked() ), this, SLOT( addLibpath() ) );
    connect( libpathlineedit, SIGNAL( returnPressed() ), this, SLOT( addLibpath() ) );
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( addSubstitute() ) );
    connect( PushButton14, SIGNAL( clicked() ), this, SLOT( browseFontpath() ) );
    connect( PushButton5, SIGNAL( clicked() ), this, SLOT( browseLibpath() ) );
    connect( stylecombo, SIGNAL( activated(int) ), this, SLOT( buildFont() ) );
    connect( psizecombo, SIGNAL( activated(int) ), this, SLOT( buildFont() ) );
    connect( PushButton12, SIGNAL( clicked() ), this, SLOT( downFontpath() ) );
    connect( PushButton8, SIGNAL( clicked() ), this, SLOT( downLibpath() ) );
    connect( PushButton3, SIGNAL( clicked() ), this, SLOT( downSubstitute() ) );
    connect( familycombo, SIGNAL( activated(const QString&) ), this, SLOT( familySelected(const QString&) ) );
    connect( fileExitAction, SIGNAL( activated() ), this, SLOT( fileExit() ) );
    connect( fileSaveAction, SIGNAL( activated() ), this, SLOT( fileSave() ) );
    connect( helpAboutAction, SIGNAL( activated() ), this, SLOT( helpAbout() ) );
    connect( helpAboutQtAction, SIGNAL( activated() ), this, SLOT( helpAboutQt() ) );
    connect( TabWidget3, SIGNAL( currentChanged(QWidget*) ), this, SLOT( pageChanged(QWidget*) ) );
    connect( paletteCombo, SIGNAL( activated(int) ), this, SLOT( paletteSelected(int) ) );
    connect( PushButton13, SIGNAL( clicked() ), this, SLOT( removeFontpath() ) );
    connect( PushButton9, SIGNAL( clicked() ), this, SLOT( removeLibpath() ) );
    connect( PushButton4, SIGNAL( clicked() ), this, SLOT( removeSubstitute() ) );
    connect( effectcheckbox, SIGNAL( toggled(bool) ), effectbase, SLOT( setEnabled(bool) ) );
    connect( fontembeddingcheckbox, SIGNAL( toggled(bool) ), GroupBox10, SLOT( setEnabled(bool) ) );
    connect( toolboxeffect, SIGNAL( activated(int) ), this, SLOT( somethingModified() ) );
    connect( dcispin, SIGNAL( valueChanged(int) ), this, SLOT( somethingModified() ) );
    connect( cfispin, SIGNAL( valueChanged(int) ), this, SLOT( somethingModified() ) );
    connect( wslspin, SIGNAL( valueChanged(int) ), this, SLOT( somethingModified() ) );
    connect( menueffect, SIGNAL( activated(int) ), this, SLOT( somethingModified() ) );
    connect( comboeffect, SIGNAL( activated(int) ), this, SLOT( somethingModified() ) );
    connect( tooltipeffect, SIGNAL( activated(int) ), this, SLOT( somethingModified() ) );
    connect( strutwidth, SIGNAL( valueChanged(int) ), this, SLOT( somethingModified() ) );
    connect( strutheight, SIGNAL( valueChanged(int) ), this, SLOT( somethingModified() ) );
    connect( effectcheckbox, SIGNAL( toggled(bool) ), this, SLOT( somethingModified() ) );
    connect( resolvelinks, SIGNAL( toggled(bool) ), this, SLOT( somethingModified() ) );
    connect( fontembeddingcheckbox, SIGNAL( clicked() ), this, SLOT( somethingModified() ) );
    connect( rtlExtensions, SIGNAL( toggled(bool) ), this, SLOT( somethingModified() ) );
    connect( inputStyle, SIGNAL( activated(int) ), this, SLOT( somethingModified() ) );
    connect( gstylecombo, SIGNAL( activated(const QString&) ), this, SLOT( styleSelected(const QString&) ) );
    connect( familysubcombo, SIGNAL( activated(const QString&) ), this, SLOT( substituteSelected(const QString&) ) );
    connect( btnAdvanced, SIGNAL( clicked() ), this, SLOT( tunePalette() ) );
    connect( PushButton11, SIGNAL( clicked() ), this, SLOT( upFontpath() ) );
    connect( PushButton7, SIGNAL( clicked() ), this, SLOT( upLibpath() ) );
    connect( PushButton2, SIGNAL( clicked() ), this, SLOT( upSubstitute() ) );

    // tab order
    setTabOrder( helpview, TabWidget3 );
    setTabOrder( TabWidget3, familycombo );
    setTabOrder( familycombo, stylecombo );
    setTabOrder( stylecombo, psizecombo );
    setTabOrder( psizecombo, samplelineedit );
    setTabOrder( samplelineedit, familysubcombo );
    setTabOrder( familysubcombo, PushButton2 );
    setTabOrder( PushButton2, PushButton3 );
    setTabOrder( PushButton3, PushButton4 );
    setTabOrder( PushButton4, choosesubcombo );
    setTabOrder( choosesubcombo, PushButton1 );
    setTabOrder( PushButton1, dcispin );
    setTabOrder( dcispin, cfispin );
    setTabOrder( cfispin, wslspin );
    setTabOrder( wslspin, effectcheckbox );
    setTabOrder( effectcheckbox, menueffect );
    setTabOrder( menueffect, comboeffect );
    setTabOrder( comboeffect, tooltipeffect );
    setTabOrder( tooltipeffect, strutwidth );
    setTabOrder( strutwidth, strutheight );
    setTabOrder( strutheight, libpathlineedit );
    setTabOrder( libpathlineedit, PushButton5 );
    setTabOrder( PushButton5, PushButton6 );
    setTabOrder( PushButton6, PushButton7 );
    setTabOrder( PushButton7, PushButton8 );
    setTabOrder( PushButton8, PushButton9 );
    setTabOrder( PushButton9, sublistbox );
    setTabOrder( sublistbox, libpathlistbox );

    // buddies
    gstylebuddy->setBuddy( gstylecombo );
    labelMainColor->setBuddy( buttonMainColor );
    labelMainColor2->setBuddy( buttonMainColor2 );
    TextLabel1->setBuddy( paletteCombo );
    stylebuddy->setBuddy( stylecombo );
    psizebuddy->setBuddy( psizecombo );
    familybuddy->setBuddy( familycombo );
    famsubbuddy->setBuddy( familysubcombo );
    choosebuddy->setBuddy( choosesubcombo );
    dcibuddy->setBuddy( dcispin );
    cfibuddy->setBuddy( cfispin );
    wslbuddy->setBuddy( wslspin );
    meffectbuddy->setBuddy( menueffect );
    ceffectbuddy->setBuddy( comboeffect );
    teffectbuddy->setBuddy( tooltipeffect );
    beffectbuddy->setBuddy( toolboxeffect );
    swbuddy->setBuddy( strutwidth );
    shbuddy->setBuddy( strutheight );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
MainWindowBase::~MainWindowBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MainWindowBase::languageChange()
{
    setCaption( tr( "Qt Configuration" ) );
    helpview->setText( tr( "<p align=center><b>Documentation</b></p>\n"
"<p>This QTextView will display a brief explanation about the current page, so that the user isn't confused about the settings he/she is twiddling.</p>" ) );
    GroupBox40->setTitle( tr( "GUI Style" ) );
    gstylebuddy->setText( tr( "Select GUI &Style:" ) );
    groupAutoPalette->setTitle( tr( "Build Palette" ) );
    labelMainColor->setText( tr( "&3-D Effects:" ) );
    labelMainColor2->setText( tr( "Back&ground:" ) );
    btnAdvanced->setText( tr( "&Tune Palette..." ) );
    GroupBox126->setTitle( tr( "Preview" ) );
    TextLabel1->setText( tr( "Select &Palette:" ) );
    paletteCombo->clear();
    paletteCombo->insertItem( tr( "Active Palette" ) );
    paletteCombo->insertItem( tr( "Inactive Palette" ) );
    paletteCombo->insertItem( tr( "Disabled Palette" ) );
    TabWidget3->changeTab( tab, tr( "Appearance" ) );
    GroupBox1->setTitle( tr( "Default Font" ) );
    stylebuddy->setText( tr( "&Style:" ) );
    psizebuddy->setText( tr( "&Point Size:" ) );
    familybuddy->setText( tr( "F&amily:" ) );
    samplelineedit->setText( tr( "Sample Text" ) );
    GroupBox2->setTitle( tr( "Font Substitution" ) );
    famsubbuddy->setText( tr( "S&elect or Enter a Family:" ) );
    TextLabel5->setText( tr( "Current Substitutions:" ) );
    PushButton2->setText( tr( "Up" ) );
    PushButton3->setText( tr( "Down" ) );
    PushButton4->setText( tr( "Remove" ) );
    choosebuddy->setText( tr( "Select s&ubstitute Family:" ) );
    PushButton1->setText( tr( "Add" ) );
    TabWidget3->changeTab( tab_2, tr( "Fonts" ) );
    GroupBox4->setTitle( tr( "Feel Settings" ) );
    dcispin->setSuffix( tr( " ms" ) );
    dcibuddy->setText( tr( "&Double Click Interval:" ) );
    cfispin->setSuffix( tr( " ms" ) );
    cfispin->setSpecialValueText( tr( "No blinking" ) );
    cfibuddy->setText( tr( "&Cursor Flash Time:" ) );
    wslspin->setSuffix( tr( " lines" ) );
    wslbuddy->setText( tr( "Wheel &Scroll Lines:" ) );
    resolvelinks->setText( tr( "Resolve symlinks in URLs" ) );
    GroupBox3->setTitle( tr( "GUI Effects" ) );
    effectcheckbox->setText( tr( "&Enable" ) );
    effectcheckbox->setAccel( QKeySequence( tr( "Alt+E" ) ) );
    meffectbuddy->setText( tr( "&Menu Effect:" ) );
    ceffectbuddy->setText( tr( "C&omboBox Effect:" ) );
    teffectbuddy->setText( tr( "&ToolTip Effect:" ) );
    beffectbuddy->setText( tr( "Tool&Box Effect:" ) );
    menueffect->clear();
    menueffect->insertItem( tr( "Disable" ) );
    menueffect->insertItem( tr( "Animate" ) );
    menueffect->insertItem( tr( "Fade" ) );
    menueffect->setCurrentItem( 0 );
    comboeffect->clear();
    comboeffect->insertItem( tr( "Disable" ) );
    comboeffect->insertItem( tr( "Animate" ) );
    tooltipeffect->clear();
    tooltipeffect->insertItem( tr( "Disable" ) );
    tooltipeffect->insertItem( tr( "Animate" ) );
    tooltipeffect->insertItem( tr( "Fade" ) );
    toolboxeffect->clear();
    toolboxeffect->insertItem( tr( "Disable" ) );
    toolboxeffect->insertItem( tr( "Animate" ) );
    GroupBox5->setTitle( tr( "Global Strut" ) );
    swbuddy->setText( tr( "Minimum &Width:" ) );
    shbuddy->setText( tr( "Minimum Hei&ght:" ) );
    strutwidth->setSuffix( tr( " pixels" ) );
    strutheight->setSuffix( tr( " pixels" ) );
    rtlExtensions->setText( tr( "Enhanced support for languages written right-to-left" ) );
    inputStyleLabel->setText( tr( "XIM Input Style:" ) );
    inputStyle->clear();
    inputStyle->insertItem( tr( "On The Spot" ) );
    inputStyle->insertItem( tr( "Over The Spot" ) );
    inputStyle->insertItem( tr( "Off The Spot" ) );
    inputStyle->insertItem( tr( "Root" ) );
    inputStyle->setCurrentItem( 0 );
    TabWidget3->changeTab( tab_3, tr( "Interface" ) );
    GroupBox39->setTitle( tr( "Library Paths" ) );
    PushButton8->setText( tr( "Down" ) );
    PushButton9->setText( tr( "Remove" ) );
    PushButton7->setText( tr( "Up" ) );
    TextLabel15->setText( tr( "Press the <b>Browse</b> button or enter a directory and press Enter to add them to the list." ) );
    PushButton5->setText( tr( "Browse..." ) );
    PushButton6->setText( tr( "Add" ) );
    TabWidget3->changeTab( tab_4, tr( "Library Paths" ) );
    fontembeddingcheckbox->setText( tr( "Enable Font embedding" ) );
    GroupBox10->setTitle( tr( "Font Paths" ) );
    PushButton11->setText( tr( "Up" ) );
    PushButton13->setText( tr( "Remove" ) );
    PushButton12->setText( tr( "Down" ) );
    TextLabel15_2->setText( tr( "Press the <b>Browse</b> button or enter a directory and press Enter to add them to the list." ) );
    PushButton15->setText( tr( "Add" ) );
    PushButton14->setText( tr( "Browse..." ) );
    TabWidget3->changeTab( tab_5, tr( "Printer" ) );
    fileSaveAction->setText( tr( "Save" ) );
    fileSaveAction->setMenuText( tr( "&Save" ) );
    fileSaveAction->setAccel( tr( "Ctrl+S" ) );
    fileExitAction->setText( tr( "Exit" ) );
    fileExitAction->setMenuText( tr( "E&xit" ) );
    fileExitAction->setAccel( QString::null );
    helpAboutAction->setText( tr( "About" ) );
    helpAboutAction->setMenuText( tr( "&About" ) );
    helpAboutAction->setAccel( QString::null );
    helpAboutQtAction->setText( tr( "About Qt" ) );
    helpAboutQtAction->setMenuText( tr( "About &Qt" ) );
    if (menubar->findItem(1))
        menubar->findItem(1)->setText( tr( "&File" ) );
    if (menubar->findItem(2))
        menubar->findItem(2)->setText( tr( "&Help" ) );
}

void MainWindowBase::init()
{
}

void MainWindowBase::destroy()
{
}

void MainWindowBase::addFontpath()
{
    qWarning( "MainWindowBase::addFontpath(): Not implemented yet" );
}

void MainWindowBase::addLibpath()
{
    qWarning( "MainWindowBase::addLibpath(): Not implemented yet" );
}

void MainWindowBase::addSubstitute()
{
    qWarning( "MainWindowBase::addSubstitute(): Not implemented yet" );
}

void MainWindowBase::browseFontpath()
{
    qWarning( "MainWindowBase::browseFontpath(): Not implemented yet" );
}

void MainWindowBase::browseLibpath()
{
    qWarning( "MainWindowBase::browseLibpath(): Not implemented yet" );
}

void MainWindowBase::buildFont()
{
    qWarning( "MainWindowBase::buildFont(): Not implemented yet" );
}

void MainWindowBase::buildPalette()
{
    qWarning( "MainWindowBase::buildPalette(): Not implemented yet" );
}

void MainWindowBase::downFontpath()
{
    qWarning( "MainWindowBase::downFontpath(): Not implemented yet" );
}

void MainWindowBase::downLibpath()
{
    qWarning( "MainWindowBase::downLibpath(): Not implemented yet" );
}

void MainWindowBase::downSubstitute()
{
    qWarning( "MainWindowBase::downSubstitute(): Not implemented yet" );
}

void MainWindowBase::familySelected(const QString&)
{
    qWarning( "MainWindowBase::familySelected(const QString&): Not implemented yet" );
}

void MainWindowBase::fileExit()
{
    qWarning( "MainWindowBase::fileExit(): Not implemented yet" );
}

void MainWindowBase::fileSave()
{
    qWarning( "MainWindowBase::fileSave(): Not implemented yet" );
}

void MainWindowBase::helpAbout()
{
    qWarning( "MainWindowBase::helpAbout(): Not implemented yet" );
}

void MainWindowBase::helpAboutQt()
{
    qWarning( "MainWindowBase::helpAboutQt(): Not implemented yet" );
}

void MainWindowBase::new_slot()
{
    qWarning( "MainWindowBase::new_slot(): Not implemented yet" );
}

void MainWindowBase::pageChanged(QWidget*)
{
    qWarning( "MainWindowBase::pageChanged(QWidget*): Not implemented yet" );
}

void MainWindowBase::paletteSelected(int)
{
    qWarning( "MainWindowBase::paletteSelected(int): Not implemented yet" );
}

void MainWindowBase::removeFontpath()
{
    qWarning( "MainWindowBase::removeFontpath(): Not implemented yet" );
}

void MainWindowBase::removeLibpath()
{
    qWarning( "MainWindowBase::removeLibpath(): Not implemented yet" );
}

void MainWindowBase::removeSubstitute()
{
    qWarning( "MainWindowBase::removeSubstitute(): Not implemented yet" );
}

void MainWindowBase::somethingModified()
{
    qWarning( "MainWindowBase::somethingModified(): Not implemented yet" );
}

void MainWindowBase::styleSelected(const QString&)
{
    qWarning( "MainWindowBase::styleSelected(const QString&): Not implemented yet" );
}

void MainWindowBase::substituteSelected(const QString&)
{
    qWarning( "MainWindowBase::substituteSelected(const QString&): Not implemented yet" );
}

void MainWindowBase::tunePalette()
{
    qWarning( "MainWindowBase::tunePalette(): Not implemented yet" );
}

void MainWindowBase::upFontpath()
{
    qWarning( "MainWindowBase::upFontpath(): Not implemented yet" );
}

void MainWindowBase::upLibpath()
{
    qWarning( "MainWindowBase::upLibpath(): Not implemented yet" );
}

void MainWindowBase::upSubstitute()
{
    qWarning( "MainWindowBase::upSubstitute(): Not implemented yet" );
}

