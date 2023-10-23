#include <stdio.h>
#include <stdlib.h>

#include <common/common.h>

int hash_table_c(char* string_to_hash) {
    int i = 0;
    int hashed_number = 0;

    for (i = 0; string_to_hash[i] != '\0'; ++i) {
        hashed_number += string_to_hash[i]; 
    }

    hashed_number %= 100;
    return hashed_number;
}

int main() {
    logger_set_current_level(LOG_INFO);
    logger_log(LOG_DEBUG, __FUNCSIG__, "");

    char name[] = "phrase à hasher";
    int hashed_number = hash_table_c(name);
    if(0 != hashed_number){
        logger_log(LOG_INFO, __FUNCSIG__, "hashed number ");
        return hashed_number;
    }
    else {
        logger_log(LOG_DEBUG, __FUNCSIG__, "hashed number failure");
        return 0;
    }

}
