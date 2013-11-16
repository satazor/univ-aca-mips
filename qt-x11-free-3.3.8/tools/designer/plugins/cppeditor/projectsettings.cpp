/****************************************************************************
** Form implementation generated from reading ui file 'projectsettings.ui'
**
** Created: Tue Oct 8 10:21:20 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "projectsettings.h"

#include <qvariant.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcombobox.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qimage.h>
#include <qpixmap.h>

#include "projectsettings.ui.h"
/*
 *  Constructs a CppProjectSettings as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 */
CppProjectSettings::CppProjectSettings( QWidget* parent, const char* name, WFlags fl )
    : QWidget( parent, name, fl )
{
    if ( !name )
	setName( "CppProjectSettings" );
    CppProjectSettingsLayout = new QGridLayout( this, 1, 1, 11, 6, "CppProjectSettingsLayout"); 

    TextLabel1 = new QLabel( this, "TextLabel1" );

    CppProjectSettingsLayout->addWidget( TextLabel1, 1, 0 );
    Spacer1 = new QSpacerItem( 20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding );
    CppProjectSettingsLayout->addItem( Spacer1, 5, 2 );

    TextLabel2_2 = new QLabel( this, "TextLabel2_2" );

    CppProjectSettingsLayout->addWidget( TextLabel2_2, 3, 0 );

    editDefines = new QLineEdit( this, "editDefines" );

    CppProjectSettingsLayout->addWidget( editDefines, 3, 2 );

    TextLabel2 = new QLabel( this, "TextLabel2" );

    CppProjectSettingsLayout->addWidget( TextLabel2, 2, 0 );

    TextLabel2_3 = new QLabel( this, "TextLabel2_3" );

    CppProjectSettingsLayout->addWidget( TextLabel2_3, 4, 0 );

    comboDefines = new QComboBox( FALSE, this, "comboDefines" );

    CppProjectSettingsLayout->addWidget( comboDefines, 3, 1 );

    comboInclude = new QComboBox( FALSE, this, "comboInclude" );

    CppProjectSettingsLayout->addWidget( comboInclude, 4, 1 );

    editInclude = new QLineEdit( this, "editInclude" );

    CppProjectSettingsLayout->addWidget( editInclude, 4, 2 );

    editLibs = new QLineEdit( this, "editLibs" );

    CppProjectSettingsLayout->addWidget( editLibs, 2, 2 );

    editConfig = new QLineEdit( this, "editConfig" );

    CppProjectSettingsLayout->addWidget( editConfig, 1, 2 );

    comboLibs = new QComboBox( FALSE, this, "comboLibs" );

    CppProjectSettingsLayout->addWidget( comboLibs, 2, 1 );

    comboConfig = new QComboBox( FALSE, this, "comboConfig" );

    CppProjectSettingsLayout->addWidget( comboConfig, 1, 1 );

    TextLabel3 = new QLabel( this, "TextLabel3" );

    CppProjectSettingsLayout->addWidget( TextLabel3, 0, 0 );
    Spacer2 = new QSpacerItem( 20, 20, QSizePolicy::Expanding, QSizePolicy::Minimum );
    CppProjectSettingsLayout->addItem( Spacer2, 0, 2 );

    comboTemplate = new QComboBox( FALSE, this, "comboTemplate" );

    CppProjectSettingsLayout->addWidget( comboTemplate, 0, 1 );
    languageChange();
    resize( QSize(373, 191).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( comboConfig, SIGNAL( activated(const QString&) ), this, SLOT( configPlatformChanged(const QString&) ) );
    connect( comboLibs, SIGNAL( activated(const QString&) ), this, SLOT( libsPlatformChanged(const QString&) ) );
    connect( comboDefines, SIGNAL( activated(const QString&) ), this, SLOT( definesPlatformChanged(const QString&) ) );
    connect( editConfig, SIGNAL( textChanged(const QString&) ), this, SLOT( configChanged(const QString&) ) );
    connect( editLibs, SIGNAL( textChanged(const QString&) ), this, SLOT( libsChanged(const QString&) ) );
    connect( editDefines, SIGNAL( textChanged(const QString&) ), this, SLOT( definesChanged(const QString&) ) );
    connect( editInclude, SIGNAL( textChanged(const QString&) ), this, SLOT( includesChanged(const QString&) ) );
    connect( comboInclude, SIGNAL( activated(const QString&) ), this, SLOT( includesPlatformChanged(const QString&) ) );

    // tab order
    setTabOrder( comboTemplate, comboConfig );
    setTabOrder( comboConfig, editConfig );
    setTabOrder( editConfig, comboLibs );
    setTabOrder( comboLibs, editLibs );
    setTabOrder( editLibs, comboDefines );
    setTabOrder( comboDefines, editDefines );
    setTabOrder( editDefines, comboInclude );
    setTabOrder( comboInclude, editInclude );
}

/*
 *  Destroys the object and frees any allocated resources
 */
CppProjectSettings::~CppProjectSettings()
{
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void CppProjectSettings::languageChange()
{
    setCaption( tr( "Project Settings" ) );
    TextLabel1->setText( tr( "Config:" ) );
    TextLabel2_2->setText( tr( "Defines:" ) );
    TextLabel2->setText( tr( "Libs:" ) );
    TextLabel2_3->setText( tr( "Includepath:" ) );
    comboDefines->clear();
    comboDefines->insertItem( tr( "(all)" ) );
    comboDefines->insertItem( tr( "unix" ) );
    comboDefines->insertItem( tr( "win32" ) );
    comboDefines->insertItem( tr( "mac" ) );
    comboInclude->clear();
    comboInclude->insertItem( tr( "(all)" ) );
    comboInclude->insertItem( tr( "unix" ) );
    comboInclude->insertItem( tr( "win32" ) );
    comboInclude->insertItem( tr( "mac" ) );
    comboLibs->clear();
    comboLibs->insertItem( tr( "(all)" ) );
    comboLibs->insertItem( tr( "unix" ) );
    comboLibs->insertItem( tr( "win32" ) );
    comboLibs->insertItem( tr( "mac" ) );
    comboConfig->clear();
    comboConfig->insertItem( tr( "(all)" ) );
    comboConfig->insertItem( tr( "unix" ) );
    comboConfig->insertItem( tr( "win32" ) );
    comboConfig->insertItem( tr( "mac" ) );
    TextLabel3->setText( tr( "Template:" ) );
    comboTemplate->clear();
    comboTemplate->insertItem( tr( "app" ) );
    comboTemplate->insertItem( tr( "lib" ) );
}

