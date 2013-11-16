//MIPSarch.h

/**
 * \file MIPSarch.h
 *
 * Interface of widget that displays architecture.
 */

#ifndef MIPSARCH_H
#define MIPSARCH_H

#include <vector>
#include <qcanvas.h>

using std::vector;

struct mips;

class QCloseEvent;
class QCursor;

class PortValItem;
class PortValRead;


/**
 * MIPSarchCanvas is the Canvas that includes the MIPS architecture and is
 * viewed in MIPSarch Widget.
 */

class MIPSarchCanvas: public QCanvas
{
public:
    MIPSarchCanvas(mips &m, QObject *parent);
    virtual ~MIPSarchCanvas(void);
    void updateArch(void);
private:
    mips &mips1;
    vector < PortValItem * > portValVec;
    vector < QCanvasText * > instStage;
    vector < PortValRead * > pcStage;
    vector < PortValRead * > validpcStage;
};

/**
 * MIPSarch is the Widget that displays the MIPS architecture.
 * MIPSarch is the Canvas View where the MIPSarchCanvas is displayed.
 * MIPSarch manages the user interface with the architecture visualization.
 */

class MIPSarch : public QCanvasView
{ 
    Q_OBJECT

public:
    MIPSarch( mips &m, QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    virtual ~MIPSarch();

public slots:
    void updateArch(void);
signals: 
    void imemClicked(void);
    void dmemClicked(void);
    void regfileClicked(void);

protected:
    virtual void closeEvent(QCloseEvent *e);
    virtual void contentsMousePressEvent(QMouseEvent *e);
    virtual void contentsMouseMoveEvent(QMouseEvent *e);
private:
    MIPSarchCanvas *archCanvas;
    QCursor *cursor;
};

#endif // MIPSARCH_H
