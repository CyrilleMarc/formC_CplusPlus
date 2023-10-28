#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "file.h" 
#include "common/common.h"

int init_file(const char *fileName, char *content) {
	FILE  *file = fopen(fileName, "w");
	if (NULL != file) {
		logger_log(LOG_DEBUG, __FUNCSIG__, "File not found");
		return 1;
	}
	fputs(*content, file);

	fclose(file);
	return 0;
}