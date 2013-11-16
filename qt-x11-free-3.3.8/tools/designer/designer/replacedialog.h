/****************************************************************************
** Form interface generated from reading ui file 'replacedialog.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef REPLACEDIALOG_H
#define REPLACEDIALOG_H

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
class QCheckBox;
class QRadioButton;
struct EditorInterface;

class ReplaceDialog : public QDialog
{
    Q_OBJECT

public:
    ReplaceDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~ReplaceDialog();

    QLabel* TextLabel2;
    QLabel* TextLabel1;
    QComboBox* comboFind;
    QComboBox* comboReplace;
    QPushButton* buttonReplace;
    QPushButton* buttonReplaceAll;
    QPushButton* PushButton2;
    QButtonGroup* ButtonGroup1;
    QCheckBox* checkWords;
    QCheckBox* checkCase;
    QCheckBox* checkBegin;
    QButtonGroup* ButtonGroup2;
    QRadioButton* radioForward;
    QRadioButton* radioBackward;

public slots:
    virtual void init();
    virtual void destroy();
    virtual void doReplace();
    virtual void doReplaceAll();
    virtual void setEditor( EditorInterface * e, QObject * fw );

protected:
    EditorInterface *editor;
    QObject *formWindow;

    QGridLayout* ReplaceDialogLayout;
    QGridLayout* Layout3;
    QHBoxLayout* Layout5;
    QSpacerItem* Spacer1;
    QVBoxLayout* ButtonGroup1Layout;
    QVBoxLayout* ButtonGroup2Layout;

protected slots:
    virtual void languageChange();

};

#endif // REPLACEDIALOG_H
