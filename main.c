#include <stdio.h>

int main()
{ 

	char* filename = "input.txt";
	
	char buffer[256];

	FILE *fp = fopen(filename, "r");
	if(fp)
	{
		while ((fgets(buffer, 256, fp)) != NULL)
		{
			printf("%s",buffer);
		}
		fclose(fp);
	}
}	
