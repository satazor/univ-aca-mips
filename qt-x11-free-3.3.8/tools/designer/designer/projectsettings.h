/****************************************************************************
** Form interface generated from reading ui file 'projectsettings.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef PROJECTSETTINGSBASE_H
#define PROJECTSETTINGSBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class QWidget;
class QLabel;
class QToolButton;
class QLineEdit;
class QComboBox;
class QPushButton;

class ProjectSettingsBase : public QDialog
{
    Q_OBJECT

public:
    ProjectSettingsBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~ProjectSettingsBase();

    QTabWidget* tabWidget;
    QWidget* tabSettings;
    QLabel* TextLabel1_2;
    QLabel* TextLabel1_3;
    QToolButton* buttonDatabaseFile_2;
    QLineEdit* editDatabaseFile;
    QLabel* TextLabel1_2_2_2;
    QComboBox* comboLanguage;
    QLineEdit* editProjectFile;
    QToolButton* buttonProject;
    QPushButton* buttonHelp;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;

protected:
    QVBoxLayout* ProjectSettingsBaseLayout;
    QGridLayout* tabSettingsLayout;
    QSpacerItem* Spacer3;
    QHBoxLayout* Layout1;
    QHBoxLayout* Layout4;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

    virtual void chooseDatabaseFile();
    virtual void chooseProjectFile();
    virtual void destroy();
    virtual void helpClicked();
    virtual void init();
    virtual void languageChanged( const QString & );
    virtual void okClicked();


};

#endif // PROJECTSETTINGSBASE_H
