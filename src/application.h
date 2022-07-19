
/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "logging.h"

void setup()
{
    lv_init();

    hal_setup();

    lv_demo_widgets();
}

long long millis = 0;

void loop()
{
    while (1)
    {
        debug_log(millis++);
        hal_loop();
    }
}