# add_subdirectory(Formuls)

set(PLUGINS_HEADERS
    parser.hxx
)

set(PLUGINS_SOURCES
    parser.cxx
)

add_library(teAlgoritms STATIC 
  ${PLUGINS_HEADERS}
  ${PLUGINS_SOURCES}
)

# target_include_directories(Algorithm
#   PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
#   ${Boost_INCLUDE_DIR}
# )

# target_link_libraries(Algorithm
    # my_libs
# )
