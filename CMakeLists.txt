cmake_minimum_required(VERSION 3.6)
project(TeParser)
string(TOLOWER ${PROJECT_NAME} project_name)

set(CMAKE_CXX_STANDARD 17)

message(STATUS "${PROJECT_NAME}")

# find_package(Qt5 COMPONENTS
#   PrintSupport 	REQUIRED
#   Widgets 		REQUIRED
#   Svg 			REQUIRED
#   OpenGL 		REQUIRED
# )

set(PROJECT_SOURCE
    main.cxx
)

set(PROJECT_HEADERS
    # parser.h
)

include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}
  Algorithm
#   ${CMAKE_CURRENT_SOURCE_DIR}/..
)

add_executable(${PROJECT_NAME}
  ${PROJECT_SOURCE}
  ${PROJECT_HEADERS}
)
    
target_link_libraries(${PROJECT_NAME}
    teAlgoritms)

add_subdirectory(Algorithm)

# if(BUILD_TESTING)
#   add_subdirectory(Algorithm/Testing/Cxx)
# endif()