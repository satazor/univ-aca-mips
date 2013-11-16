/****************************************************************************
** Form interface generated from reading ui file 'helpdialog.ui'
**
** Created: Tue Oct 8 10:21:41 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef HELPDIALOGBASE_H
#define HELPDIALOGBASE_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class QListView;
class QListViewItem;
class QLabel;
class QLineEdit;
class QListBox;
class QListBoxItem;
class QPushButton;
class QFrame;
class QProgressBar;

class HelpDialogBase : public QWidget
{
    Q_OBJECT

public:
    HelpDialogBase( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~HelpDialogBase();

    QTabWidget* tabWidget;
    QWidget* contentPage;
    QListView* listContents;
    QWidget* Widget8;
    QLabel* TextLabel1;
    QLineEdit* editIndex;
    QListBox* listIndex;
    QWidget* Widget9;
    QListView* listBookmarks;
    QPushButton* buttonAdd;
    QPushButton* buttonRemove;
    QWidget* searchTab;
    QLabel* TextLabel1_2;
    QLineEdit* termsEdit;
    QListBox* resultBox;
    QLabel* TextLabel2;
    QPushButton* helpButton;
    QPushButton* searchButton;
    QFrame* framePrepare;
    QLabel* labelPrepare;
    QProgressBar* progressPrepare;

protected:
    QVBoxLayout* HelpDialogBaseLayout;
    QVBoxLayout* contentPageLayout;
    QVBoxLayout* Widget8Layout;
    QVBoxLayout* Widget9Layout;
    QHBoxLayout* Layout3;
    QSpacerItem* Spacer1;
    QGridLayout* searchTabLayout;
    QSpacerItem* Spacer3;
    QHBoxLayout* Layout2;
    QSpacerItem* Spacer2;
    QHBoxLayout* framePrepareLayout;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void addBookmark();
    virtual void currentBookmarkChanged( QListViewItem * );
    virtual void currentIndexChanged( QListBoxItem * );
    virtual void currentTabChanged( const QString & );
    virtual void loadIndexFile();
    virtual void currentContentsChanged( QListViewItem * );
    virtual void removeBookmark();
    virtual void searchInIndex( const QString & );
    virtual void showTopic();
    virtual void showTopic( int, QListBoxItem *, const QPoint & );
    virtual void showSearchHelp();
    virtual void startSearch();
    virtual void showResultPage( QListBoxItem * );
    virtual void showResultPage( int, QListBoxItem *, const QPoint & );
    virtual void showResultPage( int, QListViewItem *, const QPoint & );


};

#endif // HELPDIALOGBASE_H
