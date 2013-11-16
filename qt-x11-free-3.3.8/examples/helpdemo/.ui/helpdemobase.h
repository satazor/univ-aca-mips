/****************************************************************************
** Form interface generated from reading ui file 'helpdemobase.ui'
**
** Created: Tue Oct 8 10:24:26 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef HELPDEMOBASE_H
#define HELPDEMOBASE_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QFrame;
class QCheckBox;
class QLabel;
class QLineEdit;
class QTextEdit;

class HelpDemoBase : public QWidget
{
    Q_OBJECT

public:
    HelpDemoBase( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~HelpDemoBase();

    QPushButton* closeButton;
    QFrame* frame5;
    QPushButton* openQAButton;
    QPushButton* displayButton;
    QCheckBox* checkHide;
    QPushButton* closeQAButton;
    QLabel* textLabel3;
    QLineEdit* leFileName;
    QCheckBox* checkOnlyExampleDoc;
    QTextEdit* textEdit1;

public slots:
    virtual void displayPage();
    virtual void openAssistant();
    virtual void closeAssistant();
    virtual void setAssistantArguments();

protected:
    QGridLayout* HelpDemoBaseLayout;
    QSpacerItem* spacer2;
    QHBoxLayout* layout2;
    QSpacerItem* spacer1;
    QGridLayout* frame5Layout;

protected slots:
    virtual void languageChange();

};

#endif // HELPDEMOBASE_H
