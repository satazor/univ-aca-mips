/****************************************************************************
** Form interface generated from reading ui file 'dbconnection.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DATABASECONNECTIONWIDGET_H
#define DATABASECONNECTIONWIDGET_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QComboBox;
class QSpinBox;

class DatabaseConnectionWidget : public QWidget
{
    Q_OBJECT

public:
    DatabaseConnectionWidget( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~DatabaseConnectionWidget();

    QLabel* TextLabel3;
    QLabel* TextLabel4;
    QLabel* TextLabel4_2;
    QLabel* TextLabel2;
    QLineEdit* editName;
    QLabel* TextLabel5;
    QComboBox* comboDriver;
    QLabel* TextLabel1;
    QLineEdit* editHostname;
    QLabel* TextLabel1_2;
    QLineEdit* editUsername;
    QLineEdit* editPassword;
    QLineEdit* editDatabase;
    QSpinBox* editPort;

protected:
    QGridLayout* DatabaseConnectionWidgetLayout;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();


};

#endif // DATABASECONNECTIONWIDGET_H
