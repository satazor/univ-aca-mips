
/***********************************************
** PortValItem.h
***********************************************/

/* PortValItem.h
 *
 * Canvas Item to Display Port Values
 */

#ifndef PORTVALITEM_H
#define PORTVALITEM_H

#include <qcanvas.h>
#include <systemc.h>

class PortValRead;

/**
 * Canvas Item to display a port value.
 */

class PortValItem: public QCanvasText
{
public:
    PortValItem(QCanvas *canvas, sc_port_base &bport,char *pname=0);
    virtual ~PortValItem(void);

    void updateVal(void);
private:
    PortValRead *pValRead;
};

#endif
