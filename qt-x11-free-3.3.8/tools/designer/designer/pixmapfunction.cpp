/****************************************************************************
** Form implementation generated from reading ui file 'pixmapfunction.ui'
**
** Created: Tue Oct 8 10:19:41 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "pixmapfunction.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlabel.h>
#include <qframe.h>
#include <qlineedit.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a PixmapFunction as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
PixmapFunction::PixmapFunction( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "PixmapFunction" );
    setSizeGripEnabled( TRUE );
    PixmapFunctionLayout = new QVBoxLayout( this, 11, 6, "PixmapFunctionLayout"); 

    TextLabel3 = new QLabel( this, "TextLabel3" );
    PixmapFunctionLayout->addWidget( TextLabel3 );

    Frame9 = new QFrame( this, "Frame9" );
    Frame9->setFrameShadow( QFrame::Sunken );
    Frame9->setFrameShape( QFrame::StyledPanel );
    Frame9->setLineWidth( 2 );
    Frame9Layout = new QHBoxLayout( Frame9, 2, 0, "Frame9Layout"); 

    labelFunction = new QLabel( Frame9, "labelFunction" );
    QPalette pal;
    QColorGroup cg;
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 233, 233) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, white );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setActive( cg );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 242, 242, 242) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, white );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setInactive( cg );
    cg.setColor( QColorGroup::Foreground, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 242, 242, 242) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, white );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setDisabled( cg );
    labelFunction->setPalette( pal );
    Frame9Layout->addWidget( labelFunction );

    editArguments = new QLineEdit( Frame9, "editArguments" );
    editArguments->setFrame( FALSE );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 233, 233) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, QColor( 0, 170, 0) );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setActive( cg );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 242, 242, 242) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, QColor( 0, 170, 0) );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setInactive( cg );
    cg.setColor( QColorGroup::Foreground, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 242, 242, 242) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, QColor( 0, 170, 0) );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setDisabled( cg );
    editArguments->setPalette( pal );
    Frame9Layout->addWidget( editArguments );

    TextLabel5 = new QLabel( Frame9, "TextLabel5" );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 233, 233, 233) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, white );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setActive( cg );
    cg.setColor( QColorGroup::Foreground, black );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 242, 242, 242) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, black );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, white );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setInactive( cg );
    cg.setColor( QColorGroup::Foreground, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Button, QColor( 211, 211, 211) );
    cg.setColor( QColorGroup::Light, white );
    cg.setColor( QColorGroup::Midlight, QColor( 242, 242, 242) );
    cg.setColor( QColorGroup::Dark, QColor( 105, 105, 105) );
    cg.setColor( QColorGroup::Mid, QColor( 140, 140, 140) );
    cg.setColor( QColorGroup::Text, black );
    cg.setColor( QColorGroup::BrightText, white );
    cg.setColor( QColorGroup::ButtonText, QColor( 128, 128, 128) );
    cg.setColor( QColorGroup::Base, white );
    cg.setColor( QColorGroup::Background, white );
    cg.setColor( QColorGroup::Shadow, black );
    cg.setColor( QColorGroup::Highlight, QColor( 0, 0, 128) );
    cg.setColor( QColorGroup::HighlightedText, white );
    pal.setDisabled( cg );
    TextLabel5->setPalette( pal );
    Frame9Layout->addWidget( TextLabel5 );
    PixmapFunctionLayout->addWidget( Frame9 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    PixmapFunctionLayout->addItem( Spacer1 );

    Layout3 = new QHBoxLayout( 0, 0, 6, "Layout3"); 

    helpButton = new QPushButton( this, "helpButton" );
    helpButton->setAutoDefault( TRUE );
    Layout3->addWidget( helpButton );
    Horizontal_Spacing2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout3->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout3->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAutoDefault( TRUE );
    Layout3->addWidget( buttonCancel );
    PixmapFunctionLayout->addLayout( Layout3 );
    languageChange();
    resize( QSize(300, 108).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );

    // buddies
    TextLabel3->setBuddy( editArguments );
}

/*
 *  Destroys the object and frees any allocated resources
 */
PixmapFunction::~PixmapFunction()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void PixmapFunction::languageChange()
{
    setCaption( tr( "Choose Pixmap" ) );
    TextLabel3->setText( tr( "&Enter arguments for loading the pixmap" ) );
    labelFunction->setText( tr( "QPixmap(" ) );
    TextLabel5->setText( tr( ")" ) );
    helpButton->setText( tr( "&Help" ) );
    buttonOk->setText( tr( "&OK" ) );
    buttonCancel->setText( tr( "&Cancel" ) );
}

