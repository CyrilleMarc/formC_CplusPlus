#include <stdlib.h>
#include <stdio.h>

#include <common/common.h>
#include <file/file.h>



int main(int argc, char *argv[])
{
    logger_set_current_level(LOG_DEBUG);
    logger_log(LOG_DEBUG, __FUNCSIG__, argv[0]);

    const char *fileName = "C:/Users/cyril/Desktop/dataFiles/wordList.txt";
    const char *content = "test_de_fichier";


    init_file(fileName, content);

    return 0;

}
