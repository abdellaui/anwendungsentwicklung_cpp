CMAKE_MINIMUM_REQUIRED(VERSION 2.8)


#SET (CMAKE_PREFIX_PATH /usr/local/Cellar/qt/5.10.1/)


PROJECT (01_aufgabe)

set(CMAKE_INCLUDE_CURRENT_DIR on)

set(CMAKE_AUTOMOC ON)


FIND_PACKAGE(Qt5Widgets REQUIRED)

INCLUDE_DIRECTORIES(
	${CMAKE_CURRENT_BINARY_DIR}
	../include
)

SET( INCS
../include/Adresseingabe.h
../include/ownValidator.h
../include/TestMainWindow.h
../include/CSVManager.h
../include/AdressModel.h
)


SET( SRCS
../include/main.cpp
../include/Adresseingabe.cpp
../include/ownValidator.cpp
../include/TestMainWindow.cpp
../include/CSVManager.cpp
../include/AdressModel.cpp
)

SET( GUIS
../gui/TestMainWindow.ui
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
)
