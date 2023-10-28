#include <stdlib.h>

#include <common/common.h>
#include <file/file.h>

int init_file(const char *fileName, char *content);

int main(int argc, char *argv[])
{
    logger_set_current_level(LOG_DEBUG);
    logger_log(LOG_DEBUG, __FUNCSIG__, argv[0]);

    const char fileName = "word_list.txt";
    char *content[] = NULL;
    printf("Enter a word");
    fscan("%c", content);
    if (NULL != content) {
        printf("%c", *content);
    }

    return 0;

}
