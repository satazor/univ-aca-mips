/****************************************************************************
** Form interface generated from reading ui file 'settingsdialog.ui'
**
** Created: Tue Oct 8 10:21:41 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SETTINGSDIALOGBASE_H
#define SETTINGSDIALOGBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class QWidget;
class QComboBox;
class QLabel;
class QCheckBox;
class QToolButton;
class QLineEdit;
class QPushButton;

class SettingsDialogBase : public QDialog
{
    Q_OBJECT

public:
    SettingsDialogBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SettingsDialogBase();

    QTabWidget* settingsTab;
    QWidget* tab;
    QComboBox* fixedfontCombo;
    QLabel* TextLabel1;
    QLabel* TextLabel2;
    QComboBox* fontCombo;
    QLabel* fontLabel;
    QCheckBox* linkUnderlineCB;
    QToolButton* colorButton;
    QWidget* tab_2;
    QLabel* TextLabel1_3;
    QLineEdit* browserApp;
    QPushButton* buttonBrowse;
    QLabel* TextLabel1_3_3;
    QLineEdit* homePage;
    QPushButton* buttonHome;
    QWidget* pdfTab;
    QLabel* TextLabel1_3_2;
    QLineEdit* pdfApp;
    QPushButton* buttonPDF;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;

public slots:
    virtual void selectColor();
    virtual void browseWebApp();
    virtual void browsePDFApplication();
    virtual void browseHomepage();

protected:
    QVBoxLayout* SettingsDialogBaseLayout;
    QVBoxLayout* tabLayout;
    QGridLayout* Layout2;
    QGridLayout* tabLayout_2;
    QSpacerItem* Spacer11;
    QHBoxLayout* Layout9;
    QHBoxLayout* layout8;
    QGridLayout* pdfTabLayout;
    QSpacerItem* spacer10;
    QHBoxLayout* layout9;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

};

#endif // SETTINGSDIALOGBASE_H
