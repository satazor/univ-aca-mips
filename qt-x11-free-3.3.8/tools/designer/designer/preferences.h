/****************************************************************************
** Form interface generated from reading ui file 'preferences.ui'
**
** Created: Qua Out 9 11:03:16 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef PREFERENCES_H
#define PREFERENCES_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class StyledButton;
class QTabWidget;
class QWidget;
class QGroupBox;
class QCheckBox;
class QLabel;
class QTimeEdit;
class QButtonGroup;
class QTextEdit;
class QSpinBox;
class QRadioButton;
class QPushButton;

class Preferences : public QDialog
{
    Q_OBJECT

public:
    Preferences( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~Preferences();

    QTabWidget* tabWidget;
    QWidget* pageGeneral;
    QGroupBox* groupBox4;
    QCheckBox* checkBoxAutoSave;
    QLabel* textLabelAutoSave;
    QTimeEdit* timeEditAutoSave;
    QButtonGroup* buttonGroup2;
    QTextEdit* textEditPluginPaths;
    QGroupBox* GroupBox5;
    QCheckBox* checkBoxWorkspace;
    QCheckBox* checkBoxSplash;
    QCheckBox* checkBoxStartDialog;
    QCheckBox* checkAutoEdit;
    QCheckBox* checkBoxTextLabels;
    QGroupBox* groupBoxGrid;
    QCheckBox* checkBoxSnapGrid;
    QSpinBox* spinGridX;
    QSpinBox* spinGridY;
    QLabel* Label1;
    QLabel* Label1_2;
    QButtonGroup* ButtonGroup1;
    StyledButton* buttonColor;
    QRadioButton* radioColor;
    QRadioButton* radioPixmap;
    StyledButton* buttonPixmap;
    QPushButton* helpButton;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;

protected:
    QVBoxLayout* PreferencesLayout;
    QGridLayout* pageGeneralLayout;
    QSpacerItem* Spacer3;
    QVBoxLayout* groupBox4Layout;
    QHBoxLayout* layout3;
    QHBoxLayout* buttonGroup2Layout;
    QVBoxLayout* GroupBox5Layout;
    QVBoxLayout* groupBoxGridLayout;
    QGridLayout* Layout4;
    QGridLayout* ButtonGroup1Layout;
    QHBoxLayout* Layout6;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();


private:
    QPixmap image0;

};

#endif // PREFERENCES_H
