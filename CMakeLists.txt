cmake_minimum_required(VERSION 3.26.0)

project(blinky
	VERSION 0.1
	LANGUAGES C
)

add_executable(${PROJECT_NAME}
	src/blinky.c
)

target_include_directories(${PROJECT_NAME}
	PRIVATE inc
)
