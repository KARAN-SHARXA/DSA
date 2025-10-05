#include<iostream>
using namespace std;

void uniqueElement(int arr[],int size){
    // a ^ a = 0
    // a ^ 0 = a
    int ans = 0;
    for(int i =0;i<size;i++){
        ans = ans ^ arr[i];
    }
    cout << ans ;
}





int main(){
    int arr[] ={2,3,2,3,4,5,4,5,7};
    int size = sizeof(arr)/sizeof(arr[0]);

    uniqueElement(arr,size);
}