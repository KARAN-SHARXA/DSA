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



// ans = 0 ^ 2 = 2
// ans = 2 ^ 3 = 1
// ans = 1 ^ 2 = 3
// ans = 3 ^ 3 = 0
// ans = 0 ^ 4 = 4
// ans = 4 ^ 4 = 0
// ans = 0 ^ 5 = 5
// ans = 5 ^ 6 = 3
// ans = 3 ^ 5 = 6
// ans = 6 ^ 6 = 0
// ans = 0 ^ 8 = 8
