
/***********************************************
** PortValItem.cpp
***********************************************/

/* PortValItem.cpp
 */

#include "PortValRead.h"

#include "PortValItem.h"


PortValItem::PortValItem(QCanvas *canvas, sc_port_base &bport, char *pname) 
     : QCanvasText(canvas)
{
    pValRead=new PortValRead(bport,pname);
    setVisible(true);
}

PortValItem::~PortValItem(void)
{
    delete pValRead;
}

void PortValItem::updateVal(void)
{
    QString HexVal;

    HexVal.setNum(pValRead->read(),16);
    
    setText(HexVal);
}
