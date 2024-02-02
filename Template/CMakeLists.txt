# set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_C_STANDARD 17)
# set(CMAKE_C_STANDARD_REQUIRED ON)

enable_testing()

set(SRC
	"${CMAKE_CURRENT_LIST_DIR}/source/Template.cpp"
)

set(INC
	"${CMAKE_CURRENT_LIST_DIR}/include"
)

add_executable(Template)

target_sources(Template PRIVATE
	${SRC}
)

target_include_directories(Template PRIVATE
	${INC}
)

# target_link_libraries(Template PRIVATE
# 	-m
# )

add_subdirectory(tests)

# if(CMAKE_VERSION VERSION_GREATER 3.12)
#   set_property(TARGET Template PROPERTY CXX_STANDARD 20)
# endif()
