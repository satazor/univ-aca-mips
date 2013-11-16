/****************************************************************************
** Form interface generated from reading ui file 'listboxeditor.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef LISTBOXEDITORBASE_H
#define LISTBOXEDITORBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QListBox;
class QListBoxItem;
class QGroupBox;
class QLabel;
class QLineEdit;

class ListBoxEditorBase : public QDialog
{
    Q_OBJECT

public:
    ListBoxEditorBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~ListBoxEditorBase();

    QPushButton* helpButton;
    QPushButton* buttonApply;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;
    QListBox* preview;
    QGroupBox* GroupBox1;
    QLabel* Label2;
    QLabel* itemPixmap;
    QPushButton* itemDeletePixmap;
    QPushButton* itemChoosePixmap;
    QLabel* Label1;
    QLineEdit* itemText;
    QPushButton* itemNew;
    QPushButton* itemDelete;
    QPushButton* itemUp;
    QPushButton* itemDown;

protected:
    QGridLayout* ListBoxEditorBaseLayout;
    QSpacerItem* Vertical_Spacing1;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;
    QGridLayout* GroupBox1Layout;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void insertNewItem();
    virtual void deleteCurrentItem();
    virtual void currentItemChanged( QListBoxItem * );
    virtual void currentTextChanged( const QString & );
    virtual void okClicked();
    virtual void cancelClicked();
    virtual void applyClicked();
    virtual void choosePixmap();
    virtual void deletePixmap();
    virtual void moveItemUp();
    virtual void moveItemDown();


};

#endif // LISTBOXEDITORBASE_H
