/****************************************************************************
** Form interface generated from reading ui file 'previewwidgetbase.ui'
**
** Created: Tue Oct 8 10:22:42 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef PREVIEWWIDGETBASE_H
#define PREVIEWWIDGETBASE_H

#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QButtonGroup;
class QRadioButton;
class QCheckBox;
class QProgressBar;
class QLineEdit;
class QComboBox;
class QSpinBox;
class QPushButton;
class QScrollBar;
class QSlider;
class QTextView;

class PreviewWidgetBase : public QWidget
{
    Q_OBJECT

public:
    PreviewWidgetBase( QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~PreviewWidgetBase();

    QButtonGroup* ButtonGroup1;
    QRadioButton* RadioButton1;
    QRadioButton* RadioButton2;
    QRadioButton* RadioButton3;
    QButtonGroup* ButtonGroup2;
    QCheckBox* CheckBox1;
    QCheckBox* CheckBox2;
    QProgressBar* ProgressBar1;
    QLineEdit* LineEdit1;
    QComboBox* ComboBox1;
    QSpinBox* SpinBox1;
    QPushButton* PushButton1;
    QScrollBar* ScrollBar1;
    QSlider* Slider1;
    QTextView* textView;

protected:
    QVBoxLayout* PreviewWidgetBaseLayout;
    QSpacerItem* Spacer2;
    QHBoxLayout* Layout6;
    QVBoxLayout* Layout17;
    QVBoxLayout* ButtonGroup1Layout;
    QVBoxLayout* ButtonGroup2Layout;
    QVBoxLayout* Layout5;
    QHBoxLayout* Layout13;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();


};

#endif // PREVIEWWIDGETBASE_H
