#include <stdio.h>
#include <string.h>
union student
{
	char name[20];
	int rollno;
	float marks;
}stud;
int main()
{
	strcpy(stud.name, "Krishna");
	printf("\nStudent Name = %s,", stud.name);
	stud.rollno = 59;
	printf("\nStudent Roll No = %d,", stud.rollno);
	stud.marks = 85.43;
	printf("\nStudent Marks = %.2f", stud.marks);
	return 0;
}
