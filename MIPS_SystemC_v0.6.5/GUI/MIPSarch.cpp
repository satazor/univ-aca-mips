//MIPSarch.cpp
//
// Widget to display MIPS architecture
//

#include <qpixmap.h>
#include <qevent.h>
#include <qcursor.h>

#include "PortValItem.h"
#include "PortValRead.h"

#include "MIPSarch.h"
#include "../mips.h"
#include "../mipsaux.h"

/**
 * MIPSarchcanvas constructor.
 */

MIPSarchCanvas::MIPSarchCanvas(mips &m, QObject *parent) : QCanvas(parent), mips1(m)
{
    // set background to mips.png
    QPixmap backFig("GUI/mips.png");
    resize(backFig.width(),backFig.height());
    setBackgroundPixmap(backFig);

    // create and position the items that display the port values
    PortValItem *portVal;
    QCanvasText *qText;

    // instruction labels in stages
    qText=new QCanvasText("nop",this);
    qText->setVisible(true);
    qText->move(30,10);
    qText->setColor(QColor("red"));
    instStage.push_back(qText);
    pcStage.push_back(new PortValRead(mips1.PCreg->dout,"PC"));
    validpcStage.push_back(new PortValRead(mips1.reg_if_id->valid_if,"valid_PC"));

    qText=new QCanvasText("nop",this);
    qText->setVisible(true);
    qText->move(253,10);
    qText->setColor(QColor("red"));
    instStage.push_back(qText);
    pcStage.push_back(new PortValRead(mips1.reg_if_id->PC_id,"PC_id"));
    validpcStage.push_back(new PortValRead(mips1.reg_if_id->valid_id,"valid_PC_id"));

    qText=new QCanvasText("nop",this);
    qText->setVisible(true);
    qText->move(555,10);
    qText->setColor(QColor("red"));
    instStage.push_back(qText);
    pcStage.push_back(new PortValRead(mips1.reg_id_exe->PC_exe,"PC_exe"));
    validpcStage.push_back(new PortValRead(mips1.reg_id_exe->valid_exe,"valid_PC_exe"));

    qText=new QCanvasText("nop",this);
    qText->setVisible(true);
    qText->move(705,10);
    qText->setColor(QColor("red"));
    instStage.push_back(qText);
    pcStage.push_back(new PortValRead(mips1.reg_exe_mem1->PC_mem1,"PC_mem1"));
    validpcStage.push_back(new PortValRead(mips1.reg_exe_mem1->valid_mem1,"valid_PC_mem1"));

    qText=new QCanvasText("nop",this);
    qText->setVisible(true);
    qText->move(850,10);
    qText->setColor(QColor("red"));
    instStage.push_back(qText);
    pcStage.push_back(new PortValRead(mips1.reg_mem1_mem2->PC_mem2,"PC_mem2"));
    validpcStage.push_back(new PortValRead(mips1.reg_mem1_mem2->valid_mem2,"valid_PC_mem2"));

    qText=new QCanvasText("nop",this);
    qText->setVisible(true);
    qText->move(990,10);
    qText->setColor(QColor("red"));
    instStage.push_back(qText);
    pcStage.push_back(new PortValRead(mips1.reg_mem2_wb->PC_wb,"PC_wb"));
    validpcStage.push_back(new PortValRead(mips1.reg_mem2_wb->valid_wb,"valid_PC_wb"));

    // value of port signals
    // IF
    portVal=new PortValItem(this,mips1.instmem->addr, "PC");
    portVal->move(81,268);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.add4->res, "PC4");
    portVal->move(145,147);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.PCreg->din, "NPC");
    portVal->move(11,225);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.instmem->inst, "inst");
    portVal->move(145,315);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    //ID
    portVal=new PortValItem(this,mips1.ctrl->RegWrite, "RegWrite");
    portVal->move(457,67);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.ctrl->MemtoReg, "MemtoReg");
    portVal->move(457,82);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.ctrl->MemRead, "MemRead");
    portVal->move(457,96);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.ctrl->MemWrite, "MemWrite");
    portVal->move(457,109);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.ctrl->ALUSrc, "ALUSrc");
    portVal->move(457,122);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.ctrl->ALUOp, "ALUOp");
    portVal->move(457,135);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.ctrl->RegDst, "RegDst");
    portVal->move(457,149);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.ctrl->Branch, "Branch");
    portVal->move(412,190);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.addbr->res, "BranchTarget");
    portVal->move(215,75);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.btc->res, "BranchTaken");
    portVal->move(365,35);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.jtc->res, "JumpTarget");
    portVal->move(256,40);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.sl2->dout, "addr_ext");
    portVal->move(222,168);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_if_id->PC4_id, "PC4_id");
    portVal->move(200,150);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_if_id->PC_id, "PC_id");
    portVal->move(200,290);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_if_id->inst_id, "inst_id");
    portVal->move(175,390);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.dec1->opcode, "opcode");
    portVal->move(310,70);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.dec1->funct, "funct");
    portVal->move(310,85);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);


    portVal=new PortValItem(this,mips1.dec1->rd, "rd");
    portVal->move(342,425);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.dec1->imm, "imm");
    portVal->move(300,525);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.dec1->imm_j, "imm_j");
    portVal->move(245,338);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.rfile->reg1, "r1");
    portVal->move(342,389);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.rfile->reg2, "r2");
    portVal->move(342,404);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.rfile->data1, "r1_out");
    portVal->move(450,389);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.rfile->data2, "r2_out");
    portVal->move(450,404);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.e1->dout, "imm_ext");
    portVal->move(205,505);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    // Hazard signals
    portVal=new PortValItem(this,mips1.hazard_unit->enable_pc, "enable_pc");
    portVal->move(45,573);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.hazard_unit->reset_ifid, "reset_ifid");
    portVal->move(205,562);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.hazard_unit->reset_idexe, "reset_idexe");
    portVal->move(527,537);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.hazard_unit->enable_ifid, "enable_ifid");
    portVal->move(156,535);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    //EXE
    portVal=new PortValItem(this,mips1.reg_id_exe->RegWrite_exe, "RegWrite_exe");
    portVal->move(545,67);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_id_exe->MemtoReg_exe, "MemtoReg_exe");
    portVal->move(545,82);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_id_exe->MemRead_exe, "MemRead_exe");
    portVal->move(545,96);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_id_exe->MemWrite_exe, "MemWrite_exe");
    portVal->move(545,109);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_id_exe->ALUSrc_exe, "ALUSrc_exe");
    portVal->move(545,122);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_id_exe->ALUOp_exe, "ALUOp_exe");
    portVal->move(545,135);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_id_exe->rega_exe, "rega_exe");
    portVal->move(545,389);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_id_exe->regb_exe, "regb_exe");
    portVal->move(545,404);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.alu1->din2, "alu_din2");
    portVal->move(590,415);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_id_exe->WriteReg_exe, "WriteReg_exe");
    portVal->move(563,490);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.alu1->dout, "alu_dout");
    portVal->move(640,305);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);


    //MEM1
    portVal=new PortValItem(this,mips1.reg_exe_mem1->RegWrite_mem1, "RegWrite_mem1");
    portVal->move(692,67);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_exe_mem1->MemtoReg_mem1, "MemtoReg_mem1");
    portVal->move(692,82);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_exe_mem1->MemRead_mem1, "MemRead_mem1");
    portVal->move(692,96);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_exe_mem1->MemWrite_mem1, "MemWrite_mem1");
    portVal->move(692,109);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_exe_mem1->aluOut_mem1, "aluOut_mem1");
    portVal->move(752,278);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_exe_mem1->regb_mem1, "regb_mem1");
    portVal->move(752,325);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_exe_mem1->WriteReg_mem1, "WriteReg_mem1");
    portVal->move(692,497);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.datamem->dout, "dmem.dout");
    portVal->move(895,268);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    //MEM2
    portVal=new PortValItem(this,mips1.reg_mem1_mem2->RegWrite_mem2, "RegWrite_mem2");
    portVal->move(840,67);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_mem1_mem2->MemtoReg_mem2, "MemtoReg_mem2");
    portVal->move(840,82);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_mem1_mem2->aluOut_mem2, "aluOut_mem2");
    portVal->move(840,482);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_mem1_mem2->WriteReg_mem2, "WriteReg_mem2");
    portVal->move(840,497);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    //WB
    portVal=new PortValItem(this,mips1.reg_mem2_wb->memOut_wb, "memOut_wb");
    portVal->move(985,278);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_mem2_wb->aluOut_wb, "aluOut_wb");
    portVal->move(985,482);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_mem2_wb->RegWrite_wb, "RegWrite_wb");
    portVal->move(985,67);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_mem2_wb->MemtoReg_wb, "MemtoReg_wb");
    portVal->move(985,82);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.reg_mem2_wb->WriteReg_wb, "WriteReg_wb");
    portVal->move(985,497);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    portVal=new PortValItem(this,mips1.rfile->datawr, "WriteVal");
    portVal->move(1030,460);
    portVal->setColor(QColor("blue"));
    portValVec.push_back(portVal);

    updateArch();

    setDoubleBuffering(true);
}

