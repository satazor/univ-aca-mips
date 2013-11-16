/****************************************************************************
** Form interface generated from reading ui file 'options.ui'
**
** Created: Tue Oct 8 10:26:42 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef OPTIONSDIALOG_H
#define OPTIONSDIALOG_H

#include <qvariant.h>
#include <qdialog.h>
#include <qguardedptr.h>
#include <qvbox.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QButtonGroup;
class QRadioButton;
class QCheckBox;
class QGroupBox;
class QLineEdit;
class QToolButton;
class QSlider;
class QLabel;
class QPushButton;

class OptionsDialog : public QDialog
{
    Q_OBJECT

public:
    OptionsDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~OptionsDialog();

    QButtonGroup* bgBorder;
    QRadioButton* rbBorderNormal;
    QRadioButton* rbBorderDialog;
    QButtonGroup* bgTitle;
    QCheckBox* cbTitleSystem;
    QCheckBox* cbTitleMinimize;
    QCheckBox* cbTitleMaximize;
    QCheckBox* cbTitleContext;
    QButtonGroup* bgBehavior;
    QCheckBox* cbBehaviorTaskbar;
    QCheckBox* cbBehaviorStays;
    QCheckBox* cbBehaviorPopup;
    QCheckBox* cbBehaviorTool;
    QCheckBox* cbBehaviorModal;
    QGroupBox* gbProperties;
    QLineEdit* leCaption;
    QLineEdit* leIcon;
    QToolButton* tbPick;
    QSlider* slTransparency;
    QLabel* textLabel3;
    QLabel* textLabel2;
    QLabel* textLabel1;
    QPushButton* pbApply;
    QPushButton* pbClose;

public slots:
    virtual void apply();

protected:
    QVBoxLayout* OptionsDialogLayout;
    QHBoxLayout* layout5;
    QVBoxLayout* layout4;
    QVBoxLayout* bgBorderLayout;
    QVBoxLayout* bgTitleLayout;
    QVBoxLayout* layout3;
    QSpacerItem* spacer2;
    QVBoxLayout* bgBehaviorLayout;
    QGridLayout* gbPropertiesLayout;
    QHBoxLayout* layout2;
    QHBoxLayout* layout1;
    QSpacerItem* spacer1;

protected slots:
    virtual void languageChange();

    virtual void pickIcon();


private:
    QGuardedPtr<QVBox> widget;

};

#endif // OPTIONSDIALOG_H
