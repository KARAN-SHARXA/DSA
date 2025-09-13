#include<iostream>
using namespace std;
void printArray(int arr[], int n){
    for(int i = 0;i<n;i++){
        cout<< arr[i] <<" ";
    }
  cout<<endl;
}
void swapalternative(int arr[] ,int n){
    int i = 0;
    while(i<n-1){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
        
        i=i+2;
    }
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};

    swapalternative(arr,7);
    printArray(arr,7);
}