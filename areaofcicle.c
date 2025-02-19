#include <stdio.h> //include the standard input output library
#include <math.h>
#define PI 3.14159 //define a symbolic constant for pi
int main(){ //Main function where program execution begins
  float radius, area, ; //Declare variable to store radius and area
  //prompt the user to enter the radius
  printf("enter the radius of the circle");
  scanf("%f",&radius); //Read the user input anad store it in the radius variable 
  //calculate the area of the circle using the formula Area = pi *radius^2
  area = PI * radius * radius;
  //Display the calculated area
  printf("the area of the circle with radius %.2f is :%.2f\n",radius,area);
  return 0; //return 0 to indicate that the program ended successfully
}
