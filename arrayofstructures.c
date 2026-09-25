#include<stdio.h>
typedef struct Student {
    char name[50];
    int age;
    float gpa;
} Student;
int main()
{
    Student students[10]; 
    printf("Array of structures initialized.\n");
    return 0;
}