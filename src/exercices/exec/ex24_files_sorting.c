#include <stdio.h>
#include <stdlib.h>

struct data
{
	char id[24];
	char filter[23];
};

struct data session;

int main()
{
	const char *source = "C:/USers/cyril/Desktop/dataFiles/Session_data.txt";
	const char *destination = "C:/Users/cyril/Desktop/dataFiles/structure_test2.txt";

	FILE *sourceFile = fopen(source, "r");
	FILE *destinationFile = fopen(destination, "a");

	if (NULL == sourceFile || NULL == destinationFile)
	{
		printf("file not found");
	}
	else
	{
		char line[2048];
		while (fgets(line, sizeof(line), sourceFile) != NULL)
		{
			sscanf(line, "%23s %s", session.id, session.filter);
			fprintf(destinationFile, "%s %s\n", session.id, session.filter);
		}
	}
	return 0;
}