/****************************************************************************
** Form implementation generated from reading ui file 'pixmapcollectioneditor.ui'
**
** Created: Qua Out 9 11:04:34 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "pixmapcollectioneditor.h"

#include <qvariant.h>
#include <qfileinfo.h>
#include <qimage.h>
#include <qiconview.h>
#include <qpushbutton.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "pixmapcollection.h"
#include "pixmapchooser.h"
#include "project.h"
#include "pixmapcollectioneditor.ui.h"

/*
 *  Constructs a PixmapCollectionEditor as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
PixmapCollectionEditor::PixmapCollectionEditor( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "PixmapCollectionEditor" );
    PixmapCollectionEditorLayout = new QVBoxLayout( this, 11, 6, "PixmapCollectionEditorLayout"); 

    viewPixmaps = new QIconView( this, "viewPixmaps" );
    viewPixmaps->setResizeMode( QIconView::Adjust );
    viewPixmaps->setItemsMovable( FALSE );
    PixmapCollectionEditorLayout->addWidget( viewPixmaps );

    Layout2 = new QHBoxLayout( 0, 0, 6, "Layout2"); 

    PushButton2 = new QPushButton( this, "PushButton2" );
    Layout2->addWidget( PushButton2 );

    PushButton3 = new QPushButton( this, "PushButton3" );
    Layout2->addWidget( PushButton3 );
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout2->addItem( Spacer2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setDefault( TRUE );
    Layout2->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    Layout2->addWidget( buttonCancel );

    buttonClose = new QPushButton( this, "buttonClose" );
    buttonClose->setDefault( TRUE );
    Layout2->addWidget( buttonClose );
    PixmapCollectionEditorLayout->addLayout( Layout2 );
    languageChange();
    resize( QSize(455, 260).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( PushButton2, SIGNAL( clicked() ), this, SLOT( addPixmap() ) );
    connect( PushButton3, SIGNAL( clicked() ), this, SLOT( removePixmap() ) );
    connect( viewPixmaps, SIGNAL( currentChanged(QIconViewItem*) ), this, SLOT( currentChanged(QIconViewItem*) ) );
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( buttonClose, SIGNAL( clicked() ), this, SLOT( accept() ) );

    // tab order
    setTabOrder( PushButton2, PushButton3 );
    setTabOrder( PushButton3, viewPixmaps );
    setTabOrder( viewPixmaps, buttonClose );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
PixmapCollectionEditor::~PixmapCollectionEditor()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void PixmapCollectionEditor::languageChange()
{
    setCaption( tr( "Manage Image Collection" ) );
    PushButton2->setText( tr( "&Add..." ) );
    PushButton3->setText( tr( "&Delete" ) );
    buttonOk->setText( tr( "&OK" ) );
    buttonCancel->setText( tr( "&Cancel" ) );
    buttonClose->setText( tr( "C&lose" ) );
}

