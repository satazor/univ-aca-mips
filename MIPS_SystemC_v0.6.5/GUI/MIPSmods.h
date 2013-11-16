#ifndef MIPSMODS_H
#define MIPSMODS_H

#include <qscrollview.h>

struct mips;

/**
 * Displays the main modules port values in the form of a table.
 * Displays instruction memory, decode, control, register file, 
 * alu and data memory port values.
 */

class MIPSmods : public QScrollView
{ 
    Q_OBJECT

public:
    MIPSmods( mips &m, QWidget* parent = 0, const char* name = 0, WFlags fl = 0 );
    ~MIPSmods();
signals:
    void updateModules(void);
protected:
    virtual void closeEvent(QCloseEvent *e);
private:
    mips &mips1;
};

#endif // MIPSMODS_H
