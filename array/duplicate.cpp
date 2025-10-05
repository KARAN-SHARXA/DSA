#include<iostream>
using namespace std;
void findduplicate(int arr[],int size){
  int ans = 0;
  for(int i = 0;i<size;i++){
    ans=ans^arr[i];
  }
  for(int i =1;i<size;i++){
    ans = ans^i;
  }

  cout << "Duplicate:" << ans << endl;



}
int main(){
  int arr[] = {5,1,2,3,4,2};
  int size = sizeof(arr)/sizeof(arr[0]);
  findduplicate(arr,size);
}