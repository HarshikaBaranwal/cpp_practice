#include<iostream>
using namespace std;
int binarySearch(int arr[],int n, int key){
   int s=0, e=n;
   while(s<=e){
    int mid=(s+e)/2;
    if(key==arr[mid]){
        return mid;
    }
    else if(arr[mid]> key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
   }
   return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<5; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<binarySearch(arr,n, key)<<endl;
    return 0;
}