/****************************************************************************
** Form interface generated from reading ui file 'clientbase.ui'
**
** Created: Tue Oct 8 10:27:22 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CLIENTINFOBASE_H
#define CLIENTINFOBASE_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QLabel;
class QLineEdit;
class QSplitter;
class QListBox;
class QListBoxItem;
class QTextEdit;

class ClientInfoBase : public QWidget
{
    Q_OBJECT

public:
    ClientInfoBase( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~ClientInfoBase();

    QPushButton* btnConnect;
    QLabel* TextLabel1;
    QLineEdit* edHost;
    QLabel* TextLabel2_2;
    QLineEdit* edPort;
    QSplitter* Splitter4;
    QPushButton* btnBack;
    QLabel* infoPath;
    QListBox* infoList;
    QLabel* TextLabel2;
    QTextEdit* infoText;
    QPushButton* btnQuit;

protected:
    QVBoxLayout* ClientInfoBaseLayout;
    QHBoxLayout* Layout15;
    QVBoxLayout* Layout16;
    QHBoxLayout* Layout14;
    QVBoxLayout* Layout3;
    QHBoxLayout* Layout12;
    QSpacerItem* Spacer10;
    QSpacerItem* Spacer9;

protected slots:
    virtual void languageChange();

};

#endif // CLIENTINFOBASE_H
