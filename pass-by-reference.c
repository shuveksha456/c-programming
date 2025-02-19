//swapping between two variables
# include <stdio.h>
//function to swap two number using pass by reference
void swap (int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 5 , y = 10;
    swap(&x , &y); //modifies x and y
    printf("x : %d, y : %d\n",x , y);//output :x=10 y=5
    return 0;
}