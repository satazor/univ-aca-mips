/****************************************************************************
** Form interface generated from reading ui file 'preferences.ui'
**
** Created: Tue Oct 8 10:20:48 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef PREFERENCESBASE_H
#define PREFERENCESBASE_H

#include <qvariant.h>
#include <qwidget.h>
#include <qmap.h>
#include "conf.h"

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QGroupBox;
class QLabel;
class QCheckBox;
class QToolButton;
class QComboBox;
class QSpinBox;
class QListBox;
class QListBoxItem;
class QLineEdit;

class PreferencesBase : public QWidget
{
    Q_OBJECT

public:
    PreferencesBase( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~PreferencesBase();

    QGroupBox* GroupBox2;
    QLabel* TextLabel1;
    QCheckBox* checkBold;
    QToolButton* buttonColor;
    QComboBox* comboFamily;
    QLabel* TextLabel2;
    QCheckBox* checkUnderline;
    QSpinBox* spinSize;
    QCheckBox* checkItalic;
    QLabel* TextLabel4;
    QLabel* TextLabel3;
    QListBox* listElements;
    QLabel* TextLabel2_2;
    QLineEdit* editPreview;
    QGroupBox* GroupBox3;
    QCheckBox* checkWordWrap;
    QCheckBox* checkCompletion;
    QCheckBox* checkParenMatching;
    QGroupBox* GroupBox3_2;
    QSpinBox* spinTabSize;
    QLabel* TextLabel1_2;
    QSpinBox* spinIndentSize;
    QLabel* TextLabel2_3;
    QCheckBox* checkKeepTabs;
    QCheckBox* checkAutoIndent;

public slots:
    virtual void init();
    virtual void destroy();
    virtual void colorClicked();
    virtual void reInit();
    virtual void save();
    virtual void updatePreview();
    virtual void boldChanged( bool b );
    virtual void elementChanged( const QString & element );
    virtual void familyChanged( const QString & f );
    virtual void italicChanged( bool b );
    virtual void setColorPixmap( const QColor & c );
    virtual void setPath( const QString & p );
    virtual void sizeChanged( int s );
    virtual void underlineChanged( bool b );

protected:
    QString path;
    QMap<QString, ConfigStyle> styles;
    ConfigStyle currentStyle;
    QString currentElement;

    QGridLayout* PreferencesBaseLayout;
    QGridLayout* GroupBox2Layout;
    QSpacerItem* Spacer2;
    QGridLayout* Layout1;
    QVBoxLayout* GroupBox3Layout;
    QVBoxLayout* GroupBox3_2Layout;
    QGridLayout* Layout2;

protected slots:
    virtual void languageChange();

};

#endif // PREFERENCESBASE_H
