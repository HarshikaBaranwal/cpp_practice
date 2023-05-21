#include<iostream>
using namespace std;
int main()
{
    int n, mx=-10;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        mx=max(arr[i], mx);
        cout<< mx<< endl;
    }

}