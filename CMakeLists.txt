cmake_minimum_required (VERSION 3.8)

project (SFML_Game)

find_package(SFML 2.4 COMPONENTS audio graphics window system REQUIRED)

add_executable (SFML_Game 
main.cpp 
Game.h
Game.cpp 
Phase.h 
Phase.cpp 
GamePhase.h 
GamePhase.cpp)

target_link_libraries(SFML_Game sfml-audio sfml-graphics sfml-window sfml-system)

set_target_properties(SFML_Game PROPERTIES VS_DEBUGGER_WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})