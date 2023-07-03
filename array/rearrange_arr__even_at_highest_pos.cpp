#include <bits/stdc++.h>
using namespace std;
void swap(int* a, int* b)
{
    int temp = *a;  //creatingtemp variable to store value as temp and asto provide next value to other
    *a = *b;
    *b = temp;
}
int* rrnge_arr_with_high_position_at_even(int *arr, int n)
{
    
    for(int i=0;i<n-1;i+=2)
    {
       
           if(arr[i]<arr[i+1]){
           swap(&arr[i+1], &arr[i]);//swap if lowest value at poistion at even index
           
       }
    }
  return arr;
    
}
int main()
{
    int arr[8] ={4,0,-5,7,0,7,-6,0};
    
  rrnge_arr_with_high_position_at_even(arr,8);
  int n = sizeof(arr)/sizeof(arr[0]);
  cout<<"size : "<<n<<endl;
    for(int i=0;i<n;i++ )
    {
        cout<<arr[i]<<" ";
    }
    
   //delete[] k;
}
