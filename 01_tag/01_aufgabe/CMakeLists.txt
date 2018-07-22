CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT (01_aufgabe)

ADD_EXECUTABLE(
01_aufgabe
dynamicPrint.h
staticPrint.h
main.cpp
)

ADD_LIBRARY( dllLibPrint SHARED
	dynamicPrint.cpp
)

ADD_LIBRARY( sllLibPrint
	staticPrint.cpp
)

TARGET_LINK_LIBRARIES(
	01_aufgabe dllLibPrint sllLibPrint
)