#include <iostream>
using namespace std;
int binarySerach(int arr[], int size, int key)
{
  int start = 0;
  int end = size - 1;
  int mid = start + (end - start) / 2;
  while (start <= end)
  {
    if (arr[mid] == key)
    {
      return mid;
    }
    // go to right part
    if (key > arr[mid])
    {
      start = mid + 1;
    }
    // go to left part
    else
    {
      end = mid - 1;
    }
    mid = start + (end - start) / 2;
  }
  return -1;
}
int main()
{
  int even[6] = {2, 4, 6, 8, 12, 18};
  int odd[5] = {3, 8, 11, 14, 16};

  int evenindex = binarySerach(even, 6, 18);
  cout << "index of 18 is " << evenindex << endl;

  int oddindex = binarySerach(odd, 5, 14);
  cout << "index of 14 is " << oddindex << endl;
}