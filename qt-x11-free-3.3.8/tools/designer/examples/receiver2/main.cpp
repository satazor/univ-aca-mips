/****************************************************************************
** $Id: qt/main.cpp   3.3.8   edited Jan 11 14:39 $
**
** Copyright (C) 1992-2007 Trolltech ASA.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#include <qapplication.h>
#include "mainform.h"


int main( int argc, char *argv[] ) 
{
    QApplication app( argc, argv );

    MainForm *mainForm = new MainForm;
    app.setMainWidget( mainForm );
    mainForm->show(); 

    return app.exec();
}


