// Total Number of Occurrences

#include <iostream>
using namespace std;
int fisrtOcc(int arr[], int n, int key)
{
  int start = 0;
  int end = n - 1;
  int ans = -1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      end = mid - 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else if (arr[mid] > key)
    {
      end = mid - 1;
    }

    mid = start + (end-start)/2;
  }
  return ans;
}

int lastOcc(int arr[], int n, int key)
{
  int start = 0;
  int end = n - 1;
  int ans = -1;
  int mid = start + (end - start) / 2;

  while (start <= end)
  {
    if (arr[mid] == key)
    {
      ans = mid;
      start = mid + 1;
    }
    else if (arr[mid] < key)
    {
      start = mid + 1;
    }
    else if (arr[mid] > key)
    {
      end = mid - 1;
    }

     mid = start + (end-start)/2;
  }
  return ans;
}

int main()
{
  int arr[6] = {1, 2, 3, 3, 3, 5};
  int n = 6;
  int key = 3;

  int first = fisrtOcc(arr, n, key);
  int last = lastOcc(arr, n, key);

  if (first == -1)
  {
    cout << "Elemet not found";
  }
  else
  {
    int total = (last - first) + 1;
    cout << "First Occurrence of " << key << " is at index " << first << endl;
    cout << "Last Occurrence of " << key << " is at index " << last << endl;
    cout << "Total Number of Occurrences = " << total << endl;
  }

  return 0;
}