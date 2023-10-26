#include <stdlib.h>

#include <common/common.h>
#include <file/file.h>

int init_file(const char* fileName);

int main(int argc, char *argv[])
{
    logger_set_current_level(LOG_DEBUG);
    logger_log(LOG_DEBUG, __FUNCSIG__, argv[0]);

    const char* fileName = "list.txt";
    init_file(&fileName);

    return 0;

}
