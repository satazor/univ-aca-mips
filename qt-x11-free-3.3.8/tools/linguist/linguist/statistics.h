/****************************************************************************
** Form interface generated from reading ui file 'statistics.ui'
**
** Created: Tue Oct 8 10:22:05 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef STATISTICS_H
#define STATISTICS_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QPushButton;
class QFrame;
class QLabel;

class Statistics : public QDialog
{
    Q_OBJECT

public:
    Statistics( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~Statistics();

    QPushButton* closeBtn;
    QFrame* frame4;
    QLabel* textLabel4;
    QLabel* textLabel5;
    QLabel* untrWords;
    QLabel* trWords;
    QLabel* textLabel1;
    QLabel* trChars;
    QLabel* untrChars;
    QLabel* textLabel3;
    QLabel* textLabel6;
    QLabel* trCharsSpc;
    QLabel* untrCharsSpc;

public slots:
    virtual void updateStats( int w1, int c1, int cs1, int w2, int c2, int cs2 );
    virtual void closeEvent( QCloseEvent * e );

signals:
    void closed();

protected:
    QGridLayout* StatisticsLayout;
    QHBoxLayout* layout2;
    QSpacerItem* spacer4_2;
    QSpacerItem* spacer4;
    QGridLayout* frame4Layout;

protected slots:
    virtual void languageChange();

private:
    void init();

};

#endif // STATISTICS_H
