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
#include "sys_time.h"
#include "sys_logger.h"

extern INT32 app_component_init(VOID);

extern INT32 app_component_start(VOID);

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

    app_component_init();

    app_component_start();

    while (1)
    {
       usleep(40 * 1000);
    }
    
    return 0;
}
