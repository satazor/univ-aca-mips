/****************************************************************************
** Form implementation generated from reading ui file 'ftpmainwindow.ui'
**
** Created: Tue Oct 8 10:27:17 2013
**      by: The User Interface Compiler ($Id: qt/main.cpp   3.3.8   edited Jan 11 14:47 $)
**
** WARNING! All changes made in this file will be lost!
****************************************************************************/

#include "ftpmainwindow.h"

#include <qvariant.h>
#include <qheader.h>
#include <qlistview.h>
#include <qcombobox.h>
#include <qlabel.h>
#include <qlayout.h>
#include <qtooltip.h>
#include <qwhatsthis.h>
#include <qaction.h>
#include <qmenubar.h>
#include <qpopupmenu.h>
#include <qtoolbar.h>
#include <qimage.h>
#include <qpixmap.h>

#include "ftpmainwindow.ui.h"
static const char* const image0_data[] = { 
"22 22 86 2",
"Qt c None",
".# c #000000",
".A c #000058",
".C c #000080",
".P c #004353",
".q c #0b0b58",
"#q c #101010",
".V c #11207b",
"#t c #121212",
".J c #197333",
".5 c #1b1b1b",
".Q c #1b375c",
"#b c #202020",
".6 c #242424",
".S c #2b2b2b",
".g c #2b2b2c",
".a c #2f2f2f",
".r c #303085",
"#a c #313131",
"#m c #333333",
"#g c #373737",
".L c #3a2d6f",
".4 c #3a3a3a",
"#. c #3a3a3b",
".N c #3a3a6b",
".O c #3a3a93",
".7 c #3c3c3c",
".D c #3c3c80",
"#s c #3d3d3d",
"#p c #3f3f3f",
".p c #3f3f40",
".B c #424254",
"#c c #444444",
".Y c #474749",
".0 c #484848",
"#i c #525252",
".T c #52525c",
".K c #52623f",
"#h c #565656",
".1 c #577557",
"## c #585858",
"#o c #5b5b5b",
".9 c #5c5c5c",
".3 c #646466",
".o c #67676a",
".Z c #696969",
".s c #787890",
".h c #7e7e7e",
".8 c #7f7f7f",
".2 c #82b782",
".X c #838384",
".f c #848487",
".z c #848488",
".U c #8484a4",
".H c #8a8a8b",
".W c #8faab6",
".I c #96969a",
".y c #97979b",
".x c #9c9c9f",
".e c #9e9ea1",
".G c #a0a0a4",
".n c #a9a9ac",
".E c #ababc7",
".F c #acacaf",
".w c #adadaf",
".d c #aeaeaf",
".c c #b4b4b4",
".m c #b4b4b5",
".v c #bcbcbd",
".b c #bfbfbf",
".R c #bfe38f",
".l c #c0c0c0",
".k c #c2c2c2",
"#l c #c4c4c4",
".i c #c5c5c5",
"#f c #cfcfcf",
".u c #d4d4d4",
".t c #d9d9da",
"#j c #dfdfdf",
".j c #e3e3e3",
".M c #e7ccb4",
"#n c #e7e7e7",
"#e c #e9e9e9",
"#k c #f2f2f2",
"#r c #f90707",
"#d c #ffffff",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQt.#.#.#.#.#QtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQt.a.b.c.d.e.f.gQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQt.h.i.j.k.l.m.n.o.p.#QtQt",
"QtQtQtQtQtQtQtQtQtQt.q.r.s.t.u.v.w.x.y.z.#Qt",
"QtQtQtQtQtQtQtQtQtQt.A.B.C.D.E.F.G.H.G.I.#Qt",
"QtQtQtQtQtQtQtQtQtQt.A.J.K.L.M.F.G.H.G.I.#Qt",
"QtQtQtQtQtQtQtQtQtQt.N.O.P.Q.R.F.G.H.G.I.#Qt",
"QtQtQtQtQtQtQtQtQtQt.S.T.U.V.W.F.G.X.I.YQtQt",
"QtQtQtQtQtQtQtQtQtQt.#.Z.0.1.2.e.3.4.5QtQtQt",
"QtQt.#.#.#.#.#QtQtQtQt.6.7.8.9#.###a#bQtQtQt",
"QtQt#c#d#d#e#f#gQtQtQtQtQt.##h#i.#QtQtQtQtQt",
"QtQt#c#d#d#j#k#l#mQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt#c#d#d#n#o#p#qQtQtQtQtQtQtQtQt#rQtQtQtQt",
"QtQt#c#d#d#d#e.j#sQtQtQtQtQtQtQtQt#rQtQtQtQt",
"QtQt#c#d#d#d#d#d#cQtQtQt#rQtQtQtQt#rQtQtQtQt",
"QtQt#c#d#d#d#d#d#cQtQt#r#rQtQtQt#rQtQtQtQtQt",
"QtQt#c#d#d#d#d#d#cQt#r#r#r#r#r#rQtQtQtQtQtQt",
"QtQt#c#d#d#d#d#d#cQtQt#r#rQtQtQtQtQtQtQtQtQt",
"QtQt#t#c#c#c#c#c#tQtQtQt#rQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt"};

