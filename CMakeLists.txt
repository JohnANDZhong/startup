# 定义模块1的库
add_library(startup
    src/startup.c
)

# 设置模块1的头文件路径
target_include_directories(startup PUBLIC include/sys)
target_include_directories(startup PUBLIC include/logger)
target_include_directories(startup PUBLIC include/time)
