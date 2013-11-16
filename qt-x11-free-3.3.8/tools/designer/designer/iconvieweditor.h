/****************************************************************************
** Form interface generated from reading ui file 'iconvieweditor.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef ICONVIEWEDITORBASE_H
#define ICONVIEWEDITORBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QIconView;
class QIconViewItem;
class QPushButton;
class QGroupBox;
class QLabel;
class QLineEdit;

class IconViewEditorBase : public QDialog
{
    Q_OBJECT

public:
    IconViewEditorBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~IconViewEditorBase();

    QIconView* preview;
    QPushButton* itemNew;
    QPushButton* itemDelete;
    QGroupBox* GroupBox1;
    QLabel* Label1;
    QLineEdit* itemText;
    QLabel* Label2;
    QLabel* itemPixmap;
    QPushButton* itemDeletePixmap;
    QPushButton* itemChoosePixmap;
    QPushButton* buttonHelp;
    QPushButton* buttonApply;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;

protected:
    QVBoxLayout* IconViewEditorBaseLayout;
    QHBoxLayout* Layout6;
    QVBoxLayout* Layout5;
    QSpacerItem* Vertical_Spacing1;
    QGridLayout* GroupBox1Layout;
    QHBoxLayout* Layout4;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void applyClicked();
    virtual void cancelClicked();
    virtual void choosePixmap();
    virtual void currentItemChanged( QIconViewItem * );
    virtual void currentTextChanged( const QString & );
    virtual void deleteCurrentItem();
    virtual void insertNewItem();
    virtual void deletePixmap();
    virtual void okClicked();


};

#endif // ICONVIEWEDITORBASE_H
