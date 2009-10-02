#############################################################################
# Makefile for building: transcribe
# Generated by qmake (2.01a) (Qt 4.5.0) on: Wed Sep 30 15:29:39 2009
# Project:  transcribe.pro
# Template: app
# Command: /usr/bin/qmake -unix -o Makefile transcribe.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_XML_LIB -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -D_REENTRANT -Wall -W $(DEFINES)
CXXFLAGS      = -pipe -g -D_REENTRANT -Wall -W $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtNetwork -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtXml -I/usr/include/qt4 -I/usr/include/vlc -I. -Isrc/ui
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib -lvlc -lQtXml -lQtGui -lQtNetwork -lQtCore -lpthread
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -sf
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = src/transcribeWidget.cpp \
		src/controlsWidget.cpp \
		src/main.cpp \
		src/ListViewDelegate.cpp \
		src/customTextEdit.cpp \
		src/inplaceEditor.cpp \
		src/playlistWidget.cpp \
		src/network/formpost.cpp \
		src/addToPlaylistWidget.cpp \
		src/qxtspanslider/qxtspanslider.cpp moc_transcribeWidget.cpp \
		moc_controlsWidget.cpp \
		moc_ListViewDelegate.cpp \
		moc_customTextEdit.cpp \
		moc_inplaceEditor.cpp \
		moc_playlistWidget.cpp \
		moc_formpost.cpp \
		moc_addToPlaylistWidget.cpp \
		moc_qxtspanslider_p.cpp \
		moc_qxtspanslider.cpp \
		qrc_resources.cpp
OBJECTS       = transcribeWidget.o \
		controlsWidget.o \
		main.o \
		ListViewDelegate.o \
		customTextEdit.o \
		inplaceEditor.o \
		playlistWidget.o \
		formpost.o \
		addToPlaylistWidget.o \
		qxtspanslider.o \
		moc_transcribeWidget.o \
		moc_controlsWidget.o \
		moc_ListViewDelegate.o \
		moc_customTextEdit.o \
		moc_inplaceEditor.o \
		moc_playlistWidget.o \
		moc_formpost.o \
		moc_addToPlaylistWidget.o \
		moc_qxtspanslider_p.o \
		moc_qxtspanslider.o \
		qrc_resources.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		transcribe.pro
QMAKE_TARGET  = transcribe
DESTDIR       = 
TARGET        = transcribe

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): src/ui/ui_transcribe.h src/ui/ui_inplace_editor.h src/ui/ui_uploadProgress.h src/ui/ui_controls.h src/ui/ui_addToPlaylist.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: transcribe.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/lib/libQtXml.prl \
		/usr/lib/libQtGui.prl \
		/usr/lib/libQtNetwork.prl \
		/usr/lib/libQtCore.prl
	$(QMAKE) -unix -o Makefile transcribe.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/lib/libQtXml.prl:
/usr/lib/libQtGui.prl:
/usr/lib/libQtNetwork.prl:
/usr/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -unix -o Makefile transcribe.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/transcribe1.0.0 || $(MKDIR) .tmp/transcribe1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/transcribe1.0.0/ && $(COPY_FILE) --parents src/transcribeWidget.hpp src/controlsWidget.hpp src/ListViewDelegate.hpp src/customTextEdit.hpp src/inplaceEditor.hpp src/playlistWidget.hpp src/network/formpost.hpp src/addToPlaylistWidget.hpp src/qxtspanslider/qxtspanslider_p.h src/qxtspanslider/qxtspanslider.h .tmp/transcribe1.0.0/ && $(COPY_FILE) --parents src/resources.qrc .tmp/transcribe1.0.0/ && $(COPY_FILE) --parents src/transcribeWidget.cpp src/controlsWidget.cpp src/main.cpp src/ListViewDelegate.cpp src/customTextEdit.cpp src/inplaceEditor.cpp src/playlistWidget.cpp src/network/formpost.cpp src/addToPlaylistWidget.cpp src/qxtspanslider/qxtspanslider.cpp .tmp/transcribe1.0.0/ && $(COPY_FILE) --parents src/ui/transcribe.ui src/ui/inplace_editor.ui src/ui/uploadProgress.ui src/ui/controls.ui src/ui/addToPlaylist.ui .tmp/transcribe1.0.0/ && (cd `dirname .tmp/transcribe1.0.0` && $(TAR) transcribe1.0.0.tar transcribe1.0.0 && $(COMPRESS) transcribe1.0.0.tar) && $(MOVE) `dirname .tmp/transcribe1.0.0`/transcribe1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/transcribe1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_transcribeWidget.cpp moc_controlsWidget.cpp moc_ListViewDelegate.cpp moc_customTextEdit.cpp moc_inplaceEditor.cpp moc_playlistWidget.cpp moc_formpost.cpp moc_addToPlaylistWidget.cpp moc_qxtspanslider_p.cpp moc_qxtspanslider.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_transcribeWidget.cpp moc_controlsWidget.cpp moc_ListViewDelegate.cpp moc_customTextEdit.cpp moc_inplaceEditor.cpp moc_playlistWidget.cpp moc_formpost.cpp moc_addToPlaylistWidget.cpp moc_qxtspanslider_p.cpp moc_qxtspanslider.cpp
moc_transcribeWidget.cpp: src/ui/ui_transcribe.h \
		src/ListViewDelegate.hpp \
		src/qxtspanslider/qxtspanslider.h \
		src/qxtspanslider/qxtpimpl.h \
		src/ui/ui_uploadProgress.h \
		src/network/formpost.hpp \
		src/network/formpostinterface.hpp \
		src/controlsWidget.hpp \
		src/ui/ui_controls.h \
		src/playlistWidget.hpp \
		src/transcribeWidget.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/transcribeWidget.hpp -o moc_transcribeWidget.cpp

