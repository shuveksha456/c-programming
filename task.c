// WAP to find the minimum and maximum element im an array
//E.g:[10, 25, 986, 78]
//Output:
//Minimum : 10
//Maximum : 986

#include <stdio.h>
int main(){
    int arr[5]={10, 25, 986, 78};
    int min = arr[0];
    int max = arr[0];
    for(int i = 0; i < 4; i++)  
    {
        if (arr[i] <= min){
            min = arr[i];
        }
        if (arr[i] >= max){
            max = arr[i];
        }
    }
    printf("minimum:%d\n",min);
    printf("maximum:%d\n",max);
}