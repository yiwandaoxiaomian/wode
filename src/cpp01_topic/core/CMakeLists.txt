cmake_minimum_required(VERSION 3.8)
project(cpp01_topic)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

add_subdirectory("src")#add sondirectory
# find dependencies
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
 

# #添加头文件路径，跨功能包要用
# file(GLOB HEADERS "${CMAKE_CURRENT_SOURCE_DIR}/include/*.h")
# install(FILES ${HEADERS} DESTINATION include/${PROJECT_NAME})