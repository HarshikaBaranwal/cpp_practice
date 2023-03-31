#include<iostream>
using namespace std;
int main(){
    int arr[5], i;
    printf ("enter the elements of an array:");
    //input an array
    for (i=0; i<5; i++){
        scanf ("%d", &arr[i]);
    }
    //output an array
    for (i=0; i<5; i++){
        printf ("%d\t", arr[i]);
    }

    
}