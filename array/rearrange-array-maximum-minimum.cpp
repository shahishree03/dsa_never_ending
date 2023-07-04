#include <iostream> 
using namespace std;
int* rearrange(int arr[], int n)
{
  int* a = new int[100];
  int j=0;
 int left=0;
 int right=n-1;
 
  for(int i=0;i<n;i+=2)
  {
      a[i] = arr[right];
      right--;
      a[i+1]=arr[left];
      left++;
  }
 return a;
}
int main()
{
    int arr[] = { 1, 2, 3, 14, 15, 46, 57, 78, 99 };//{99,1,78,2,57,3,46,14,15}
    int n = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Original Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
 
   arr = rearrange(arr,n);
 
    cout << "\nModified Array\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

  delete[] arr;
 
   
   
}
