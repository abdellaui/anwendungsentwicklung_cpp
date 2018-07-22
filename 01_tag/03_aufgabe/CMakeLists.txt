CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT (03_aufgabe)
set(CMAKE_INCLUDE_CURRENT_DIR on)
set(CMAKE_AUTOMOC ON)


FIND_PACKAGE(Qt5Widgets REQUIRED)

ADD_EXECUTABLE(
03_aufgabe
document.h
document.cpp
observer.h
observer.cpp
main.cpp
)

QT5_USE_MODULES(
	03_aufgabe Widgets
)

TARGET_LINK_LIBRARIES(
	03_aufgabe
)