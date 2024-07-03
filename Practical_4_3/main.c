#include <stdio.h>
#include <stdlib.h>

/*Define a structure called "Student" with members for full name, student number, subject title,
and marks in three subjects. Write a program to create an array of five students based on user
input, assign values to struct members, and print the details of any given student.*/

struct Student /*Initialize structure*/
{
    char name[20];
    int student_number;
    char subject_title[20];
    int math_mark;
    int physics_mark;
    int english_mark;
};

int main()
{
    struct Student Student[5]; /*Create a Student array of 5*/

    for (int x=1; x<6; x++)/*Assign values to students*/
    {
        printf("What is your name: ");
        scanf("%s", &Student[x].name);
        printf("What is your student number: ");
        scanf("%d", &Student[x].student_number);
        printf("What is your subject title: ");
        scanf("%s", &Student[x].subject_title);
        printf("What is your math mark: ");
        scanf("%d", &Student[x].math_mark);
        printf("What is your physics mark: ");
        scanf("%d", &Student[x].physics_mark);
        printf("What is your english mark: ");
        scanf("%d", &Student[x].english_mark);
    }
    int number;
    printf("Which student details do you want to view by there when they were inputed from when student was inputed(1 to 5): ");
    scanf("%d", &number); /*Identify who's detail you want*/

    if (number==1)
    {
        printf("%s\n", Student[1].name);
        printf("%d\n", Student[1].student_number);
        printf("%s\n", Student[1].subject_title);
        printf("%d\n", Student[1].math_mark);
        printf("%d\n", Student[1].physics_mark);
        printf("%d\n", Student[1].english_mark);
    }
    else if (number==2)
    {
        printf("%s\n", Student[2].name);
        printf("%d\n", Student[2].student_number);
        printf("%s\n", Student[2].subject_title);
        printf("%d\n", Student[2].math_mark);
        printf("%d\n", Student[2].physics_mark);
        printf("%d\n", Student[2].english_mark);
    }
    else if (number==3)
    {
        printf("%s\n", Student[3].name);
        printf("%d\n", Student[3].student_number);
        printf("%s\n", Student[3].subject_title);
        printf("%d\n", Student[3].math_mark);
        printf("%d\n", Student[3].physics_mark);
        printf("%d\n", Student[3].english_mark);
    }
    else if (number==4)
    {
        printf("%s\n", Student[4].name);
        printf("%d\n", Student[4].student_number);
        printf("%s\n", Student[4].subject_title);
        printf("%d\n", Student[4].math_mark);
        printf("%d\n", Student[4].physics_mark);
        printf("%d\n", Student[4].english_mark);
    }
    else if (number==5)
    {
        printf("%s\n", Student[5].name);
        printf("%d\n", Student[5].student_number);
        printf("%s\n", Student[5].subject_title);
        printf("%d\n", Student[5].math_mark);
        printf("%d\n", Student[5].physics_mark);
        printf("%d\n", Student[5].english_mark);
    }




}
