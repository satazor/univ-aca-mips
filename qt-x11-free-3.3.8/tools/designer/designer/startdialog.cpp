/****************************************************************************
** Form implementation generated from reading ui file 'startdialog.ui'
**
** Created: Tue Oct 8 10:19:49 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "startdialog.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qtabwidget.h>
#include <qwidget.h>
#include <qiconview.h>
#include <qlabel.h>
#include <qcheckbox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>

/*
 *  Constructs a StartDialogBase as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 *  The dialog will by default be modeless, unless you set 'modal' to
 *  TRUE to construct a modal dialog.
 */
StartDialogBase::StartDialogBase( QWidget* parent, const char* name, bool modal, WFlags fl )
    : QDialog( parent, name, modal, fl )
{
    if ( !name )
	setName( "StartDialogBase" );
    setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)5, 0, 0, sizePolicy().hasHeightForWidth() ) );
    setSizeGripEnabled( TRUE );
    StartDialogBaseLayout = new QVBoxLayout( this, 11, 6, "StartDialogBaseLayout"); 

    tabWidget = new QTabWidget( this, "tabWidget" );

    Widget8 = new QWidget( tabWidget, "Widget8" );
    Widget8Layout = new QGridLayout( Widget8, 1, 1, 11, 6, "Widget8Layout"); 

    templateView = new QIconView( Widget8, "templateView" );
    templateView->setGridX( 120 );
    templateView->setResizeMode( QIconView::Adjust );
    templateView->setItemsMovable( FALSE );

    Widget8Layout->addMultiCellWidget( templateView, 1, 1, 0, 2 );
    tabWidget->insertTab( Widget8, QString::fromLatin1("") );

    tab = new QWidget( tabWidget, "tab" );
    tabLayout = new QHBoxLayout( tab, 11, 6, "tabLayout"); 
    tabWidget->insertTab( tab, QString::fromLatin1("") );

    Widget9 = new QWidget( tabWidget, "Widget9" );
    Widget9Layout = new QGridLayout( Widget9, 1, 1, 11, 6, "Widget9Layout"); 

    recentView = new QIconView( Widget9, "recentView" );
    recentView->setFocusPolicy( QIconView::WheelFocus );
    recentView->setGridX( 120 );
    recentView->setResizeMode( QIconView::Adjust );
    recentView->setItemsMovable( FALSE );

    Widget9Layout->addWidget( recentView, 0, 0 );

    fileInfoLabel = new QLabel( Widget9, "fileInfoLabel" );
    fileInfoLabel->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)2, (QSizePolicy::SizeType)5, 0, 0, fileInfoLabel->sizePolicy().hasHeightForWidth() ) );

    Widget9Layout->addWidget( fileInfoLabel, 1, 0 );
    tabWidget->insertTab( Widget9, QString::fromLatin1("") );
    StartDialogBaseLayout->addWidget( tabWidget );

    checkShowInFuture = new QCheckBox( this, "checkShowInFuture" );
    StartDialogBaseLayout->addWidget( checkShowInFuture );

    Layout1 = new QHBoxLayout( 0, 0, 6, "Layout1"); 

    buttonHelp = new QPushButton( this, "buttonHelp" );
    buttonHelp->setAccel( QKeySequence( 4144 ) );
    buttonHelp->setAutoDefault( TRUE );
    Layout1->addWidget( buttonHelp );
    Horizontal_Spacing2 = new QSpacerItem( 0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout1->addItem( Horizontal_Spacing2 );

    buttonOk = new QPushButton( this, "buttonOk" );
    buttonOk->setAccel( QKeySequence( 0 ) );
    buttonOk->setAutoDefault( TRUE );
    buttonOk->setDefault( TRUE );
    Layout1->addWidget( buttonOk );

    buttonCancel = new QPushButton( this, "buttonCancel" );
    buttonCancel->setAccel( QKeySequence( 0 ) );
    buttonCancel->setAutoDefault( TRUE );
    Layout1->addWidget( buttonCancel );
    StartDialogBaseLayout->addLayout( Layout1 );
    languageChange();
    resize( QSize(576, 420).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( buttonOk, SIGNAL( clicked() ), this, SLOT( accept() ) );
    connect( buttonCancel, SIGNAL( clicked() ), this, SLOT( reject() ) );
    connect( templateView, SIGNAL( doubleClicked(QIconViewItem*) ), this, SLOT( accept() ) );
    connect( templateView, SIGNAL( returnPressed(QIconViewItem*) ), this, SLOT( accept() ) );
    connect( recentView, SIGNAL( doubleClicked(QIconViewItem*) ), this, SLOT( accept() ) );
    connect( recentView, SIGNAL( onItem(QIconViewItem*) ), this, SLOT( recentItemChanged(QIconViewItem*) ) );
    connect( recentView, SIGNAL( onViewport() ), this, SLOT( clearFileInfo() ) );
    connect( recentView, SIGNAL( returnPressed(QIconViewItem*) ), this, SLOT( accept() ) );
    connect( recentView, SIGNAL( selectionChanged(QIconViewItem*) ), this, SLOT( recentItemChanged(QIconViewItem*) ) );
}

/*
 *  Destroys the object and frees any allocated resources
 */
StartDialogBase::~StartDialogBase()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void StartDialogBase::languageChange()
{
    setCaption( tr( "Qt Designer - New/Open" ) );
    tabWidget->changeTab( Widget8, tr( "&New File/Project" ) );
    tabWidget->changeTab( tab, tr( "&Open File/Project" ) );
    fileInfoLabel->setText( QString::null );
    tabWidget->changeTab( Widget9, tr( "&Recently Opened" ) );
    checkShowInFuture->setText( tr( "&Don't show this dialog in the future" ) );
    buttonHelp->setText( tr( "&Help" ) );
    buttonOk->setText( tr( "OK" ) );
    buttonCancel->setText( tr( "Cancel" ) );
}

void StartDialogBase::recentItemChanged(QIconViewItem*)
{
    qWarning( "StartDialogBase::recentItemChanged(QIconViewItem*): Not implemented yet" );
}

void StartDialogBase::clearFileInfo()
{
    qWarning( "StartDialogBase::clearFileInfo(): Not implemented yet" );
}

void StartDialogBase::accept()
{
    qWarning( "StartDialogBase::accept(): Not implemented yet" );
}

void StartDialogBase::reject()
{
    qWarning( "StartDialogBase::reject(): Not implemented yet" );
}

