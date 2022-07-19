/**
  ******************************************************************************
  * @file    main.c
  * @author  Le Chi Tuyen
  * @version V1.0
  * @date    14-7-2022
  * @brief   Default main function.
  ******************************************************************************
*/


#include "lvgl.h"
#include "app_hal.h"

#include "demos/lv_demos.h"

#include "config.h"

#include "application.h"


int main(void)
{
  setup();
  loop();
}
  
