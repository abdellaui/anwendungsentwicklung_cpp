CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT (07_tag_01_aufgabe)

set(CMAKE_PREFIX_PATH ~/Library/Qt/5.10.0/clang_64)

set(CMAKE_INCLUDE_CURRENT_DIR on)

set(CMAKE_AUTOMOC ON)


FIND_PACKAGE(Qt5Widgets REQUIRED)
FIND_PACKAGE(OpenCV)

FIND_PACKAGE(Qt5Core REQUIRED)

INCLUDE_DIRECTORIES(    
	${CMAKE_CURRENT_BINARY_DIR}
	../include
	${OpenCV_INCLUDE_DIRS}
)

SET( INCS
../include/DisplayWidget.h
../include/FilterWidget.h
../include/MainWindow.h
../include/SourceWidget.h
)


SET( SRCS
../src/DisplayWidget.cpp
../src/FilterWidget.cpp
../src/MainWindow.cpp
../src/SourceWidget.cpp
../src/main.cpp
)

SET( GUIS
../gui/DisplayWidget.ui
../gui/FilterWidget.ui
../gui/MainWindow.ui
../gui/SourceWidget.ui
)

QT5_WRAP_UI( GUI_SRCS
${GUIS}
)

ADD_EXECUTABLE( ${PROJECT_NAME}
	${INCS}
	${SRCS}
	${GUI_SRCS}
)

TARGET_LINK_LIBRARIES( ${PROJECT_NAME} 
	${OpenCV_LIBS}
	Qt5::Widgets
    	Qt5::Core
)
