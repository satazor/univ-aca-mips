/****************************************************************************
** Form interface generated from reading ui file 'richtextfontdialog.ui'
**
** Created: Tue Oct 8 10:17:43 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef RICHTEXTFONTDIALOG_H
#define RICHTEXTFONTDIALOG_H

#include <qvariant.h>
#include <qdialog.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QComboBox;
class QLabel;
class QToolButton;
class QFrame;
class QPushButton;

class RichTextFontDialog : public QDialog
{
    Q_OBJECT

public:
    RichTextFontDialog( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~RichTextFontDialog();

    QComboBox* fontCombo;
    QLabel* TextLabel1_2;
    QLabel* TextLabel2;
    QLabel* TextLabel1;
    QComboBox* fontSizeCombo;
    QToolButton* colorButton;
    QFrame* Line1;
    QPushButton* okButton;
    QPushButton* cancelButton;

public slots:
    virtual void init();
    virtual void selectColor();
    virtual void accept();
    virtual void reject();
    virtual QString getSize();
    virtual QString getColor();
    virtual QString getFont();

protected:
    QString font;
    QColor color;
    QString size;

    QGridLayout* RichTextFontDialogLayout;
    QSpacerItem* Spacer14;
    QGridLayout* Layout6;
    QSpacerItem* Spacer13;
    QHBoxLayout* Layout15;
    QSpacerItem* Spacer12;

protected slots:
    virtual void languageChange();

};

#endif // RICHTEXTFONTDIALOG_H
