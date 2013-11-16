/****************************************************************************
** Form interface generated from reading ui file 'dialogform.ui'
**
** Created: Tue Oct 8 10:24:17 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DIALOGFORM_H
#define DIALOGFORM_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QCheckBox;
class QPushButton;

class DialogForm : public QDialog
{
    Q_OBJECT

public:
    DialogForm( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~DialogForm();

    QCheckBox* sessionsCheckBox;
    QCheckBox* loggingCheckBox;
    QPushButton* detailsPushButton;
    QPushButton* okPushButton;
    QPushButton* cancelPushButton;

public slots:
    virtual void toggleDetails();

protected:
    bool extensionShown;

    QVBoxLayout* DialogFormLayout;
    QHBoxLayout* Layout7;
    QVBoxLayout* Layout5;
    QSpacerItem* Spacer2;
    QVBoxLayout* Layout1;
    QHBoxLayout* Layout4;
    QSpacerItem* Spacer4;
    QVBoxLayout* Layout3;
    QSpacerItem* Spacer3;

protected slots:
    virtual void languageChange();

private:
    virtual void init();

};

#endif // DIALOGFORM_H
