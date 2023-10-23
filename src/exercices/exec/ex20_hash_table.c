#include <stdio.h>
#include <stdlib.h>

#include <common/common.h>

//int hash_table_c(char* string_to_hash);
//int simple_hash(const char* key);
unsigned long DJB2_hash(unsigned char* string);
//unsigned long FNV_1_hash(const char* string);



/*
int hash_table_c(char* string_to_hash) {
    int i = 0;
    int hashed_number = 0;

    for (i = 0; string_to_hash[i] != '\0'; ++i) {
        hashed_number += string_to_hash[i];
    }

    hashed_number %= 100;
    return hashed_number;
}*/


// Algorithmes de hachage

//Hachage simple (somme des caract�res ASCII) :
/*
int simple_hash(const char* key) {
    int hashed_key = 0;
    for (int i = 0; key[i] != '/0'; ++i) {
        hashed_key += key[i];
    }
    return hashed_key;
}*/

//Hachage DJB2 (Bernstein) :
unsigned long DJB2_hash(unsigned char* string) {
    unsigned long hash = 4235; //Arbitraire
    int c;

    while ((c = *string++)) {
        hash = ((hash << 5) + hash) + c; // x2^5 + hash (hash x 33)= + (valeur ASCII de c) sur chaque caract�re.
    }
    return hash;
}

//Hachage FNV-1 (Fowler-Noll-Vo) :

/*unsigned long FNV_1_hash(const char* string) {
    unsigned long hash = 233;
}*/

int main() {
    logger_set_current_level(LOG_INFO);
    logger_log(LOG_DEBUG, __FUNCSIG__, "");

    char name[] = "phrase � hasher";
    //int hashed_number = hash_table_c(name);
    unsigned long hashed_number = DJB2_hash(name);
    if (0 != hashed_number) {
        logger_log(LOG_INFO, __FUNCSIG__, "hashed number ");
        printf("La phrase hach�e est : %lu", hashed_number);
        return hashed_number;
    }
    else {
        logger_log(LOG_DEBUG, __FUNCSIG__, "hashed number failure");
        return 0;
    }

}