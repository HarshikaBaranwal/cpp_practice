#include<iostream>
using namespace std;
int main(){
    int a=0,n;
    cin>>n;
    for( int i=2; i<n; i++){
        if(n%i==0){
            cout<<"non-prime";
            a=1;
            break;
        }

    }
    if(a==0){
        cout<<"prime";
    }
    
}