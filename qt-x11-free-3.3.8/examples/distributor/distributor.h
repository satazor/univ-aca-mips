/****************************************************************************
** Form interface generated from reading ui file 'distributor.ui'
**
** Created: Tue Oct 8 10:24:10 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef DISTRIBUTOR_H
#define DISTRIBUTOR_H

#include <qvariant.h>
#include <qwizard.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QWidget;
class QLineEdit;
class QPushButton;
class QLabel;
class QFrame;
class QCheckBox;

class Distributor : public QWizard
{
    Q_OBJECT

public:
    Distributor( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~Distributor();

    QWidget* selectLibrary;
    QLineEdit* libFilename;
    QPushButton* libBrowseButton;
    QLabel* textLabel1;
    QWidget* modifyPaths;
    QLabel* prefixBuddy;
    QLineEdit* libPath;
    QLineEdit* prefixPath;
    QLineEdit* plgPath;
    QPushButton* prefixBrowseButton;
    QLineEdit* datPath;
    QLabel* textLabel2;
    QFrame* line1;
    QLineEdit* docPath;
    QLineEdit* hdrPath;
    QLabel* textLabel3;
    QLineEdit* binPath;
    QCheckBox* autoSet;
    QLabel* docBuddy;
    QLabel* datBuddy;
    QLabel* hdrBuddy;
    QLabel* libBuddy;
    QLabel* plgBuddy;
    QLabel* binBuddy;
    QWidget* verifyMods;
    QLabel* textLabel4;

    virtual void showPage( QWidget * page );

public slots:
    virtual void checkLibFilename( const QString & filename );
    virtual void browseLibFilename();
    virtual void checkLibData();
    virtual void checkInstallationPrefix( const QString &filename );
    virtual void browseInstallationPrefix();
    virtual void toggleAutoSet( bool autoset );
    virtual void accept();

protected:
    QGridLayout* selectLibraryLayout;
    QSpacerItem* spacer2;
    QGridLayout* modifyPathsLayout;
    QSpacerItem* spacer2_2;
    QHBoxLayout* verifyModsLayout;

protected slots:
    virtual void languageChange();

private:
    QTimer *timer;

    void init();

};

#endif // DISTRIBUTOR_H
