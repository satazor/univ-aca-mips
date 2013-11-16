/****************************************************************************
** Form implementation generated from reading ui file 'sql/sqlex.ui'
**
** Created: Tue Oct 8 10:23:55 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "sqlex.h"

#include <qvariant.h>
#include <qpushbutton.h>
#include <qsplitter.h>
#include <qheader.h>
#include <qlistview.h>
#include <qdatatable.h>
#include <qgroupbox.h>
#include <qtextedit.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include "sqlex.ui.h"

/*
 *  Constructs a SqlEx as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
SqlEx::SqlEx( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "SqlEx" );
    SqlExLayout = new QVBoxLayout( this, 11, 6, "SqlExLayout"); 

    vsplit = new QSplitter( this, "vsplit" );
    vsplit->setOrientation( QSplitter::Vertical );

    hsplit = new QSplitter( vsplit, "hsplit" );
    hsplit->setOrientation( QSplitter::Horizontal );

    lv = new QListView( hsplit, "lv" );
    lv->addColumn( tr( "Tables" ) );
    lv->addColumn( tr( "Type" ) );
    lv->addColumn( tr( "Required" ) );
    lv->setMargin( 0 );
    lv->setAllColumnsShowFocus( TRUE );
    lv->setRootIsDecorated( TRUE );
    lv->setResizeMode( QListView::LastColumn );

    dt = new QDataTable( hsplit, "dt" );

    gb = new QGroupBox( vsplit, "gb" );
    gb->setColumnLayout(0, Qt::Vertical );
    gb->layout()->setSpacing( 6 );
    gb->layout()->setMargin( 11 );
    gbLayout = new QGridLayout( gb->layout() );
    gbLayout->setAlignment( Qt::AlignTop );

    Layout22 = new QVBoxLayout( 0, 0, 6, "Layout22"); 

    te = new QTextEdit( gb, "te" );
    Layout22->addWidget( te );

    Layout21 = new QHBoxLayout( 0, 0, 6, "Layout21"); 
    Spacer3 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    Layout21->addItem( Spacer3 );

    submitBtn = new QPushButton( gb, "submitBtn" );
    submitBtn->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, submitBtn->sizePolicy().hasHeightForWidth() ) );
    submitBtn->setMinimumSize( QSize( 80, 0 ) );
    Layout21->addWidget( submitBtn );

    clearBtn = new QPushButton( gb, "clearBtn" );
    clearBtn->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)5, (QSizePolicy::SizeType)0, 0, 0, clearBtn->sizePolicy().hasHeightForWidth() ) );
    clearBtn->setMinimumSize( QSize( 80, 0 ) );
    Layout21->addWidget( clearBtn );
    Layout22->addLayout( Layout21 );

    gbLayout->addLayout( Layout22, 0, 0 );
    SqlExLayout->addWidget( vsplit );

    Layout23 = new QHBoxLayout( 0, 0, 6, "Layout23"); 

    lbl = new QLabel( this, "lbl" );
    Layout23->addWidget( lbl );

    conBtn = new QPushButton( this, "conBtn" );
    conBtn->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)0, (QSizePolicy::SizeType)0, 0, 0, conBtn->sizePolicy().hasHeightForWidth() ) );
    conBtn->setMinimumSize( QSize( 80, 0 ) );
    Layout23->addWidget( conBtn );
    SqlExLayout->addLayout( Layout23 );
    languageChange();
    resize( QSize(654, 438).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( clearBtn, SIGNAL( clicked() ), te, SLOT( clear() ) );
    connect( conBtn, SIGNAL( clicked() ), this, SLOT( dbConnect() ) );
    connect( lv, SIGNAL( returnPressed(QListViewItem*) ), this, SLOT( showTable(QListViewItem*) ) );
    connect( lv, SIGNAL( doubleClicked(QListViewItem*) ), this, SLOT( showTable(QListViewItem*) ) );
    connect( submitBtn, SIGNAL( clicked() ), this, SLOT( execQuery() ) );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
SqlEx::~SqlEx()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void SqlEx::languageChange()
{
    setCaption( tr( "Form1" ) );
    lv->header()->setLabel( 0, tr( "Tables" ) );
    lv->header()->setLabel( 1, tr( "Type" ) );
    lv->header()->setLabel( 2, tr( "Required" ) );
    gb->setTitle( tr( "SQL Query" ) );
    submitBtn->setText( tr( "&Submit" ) );
    clearBtn->setText( tr( "C&lear" ) );
    lbl->setText( tr( "Press \"Connect\" to open a database" ) );
    conBtn->setText( tr( "&Connect..." ) );
}