/**
 * updates the values of all ports values.
 */
void MIPSarchCanvas::updateArch(void)
{
    unsigned int p,s,addr;
    char instText[200];
    for(p=0; p<portValVec.size(); p++) {
         portValVec[p]->updateVal();
    }
    for(s=0; s<instStage.size(); s++) {
	 if(validpcStage[s]->read() == 1) { // Stage PC is valid
	     if(pcStage[s]->read() < mips1.instmem->size()) { // StagePC is less than size of instmem
	        addr=mips1.instmem->at(pcStage[s]->read());
	        disassemble(addr,instText);
                instStage[s]->setText(instText);
	     }
	     else instStage[s]->setText("nop");
	 }
	 else instStage[s]->setText("bubble");
    }
    update();
}

MIPSarchCanvas::~MIPSarchCanvas()
{
    // no need to delete child widgets, Qt does it all for us
    for(unsigned int p=0; p < portValVec.size(); p++) {
       delete portValVec[p];
       portValVec[p]=0;
    }
}


/**
 * MIPSarch contructor.
 * Creates and sets the MIPSarchcanvas to be displayed, and some
 * GUI functionalities.
 */
MIPSarch::MIPSarch( mips &m, QWidget* parent,  const char* name, WFlags fl )
    : QCanvasView(0, parent, name, fl )
{
    archCanvas=new MIPSarchCanvas(m,this);
    setCanvas(archCanvas);

    setIcon(QPixmap("mips.xpm"));

    resize(QSize(1065+5,650+5));
    setMaximumSize(QSize(1065+5,650+5));

    cursor=new QCursor(PointingHandCursor);
    setCursor(*cursor);

    viewport()->setMouseTracking(true);
    setFocusPolicy(QWidget::StrongFocus);
}

