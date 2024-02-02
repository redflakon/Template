cmake_minimum_required(VERSION 3.12)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(TESTS_SOURCE
	"${CMAKE_CURRENT_LIST_DIR}/test.cpp"
	"${CMAKE_CURRENT_LIST_DIR}/../source/Source.cpp"
)

set(TESTS_INCLUDE
	"${CMAKE_CURRENT_LIST_DIR}/../include"
)

add_executable(Tests)

target_sources(Tests PRIVATE
	${TESTS_SOURCE}
)

target_include_directories(Tests PRIVATE
	${TESTS_INCLUDE}
)

target_link_libraries(Tests PRIVATE
	GTest::gtest_main
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# add_test(
# 	NAME Tests
# 	COMMAND Tests
# )
