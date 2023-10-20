#include <stdio.h>
#include <string.h>
struct student
{
	char name[20];
	int rollno;
	float marks;
}stud;
int main()
{
	strcpy(stud.name, "Krishna");
	stud.rollno = 59;
	stud.marks = 85.43;
	printf("\nStudent Name = %s, \nStudent Roll No = %d, \nStudent Marks = %.2f", stud.name, stud.rollno, stud.marks);
	return 0;
}
