/****************************************************************************
** Form interface generated from reading ui file 'customwidgeteditor.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CUSTOMWIDGETEDITORBASE_H
#define CUSTOMWIDGETEDITORBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QListBox;
class QListBoxItem;
class QPushButton;
class QTabWidget;
class QWidget;
class QLabel;
class QLineEdit;
class QComboBox;
class QSpinBox;
class QCheckBox;
class QListView;
class QListViewItem;

class CustomWidgetEditorBase : public QDialog
{
    Q_OBJECT

public:
    CustomWidgetEditorBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~CustomWidgetEditorBase();

    QListBox* boxWidgets;
    QPushButton* buttonNewWidget;
    QPushButton* buttonDeleteWidget;
    QPushButton* helpButton;
    QPushButton* buttonCancel;
    QPushButton* buttonLoad;
    QPushButton* buttonSave;
    QTabWidget* TabWidget1;
    QWidget* Widget2;
    QLabel* previewPixmap;
    QPushButton* buttonChoosePixmap;
    QLineEdit* editHeader;
    QPushButton* buttonChooseHeader;
    QComboBox* localGlobalCombo;
    QLineEdit* editClass;
    QLabel* Label11;
    QLabel* Label10;
    QLabel* Label2;
    QLabel* Label7;
    QLabel* TextLabel1_2;
    QComboBox* sizeVer;
    QSpinBox* spinWidth;
    QSpinBox* spinHeight;
    QComboBox* sizeHor;
    QCheckBox* checkContainer;
    QWidget* Widget3;
    QListBox* listSignals;
    QPushButton* buttonAddSignal;
    QPushButton* buttonRemoveSignal;
    QLabel* TextLabel1;
    QLineEdit* editSignal;
    QWidget* Widget4;
    QListView* listSlots;
    QLabel* TextLabel2;
    QLineEdit* editSlot;
    QLabel* TextLabel3;
    QComboBox* comboAccess;
    QPushButton* buttonAddSlot;
    QPushButton* buttonRemoveSlot;
    QWidget* Widget5;
    QPushButton* buttonAddProperty;
    QPushButton* buttonRemoveProperty;
    QComboBox* comboType;
    QListView* listProperties;
    QLineEdit* editProperty;
    QLabel* TextLabel2_2;
    QLabel* TextLabel3_2;

public slots:
    virtual void addSignal();
    virtual void loadDescription();
    virtual void addSlot();

protected:
    QGridLayout* CustomWidgetEditorBaseLayout;
    QSpacerItem* Vertical_Spacing1;
    QHBoxLayout* Layout1;
    QSpacerItem* Horizontal_Spacing2;
    QGridLayout* Widget2Layout;
    QSpacerItem* Spacer1;
    QHBoxLayout* Layout4;
    QHBoxLayout* Layout5;
    QVBoxLayout* Widget3Layout;
    QHBoxLayout* Layout40;
    QSpacerItem* Spacer1_2;
    QHBoxLayout* Layout38;
    QGridLayout* Widget4Layout;
    QHBoxLayout* Layout7;
    QSpacerItem* Spacer2;
    QGridLayout* Widget5Layout;
    QHBoxLayout* Layout7_2;
    QSpacerItem* Spacer2_2;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void addProperty();
    virtual void addWidgetClicked();
    virtual void chooseHeader();
    virtual void classNameChanged( const QString & );
    virtual void closeClicked();
    virtual void currentPropertyChanged( QListViewItem * );
    virtual void currentSignalChanged( QListBoxItem * );
    virtual void currentSlotChanged( QListViewItem * );
    virtual void currentWidgetChanged( QListBoxItem * );
    virtual void deleteWidgetClicked();
    virtual void headerFileChanged( const QString & );
    virtual void heightChanged( int );
    virtual void horDataChanged(int);
    virtual void includePolicyChanged( int );
    virtual void pixmapChoosen();
    virtual void propertyNameChanged( const QString & );
    virtual void propertyTypeChanged( const QString & );
    virtual void removeProperty();
    virtual void removeSignal();
    virtual void removeSlot();
    virtual void saveDescription();
    virtual void signalNameChanged( const QString & );
    virtual void slotAccessChanged( const QString & );
    virtual void slotNameChanged( const QString & );
    virtual void verDataChanged(int);
    virtual void widgetIsContainer(bool);
    virtual void widthChanged( int );


};

#endif // CUSTOMWIDGETEDITORBASE_H
