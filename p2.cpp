//A.  Write a program to prints array elements in reverse orders  using pointers.
#include<iostream>
using namespace std;
int main(){
    int arr[5] = {10 ,20 ,30 ,40 ,50};
    int *ptr = &arr[4]; // Pointer pointing to the last element of the array
    cout<<"array elemetn in reverne irder:";
    for (int i=4;i>=0;i--){
        cout<<*ptr<<" " ;
        ptr--; // Move the pointer to the previous element
    }

}