/****************************************************************************
** Form interface generated from reading ui file 'variabledialog.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef VARIABLEDIALOGBASE_H
#define VARIABLEDIALOGBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QListView;
class QListViewItem;
class QPushButton;
class QGroupBox;
class QLabel;
class QLineEdit;
class QComboBox;

class VariableDialogBase : public QDialog
{
    Q_OBJECT

public:
    VariableDialogBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~VariableDialogBase();

    QListView* varView;
    QPushButton* deleteButton;
    QGroupBox* propBox;
    QLabel* TextLabel2;
    QLabel* TextLabel1;
    QLineEdit* varName;
    QComboBox* accessCombo;
    QPushButton* addButton;
    QPushButton* cancelButton;
    QPushButton* okButton;

public slots:
    virtual void addVariable();
    virtual void deleteVariable();
    virtual void accessChanged();
    virtual void nameChanged();
    virtual void okClicked();
    virtual void currentItemChanged( QListViewItem * i );

protected:
    QGridLayout* VariableDialogBaseLayout;
    QSpacerItem* Spacer2;
    QSpacerItem* Spacer3;
    QGridLayout* propBoxLayout;

protected slots:
    virtual void languageChange();

};

#endif // VARIABLEDIALOGBASE_H