moc_controlsWidget.cpp: src/ui/ui_controls.h \
		src/controlsWidget.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/controlsWidget.hpp -o moc_controlsWidget.cpp

moc_ListViewDelegate.cpp: src/ListViewDelegate.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/ListViewDelegate.hpp -o moc_ListViewDelegate.cpp

moc_customTextEdit.cpp: src/customTextEdit.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/customTextEdit.hpp -o moc_customTextEdit.cpp

moc_inplaceEditor.cpp: src/qxtspanslider/qxtspanslider.h \
		src/qxtspanslider/qxtpimpl.h \
		src/ui/ui_inplace_editor.h \
		src/customTextEdit.hpp \
		src/inplaceEditor.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/inplaceEditor.hpp -o moc_inplaceEditor.cpp

moc_playlistWidget.cpp: src/playlistWidget.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/playlistWidget.hpp -o moc_playlistWidget.cpp

moc_formpost.cpp: src/network/formpostinterface.hpp \
		src/network/formpost.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/network/formpost.hpp -o moc_formpost.cpp

moc_addToPlaylistWidget.cpp: src/ui/ui_addToPlaylist.h \
		src/addToPlaylistWidget.hpp
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/addToPlaylistWidget.hpp -o moc_addToPlaylistWidget.cpp

moc_qxtspanslider_p.cpp: src/qxtspanslider/qxtspanslider.h \
		src/qxtspanslider/qxtpimpl.h \
		src/qxtspanslider/qxtspanslider_p.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/qxtspanslider/qxtspanslider_p.h -o moc_qxtspanslider_p.cpp

moc_qxtspanslider.cpp: src/qxtspanslider/qxtpimpl.h \
		src/qxtspanslider/qxtspanslider.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/qxtspanslider/qxtspanslider.h -o moc_qxtspanslider.cpp

compiler_rcc_make_all: qrc_resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resources.cpp
qrc_resources.cpp: src/resources.qrc \
		src/pixmaps/stop.png \
		src/pixmaps/next.png \
		src/pixmaps/add.png \
		src/pixmaps/faster.png \
		src/pixmaps/play.png \
		src/pixmaps/slower.png \
		src/pixmaps/remove.png \
		src/pixmaps/previous.png
	/usr/bin/rcc -name resources src/resources.qrc -o qrc_resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: src/ui/ui_transcribe.h src/ui/ui_inplace_editor.h src/ui/ui_uploadProgress.h src/ui/ui_controls.h src/ui/ui_addToPlaylist.h
compiler_uic_clean:
	-$(DEL_FILE) src/ui/ui_transcribe.h src/ui/ui_inplace_editor.h src/ui/ui_uploadProgress.h src/ui/ui_controls.h src/ui/ui_addToPlaylist.h
src/ui/ui_transcribe.h: src/ui/transcribe.ui
	/usr/bin/uic-qt4 src/ui/transcribe.ui -o src/ui/ui_transcribe.h

src/ui/ui_inplace_editor.h: src/ui/inplace_editor.ui
	/usr/bin/uic-qt4 src/ui/inplace_editor.ui -o src/ui/ui_inplace_editor.h

src/ui/ui_uploadProgress.h: src/ui/uploadProgress.ui
	/usr/bin/uic-qt4 src/ui/uploadProgress.ui -o src/ui/ui_uploadProgress.h

src/ui/ui_controls.h: src/ui/controls.ui
	/usr/bin/uic-qt4 src/ui/controls.ui -o src/ui/ui_controls.h

src/ui/ui_addToPlaylist.h: src/ui/addToPlaylist.ui
	/usr/bin/uic-qt4 src/ui/addToPlaylist.ui -o src/ui/ui_addToPlaylist.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

