//WAP to print the marks of 5 students
// #include <stdio.h>
// int main(){
//     int num [5]={40, 50, 77, 90, 34};
//     int i;
//     for ( i = 0; i < 5; i++)
//     {
//         printf("%d\n",num[i]);
//     }
//     // printf("%d\n",num[0]);
//     // printf("%d\n",num[1]);
//     // printf("%d\n",num[2]);
//     // printf("%d\n",num[3]);
//     // printf("%d\n",num[4]);
//     return 0;
// }

//WAP to print the marks of 5 students
//i. average marks of students
//ii. find the lowest and highest marks
//iii. search 50 and display the result (Found:50),If not found display (Sorry:50 not found)
#include <stdio.h>
int main(){
    //initialize an array
    float marks[5]//={45.5,10.5,35.5,40,31};
    float average = 0;
    float sum  = 0;
    float small , large ;
    // display the marks
    for(int i = 0; i < 5; i++){
        printf("%.1f\n",marks[i]);
        //add marks in every subject
        sum = sum + marks[i];
    }
    average = sum / 5;
    printf("Average no. is %1f\n",average);
    return 0;
    }