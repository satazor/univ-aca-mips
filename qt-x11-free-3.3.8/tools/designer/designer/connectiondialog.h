/****************************************************************************
** Form interface generated from reading ui file 'connectiondialog.ui'
**
** Created: Qua Out 9 11:03:16 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CONNECTIONDIALOG_H
#define CONNECTIONDIALOG_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>
#include <qptrlist.h>
#include "connectionitems.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class ConnectionTable;
class QPushButton;
class QLabel;

class ConnectionDialog : public QDialog
{
    Q_OBJECT

public:
    ConnectionDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~ConnectionDialog();

    QPushButton* PushButton1;
    QLabel* TextLabel1;
    QPushButton* PushButton2;
    QPushButton* PushButton3;
    QPushButton* PushButton7;
    QPushButton* buttonEditSlots;
    ConnectionTable* connectionsTable;

public slots:
    virtual void init();
    virtual void addConnection();
    virtual ConnectionContainer * addConnection( QObject * sender, QObject * receiver, const QString & signal, const QString & slot );
    virtual void updateConnectionState( ConnectionContainer * c );
    virtual void okClicked();
    virtual void cancelClicked();
    virtual void deleteClicked();
    virtual void editSlots();
    virtual void setDefault( QObject * sender, QObject * receiver );
    virtual void updateEditSlotsButton();
    virtual void updateConnectionContainers();
    virtual void ensureConnectionVisible();

protected:
    QPtrList<ConnectionContainer> connections;
    QObject *defaultSender;
    QObject *defaultReceiver;

    QGridLayout* ConnectionDialogLayout;
    QSpacerItem* Spacer1;

protected slots:
    virtual void languageChange();

private:
    QPixmap image0;

};

#endif // CONNECTIONDIALOG_H
