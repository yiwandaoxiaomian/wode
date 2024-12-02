cmake_minimum_required(VERSION 3.8)
project(cpp01_topic)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

#############################生成动态库#################################################
file(GLOB TARGET_SRC "src/*.cpp")#macro
set(TARGET_NAME mycat)#macro
add_library(${TARGET_NAME} SHARED ${TARGET_SRC})#generate dynamic library
#######################################################################################

# 安装目标动态库
install(TARGETS ${TARGET_NAME} DESTINATION lib/${PROJECT_NAME})