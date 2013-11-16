/****************************************************************************
** Form interface generated from reading ui file 'mainwindowwizard.ui'
**
** Created: Tue Oct 8 10:21:03 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MAINWINDOWWIZARDBASE_H
#define MAINWINDOWWIZARDBASE_H

#include <qvariant.h>
#include <qwizard.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QWidget;
class QLabel;
class QGroupBox;
class QCheckBox;
class QPushButton;
class QListBox;
class QListBoxItem;
class QComboBox;
struct DesignerFormWindow;
struct DesignerInterface;
struct QUnknownInterface;
class QWidget;

class MainWindowWizardBase : public QWizard
{
    Q_OBJECT

public:
    MainWindowWizardBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~MainWindowWizardBase();

    QWidget* menuToolbarPage;
    QLabel* TextLabel4_2;
    QGroupBox* GroupBox1;
    QCheckBox* checkFileMenu;
    QCheckBox* checkFileToolbar;
    QCheckBox* checkCreateConnectionsFile;
    QLabel* TextLabel2;
    QGroupBox* GroupBox2;
    QCheckBox* checkEditToolbar;
    QCheckBox* checkEditMenu;
    QCheckBox* checkCreateConnectionsEdit;
    QLabel* TextLabel2_2;
    QGroupBox* GroupBox3;
    QLabel* TextLabel2_2_2;
    QCheckBox* checkHelpMenu;
    QCheckBox* checkHelpToolbar;
    QCheckBox* checkCreateConnectionsHelp;
    QWidget* toolbarsPage;
    QPushButton* buttonToolbarActionUp;
    QLabel* TextLabel4_3_2;
    QPushButton* buttonToolbarActionDown;
    QListBox* listToolbarActions;
    QListBox* listToolbar;
    QLabel* TextLabel5_2;
    QComboBox* comboToolbar;
    QLabel* TextLabel4_4;
    QPushButton* buttonToolbarRemoveAction;
    QLabel* TextLabel4_2_2_2;
    QPushButton* buttonToolbarAddAction;
    QWidget* finishPage;
    QLabel* TextLabel4_2_2_2_2;
    QLabel* TextLabel1_5;

public slots:
    virtual void setupToolbarPage();
    virtual void accept();
    virtual void getPixmap( const QString & n, QPixmap & pix );
    virtual void setAppInterface( QUnknownInterface * iface, DesignerFormWindow * fw, QWidget * w );

protected:
    QWidget *widget;
    DesignerInterface *dIface;
    DesignerFormWindow *dfw;

    QGridLayout* menuToolbarPageLayout;
    QSpacerItem* Spacer7;
    QGridLayout* GroupBox1Layout;
    QSpacerItem* Spacer4;
    QGridLayout* GroupBox2Layout;
    QSpacerItem* Spacer5;
    QGridLayout* GroupBox3Layout;
    QSpacerItem* Spacer6;
    QGridLayout* toolbarsPageLayout;
    QSpacerItem* Spacer11;
    QSpacerItem* Spacer12;
    QSpacerItem* Spacer13;
    QHBoxLayout* Layout20_2;
    QGridLayout* finishPageLayout;
    QSpacerItem* Spacer1;
    QSpacerItem* Spacer1_2;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void currentSettingChanged();
    virtual void toolbarActionDown();
    virtual void toolbarActionUp();
    virtual void toolbarAddAction();
    virtual void toolbarRemoveAction();
    virtual void currentToolbarChanged( const QString & s );
    virtual void pageSelected( const QString & );


};

#endif // MAINWINDOWWIZARDBASE_H
