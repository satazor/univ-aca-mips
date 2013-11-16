/****************************************************************************
** Form interface generated from reading ui file 'editfunctions.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef EDITFUNCTIONSBASE_H
#define EDITFUNCTIONSBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QListView;
class QListViewItem;
class QCheckBox;
class QPushButton;
class QGroupBox;
class QLabel;
class QLineEdit;
class QComboBox;

class EditFunctionsBase : public QDialog
{
    Q_OBJECT

public:
    EditFunctionsBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~EditFunctionsBase();

    QListView* functionListView;
    QCheckBox* showOnlySlots;
    QPushButton* addFunction;
    QPushButton* deleteFunction;
    QGroupBox* boxProperties;
    QLabel* Label8;
    QLineEdit* functionName;
    QLabel* labelType;
    QLineEdit* editType;
    QLabel* Label9_2;
    QComboBox* functionSpecifier;
    QLabel* TextLabel1;
    QComboBox* functionAccess;
    QLabel* TextLabel1_2;
    QComboBox* functionType;
    QPushButton* helpButton;
    QPushButton* okButton;
    QPushButton* cancelButton;

protected:
    QVBoxLayout* EditFunctionsBaseLayout;
    QHBoxLayout* Layout11;
    QSpacerItem* Vertical_Spacing1;
    QVBoxLayout* boxPropertiesLayout;
    QVBoxLayout* Layout14;
    QSpacerItem* Spacer6_2;
    QHBoxLayout* Layout5;
    QHBoxLayout* Layout13;
    QSpacerItem* Spacer5;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

    virtual void currentItemChanged( QListViewItem * );
    virtual void currentSpecifierChanged( const QString & );
    virtual void currentTextChanged( const QString & );
    virtual void currentReturnTypeChanged( const QString & );
    virtual void destroy();
    virtual void init();
    virtual void currentAccessChanged( const QString & );
    virtual void currentTypeChanged( const QString & );
    virtual void okClicked();
    virtual void functionAdd();
    virtual void functionRemove();
    virtual void displaySlots( bool );


};

#endif // EDITFUNCTIONSBASE_H
