CMAKE_MINIMUM_REQUIRED(VERSION 2.8)


PROJECT (01_aufgabe)

set(CMAKE_INCLUDE_CURRENT_DIR on)

set(CMAKE_AUTOMOC ON)

FIND_PACKAGE(
Qt5Core REQUIRED
)
FIND_PACKAGE(
Qt5Widgets REQUIRED
)


FIND_PACKAGE(
Qt5Network REQUIRED
)


INCLUDE_DIRECTORIES(
	${CMAKE_CURRENT_BINARY_DIR}
	../include
)

SET( INCS
../include/MyClient.h
)


SET( SRCS
../include/main.cpp
../include/MyClient.cpp
)


ADD_EXECUTABLE( ${PROJECT_NAME}
	${INCS}
	${SRCS}
)

TARGET_LINK_LIBRARIES( ${PROJECT_NAME} 
	Qt5::Widgets
	Qt5::Network
	Qt5::Core
)
