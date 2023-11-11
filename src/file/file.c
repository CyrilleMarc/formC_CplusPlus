#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "file.h" 
#include "common/common.h"

int init_file(const char *fileName, const char *content) {
	FILE *file = fopen(fileName, "w");
	if(NULL == file) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "File not found\n");
		return 1;
	}
	fputs(content, file);
	if (fputs(content, file) == EOF) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "File not found\n");
		return -1;
	}
	fclose(file);
	if (fclose(file) == EOF) {
		return 1;
	}
	return 0;
}