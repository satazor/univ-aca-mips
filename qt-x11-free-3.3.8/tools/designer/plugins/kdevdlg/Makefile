#############################################################################
# Makefile for building: libkdevdlgplugin.so
# Generated by qmake (1.07a) (Qt 3.3.8) on: Wed Oct  9 10:41:28 2013
# Project:  kdevdlg.pro
# Template: lib
# Command: $(QMAKE) -spec /home/smrcascao/Transferências/qt-x11-free-3.3.8/mkspecs/linux-g++ -o Makefile kdevdlg.pro
#############################################################################

####### Compiler, tools and options

CC       = gcc
CXX      = g++
LEX      = flex
YACC     = yacc
CFLAGS   = -pipe -Wall -W -O2 -fPIC  -DQT_NO_DEBUG -DQT_PLUGIN -DQT_SHARED
CXXFLAGS = -pipe -Wall -W -O2 -fPIC  -DQT_NO_DEBUG -DQT_PLUGIN -DQT_SHARED
LEXFLAGS = 
YACCFLAGS= -d
INCPATH  = -I/home/smrcascao/Transferências/qt-x11-free-3.3.8/mkspecs/linux-g++ -I. -I../../interfaces -I../../../../include -I.moc/release-shared/
LINK     = g++
LFLAGS   =  -Wl,-rpath,/home/smrcascao/Transferências/qt-x11-free-3.3.8/lib -shared -Wl,-rpath,/home/smrcascao/Transferências/qt-x11-free-3.3.8/plugins/designer
LIBS     = $(SUBLIBS) -L/home/smrcascao/Transferências/qt-x11-free-3.3.8/lib -L/usr/X11R6/lib -lqt -lXext -lX11 -lm -lSM -lICE -ldl
AR       = ar cqs
RANLIB   = 
MOC      = /home/smrcascao/Transferências/qt-x11-free-3.3.8/bin/moc
UIC      = /home/smrcascao/Transferências/qt-x11-free-3.3.8/bin/uic -L /home/smrcascao/Transferências/qt-x11-free-3.3.8/plugins
QMAKE    = /home/smrcascao/Transferências/qt-x11-free-3.3.8/bin/qmake
TAR      = tar -cf
GZIP     = gzip -9f
COPY     = cp -f
COPY_FILE= $(COPY)
COPY_DIR = $(COPY) -r
INSTALL_FILE= $(COPY_FILE)
INSTALL_DIR = $(COPY_DIR)
DEL_FILE = rm -f
SYMLINK  = ln -sf
DEL_DIR  = rmdir
MOVE     = mv -f
CHK_DIR_EXISTS= test -d
MKDIR    = mkdir -p

####### Output directory

OBJECTS_DIR = .obj/release-shared/

####### Files

HEADERS = kdevdlg2ui.h
SOURCES = main.cpp \
		kdevdlg2ui.cpp
OBJECTS = .obj/release-shared/main.o \
		.obj/release-shared/kdevdlg2ui.o
FORMS = 
UICDECLS = 
UICIMPLS = 
SRCMOC   = 
OBJMOC = 
DIST	   = kdevdlg.pro
QMAKE_TARGET = kdevdlgplugin
DESTDIR  = ../../../../plugins/designer/
TARGET   = libkdevdlgplugin.so
TARGETD   = libkdevdlgplugin.so

first: all
####### Implicit rules

.SUFFIXES: .c .o .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@ $<

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@ $<

####### Build rules

all: Makefile  ../../../../plugins/designer/$(TARGET)

../../../../plugins/designer/$(TARGET):  $(UICDECLS) $(OBJECTS) $(OBJMOC) $(SUBLIBS) $(OBJCOMP)  
	test -d ../../../../plugins/designer/ || mkdir -p ../../../../plugins/designer/
	-$(DEL_FILE) $(TARGET)
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJMOC) $(LIBS) $(OBJCOMP)
	-$(MOVE) $(TARGET) ../../../../plugins/designer/



mocables: $(SRCMOC)
uicables: $(UICDECLS) $(UICIMPLS)

$(MOC): 
	( cd /home/smrcascao/Transferências/qt-x11-free-3.3.8/src/moc && $(MAKE) )

Makefile: kdevdlg.pro ../../../../.qmake.cache /home/smrcascao/Transferências/qt-x11-free-3.3.8/mkspecs/linux-g++/qmake.conf ../../../../lib/libqt.prl
	$(QMAKE) -spec /home/smrcascao/Transferências/qt-x11-free-3.3.8/mkspecs/linux-g++ -o Makefile kdevdlg.pro
qmake: 
	@$(QMAKE) -spec /home/smrcascao/Transferências/qt-x11-free-3.3.8/mkspecs/linux-g++ -o Makefile kdevdlg.pro

dist: 
	@mkdir -p .obj/release-shared/kdevdlgplugin && $(COPY_FILE) --parents $(SOURCES) $(HEADERS) $(FORMS) $(DIST) .obj/release-shared/kdevdlgplugin/ && ( cd `dirname .obj/release-shared/kdevdlgplugin` && $(TAR) kdevdlgplugin.tar kdevdlgplugin && $(GZIP) kdevdlgplugin.tar ) && $(MOVE) `dirname .obj/release-shared/kdevdlgplugin`/kdevdlgplugin.tar.gz . && $(DEL_FILE) -r .obj/release-shared/kdevdlgplugin

mocclean:

uiclean:

yaccclean:
lexclean:
clean:
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) ../../../../plugins/designer/$(TARGET) $(TARGET)


FORCE:

####### Compile

.obj/release-shared/main.o: main.cpp kdevdlg2ui.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .obj/release-shared/main.o main.cpp

.obj/release-shared/kdevdlg2ui.o: kdevdlg2ui.cpp kdevdlg2ui.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o .obj/release-shared/kdevdlg2ui.o kdevdlg2ui.cpp

####### Install

install_target: all 
	@$(CHK_DIR_EXISTS) "$(INSTALL_ROOT)../../../../plugins/designer/" || $(MKDIR) "$(INSTALL_ROOT)../../../../plugins/designer/"
	-$(INSTALL_FILE) "../../../../plugins/designer/$(TARGET)" "$(INSTALL_ROOT)../../../../plugins/designer/$(TARGET)"
	-strip --strip-unneeded "$(INSTALL_ROOT)../../../../plugins/designer/$(TARGET)"

uninstall_target: 
	-$(DEL_FILE) "$(INSTALL_ROOT)../../../../plugins/designer/$(TARGET)"
	-$(DEL_DIR) "$(INSTALL_ROOT)../../../../plugins/designer/"


install: install_target  

uninstall: uninstall_target  

