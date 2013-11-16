/****************************************************************************
** Form implementation generated from reading ui file 'multilineeditor.ui'
**
** Created: Tue Oct 8 10:19:38 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "multilineeditor.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>

/*
 *  Constructs a MultiLineEditorBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
MultiLineEditorBase::MultiLineEditorBase( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl )
{
    (void)statusBar();
    if ( !name )
	setName( "MultiLineEditorBase" );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );
    MultiLineEditorBaseLayout = new QHBoxLayout( centralWidget(), 11, 6, "MultiLineEditorBaseLayout"); 

    Layout4 = new QHBoxLayout( 0, 0, 6, "Layout4"); 

    Layout3 = new QVBoxLayout( 0, 0, 6, "Layout3"); 

    OkButton = new QPushButton( centralWidget(), "OkButton" );
    OkButton->setOn( FALSE );
    OkButton->setAutoDefault( TRUE );
    OkButton->setDefault( TRUE );
    Layout3->addWidget( OkButton );

    applyButton = new QPushButton( centralWidget(), "applyButton" );
    Layout3->addWidget( applyButton );

    cancelButton = new QPushButton( centralWidget(), "cancelButton" );
    Layout3->addWidget( cancelButton );
    Spacer3 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    Layout3->addItem( Spacer3 );

    helpButton = new QPushButton( centralWidget(), "helpButton" );
    Layout3->addWidget( helpButton );
    Layout4->addLayout( Layout3 );
    MultiLineEditorBaseLayout->addLayout( Layout4 );

    // toolbars


    // menubar
    menuBar = new QMenuBar( this, "menuBar" );


    languageChange();
    resize( QSize(598, 307).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( OkButton, SIGNAL( clicked() ), this, SLOT( okClicked() ) );
    connect( applyButton, SIGNAL( clicked() ), this, SLOT( applyClicked() ) );
    connect( cancelButton, SIGNAL( clicked() ), this, SLOT( cancelClicked() ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
MultiLineEditorBase::~MultiLineEditorBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void MultiLineEditorBase::languageChange()
{
    setCaption( tr( "Edit Text" ) );
    QWhatsThis::add( this, tr( "<b>Multiline Edit</b><p>This is a simple richtext editor. For an easier working, it provides the most common html tags in form of toolbar items respectively shortcuts. By clicking on such an icon, the regarding tag will be written to the editor and you can insert your text. If you have already written a text and want to format it, just mark it and click on the wished tag button. For a better visualization this editor supports also a simple html syntax highlighting." ) );
    OkButton->setText( tr( "&OK" ) );
    applyButton->setText( tr( "&Apply" ) );
    cancelButton->setText( tr( "&Cancel" ) );
    helpButton->setText( tr( "&Help" ) );
}

void MultiLineEditorBase::applyClicked()
{
    qWarning( "MultiLineEditorBase::applyClicked(): Not implemented yet" );
}

void MultiLineEditorBase::okClicked()
{
    qWarning( "MultiLineEditorBase::okClicked(): Not implemented yet" );
}

void MultiLineEditorBase::cancelClicked()
{
    qWarning( "MultiLineEditorBase::cancelClicked(): Not implemented yet" );
}

