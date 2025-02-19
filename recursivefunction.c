#include <stdio.h>
//recursive function to calculate factorial
int factorial(int n){
//base case
if (n == 1 || n == 0){
    return 1;
}
else{
    //recursive case
    return n * factorial(n-1);
}
}
int main(){
    int number = 5;
    int result = factorial(number);
    printf("factorial of %d is:%d\n",number,result);
    return 0;
}