#include <iostream> 
#include<vector>
using namespace std;
void segregate_even_odd(vector<int> arr, int n)
{
    
    vector<int> a;
int count =0;
  for(int i=0;i<n;i++)
  {
      if(arr[i]%2==0)
      {
         a.push_back(arr[i]);
        
      }
      
  }
  for(int i=0;i<n;i++)
  {
      if(arr[i]%2!=0)
      {
         a.push_back(arr[i]);
        
      }
      
  }
 

  
 cout << "modified Array\n";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
 
}
int main()
{
    vector<int> arr{ 1, 2, 3, 14, 15, 46, 57, 78, 99 };//{99,1,78,2,57,3,46,14,15}
    //int n = sizeof(arr) / sizeof(arr[0]);
 
    
 
 segregate_even_odd(arr,9);
 

   
   
}
