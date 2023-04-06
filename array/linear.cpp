#include<iostream>
using namespace std;
int linear(int a[], int n, int key){
    for(int i=0; i<n; i++){
        if(a[i]==key){
            return i;
        }
    }
    return 0;

}
int main(){
    int a[5], i, key;
    printf("enter the elements of an array:");
    for(i=0; i<5; i++){
        scanf ("%d",&a[i]);
    }
    printf ("enter the key element:");
    scanf("%d",&key);
    cout<<linear(a, 5, key)<<endl;
}