#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n], i=0;
    for(i=0; i<n; i++){
        cin>>arr[i];

    }
    for(i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;

}