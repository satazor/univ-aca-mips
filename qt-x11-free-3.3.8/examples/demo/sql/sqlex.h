/****************************************************************************
** Form interface generated from reading ui file 'sql/sqlex.ui'
**
** Created: Tue Oct 8 10:23:40 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef SQLEX_H
#define SQLEX_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QSplitter;
class QListView;
class QListViewItem;
class QDataTable;
class QSqlRecord;
class QGroupBox;
class QTextEdit;
class QPushButton;
class QLabel;

class SqlEx : public QWidget
{
    Q_OBJECT

public:
    SqlEx( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~SqlEx();

    QSplitter* vsplit;
    QSplitter* hsplit;
    QListView* lv;
    QDataTable* dt;
    QGroupBox* gb;
    QTextEdit* te;
    QPushButton* submitBtn;
    QPushButton* clearBtn;
    QLabel* lbl;
    QPushButton* conBtn;

public slots:
    virtual void init();
    virtual void dbConnect();
    virtual void execQuery();
    virtual void showTable( QListViewItem * item );

protected:
    QVBoxLayout* SqlExLayout;
    QGridLayout* gbLayout;
    QVBoxLayout* Layout22;
    QHBoxLayout* Layout21;
    QSpacerItem* Spacer3;
    QHBoxLayout* Layout23;

protected slots:
    virtual void languageChange();

};

#endif // SQLEX_H
