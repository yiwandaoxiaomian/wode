cmake_minimum_required(VERSION 3.8)
project(cpp01_topic)

# find dependencies
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

#############################生成动态库#################################################
file(GLOB TARGET_SRC "*.cpp")#macro
set(TARGET_NAME mydog)#macro
add_library(${TARGET_NAME} SHARED ${TARGET_SRC})#generate dynamic library
#######################################################################################

# 安装目标动态库
install(TARGETS ${TARGET_NAME} DESTINATION lib/${PROJECT_NAME})

