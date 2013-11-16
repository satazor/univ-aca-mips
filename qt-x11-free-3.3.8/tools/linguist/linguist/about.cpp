/****************************************************************************
** Form implementation generated from reading ui file 'about.ui'
**
** Created: Tue Oct 8 10:22:17 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "about.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

/*
 *  Constructs a AboutDialog as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
AboutDialog::AboutDialog( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "AboutDialog" );
    AboutDialogLayout = new QVBoxLayout( this, 11, 6, "AboutDialogLayout"); 

    PixmapLabel1 = new QLabel( this, "PixmapLabel1" );
    PixmapLabel1->setFrameShape( QLabel::NoFrame );
    PixmapLabel1->setFrameShadow( QLabel::Plain );
    PixmapLabel1->setPixmap( QPixmap::fromMimeSource( "splash.png" ) );
    PixmapLabel1->setScaledContents( FALSE );
    PixmapLabel1->setAlignment( int( QLabel::AlignCenter ) );
    AboutDialogLayout->addWidget( PixmapLabel1 );

    versionLabel = new QLabel( this, "versionLabel" );
    versionLabel->setAlignment( int( QLabel::AlignCenter ) );
    AboutDialogLayout->addWidget( versionLabel );

    TextLabel1_2 = new QLabel( this, "TextLabel1_2" );
    TextLabel1_2->setAlignment( int( QLabel::AlignCenter ) );
    AboutDialogLayout->addWidget( TextLabel1_2 );

    TextLabel1_3 = new QLabel( this, "TextLabel1_3" );
    TextLabel1_3->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, TextLabel1_3->sizePolicy().hasHeightForWidth() ) );
    TextLabel1_3->setAlignment( int( QLabel::WordBreak | QLabel::AlignVCenter | QLabel::AlignLeft ) );
    AboutDialogLayout->addWidget( TextLabel1_3 );
    Spacer3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    AboutDialogLayout->addItem( Spacer3 );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Spacer2 );

    PushButton1 = new QPushButton( this, "PushButton1" );
    PushButton1->setAutoDefault( TRUE );
    PushButton1->setDefault( TRUE );
    Layout1->addWidget( PushButton1 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Spacer1 );
    AboutDialogLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(484, 640).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( accept() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
AboutDialog::~AboutDialog()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void AboutDialog::languageChange()
{
    setCaption( tr( "Qt Linguist" ) );
    TextLabel1_2->setText( tr( "Copyright (C) 2000-2007 Trolltech ASA. All Rights Reserved." ) );
    TextLabel1_3->setText( tr( "<p>Qt Commercial Edition license holders: This program is licensed to you under the terms of the Qt Commercial License Agreement. For details, see the file LICENSE that came with this software distribution.</p><p></p><p>Qt Open Source Edition users: This program is licensed to you under the terms of the GNU General Public License Version 2. For details, see the file LICENSE.GPL that came with this software distribution.</p><p>The program is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.</p>" ) );
    PushButton1->setText( tr( "OK" ) );
}

void AboutDialog::init()
{
}

void AboutDialog::destroy()
{
}

