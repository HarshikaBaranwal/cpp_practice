#include<iostream>
using namespace std;
int main(){
    int a[5], i, product=1;
    for(i=0; i<5; i++){
        scanf ("%d",&a[i]);
        product=product*a[i];
    }
    printf ("the product is:%d", product);
}