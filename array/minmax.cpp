#include<iostream>
#include<limits.h>
using namespace std;
int MaxNum(int arr[], int size){
    int max= INT_MIN;
    for(int i=0; i<size; i++){
    if(arr[i]>max){
        max=arr[i];
    }
    }
    return max;
}
int MinNum(int arr[], int size){
    int min= INT_MAX;
    for(int i=0; i<size; i++){
    if (arr[i]<min){
        min=arr[i];
    }
    }
    return min;
}
int main(){
    int size;
    cin>>size;
    int arr[100];
    for( int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"maximum num of an array is: "<<MaxNum(arr,size)<<endl;
     cout<<"minimum num of an array is: "<<MinNum(arr,size)<<endl;
}