static const char* const image1_data[] = { 
"22 22 7 1",
". c None",
"# c #000000",
"e c #b3b3b3",
"d c #bdbdbd",
"c c #dedede",
"a c #ee0000",
"b c #ffffff",
"......................",
"......................",
"......................",
"......########........",
"..aaa.#bbbbbbc#.......",
"...aaaacbbbbbcb#...a..",
".....aaacbbbbdcb#.aa..",
"......#aaacbbd###aa...",
"......#eaaacbdccaa....",
"......#ceeaaacaaa#....",
"......#bbceaaaaae#....",
"......#bbbcaaaaeb#....",
"......#bbaaaaeaab#....",
"......#aaaaeecaac#....",
".....aaaaeecbbeaa#....",
"...aaaaeecbbbbceaa....",
"..aaa.#cbbbbbbbcaa....",
"......#bbbbbbbbbeaa...",
"......###########aa...",
"..................a...",
"......................",
"......................"};

static const char* const image2_data[] = { 
"22 22 85 2",
"Qt c None",
".# c #000000",
".A c #000058",
".C c #000080",
".P c #004353",
"#q c #101010",
".V c #11207b",
"#s c #121212",
".J c #197333",
".5 c #1b1b1b",
".Q c #1b375c",
"#b c #202020",
".6 c #242424",
".S c #2b2b2b",
".h c #2b2b2c",
".b c #2f2f2f",
".r c #303085",
"#a c #313131",
"#m c #333333",
"#g c #373737",
".L c #3a2d6f",
".4 c #3a3a3a",
"#. c #3a3a3b",
".N c #3a3a6b",
".O c #3a3a93",
".7 c #3c3c3c",
".D c #3c3c80",
"#r c #3d3d3d",
"#p c #3f3f3f",
".q c #3f3f40",
".B c #424254",
"#c c #444444",
".Y c #474749",
".0 c #484848",
"#i c #525252",
".T c #52525c",
".K c #52623f",
"#h c #565656",
".1 c #577557",
"## c #585858",
"#o c #5b5b5b",
".9 c #5c5c5c",
".3 c #646466",
".p c #67676a",
".Z c #696969",
".s c #787890",
".i c #7e7e7e",
".8 c #7f7f7f",
".2 c #82b782",
".X c #838384",
".g c #848487",
".z c #848488",
".U c #8484a4",
".H c #8a8a8b",
".W c #8faab6",
".I c #96969a",
".y c #97979b",
".x c #9c9c9f",
".f c #9e9ea1",
".G c #a0a0a4",
".o c #a9a9ac",
".E c #ababc7",
".F c #acacaf",
".w c #adadaf",
".e c #aeaeaf",
".d c #b4b4b4",
".n c #b4b4b5",
".v c #bcbcbd",
".c c #bfbfbf",
".R c #bfe38f",
".m c #c0c0c0",
".l c #c2c2c2",
"#l c #c4c4c4",
".j c #c5c5c5",
"#f c #cfcfcf",
".u c #d4d4d4",
".t c #d9d9da",
"#j c #dfdfdf",
".k c #e3e3e3",
".M c #e7ccb4",
"#n c #e7e7e7",
"#e c #e9e9e9",
"#k c #f2f2f2",
".a c #f90707",
"#d c #ffffff",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQt.#.#.#.#.#QtQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.aQt.b.c.d.e.f.g.hQtQtQtQtQt",
"QtQtQtQtQtQtQtQt.a.a.i.j.k.l.m.n.o.p.q.#QtQt",
"QtQtQtQtQt.a.a.a.a.a.a.r.s.t.u.v.w.x.y.z.#Qt",
"QtQtQtQt.aQtQtQt.a.a.A.B.C.D.E.F.G.H.G.I.#Qt",
"QtQtQt.aQtQtQtQt.aQt.A.J.K.L.M.F.G.H.G.I.#Qt",
"QtQtQt.aQtQtQtQtQtQt.N.O.P.Q.R.F.G.H.G.I.#Qt",
"QtQtQt.aQtQtQtQtQtQt.S.T.U.V.W.F.G.X.I.YQtQt",
"QtQtQtQtQtQtQtQtQtQt.#.Z.0.1.2.f.3.4.5QtQtQt",
"QtQt.#.#.#.#.#QtQtQtQt.6.7.8.9#.###a#bQtQtQt",
"QtQt#c#d#d#e#f#gQtQtQtQtQt.##h#i.#QtQtQtQtQt",
"QtQt#c#d#d#j#k#l#mQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt#c#d#d#n#o#p#qQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt#c#d#d#d#e.k#rQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt#c#d#d#d#d#d#cQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt#c#d#d#d#d#d#cQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt#c#d#d#d#d#d#cQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt#c#d#d#d#d#d#cQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt#s#c#c#c#c#c#sQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt"};

