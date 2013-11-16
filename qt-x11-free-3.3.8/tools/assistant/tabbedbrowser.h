/****************************************************************************
** Form interface generated from reading ui file 'tabbedbrowser.ui'
**
** Created: Tue Oct 8 10:21:41 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef TABBEDBROWSER_H
#define TABBEDBROWSER_H

#include <qvariant.h>
#include <qwidget.h>
#include <qsettings.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QTabWidget;
class HelpWindow;
class MainWindow;
class QStyleSheet;
class QMimeSourceFactory;

class TabbedBrowser : public QWidget
{
    Q_OBJECT

public:
    TabbedBrowser( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~TabbedBrowser();

    QTabWidget* tab;
    QWidget* frontpage;

    virtual HelpWindow * currentBrowser();
    virtual MainWindow * mainWindow();
    QStyleSheet * styleSheet();
    bool linkUnderline();
    QStringList sources();
    void setMimePath( QStringList lst );
    void setMimeExtension( const QString & ext );
    void setBrowserFont( const QFont & fnt );
    QFont browserFont();
    QPtrList<HelpWindow> browsers() const;
    virtual HelpWindow* newBackgroundTab( const QString & url );
    virtual void setTitle(HelpWindow*, const QString &);

public slots:
    virtual void forward();
    virtual void backward();
    virtual void setSource( const QString & ref );
    virtual void reload();
    virtual void home();
    virtual void nextTab();
    virtual void previousTab();
    virtual void newTab( const QString & lnk );
    virtual void zoomIn();
    virtual void zoomOut();
    virtual void updateTitle( const QString & title );
    virtual void newTab();
    virtual void transferFocus();
    virtual void initHelpWindow( HelpWindow * win );
    virtual void setup();
    virtual void setLinkUnderline( bool uline );
    virtual void setPalette( const QPalette & pal );
    virtual void copy();
    virtual void closeTab();
    virtual void sourceChanged();

protected:
    QGridLayout* TabbedBrowserLayout;
    QGridLayout* frontpageLayout;

protected slots:
    virtual void languageChange();

private:
    QStyleSheet *tabStyleSheet;
    bool tabLinkUnderline;
    QMimeSourceFactory *mimeSourceFactory;
    QWidget *lastCurrentTab;
    QFont tabFont;

    virtual void init();
    virtual HelpWindow* createHelpWindow(const QString &);

};

#endif // TABBEDBROWSER_H
