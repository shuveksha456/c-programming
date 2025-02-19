#include <stdio.h>
// Define a structure named student
struct student {
    int id ;
    char name[50];
    float marks ;
};
int main (){
    // Declare a structure variable
    struct student student1;

    //Assigning values to the structure members
    student1.id=101;
    strcpy(student1.name,"John Doe");//Copy string to name
    student1.marks=89.5;

    //Display the structure values
    printf("student id :%d\n",student1.id);
    printf("student name :%s\n",student1.name);
     printf("student marks :%.1f\n",student1.marks);
     return 0 ;
}