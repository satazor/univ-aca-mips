/****************************************************************************
** Form interface generated from reading ui file 'projectsettings.ui'
**
** Created: Tue Oct 8 10:21:11 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef CPPPROJECTSETTINGS_H
#define CPPPROJECTSETTINGS_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QLabel;
class QLineEdit;
class QComboBox;
struct QUnknownInterface;

class CppProjectSettings : public QWidget
{
    Q_OBJECT

public:
    CppProjectSettings( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~CppProjectSettings();

    QLabel* TextLabel1;
    QLabel* TextLabel2_2;
    QLineEdit* editDefines;
    QLabel* TextLabel2;
    QLabel* TextLabel2_3;
    QComboBox* comboDefines;
    QComboBox* comboInclude;
    QLineEdit* editInclude;
    QLineEdit* editLibs;
    QLineEdit* editConfig;
    QComboBox* comboLibs;
    QComboBox* comboConfig;
    QLabel* TextLabel3;
    QComboBox* comboTemplate;

public slots:
    virtual void reInit( QUnknownInterface * iface );
    virtual void save( QUnknownInterface * iface );
    virtual void configChanged( const QString & str );
    virtual void libsChanged( const QString & str );
    virtual void definesChanged( const QString & str );
    virtual void includesChanged( const QString & str );
    virtual void configPlatformChanged( const QString & plat );
    virtual void libsPlatformChanged( const QString & plat );
    virtual void definesPlatformChanged( const QString & plat );
    virtual void includesPlatformChanged( const QString & plat );

protected:
    QMap<QString, QString> config, libs, defines, includes;

    QGridLayout* CppProjectSettingsLayout;
    QSpacerItem* Spacer1;
    QSpacerItem* Spacer2;

protected slots:
    virtual void languageChange();

};

#endif // CPPPROJECTSETTINGS_H
