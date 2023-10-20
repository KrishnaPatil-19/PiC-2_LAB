#include <stdio.h>
int main()
{
	FILE* fptr;
	char str[100], res[100];
	fptr = fopen("filename.txt", "w");
	if(fptr==NULL)
	{
		printf("\nError opening file.");
		return 1;
	}
	printf("\nEnter something to write in file : ");
	scanf("%[^\n]", str);
	fprintf(fptr,"%s", str);
	fclose(fptr);
	
	fptr = fopen("filename.txt", "r");
	if(fptr==NULL)
	{
		printf("\nError opening file.");
		return 1;
	}
	printf("\nFile's Content : ");
	while(fgets(str, sizeof(str), fptr) != NULL)
	{	
		printf("\n%s", str);
	}
	fclose(fptr);
	return 0;
}