static const char* const image3_data[] = { 
"22 22 111 2",
"Qt c None",
".# c #000000",
"#m c #000028",
".B c #000080",
"#w c #003c58",
".M c #004353",
".q c #0b0b58",
"#B c #0b1a79",
"#r c #111473",
".S c #11207b",
"#v c #18365c",
"#q c #191975",
".1 c #1b1b1b",
".N c #1b375c",
"#C c #1f2883",
".8 c #202020",
"#j c #20202a",
"#u c #2a5448",
".P c #2b2b2b",
".g c #2b2b2c",
"#E c #2d2d35",
".a c #2f2f2f",
"#x c #303031",
".r c #303085",
".7 c #313131",
"#S c #323232",
".9 c #323233",
"#. c #333334",
"#N c #345534",
"#K c #353535",
"#O c #363636",
".J c #3a2d6f",
".0 c #3a3a3a",
".5 c #3a3a3b",
".L c #3a3a93",
"#H c #3a7475",
".2 c #3c3c3c",
".C c #3c3c80",
".p c #3f3f40",
"#M c #424242",
"#b c #434345",
".V c #474749",
".W c #484848",
"#A c #49a34b",
"#P c #4a4a4a",
"#R c #515151",
"#a c #525252",
".Q c #52525c",
".I c #52623f",
"#s c #52693a",
"#L c #535353",
"#F c #555557",
"## c #565656",
".X c #577557",
".6 c #585858",
".4 c #5c5c5c",
"#p c #5e5293",
"#I c #5f5f87",
".Z c #646466",
".o c #67676a",
"#J c #6a6a6a",
"#Q c #6f6f6f",
"#c c #6f6f72",
".s c #787890",
"#G c #79797c",
".h c #7e7e7e",
".3 c #7f7f7f",
".Y c #82b782",
".U c #838384",
".f c #848487",
".z c #848488",
"#D c #84849c",
".R c #8484a4",
".G c #8a8a8b",
".T c #8faab6",
"#f c #909093",
"#n c #929294",
".H c #96969a",
".y c #97979b",
"#k c #98989b",
"#y c #98989c",
".x c #9c9c9f",
"#g c #9c9ca0",
".e c #9e9ea1",
".F c #a0a0a4",
".n c #a9a9ac",
"#d c #aaaaad",
".D c #ababc7",
".E c #acacaf",
".w c #adadaf",
".d c #aeaeaf",
".c c #b4b4b4",
".m c #b4b4b5",
"#e c #b6b6b7",
"#h c #bababb",
".v c #bcbcbd",
".b c #bfbfbf",
".O c #bfe38f",
".l c #c0c0c0",
".k c #c2c2c2",
".i c #c5c5c5",
"#t c #c9ac5e",
"#l c #c9c9ca",
"#i c #cdcdcd",
"#z c #cfcfd2",
"#o c #d0d0d2",
".u c #d4d4d4",
".t c #d9d9da",
".j c #e3e3e3",
".K c #e7ccb4",
".A c #ffff98",
"QtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQtQt.#.#.#.#.#QtQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQt.a.b.c.d.e.f.gQtQtQtQtQt",
"QtQtQtQtQtQtQtQtQtQt.h.i.j.k.l.m.n.o.p.#QtQt",
"QtQtQtQtQtQtQtQtQtQt.q.r.s.t.u.v.w.x.y.z.#Qt",
"QtQtQtQtQtQtQtQtQtQt.A.A.B.C.D.E.F.G.F.H.#Qt",
"QtQtQtQtQtQtQtQtQt.A.A.#.I.J.K.E.F.G.F.H.#Qt",
"QtQtQtQtQtQtQtQt.A.A.#.L.M.N.O.E.F.G.F.H.#Qt",
"QtQtQtQtQtQtQt.A.A.#.P.Q.R.S.T.E.F.U.H.VQtQt",
"QtQtQtQtQtQtQt.A.A.A.A.A.W.X.Y.e.Z.0.1QtQtQt",
"QtQtQtQtQtQtQt.#.#.#.A.A.2.3.4.5.6.7.8QtQtQt",
"QtQtQtQtQt.9#..2.2.A.A.#Qt.####a.#QtQtQtQtQt",
"QtQt.##b#c#d#e.l.A.A.#QtQtQtQtQtQtQtQtQtQtQt",
"Qt.g#f#g#h.b#i.A.A.##jQtQtQtQtQtQtQtQtQtQtQt",
".9.F.x#k.E#l.l.A.#.B#mQtQtQtQtQtQtQtQtQtQtQt",
".9.F#k#n.F#o#p#q#r#s#mQtQtQtQtQtQtQtQtQtQtQt",
".9.F#k#n.F#o#t#u#v#w#mQtQtQtQtQtQtQtQtQtQtQt",
"#x#y#k#n.F#z#A#B#C#D#EQtQtQtQtQtQtQtQtQtQtQt",
"Qt#b#F#G.F#o#H#I#J#KQtQtQtQtQtQtQtQtQtQtQtQt",
"Qt.##L#M#b.w#N.4.3.8QtQtQtQtQtQtQtQtQtQtQtQt",
"QtQt.##O#P.2#Q#R.#QtQtQtQtQtQtQtQtQtQtQtQtQt",
"QtQtQtQtQt#SQtQtQtQtQtQtQtQtQtQtQtQtQtQtQtQt"};


