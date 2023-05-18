/**
 * @file startup.c
 * @author JohnnyWong (1426384536@qq.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-18
 * 
 * @copyright Copyright (c) 2023
 * 
 */
#include <stdio.h>
#include "sys_common.h"
#include "sys_logger.h"

/**
 * @brief main
 * 
 * @param argc 
 * @param argv 
 * @return INT32 
 */
INT32 main(int argc, char *argv[])
{
    /* code */
    while (1)
    {
        LOG_MESSAGE(LOG_INFO, "time sleep");
        LOG_MESSAGE(LOG_ERROR, "time LOG_ERROR");
        LOG_MESSAGE(LOG_DEBUG, "time LOG_DEBUG");
        LOG_MESSAGE(LOG_WARNING, "time LOG_WARNING");
        LOG_MESSAGE(LOG_ERROR, "time LOG_ERROR");
        sleep(1);
    }
    
    return 0;
}
