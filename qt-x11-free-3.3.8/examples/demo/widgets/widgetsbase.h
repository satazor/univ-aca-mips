/****************************************************************************
** Form interface generated from reading ui file 'widgets/widgetsbase.ui'
**
** Created: Qua Out 9 11:07:15 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef WIDGETSBASE_H
#define WIDGETSBASE_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class AnalogClock;
class QLabel;
class QButtonGroup;
class QCheckBox;
class QRadioButton;
class QGroupBox;
class QDateEdit;
class QTimeEdit;
class QLCDNumber;
class QSlider;
class QPushButton;
class QComboBox;
class QLineEdit;
class QSpinBox;
class QProgressBar;
class QListBox;
class QListBoxItem;
class QTextEdit;
class QTabWidget;
class QIconView;
class QIconViewItem;
class QListView;
class QListViewItem;
class QTable;

class WidgetsBase : public QWidget
{
    Q_OBJECT

public:
    WidgetsBase( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~WidgetsBase();

    QLabel* PixmapLabel1;
    QButtonGroup* ButtonGroup1;
    QCheckBox* CheckBox1;
    QCheckBox* CheckBox2;
    QCheckBox* CheckBox3;
    QButtonGroup* ButtonGroup2;
    QRadioButton* RadioButton3;
    QRadioButton* RadioButton4;
    QRadioButton* RadioButton2;
    QGroupBox* GroupBox1;
    AnalogClock* clock;
    QDateEdit* dateEdit;
    QTimeEdit* timeEdit;
    QLabel* dateTimeLabel;
    QGroupBox* groupBox;
    QLCDNumber* lcdDisplay;
    QSlider* slider;
    QLabel* TextLabel1_2;
    QPushButton* pushButton;
    QComboBox* buttonColorBox;
    QLineEdit* lineEdit;
    QLabel* TextLabel1_2_2;
    QSpinBox* spinBox;
    QProgressBar* progressBar;
    QLabel* colorTest;
    QListBox* ListBox3;
    QTextEdit* TextEdit1;
    QTabWidget* TabWidget2;
    QWidget* tab;
    QIconView* IconView1;
    QWidget* tab_2;
    QListView* ListView3;
    QWidget* tab_3;
    QTable* Table1;

public slots:
    virtual void resetColors();
    virtual void setColor();
    virtual void updateClock();

protected:
    QVBoxLayout* WidgetsBaseLayout;
    QHBoxLayout* Layout3;
    QVBoxLayout* Layout2;
    QSpacerItem* Spacer1;
    QSpacerItem* Spacer1_2;
    QGridLayout* ButtonGroup1Layout;
    QGridLayout* ButtonGroup2Layout;
    QGridLayout* GroupBox1Layout;
    QGridLayout* groupBoxLayout;
    QHBoxLayout* Layout4;
    QGridLayout* tabLayout;
    QGridLayout* tabLayout_2;
    QGridLayout* tabLayout_3;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void setColor( const QString & color );
    virtual void updateColorTest( const QString & color );
    virtual void updateDateTimeString();


private:
    QPixmap image0;
    QPixmap image1;
    QPixmap image2;
    QPixmap image3;
    QPixmap image4;
    QPixmap image5;
    QPixmap image6;
    QPixmap image7;
    QPixmap image8;
    QPixmap image9;
    QPixmap image10;
    QPixmap image11;
    QPixmap image12;
    QPixmap image13;
    QPixmap image14;
    QPixmap image15;
    QPixmap image16;
    QPixmap image17;
    QPixmap image18;
    QPixmap image19;
    QPixmap image20;
    QPixmap image21;
    QPixmap image22;
    QPixmap image23;
    QPixmap image24;
    QPixmap image25;
    QPixmap image26;
    QPixmap image27;
    QPixmap image28;
    QPixmap image29;
    QPixmap image30;
    QPixmap image31;
    QPixmap image32;
    QPixmap image33;
    QPixmap image34;
    QPixmap image35;
    QPixmap image36;
    QPixmap image37;
    QPixmap image38;
    QPixmap image39;
    QPixmap image40;
    QPixmap image41;
    QPixmap image42;

};

#endif // WIDGETSBASE_H
