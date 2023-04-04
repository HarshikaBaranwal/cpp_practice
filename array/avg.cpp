#include<iostream>
using namespace std;
int main(){
    int a[5],i,sum=0, avg;
    printf("enter an array:");
    for(i=0; i<5; i++){
        scanf ("%d",&a[i]);
        sum=sum+a[i];
    }
    avg=sum/5;
    printf ("avg of array is:%d",avg);
}