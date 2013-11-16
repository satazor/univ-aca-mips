/****************************************************************************
** Form interface generated from reading ui file 'paletteeditoradvancedbase.ui'
**
** Created: Tue Oct 8 10:22:42 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef PALETTEEDITORADVANCEDBASE_H
#define PALETTEEDITORADVANCEDBASE_H

#include <qvariant.h>
#include <qpixmap.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class ColorButton;
class QLabel;
class QComboBox;
class QButtonGroup;
class QCheckBox;
class QGroupBox;
class QPushButton;

class PaletteEditorAdvancedBase : public QDialog
{
    Q_OBJECT

public:
    PaletteEditorAdvancedBase( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~PaletteEditorAdvancedBase();

    QLabel* TextLabel1;
    QComboBox* paletteCombo;
    QButtonGroup* ButtonGroup1;
    QCheckBox* checkBuildInactive;
    QCheckBox* checkBuildDisabled;
    QGroupBox* groupCentral;
    QComboBox* comboCentral;
    QLabel* labelCentral;
    ColorButton* buttonCentral;
    QGroupBox* groupEffect;
    QCheckBox* checkBuildEffect;
    QComboBox* comboEffect;
    QLabel* labelEffect;
    ColorButton* buttonEffect;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;

protected:
    QVBoxLayout* PaletteEditorAdvancedBaseLayout;
    QHBoxLayout* Layout14;
    QVBoxLayout* ButtonGroup1Layout;
    QVBoxLayout* groupCentralLayout;
    QHBoxLayout* Layout32_2;
    QSpacerItem* Horizontal_Spacing1;
    QVBoxLayout* groupEffectLayout;
    QHBoxLayout* Layout32_3;
    QHBoxLayout* Layout31_2;
    QSpacerItem* Horizontal_Spacing3;
    QHBoxLayout* Layout3;
    QSpacerItem* Horizontal_Spacing2;

protected slots:
    virtual void languageChange();

    virtual void init();
    virtual void destroy();
    virtual void onCentral(int);
    virtual void onChooseCentralColor();
    virtual void onChooseEffectColor();
    virtual void onEffect(int);
    virtual void onToggleBuildDisabled(bool);
    virtual void onToggleBuildEffects(bool);
    virtual void onToggleBuildInactive(bool);
    virtual void paletteSelected(int);


private:
    QPixmap image0;

};

#endif // PALETTEEDITORADVANCEDBASE_H
