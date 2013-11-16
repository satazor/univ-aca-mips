/****************************************************************************
** Form interface generated from reading ui file 'topicchooser.ui'
**
** Created: Tue Oct 8 10:21:41 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TOPICCHOOSERBASE_H
#define TOPICCHOOSERBASE_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QListBox;
class QListBoxItem;
class QPushButton;

class TopicChooserBase : public QDialog
{
    Q_OBJECT

public:
    TopicChooserBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~TopicChooserBase();

    QLabel* label;
    QListBox* listbox;
    QPushButton* buttonDisplay;
    QPushButton* buttonCancel;

protected:
    QVBoxLayout* TopicChooserBaseLayout;
    QHBoxLayout* Layout16;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();


};

#endif // TOPICCHOOSERBASE_H
