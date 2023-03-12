#include<iostream>
using namespace std;
int main(){
    int fact;
    scanf ("%d",&fact);
    for(int i=fact-1; i>=1;i--){
        fact=fact*i;
    
    }
     printf("%d",fact);
    return 0;
}