/****************************************************************************
** Form implementation generated from reading ui file 'mainform.ui'
**
** Created: Tue Oct 8 10:24:17 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "mainform.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "mainform.ui.h"
/*
 *  Constructs a MainForm as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
MainForm::MainForm( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "MainForm" );
    MainFormLayout = new QVBoxLayout( this, 11, 6, "MainFormLayout"); 

    optionsPushButton = new QPushButton( this, "optionsPushButton" );
    MainFormLayout->addWidget( optionsPushButton );

    quitPushButton = new QPushButton( this, "quitPushButton" );
    MainFormLayout->addWidget( quitPushButton );
    languageChange();
    resize( QSize(284, 120).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( optionsPushButton, SIGNAL( clicked() ), this, SLOT( optionsDlg() ) );
    connect( quitPushButton, SIGNAL( clicked() ), this, SLOT( quit() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
MainForm::~MainForm()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MainForm::languageChange()
{
    setCaption( tr( "Main Form" ) );
    optionsPushButton->setText( tr( "&Options..." ) );
    quitPushButton->setText( tr( "&Quit" ) );
}

