/****************************************************************************
** Form implementation generated from reading ui file 'previewwidgetbase.ui'
**
** Created: Tue Oct 8 10:22:49 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "previewwidgetbase.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qbuttongroup.h>
#include <qradiobutton.h>
#include <qcheckbox.h>
#include <qprogressbar.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qspinbox.h>
#include <qscrollbar.h>
#include <qslider.h>
#include <qtextview.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a PreviewWidgetBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
PreviewWidgetBase::PreviewWidgetBase( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "PreviewWidgetBase" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)1, 0, 0, sizePolicy().hasHeightForWidth() ) );
    PreviewWidgetBaseLayout = new QVBoxLayout( this, 11, 6, "PreviewWidgetBaseLayout"); 

    Layout6 = new QHBoxLayout( 0, 0, 6, "Layout6"); 

    Layout17 = new QVBoxLayout( 0, 0, 6, "Layout17"); 

    ButtonGroup1 = new QButtonGroup( this, "ButtonGroup1" );
    ButtonGroup1->setColumnLayout(0, Qt::Vertical );
    ButtonGroup1->layout()->setSpacing( 6 );
    ButtonGroup1->layout()->setMargin( 11 );
    ButtonGroup1Layout = new QVBoxLayout( ButtonGroup1->layout() );
    ButtonGroup1Layout->setAlignment( Qt::AlignTop );

    RadioButton1 = new QRadioButton( ButtonGroup1, "RadioButton1" );
    RadioButton1->setChecked( TRUE );
    ButtonGroup1Layout->addWidget( RadioButton1 );

    RadioButton2 = new QRadioButton( ButtonGroup1, "RadioButton2" );
    ButtonGroup1Layout->addWidget( RadioButton2 );

    RadioButton3 = new QRadioButton( ButtonGroup1, "RadioButton3" );
    ButtonGroup1Layout->addWidget( RadioButton3 );
    Layout17->addWidget( ButtonGroup1 );

    ButtonGroup2 = new QButtonGroup( this, "ButtonGroup2" );
    ButtonGroup2->setColumnLayout(0, Qt::Vertical );
    ButtonGroup2->layout()->setSpacing( 6 );
    ButtonGroup2->layout()->setMargin( 11 );
    ButtonGroup2Layout = new QVBoxLayout( ButtonGroup2->layout() );
    ButtonGroup2Layout->setAlignment( Qt::AlignTop );

    CheckBox1 = new QCheckBox( ButtonGroup2, "CheckBox1" );
    CheckBox1->setChecked( TRUE );
    ButtonGroup2Layout->addWidget( CheckBox1 );

    CheckBox2 = new QCheckBox( ButtonGroup2, "CheckBox2" );
    ButtonGroup2Layout->addWidget( CheckBox2 );
    Layout17->addWidget( ButtonGroup2 );

    ProgressBar1 = new QProgressBar( this, "ProgressBar1" );
    ProgressBar1->setProgress( 50 );
    Layout17->addWidget( ProgressBar1 );
    Layout6->addLayout( Layout17 );

    Layout5 = new QVBoxLayout( 0, 0, 6, "Layout5"); 

    LineEdit1 = new QLineEdit( this, "LineEdit1" );
    Layout5->addWidget( LineEdit1 );

    ComboBox1 = new QComboBox( FALSE, this, "ComboBox1" );
    Layout5->addWidget( ComboBox1 );

    Layout13 = new QHBoxLayout( 0, 0, 6, "Layout13"); 

    SpinBox1 = new QSpinBox( this, "SpinBox1" );
    Layout13->addWidget( SpinBox1 );

    PushButton1 = new QPushButton( this, "PushButton1" );
    Layout13->addWidget( PushButton1 );
    Layout5->addLayout( Layout13 );

    ScrollBar1 = new QScrollBar( this, "ScrollBar1" );
    ScrollBar1->setOrientation( QScrollBar::Horizontal );
    Layout5->addWidget( ScrollBar1 );

    Slider1 = new QSlider( this, "Slider1" );
    Slider1->setOrientation( QSlider::Horizontal );
    Layout5->addWidget( Slider1 );

    textView = new QTextView( this, "textView" );
    textView->setMaximumSize( QSize( 32767, 50 ) );
    Layout5->addWidget( textView );
    Layout6->addLayout( Layout5 );
    PreviewWidgetBaseLayout->addLayout( Layout6 );
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    PreviewWidgetBaseLayout->addItem( Spacer2 );
    languageChange();
    resize( QSize(378, 236).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
PreviewWidgetBase::~PreviewWidgetBase()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void PreviewWidgetBase::languageChange()
{
    setCaption( tr( "Preview Window" ) );
    ButtonGroup1->setTitle( tr( "ButtonGroup" ) );
    RadioButton1->setText( tr( "RadioButton1" ) );
    RadioButton2->setText( tr( "RadioButton2" ) );
    RadioButton3->setText( tr( "RadioButton3" ) );
    ButtonGroup2->setTitle( tr( "ButtonGroup2" ) );
    CheckBox1->setText( tr( "CheckBox1" ) );
    CheckBox2->setText( tr( "CheckBox2" ) );
    LineEdit1->setText( tr( "LineEdit" ) );
    ComboBox1->clear();
    ComboBox1->insertItem( tr( "ComboBox" ) );
    PushButton1->setText( tr( "PushButton" ) );
    textView->setText( tr( "<p>\n"
"<a href=\"http://www.trolltech.com\">http://www.trolltech.com</a>\n"
"</p>\n"
"<p>\n"
"<a href=\"http://www.kde.org\">http://www.kde.org</a>\n"
"</p>" ) );
}

void PreviewWidgetBase::init()
{
}

void PreviewWidgetBase::destroy()
{
}

