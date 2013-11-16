/****************************************************************************
** Form interface generated from reading ui file 'pixmapcollectioneditor.ui'
**
** Created: Qua Out 9 11:03:16 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#ifndef PIXMAPCOLLECTIONEDITOR_H
#define PIXMAPCOLLECTIONEDITOR_H

#include <qvariant.h>
#include <qdialog.h>
#include <qpixmap.h>

class QVBoxLayout;
class QHBoxLayout;
class QGridLayout;
class QSpacerItem;
class QIconView;
class QIconViewItem;
class QPushButton;
class Project;

class PixmapCollectionEditor : public QDialog
{
    Q_OBJECT

public:
    PixmapCollectionEditor( QWidget* parent = 0, const char* name = 0, bool modal = FALSE, WFlags fl = 0 );
    ~PixmapCollectionEditor();

    QIconView* viewPixmaps;
    QPushButton* PushButton2;
    QPushButton* PushButton3;
    QPushButton* buttonOk;
    QPushButton* buttonCancel;
    QPushButton* buttonClose;

public slots:
    virtual void init();
    virtual void destroy();
    virtual void addPixmap();
    virtual void removePixmap();
    virtual void updateView();
    virtual void currentChanged(QIconViewItem * i);
    virtual void setChooserMode(bool c);
    virtual void setCurrentItem(const QString & name);
    virtual void setProject(Project * pro);
    virtual QPixmap scaledPixmap(const QPixmap & p);

protected:
    Project *project;
    bool chooser;

    QVBoxLayout* PixmapCollectionEditorLayout;
    QHBoxLayout* Layout2;
    QSpacerItem* Spacer2;

protected slots:
    virtual void languageChange();

};

#endif // PIXMAPCOLLECTIONEDITOR_H
