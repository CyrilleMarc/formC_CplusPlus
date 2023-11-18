#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "file.h" 
#include "common/common.h"

char *convert_file(const char* fileName, const char *fileName2)
{
	FILE* fileIn = fopen(fileName, "r");
	if (NULL == fileIn)
	{
		logger_log(LOG_DEBUG, __FUNCSIG__, "File not found\n");
		return NULL;
	}
	FILE* fileOut = fopen(fileName2, "w");
	if (NULL == fileOut)
	{
		logger_log(LOG_DEBUG, __FUNCSIG__, "File not found\n");
		return NULL;
	}

	char line[1024];
	while (fgets(line, sizeof(line), fileIn))
	{
		fputs(line, fileOut);
	}

	fclose(fileIn);
	fclose(fileOut);

}
	

