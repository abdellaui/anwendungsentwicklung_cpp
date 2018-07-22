CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT (01_aufgabe)
set(CMAKE_INCLUDE_CURRENT_DIR on)
set(CMAKE_AUTOMOC ON)


FIND_PACKAGE(Qt5Widgets REQUIRED)

ADD_EXECUTABLE(
01_aufgabe
main.cpp
Adresseingabe.cpp
Adresseingabe.h
Adressanzeige.cpp
Adressanzeige.h
ownValidator.h
ownValidator.cpp
)

QT5_USE_MODULES(
	01_aufgabe Widgets
)
