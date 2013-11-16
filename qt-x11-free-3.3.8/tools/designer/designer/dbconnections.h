/****************************************************************************
** Form interface generated from reading ui file 'dbconnections.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DATABASECONNECTIONBASE_H
#define DATABASECONNECTIONBASE_H

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

class DatabaseConnectionBase : public QDialog
{
    Q_OBJECT

public:
    DatabaseConnectionBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~DatabaseConnectionBase();

    QPushButton* buttonNew;
    QListBox* listConnections;
    QPushButton* buttonDelete;
    QPushButton* buttonHelp;
    QPushButton* buttonClose;
    QGroupBox* grp;
    QPushButton* buttonConnect;

protected:
    QGridLayout* DatabaseConnectionBaseLayout;
    QSpacerItem* Spacer1;
    QSpacerItem* Spacer6;
    QHBoxLayout* Layout5;
    QSpacerItem* Horizontal_Spacing2;
    QGridLayout* grpLayout;
    QSpacerItem* Spacer3;
    QHBoxLayout* Layout4;
    QSpacerItem* Spacer4;
    QSpacerItem* Spacer5;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void currentConnectionChanged( const QString & );
    virtual void deleteConnection();
    virtual void newConnection();
    virtual void connectionNameChanged( const QString & );
    virtual void doConnect();


};

#endif // DATABASECONNECTIONBASE_H
