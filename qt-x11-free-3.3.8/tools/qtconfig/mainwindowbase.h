/****************************************************************************
** Form interface generated from reading ui file 'mainwindowbase.ui'
**
** Created: Tue Oct 8 10:22:42 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef MAINWINDOWBASE_H
#define MAINWINDOWBASE_H

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
class ColorButton;
class PreviewFrame;
class QTextView;
class QTabWidget;
class QWidget;
class QGroupBox;
class QLabel;
class QComboBox;
class QPushButton;
class QLineEdit;
class QFrame;
class QListBox;
class QListBoxItem;
class QSpinBox;
class QCheckBox;

class MainWindowBase : public QMainWindow
{
    Q_OBJECT

public:
    MainWindowBase( QWidget* parent = 0, const char* name = 0, WFlags fl = WType_TopLevel );
    ~MainWindowBase();

    QTextView* helpview;
    QTabWidget* TabWidget3;
    QWidget* tab;
    QGroupBox* GroupBox40;
    QLabel* gstylebuddy;
    QComboBox* gstylecombo;
    QGroupBox* groupAutoPalette;
    QLabel* labelMainColor;
    ColorButton* buttonMainColor;
    QLabel* labelMainColor2;
    ColorButton* buttonMainColor2;
    QPushButton* btnAdvanced;
    QGroupBox* GroupBox126;
    QLabel* TextLabel1;
    QComboBox* paletteCombo;
    PreviewFrame* previewFrame;
    QWidget* tab_2;
    QGroupBox* GroupBox1;
    QComboBox* stylecombo;
    QComboBox* familycombo;
    QComboBox* psizecombo;
    QLabel* stylebuddy;
    QLabel* psizebuddy;
    QLabel* familybuddy;
    QLineEdit* samplelineedit;
    QGroupBox* GroupBox2;
    QLabel* famsubbuddy;
    QComboBox* familysubcombo;
    QFrame* Line1;
    QLabel* TextLabel5;
    QListBox* sublistbox;
    QPushButton* PushButton2;
    QPushButton* PushButton3;
    QPushButton* PushButton4;
    QFrame* Line2;
    QLabel* choosebuddy;
    QComboBox* choosesubcombo;
    QPushButton* PushButton1;
    QWidget* tab_3;
    QGroupBox* GroupBox4;
    QSpinBox* dcispin;
    QLabel* dcibuddy;
    QSpinBox* cfispin;
    QLabel* cfibuddy;
    QSpinBox* wslspin;
    QLabel* wslbuddy;
    QCheckBox* resolvelinks;
    QGroupBox* GroupBox3;
    QCheckBox* effectcheckbox;
    QFrame* effectbase;
    QLabel* meffectbuddy;
    QLabel* ceffectbuddy;
    QLabel* teffectbuddy;
    QLabel* beffectbuddy;
    QComboBox* menueffect;
    QComboBox* comboeffect;
    QComboBox* tooltipeffect;
    QComboBox* toolboxeffect;
    QGroupBox* GroupBox5;
    QLabel* swbuddy;
    QLabel* shbuddy;
    QSpinBox* strutwidth;
    QSpinBox* strutheight;
    QCheckBox* rtlExtensions;
    QLabel* inputStyleLabel;
    QComboBox* inputStyle;
    QWidget* tab_4;
    QGroupBox* GroupBox39;
    QListBox* libpathlistbox;
    QPushButton* PushButton8;
    QPushButton* PushButton9;
    QPushButton* PushButton7;
    QLabel* TextLabel15;
    QLineEdit* libpathlineedit;
    QPushButton* PushButton5;
    QPushButton* PushButton6;
    QWidget* tab_5;
    QCheckBox* fontembeddingcheckbox;
    QGroupBox* GroupBox10;
    QPushButton* PushButton11;
    QPushButton* PushButton13;
    QListBox* fontpathlistbox;
    QPushButton* PushButton12;
    QLabel* TextLabel15_2;
    QPushButton* PushButton15;
    QLineEdit* fontpathlineedit;
    QPushButton* PushButton14;
    QMenuBar *menubar;
    QPopupMenu *PopupMenu;
    QPopupMenu *PopupMenu_2;
    QAction* fileSaveAction;
    QAction* fileExitAction;
    QAction* helpAboutAction;
    QAction* helpAboutQtAction;

public slots:
    virtual void addFontpath();
    virtual void addLibpath();
    virtual void addSubstitute();
    virtual void browseFontpath();
    virtual void browseLibpath();
    virtual void buildFont();
    virtual void buildPalette();
    virtual void downFontpath();
    virtual void downLibpath();
    virtual void downSubstitute();
    virtual void familySelected( const QString & );
    virtual void fileExit();
    virtual void fileSave();
    virtual void helpAbout();
    virtual void helpAboutQt();
    virtual void new_slot();
    virtual void pageChanged( QWidget * );
    virtual void paletteSelected( int );
    virtual void removeFontpath();
    virtual void removeLibpath();
    virtual void removeSubstitute();
    virtual void somethingModified();
    virtual void styleSelected( const QString & );
    virtual void substituteSelected( const QString & );
    virtual void tunePalette();
    virtual void upFontpath();
    virtual void upLibpath();
    virtual void upSubstitute();

protected:
    QHBoxLayout* MainWindowBaseLayout;
    QVBoxLayout* tabLayout;
    QHBoxLayout* GroupBox40Layout;
    QHBoxLayout* groupAutoPaletteLayout;
    QSpacerItem* Spacer1;
    QGridLayout* GroupBox126Layout;
    QVBoxLayout* tabLayout_2;
    QGridLayout* GroupBox1Layout;
    QVBoxLayout* GroupBox2Layout;
    QHBoxLayout* Layout2;
    QHBoxLayout* Layout3;
    QHBoxLayout* Layout11;
    QVBoxLayout* tabLayout_3;
    QSpacerItem* spacer5;
    QGridLayout* GroupBox4Layout;
    QVBoxLayout* GroupBox3Layout;
    QGridLayout* effectbaseLayout;
    QGridLayout* GroupBox5Layout;
    QVBoxLayout* tabLayout_4;
    QVBoxLayout* GroupBox39Layout;
    QGridLayout* Layout68;
    QGridLayout* Layout71;
    QSpacerItem* Spacer1_2;
    QVBoxLayout* tabLayout_5;
    QVBoxLayout* GroupBox10Layout;
    QGridLayout* Layout9;
    QGridLayout* Layout10;
    QSpacerItem* Spacer4;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();


private:
    QPixmap image0;
    QPixmap image1;

};

#endif // MAINWINDOWBASE_H
