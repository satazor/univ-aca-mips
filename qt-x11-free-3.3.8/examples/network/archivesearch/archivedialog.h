/****************************************************************************
** Form interface generated from reading ui file 'archivedialog.ui'
**
** Created: Tue Oct 8 10:27:13 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef ARCHIVEDIALOG_H
#define ARCHIVEDIALOG_H

#include <qvariant.h>
#include <qdialog.h>
#include <qhttp.h>
#include <qurl.h>
#include <qmessagebox.h>
#include <qapplication.h>
#include <qcursor.h>
#include <qregexp.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QSplitter;
class QListView;
class QListViewItem;
class QTextBrowser;
class QPushButton;

class ArchiveDialog : public QDialog
{
    Q_OBJECT

public:
    ArchiveDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~ArchiveDialog();

    QLabel* myTextLabel;
    QLineEdit* myLineEdit;
    QSplitter* splitter1;
    QListView* myListView;
    QTextBrowser* myTextBrowser;
    QPushButton* myPushButton;

public slots:
    void fetch( QListViewItem * it );
    void fetchDone( bool error );
    void search();
    void searchDone( bool error );

protected:
    QVBoxLayout* ArchiveDialogLayout;
    QHBoxLayout* layout1;
    QHBoxLayout* layout3;
    QSpacerItem* mySpacer;

protected slots:
    virtual void languageChange();

private:
    QHttp articleSearcher;
    QHttp articleFetcher;

    void init();

};

#endif // ARCHIVEDIALOG_H
