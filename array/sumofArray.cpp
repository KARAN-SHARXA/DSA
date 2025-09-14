#include<iostream>
using namespace std;
int sumofarray(int arr[],int size){
    int s=0;
    for(int i =0 ;i<size;i++){
        s=s+arr[i];
    }
    return s;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = sumofarray(arr,size);
    cout<<"sum of array = " << sum <<endl;

}