/*
 *  Constructs a FtpMainWindow as a child of 'parent', with the
 *  name 'name' and widget flags set to 'f'.
 *
 */
FtpMainWindow::FtpMainWindow( QWidget* parent, const char* name, WFlags fl )
    : QMainWindow( parent, name, fl ),
      image0( (const char **) image0_data ),
      image1( (const char **) image1_data ),
      image2( (const char **) image2_data ),
      image3( (const char **) image3_data )
{
    (void)statusBar();
    if ( !name )
	setName( "FtpMainWindow" );
    setCentralWidget( new QWidget( this, "qt_central_widget" ) );
    FtpMainWindowLayout = new QGridLayout( centralWidget(), 1, 1, 11, 6, "FtpMainWindowLayout"); 

    remoteView = new QListView( centralWidget(), "remoteView" );
    remoteView->addColumn( tr( "Name" ) );
    remoteView->addColumn( tr( "Size" ) );
    remoteView->addColumn( tr( "Last Modified" ) );
    remoteView->setShowSortIndicator( TRUE );

    FtpMainWindowLayout->addMultiCellWidget( remoteView, 1, 1, 0, 1 );

    remotePath = new QComboBox( FALSE, centralWidget(), "remotePath" );
    remotePath->setSizePolicy( QSizePolicy( (QSizePolicy::SizeType)7, (QSizePolicy::SizeType)0, 0, 0, remotePath->sizePolicy().hasHeightForWidth() ) );
    remotePath->setEditable( TRUE );
    remotePath->setDuplicatesEnabled( FALSE );

    FtpMainWindowLayout->addWidget( remotePath, 0, 1 );

    TextLabel4 = new QLabel( centralWidget(), "TextLabel4" );

    FtpMainWindowLayout->addWidget( TextLabel4, 0, 0 );

    // actions
    fileDownloadAction = new QAction( this, "fileDownloadAction" );
    fileDownloadAction->setIconSet( QIconSet( image0 ) );
    fileDownloadAction->setAccel( 0 );
    fileExitAction = new QAction( this, "fileExitAction" );
    fileExitAction->setAccel( 0 );
    fileRemoveAction = new QAction( this, "fileRemoveAction" );
    fileRemoveAction->setIconSet( QIconSet( image1 ) );
    fileUploadAction = new QAction( this, "fileUploadAction" );
    fileUploadAction->setIconSet( QIconSet( image2 ) );
    fileConnectAction = new QAction( this, "fileConnectAction" );
    fileConnectAction->setIconSet( QIconSet( image3 ) );


    // toolbars
    toolBar = new QToolBar( QString(""), this, DockTop ); 

    fileConnectAction->addTo( toolBar );
    fileDownloadAction->addTo( toolBar );
    fileUploadAction->addTo( toolBar );
    fileRemoveAction->addTo( toolBar );


    // menubar
    menubar = new QMenuBar( this, "menubar" );


    fileMenu = new QPopupMenu( this );
    fileConnectAction->addTo( fileMenu );
    fileDownloadAction->addTo( fileMenu );
    fileUploadAction->addTo( fileMenu );
    fileRemoveAction->addTo( fileMenu );
    fileMenu->insertSeparator();
    fileExitAction->addTo( fileMenu );
    menubar->insertItem( QString(""), fileMenu, 1 );

    languageChange();
    resize( QSize(600, 480).expandedTo(minimumSizeHint()) );
    clearWState( WState_Polished );

    // signals and slots connections
    connect( fileExitAction, SIGNAL( activated() ), this, SLOT( close() ) );
    connect( fileDownloadAction, SIGNAL( activated() ), this, SLOT( downloadFile() ) );
    connect( fileRemoveAction, SIGNAL( activated() ), this, SLOT( removeFile() ) );
    connect( fileUploadAction, SIGNAL( activated() ), this, SLOT( uploadFile() ) );
    connect( fileConnectAction, SIGNAL( activated() ), this, SLOT( connectToHost() ) );
    connect( remotePath, SIGNAL( activated(const QString&) ), this, SLOT( changePath(const QString&) ) );
    connect( remoteView, SIGNAL( doubleClicked(QListViewItem*) ), this, SLOT( changePathOrDownload(QListViewItem*) ) );
    connect( remoteView, SIGNAL( returnPressed(QListViewItem*) ), this, SLOT( changePathOrDownload(QListViewItem*) ) );

    // buddies
    TextLabel4->setBuddy( remotePath );
    init();
}

