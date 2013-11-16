/****************************************************************************
** Form interface generated from reading ui file 'extension.ui'
**
** Created: Tue Oct 8 10:24:17 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef EXTENSION_H
#define EXTENSION_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QPushButton;
class QButtonGroup;
class QCheckBox;

class Extension : public QWidget
{
    Q_OBJECT

public:
    Extension( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~Extension();

    QLabel* TextLabel1;
    QLineEdit* logfileLineEdit;
    QPushButton* browsePushButton;
    QButtonGroup* ButtonGroup1;
    QCheckBox* logActionsCheckBox;
    QCheckBox* logErrorsCheckBox;

protected:
    QVBoxLayout* ExtensionLayout;
    QHBoxLayout* Layout6;
    QHBoxLayout* ButtonGroup1Layout;
    QHBoxLayout* Layout7;

protected slots:
    virtual void languageChange();

};

#endif // EXTENSION_H
