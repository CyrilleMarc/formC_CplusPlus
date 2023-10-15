#include <stdio.h>
#include <stdlib.h>

#include <common/common.h>

int main()
{
    logger_set_current_level(LOG_INFO);
    logger_log(LOG_DEBUG, __FUNCSIG__, "");
}