/*
 *  Destroys the object and frees any allocated resources
 */
FtpMainWindow::~FtpMainWindow()
{
    destroy();
    // no need to delete child widgets, Qt does it all for us
}

/*
 *  Sets the strings of the subwidgets using the current
 *  language.
 */
void FtpMainWindow::languageChange()
{
    setCaption( tr( "Ftp client example" ) );
    remoteView->header()->setLabel( 0, tr( "Name" ) );
    remoteView->header()->setLabel( 1, tr( "Size" ) );
    remoteView->header()->setLabel( 2, tr( "Last Modified" ) );
    TextLabel4->setText( tr( "&Remote Path:" ) );
    fileDownloadAction->setText( tr( "Download..." ) );
    fileDownloadAction->setMenuText(tr( "Download..." ));
    fileExitAction->setText( tr( "Exit" ) );
    fileExitAction->setMenuText( tr( "E&xit" ) );
    fileRemoveAction->setText( tr( "Remove" ) );
    fileRemoveAction->setMenuText(tr( "Remove" ));
    fileUploadAction->setText( tr( "Upload..." ) );
    fileUploadAction->setMenuText(tr( "Upload..." ));
    fileConnectAction->setText( tr( "Connect..." ) );
    fileConnectAction->setMenuText(tr( "Connect..." ));
    toolBar->setLabel( tr( "Tools" ) );
    if (menubar->findItem(1))
        menubar->findItem(1)->setText( tr( "&File" ) );
}

