#include<iostream>
using namespace std;
int findUnique(int arr[],int size){
    int ans = 0;
    for(int i = 0;i<size;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {2,3,2,3,4,4,5,6,5,6,8};
    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"uinque element is the arreay is" << findUnique(arr,size) <<endl;
}