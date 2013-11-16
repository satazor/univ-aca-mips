/****************************************************************************
** Form interface generated from reading ui file 'sqlformwizard.ui'
**
** Created: Tue Oct 8 10:21:03 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SQLFORMWIZARDBASE_H
#define SQLFORMWIZARDBASE_H

#include <qvariant.h>
#include <qwizard.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QWidget;
class QLabel;
class QPushButton;
class QListBox;
class QListBoxItem;
class QCheckBox;
class QGroupBox;
class QMultiLineEdit;
class QButtonGroup;
class QRadioButton;
class QSpinBox;

class SqlFormWizardBase : public QWizard
{
    Q_OBJECT

public:
    SqlFormWizardBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~SqlFormWizardBase();

    QWidget* databasePage;
    QLabel* TextLabel4;
    QLabel* TextLabel3_2;
    QPushButton* PushButton5;
    QLabel* TextLabel3_3;
    QListBox* listBoxTable;
    QListBox* listBoxConnection;
    QWidget* populatePage;
    QLabel* TextLabel4_2;
    QPushButton* buttonAddField_2;
    QPushButton* buttonRemoveField_2;
    QPushButton* buttonFieldUp_2;
    QListBox* listBoxField;
    QPushButton* buttonFieldDown_2;
    QListBox* listBoxSelectedField;
    QLabel* TextLabel2_3;
    QLabel* TextLabel1_7;
    QWidget* navigPage;
    QLabel* TextLabel4_2_2;
    QCheckBox* checkBoxNavig;
    QGroupBox* GroupBox2;
    QCheckBox* checkBoxPrev;
    QCheckBox* checkBoxNext;
    QCheckBox* checkBoxFirst;
    QCheckBox* checkBoxLast;
    QCheckBox* checkBoxEdit;
    QGroupBox* GroupBox3;
    QCheckBox* checkBoxInsert;
    QCheckBox* checkBoxUpdate;
    QCheckBox* checkBoxDelete;
    QWidget* tablePropertiesPage;
    QLabel* TextLabel4_2_2_2_2;
    QGroupBox* GroupBox5;
    QCheckBox* checkBoxReadOnly;
    QGroupBox* GroupBox4;
    QCheckBox* checkBoxConfirmInserts;
    QCheckBox* checkBoxConfirmUpdates;
    QCheckBox* checkBoxConfirmCancels;
    QCheckBox* checkBoxConfirmDeletes;
    QCheckBox* checkBoxSorting;
    QWidget* sqlPage;
    QLabel* TextLabel4_2_2_2;
    QLabel* TextLabel3_2_2_2;
    QLabel* TextLabel3_2_2;
    QLabel* TextLabel1_3;
    QMultiLineEdit* editFilter;
    QLabel* TextLabel2;
    QListBox* listBoxSortedField;
    QPushButton* buttonAddSortField;
    QPushButton* buttonRemoveSortField;
    QPushButton* buttonUpSortField;
    QPushButton* buttonDownSortField;
    QPushButton* buttonReSortField;
    QLabel* TextLabel1_4;
    QListBox* listBoxSortField;
    QWidget* layoutPage;
    QLabel* TextLabel4_2_2_2_3_2;
    QButtonGroup* ButtonGroup1;
    QRadioButton* radioLabelsLeft;
    QLabel* TextLabel3;
    QLabel* TextLabel2_2;
    QRadioButton* radioLabelsTop;
    QCheckBox* checkCreateLayouts;
    QCheckBox* checkCreateButtonLayout;
    QCheckBox* checkCreateFieldLayout;
    QSpinBox* spinNumberOfColumns;
    QLabel* TextLabel1_6;
    QWidget* finishPage;
    QLabel* TextLabel4_2_2_2_3;
    QLabel* TextLabel1_5;
    QCheckBox* checkBoxAutoEdit;

protected:
    QHBoxLayout* databasePageLayout;
    QGridLayout* Layout5;
    QHBoxLayout* Layout4;
    QSpacerItem* Spacer1_2;
    QGridLayout* populatePageLayout;
    QGridLayout* Layout11;
    QSpacerItem* Spacer1_10;
    QSpacerItem* Spacer2_5;
    QSpacerItem* Spacer3_3;
    QHBoxLayout* navigPageLayout;
    QVBoxLayout* Layout6;
    QSpacerItem* Spacer1_3;
    QGridLayout* GroupBox2Layout;
    QGridLayout* GroupBox3Layout;
    QGridLayout* tablePropertiesPageLayout;
    QSpacerItem* Spacer1_7;
    QVBoxLayout* GroupBox5Layout;
    QGridLayout* GroupBox4Layout;
    QGridLayout* sqlPageLayout;
    QVBoxLayout* Layout8;
    QSpacerItem* Spacer1_5;
    QVBoxLayout* Layout10;
    QSpacerItem* Spacer1_4;
    QVBoxLayout* Layout13;
    QVBoxLayout* Layout10_2;
    QVBoxLayout* Layout11_2;
    QSpacerItem* Spacer2_2;
    QSpacerItem* Spacer1_6;
    QSpacerItem* Spacer2_3;
    QVBoxLayout* Layout12;
    QGridLayout* layoutPageLayout;
    QSpacerItem* Spacer1_9;
    QSpacerItem* Spacer3_2;
    QGridLayout* ButtonGroup1Layout;
    QSpacerItem* Spacer4;
    QSpacerItem* Spacer5;
    QGridLayout* finishPageLayout;
    QSpacerItem* Spacer2_4;
    QSpacerItem* Spacer1;
    QSpacerItem* Spacer2;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void addField();
    virtual void addSortField();
    virtual void fieldDown();
    virtual void fieldUp();
    virtual void reSortSortField();
    virtual void removeField();
    virtual void removeSortField();
    virtual void setupDatabaseConnections();
    virtual void sortFieldDown();
    virtual void sortFieldUp();
    virtual void connectionSelected( const QString & );
    virtual void tableSelected( const QString & );


};

#endif // SQLFORMWIZARDBASE_H