/*
 *  Destroys the object and frees any allocated resources
 */
MIPSarch::~MIPSarch()
{
    // no need to delete child widgets, Qt does it all for us
    delete cursor;
}

/**
 * updates the port values.
 */
void MIPSarch::updateArch(void)
{
     archCanvas->updateArch();
}

/**
 * emits signals when click is inside certain regions
 */
void MIPSarch::contentsMousePressEvent(QMouseEvent *e)
{
/*

    QPoint pos=e->pos();
    if(pos.x() > 80 && pos.x() < 112
       && pos.y()> 200 && pos.y() < 270)
       emit imemClicked();
    if(pos.x() > 320 && pos.x() < 370
       && pos.y()> 190 && pos.y() < 300)
       emit regfileClicked();
    if(pos.x() > 590 && pos.x() < 645
       && pos.y()> 220 && pos.y() < 280)
       emit dmemClicked();
*/
}

/**
 * changes cursor when mouse is over certain regions
 */

void MIPSarch::contentsMouseMoveEvent(QMouseEvent *e)
{
    QPoint pos=e->pos();

//    fprintf(stderr,"x=%4d y=%4d\n",pos.x(),pos.y());

    cursor->setShape(ArrowCursor);
    setCursor(*cursor);

}

/**
 * This window is not to be closed.
 */
void MIPSarch::closeEvent(QCloseEvent *e)
{
   e->ignore();
}
