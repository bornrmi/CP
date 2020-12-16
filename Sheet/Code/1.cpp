#include<iostream>
using namespace std;

void originalArr (int a[], int s)
{
  for (int i = 0; i < s; i++)
    {
      cout << a[i] << " ";
    }
    cout<<"\n";
}

void reversedArr (int arr[], int first, int last)
{
  while (first < last)
    {
      int temp = arr[first];
      arr[first] = arr[last];
      arr[last] = temp;
      first++;
      last--;
    }
}

int main ()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
  int size = sizeof (arr) / sizeof (arr[0]);

  // to print original array 
  originalArr (arr, size);

  // reversed array 
  reversedArr (arr, 0, size - 1);
  
  // print the reversed array
  originalArr (arr, size);

  return 0;
}
