/****************************************************************************
** Form interface generated from reading ui file 'configtoolboxdialog.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CONFIGTOOLBOXDIALOG_H
#define CONFIGTOOLBOXDIALOG_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QListView;
class QListViewItem;
class QToolButton;

class ConfigToolboxDialog : public QDialog
{
    Q_OBJECT

public:
    ConfigToolboxDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~ConfigToolboxDialog();

    QPushButton* PushButton3;
    QPushButton* PushButton4;
    QPushButton* buttonAdd;
    QListView* listViewTools;
    QPushButton* buttonRemove;
    QListView* listViewCommon;
    QToolButton* buttonDown;
    QToolButton* buttonUp;

public slots:
    virtual void addTool();
    virtual void removeTool();
    virtual void moveToolUp();
    virtual void moveToolDown();
    virtual void currentToolChanged( QListViewItem * i );
    virtual void currentCommonToolChanged( QListViewItem * i );
    virtual void ok();

protected:
    QGridLayout* ConfigToolboxDialogLayout;
    QHBoxLayout* Layout2;
    QSpacerItem* Spacer2;
    QGridLayout* Layout4;
    QSpacerItem* Spacer3;
    QGridLayout* Layout5;
    QSpacerItem* Spacer4;

protected slots:
    virtual void languageChange();

private:
    virtual void init();

};

#endif // CONFIGTOOLBOXDIALOG_H
