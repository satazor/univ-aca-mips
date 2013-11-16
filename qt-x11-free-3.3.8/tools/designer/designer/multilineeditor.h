/****************************************************************************
** Form interface generated from reading ui file 'multilineeditor.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MULTILINEEDITORBASE_H
#define MULTILINEEDITORBASE_H

#include <qvariant.h>
#include <qmainwindow.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class QPushButton;

class MultiLineEditorBase : public QMainWindow
{
    Q_OBJECT

public:
    MultiLineEditorBase( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~MultiLineEditorBase();

    QPushButton* OkButton;
    QPushButton* applyButton;
    QPushButton* cancelButton;
    QPushButton* helpButton;
    QMenuBar *menuBar;

public slots:
    virtual void applyClicked();
    virtual void okClicked();
    virtual void cancelClicked();

protected:
    QHBoxLayout* MultiLineEditorBaseLayout;
    QHBoxLayout* Layout4;
    QVBoxLayout* Layout3;
    QSpacerItem* Spacer3;

protected slots:
    virtual void languageChange();

};

#endif // MULTILINEEDITORBASE_H
