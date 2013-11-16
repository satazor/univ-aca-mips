/****************************************************************************
** Form implementation generated from reading ui file 'about.ui'
**
** Created: Tue Oct 8 10:19:40 2013
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

    aboutPixmap = new QLabel( this, "aboutPixmap" );
    aboutPixmap->setFrameShape( QLabel::NoFrame );
    aboutPixmap->setFrameShadow( QLabel::Plain );
    aboutPixmap->setPixmap( QPixmap::fromMimeSource( "designer_splash.png" ) );
    aboutPixmap->setScaledContents( FALSE );
    aboutPixmap->setAlignment( int( QLabel::AlignCenter ) );
    AboutDialogLayout->addWidget( aboutPixmap );

    aboutVersion = new QLabel( this, "aboutVersion" );
    aboutVersion->setAlignment( int( QLabel::AlignCenter ) );
    AboutDialogLayout->addWidget( aboutVersion );

    aboutCopyright = new QLabel( this, "aboutCopyright" );
    aboutCopyright->setAlignment( int( QLabel::AlignCenter ) );
    AboutDialogLayout->addWidget( aboutCopyright );

    aboutLicense = new QLabel( this, "aboutLicense" );
    aboutLicense->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)1, (QSizePolicy::SizeType)0, 0, 0, aboutLicense->sizePolicy().hasHeightForWidth() ) );
    aboutLicense->setAlignment( int( QLabel::WordBreak | QLabel::AlignVCenter | QLabel::AlignLeft ) );
    AboutDialogLayout->addWidget( aboutLicense );
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
    resize( QSize(544, 667).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton1, SIGNAL( clicked() ), this, SLOT( accept() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
AboutDialog::~AboutDialog()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void AboutDialog::languageChange()
{
    setCaption( tr( "Qt Designer" ) );
    aboutVersion->setText( tr( "Version 3.2" ) );
    aboutCopyright->setText( tr( "Copyright (C) 2000-2007 Trolltech ASA. All Rights Reserved." ) );
    aboutLicense->setText( tr( "<p>Qt Commercial Edition license holders: This program is licensed to you under the terms of the Qt Commercial License Agreement. For details, see the file LICENSE that came with this software distribution.</p><p></p><p>Qt Open Source Edition users: This program is licensed to you under the terms of the GNU General Public License Version 2. For details, see the file LICENSE.GPL that came with this software distribution.</p><p>The program is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.</p>" ) );
    PushButton1->setText( tr( "&OK" ) );
}

