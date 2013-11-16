/****************************************************************************
** Form interface generated from reading ui file 'finddialog.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QComboBox;
class QPushButton;
class QButtonGroup;
class QRadioButton;
class QCheckBox;
struct EditorInterface;

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    FindDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~FindDialog();

    QLabel* TextLabel1;
    QComboBox* comboFind;
    QPushButton* PushButton1;
    QPushButton* PushButton2;
    QButtonGroup* ButtonGroup2;
    QRadioButton* radioForward;
    QRadioButton* radioBackward;
    QButtonGroup* ButtonGroup1;
    QCheckBox* checkWords;
    QCheckBox* checkCase;
    QCheckBox* checkBegin;

public slots:
    virtual void init();
    virtual void destroy();
    virtual void doFind();
    virtual void setEditor( EditorInterface * e, QObject * fw );

protected:
    EditorInterface *editor;
    QObject *formWindow;

    QGridLayout* FindDialogLayout;
    QHBoxLayout* Layout1;
    QHBoxLayout* Layout2;
    QSpacerItem* Spacer1;
    QVBoxLayout* ButtonGroup2Layout;
    QVBoxLayout* ButtonGroup1Layout;

protected slots:
    virtual void languageChange();

};

#endif // FINDDIALOG_H
