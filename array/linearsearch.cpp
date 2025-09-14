#include<iostream>
using namespace std;

bool linerSearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if (arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[5] = {4,5,6,8,9};
    int key;
    cout<<"enter the value of key";
    cin>>key;

    bool found = linerSearch(arr,5,key);
    if(found){
        cout<< "key is present ";
    }else{
        cout<<"key is not presetn";
    }

    
}