/****************************************************************************
** Form interface generated from reading ui file 'listvieweditor.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef LISTVIEWEDITORBASE_H
#define LISTVIEWEDITORBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class QWidget;
class QPushButton;
class QGroupBox;
class QLabel;
class QLineEdit;
class QSpinBox;
class QListView;
class QListViewItem;
class QCheckBox;
class QListBox;
class QListBoxItem;

class ListViewEditorBase : public QDialog
{
    Q_OBJECT

public:
    ListViewEditorBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~ListViewEditorBase();

    QTabWidget* tabWidget;
    QWidget* Widget10;
    QPushButton* itemDelete;
    QGroupBox* GroupBox1;
    QLabel* Label2;
    QLabel* Label1;
    QLineEdit* itemText;
    QSpinBox* itemColumn;
    QLabel* Label4;
    QLabel* itemPixmap;
    QPushButton* itemDeletePixmap;
    QPushButton* itemChoosePixmap;
    QPushButton* itemNew;
    QListView* itemsPreview;
    QPushButton* itemNewSub;
    QPushButton* itemUp;
    QPushButton* itemDown;
    QPushButton* itemLeft;
    QPushButton* itemRight;
    QWidget* Widget11;
    QGroupBox* GroupBox1_2;
    QLabel* Label2_2;
    QLabel* colPixmap;
    QPushButton* colDeletePixmap;
    QPushButton* colChoosePixmap;
    QLabel* Label1_2;
    QLineEdit* colText;
    QCheckBox* colClickable;
    QCheckBox* colResizable;
    QPushButton* colDelete;
    QPushButton* colDown;
    QPushButton* colNew;
    QPushButton* colUp;
    QListBox* colPreview;
    QPushButton* helpButton;
    QPushButton* applyButton;
    QPushButton* okButton;
    QPushButton* cancelButton;

protected:
    QVBoxLayout* ListViewEditorBaseLayout;
    QGridLayout* Widget10Layout;
    QSpacerItem* Vertical_Spacing1;
    QGridLayout* GroupBox1Layout;
    QHBoxLayout* Layout2;
    QGridLayout* Widget11Layout;
    QSpacerItem* Vertical_Spacing2;
    QGridLayout* GroupBox1Layout_2;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void applyClicked();
    virtual void columnClickable(bool);
    virtual void columnDownClicked();
    virtual void columnPixmapChosen();
    virtual void columnPixmapDeleted();
    virtual void columnResizable(bool);
    virtual void columnTextChanged(const QString &);
    virtual void columnUpClicked();
    virtual void currentColumnChanged(QListBoxItem*);
    virtual void currentItemChanged(QListViewItem*);
    virtual void deleteColumnClicked();
    virtual void initTabPage(const QString &);
    virtual void itemColChanged(int);
    virtual void itemDeleteClicked();
    virtual void itemDownClicked();
    virtual void itemLeftClicked();
    virtual void itemNewClicked();
    virtual void itemNewSubClicked();
    virtual void itemPixmapChoosen();
    virtual void itemPixmapDeleted();
    virtual void itemTextChanged(const QString &);
    virtual void itemUpClicked();
    virtual void newColumnClicked();
    virtual void itemRightClicked();
    virtual void okClicked();


};

#endif // LISTVIEWEDITORBASE_H
