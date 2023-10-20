#include <stdio.h>
int main()
{
	FILE *file;
	char data[100];
	//opening the file for writing
	file = fopen("ksp.txt", "w");
	if(file==NULL)
	{
		printf("\nError opening file for writing.");
		return 1;
	}
	//writing into the file
	printf("\nWrite in file (max 100 characters) : ");
	scanf("%[^\n]", data);
	fprintf(file, "%s", data);
	fclose(file);
	
	//opening the file for reading
	file = fopen("ksp.txt", "r");
	if(file == NULL)
	{
		printf("\nError opening file for reading.");
		return 1;
	}
	//reading from file
	printf("\nData written into that file : ");
	while(fgets(data, sizeof(data), file) != NULL)
	{
		printf("\n%s", data);
	}
	fclose(file);
	return 0;
}
