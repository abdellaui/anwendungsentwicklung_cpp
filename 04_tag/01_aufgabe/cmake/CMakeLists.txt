CMAKE_MINIMUM_REQUIRED(VERSION 2.8)


set(CMAKE_PREFIX_PATH ~/Library/Qt/5.10.0/clang_64)


PROJECT (01_aufgabe)

set(CMAKE_INCLUDE_CURRENT_DIR on)

set(CMAKE_AUTOMOC ON)


FIND_PACKAGE(
Qt5Widgets REQUIRED
)


FIND_PACKAGE(
Qt5Sql REQUIRED
)


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
../include/SQLManager.h
)


SET( SRCS
../include/main.cpp
../include/Adresseingabe.cpp
../include/ownValidator.cpp
../include/TestMainWindow.cpp
../include/CSVManager.cpp
../include/AdressModel.cpp
../include/SQLManager.cpp
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
	Qt5::Sql
)
