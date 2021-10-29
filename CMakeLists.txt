CMAKE_MINIMUM_REQUIRED(VERSION 3.0) #cmake最低版本需求，不加入此行会受到警告信息

PROJECT(HELLO) #项目名称

AUX_SOURCE_DIRECTORY(./src SRC_LIST) #把当前目录(.)下所有源代码文件和头文件加入变量SRC_LIST

INCLUDE_DIRECTORIES(./include) #添加include 目录里的头文件
INCLUDE_DIRECTORIES(./lib) #添加本项目内部的静态库里的头文件

set(libsrc ${PROJECT_SOURCE_DIR}/../myLib/myMath)
message( -----------------   ${libsrc})

INCLUDE_DIRECTORIES(${libsrc}/include) #添加第三方库目录里的头文件

add_subdirectory(./lib/myUtil) #添加自己的静态库

link_directories(${libsrc}/build) # 要放在 link_libraries 之前 不然找不到目标静态文件
link_libraries(${libsrc}/build/libMyMaths.a)
ADD_EXECUTABLE(hello ${SRC_LIST}) #生成应用程序 hello

# 添加链接库
target_link_libraries(hello libMyMaths.a myUtil)
