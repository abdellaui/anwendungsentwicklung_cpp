CMAKE_MINIMUM_REQUIRED (VERSION 2.8)

PROJECT (YourProjectNameHere)

# Bibliotheken finden
SET(Boost_USE_STATIC_LIBS ON)
FIND_PACKAGE( Boost 1.57 COMPONENTS system date_time filesystem program_options serialization thread unit_test_framework chrono atomic REQUIRED )

FIND_PACKAGE( OpenCV REQUIRED )
FIND_PACKAGE( Shark REQUIRED )
FIND_PACKAGE( Qt5Widgets )

# Definitionen und Variablen setzen
SET(CMAKE_AUTOMOC ON)

ADD_DEFINITIONS(-DNOMINMAX) # Sonst bekommt Shark Probleme


INCLUDE_DIRECTORIES(
	${Boost_INCLUDE_DIRS} 
	${OpenCV_INCLUDE_DIRS}
	${CMAKE_CURRENT_BINARY_DIR}
	${SHARK_INCLUDE_DIRS}
	<YourOwnIncludeDirs>
)
	
# Header Files
SET( INCS
	
)

# Source Files
SET( SRCS
	
)

# UI Files
SET( GUI
	
)

# Executable erstellen und alles nötige dagegen Linken
QT5_WRAP_UI( GUI_SRCS
	${GUI}
)

ADD_EXECUTABLE( ${PROJECT_NAME}
	${INCS}
	${SRCS}
	${GUI_SRCS}
)

TARGET_LINK_LIBRARIES( ${PROJECT_NAME} 
	${SHARK_LIBRARIES}
	${Boost_LIBRARIES}
	${OpenCV_LIBS}
)

QT5_USE_MODULES( ${PROJECT_NAME}
	Widgets
)