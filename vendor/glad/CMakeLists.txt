cmake_minimum_required (VERSION 3.8)

set(HEADER_FILES ${PROJECT_SOURCE_DIR}/Dependencies/glad/include/glad/glad.h ${PROJECT_SOURCE_DIR}/Dependencies/glad/include/KHR/khrplatform.h)

add_library(glad
	src/glad.c

	${HEADER_FILES}
)

target_include_directories(glad PRIVATE ${PROJECT_SOURCE_DIR}/Dependencies/glad/include)