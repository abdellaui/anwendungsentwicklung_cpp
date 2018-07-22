CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT (01_aufgabe)

set(CMAKE_INCLUDE_CURRENT_DIR on)

set(CMAKE_AUTOMOC ON)


FIND_PACKAGE(Qt5Widgets REQUIRED)
FIND_PACKAGE(Qt5Core REQUIRED)

INCLUDE_DIRECTORIES(    
	${CMAKE_CURRENT_BINARY_DIR}
	../include
)

SET( INCS
../include/MyMainWindow.h
../include/InsertSort.h
../include/MyWidget.h
)


SET( SRCS
	../src/main.cpp
	../src/MyMainWindow.cpp
	../src/InsertSort.cpp
	../src/MyWidget.cpp
)

SET( GUIS
../gui/MyMainWindow.ui
../gui/MyWidget.ui
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
	Qt5::Widgets
    Qt5::Core
)
