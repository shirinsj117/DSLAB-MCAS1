#include<stdio.h>
#include<string.h>
struct student
{
char name[50];
int age;
int id;
};
int main()
{
struct student student,
strcpy(student.name,"Steeve");
student.id=135;
student.age=21;
printf("\nStudent Details\n");
printf("Name:%s\n",student.name);
printf("Id:%d\n",student.id);
printf("Age:%d\n",student.age);
return 0;
}
