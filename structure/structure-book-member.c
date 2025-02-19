#include <stdio.h>
// Define a structure named book
struct book {
    int id ;
    char name[50];
    int cost ;
};
int main (){
    // Declare a structure variable
    struct book book1;

    //Assigning values to the structure members
    book1.id=101;
    strcpy(book1.name,"BHAGWAT GEETA");//Copy string to name
    book1.cost = 1000;

    //Display the structure values
    printf("book id :%d\n",book1.id);
    printf("book name :%s\n",book1.name);
     printf("book cost :%.d\n",book1.cost);
     return 0 ;
}