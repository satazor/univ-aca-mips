/****************************************************************************
** Form interface generated from reading ui file 'ftpmainwindow.ui'
**
** Created: Tue Oct 8 10:27:16 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef FTPMAINWINDOW_H
#define FTPMAINWINDOW_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qmainwindow.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QAction;
class QActionGroup;
class QToolBar;
class QPopupMenu;
class QListView;
class QListViewItem;
class QComboBox;
class QLabel;
class QFtp;
class QUrlInfo;

class FtpMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    FtpMainWindow( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~FtpMainWindow();

    QListView* remoteView;
    QComboBox* remotePath;
    QLabel* TextLabel4;
    QMenuBar *menubar;
    QPopupMenu *fileMenu;
    QToolBar *toolBar;
    QAction* fileDownloadAction;
    QAction* fileExitAction;
    QAction* fileRemoveAction;
    QAction* fileUploadAction;
    QAction* fileConnectAction;

public slots:
    virtual void connectToHost();

protected:
    QGridLayout* FtpMainWindowLayout;

protected slots:
    virtual void languageChange();

private:
    QFtp *ftp;
    QLabel *stateFtp;
    QString currentFtpDir;

    QPixmap image0;
    QPixmap image1;
    QPixmap image2;
    QPixmap image3;

    virtual void init();
    virtual void destroy();

private slots:
    virtual void uploadFile();
    virtual void downloadFile();
    virtual void removeFile();
    virtual void changePath( const QString & newPath );
    virtual void ftp_commandStarted();
    virtual void ftp_commandFinished();
    virtual void ftp_done( bool error );
    virtual void ftp_stateChanged( int state );
    virtual void ftp_listInfo( const QUrlInfo & i );
    virtual void ftp_rawCommandReply( int code, const QString & text );
    virtual void changePathOrDownload(  QListViewItem * );

};

#endif // FTPMAINWINDOW_H