transcribeWidget.o: src/transcribeWidget.cpp src/transcribeWidget.hpp \
		src/ui/ui_transcribe.h \
		src/ListViewDelegate.hpp \
		src/qxtspanslider/qxtspanslider.h \
		src/qxtspanslider/qxtpimpl.h \
		src/ui/ui_uploadProgress.h \
		src/network/formpost.hpp \
		src/network/formpostinterface.hpp \
		src/controlsWidget.hpp \
		src/ui/ui_controls.h \
		src/playlistWidget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o transcribeWidget.o src/transcribeWidget.cpp

controlsWidget.o: src/controlsWidget.cpp src/controlsWidget.hpp \
		src/ui/ui_controls.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o controlsWidget.o src/controlsWidget.cpp

main.o: src/main.cpp src/transcribeWidget.hpp \
		src/ui/ui_transcribe.h \
		src/ListViewDelegate.hpp \
		src/qxtspanslider/qxtspanslider.h \
		src/qxtspanslider/qxtpimpl.h \
		src/ui/ui_uploadProgress.h \
		src/network/formpost.hpp \
		src/network/formpostinterface.hpp \
		src/controlsWidget.hpp \
		src/ui/ui_controls.h \
		src/playlistWidget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o src/main.cpp

ListViewDelegate.o: src/ListViewDelegate.cpp src/ListViewDelegate.hpp \
		src/inplaceEditor.hpp \
		src/qxtspanslider/qxtspanslider.h \
		src/qxtspanslider/qxtpimpl.h \
		src/ui/ui_inplace_editor.h \
		src/customTextEdit.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o ListViewDelegate.o src/ListViewDelegate.cpp

customTextEdit.o: src/customTextEdit.cpp src/customTextEdit.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o customTextEdit.o src/customTextEdit.cpp

inplaceEditor.o: src/inplaceEditor.cpp src/inplaceEditor.hpp \
		src/qxtspanslider/qxtspanslider.h \
		src/qxtspanslider/qxtpimpl.h \
		src/ui/ui_inplace_editor.h \
		src/customTextEdit.hpp \
		src/transcribeWidget.hpp \
		src/ui/ui_transcribe.h \
		src/ListViewDelegate.hpp \
		src/ui/ui_uploadProgress.h \
		src/network/formpost.hpp \
		src/network/formpostinterface.hpp \
		src/controlsWidget.hpp \
		src/ui/ui_controls.h \
		src/playlistWidget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o inplaceEditor.o src/inplaceEditor.cpp

playlistWidget.o: src/playlistWidget.cpp src/playlistWidget.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o playlistWidget.o src/playlistWidget.cpp

formpost.o: src/network/formpost.cpp src/network/formpost.hpp \
		src/network/formpostinterface.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o formpost.o src/network/formpost.cpp

addToPlaylistWidget.o: src/addToPlaylistWidget.cpp src/addToPlaylistWidget.hpp \
		src/ui/ui_addToPlaylist.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o addToPlaylistWidget.o src/addToPlaylistWidget.cpp

qxtspanslider.o: src/qxtspanslider/qxtspanslider.cpp src/qxtspanslider/qxtspanslider.h \
		src/qxtspanslider/qxtpimpl.h \
		src/qxtspanslider/qxtspanslider_p.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qxtspanslider.o src/qxtspanslider/qxtspanslider.cpp

moc_transcribeWidget.o: moc_transcribeWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_transcribeWidget.o moc_transcribeWidget.cpp

moc_controlsWidget.o: moc_controlsWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_controlsWidget.o moc_controlsWidget.cpp

moc_ListViewDelegate.o: moc_ListViewDelegate.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_ListViewDelegate.o moc_ListViewDelegate.cpp

moc_customTextEdit.o: moc_customTextEdit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_customTextEdit.o moc_customTextEdit.cpp

moc_inplaceEditor.o: moc_inplaceEditor.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_inplaceEditor.o moc_inplaceEditor.cpp

moc_playlistWidget.o: moc_playlistWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_playlistWidget.o moc_playlistWidget.cpp

moc_formpost.o: moc_formpost.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_formpost.o moc_formpost.cpp

moc_addToPlaylistWidget.o: moc_addToPlaylistWidget.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_addToPlaylistWidget.o moc_addToPlaylistWidget.cpp

moc_qxtspanslider_p.o: moc_qxtspanslider_p.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qxtspanslider_p.o moc_qxtspanslider_p.cpp

moc_qxtspanslider.o: moc_qxtspanslider.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qxtspanslider.o moc_qxtspanslider.cpp

qrc_resources.o: qrc_resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_resources.o qrc_resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

