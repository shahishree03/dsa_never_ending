#include <iostream> 
#include<vector>
using namespace std;

// Function to left rotate arr[] of size n by d
void leftRotate(vector<int> arr, int d, int n)
{
    if (d == 0)
        return;
    d = d % n;
    //arr= fgh(arr, d, n);
    vector<int> ar;
     for(int i=0;i<d;i++)
     {
         ar.push_back(arr[n-d+i]);
     }
     for(int i=0;i<n-d;i++)
     {
         ar.push_back(arr[i]);
     }
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    
}

 void rightRotate(vector<int> arr, int d, int n)
{
    if (d == 0)
        return;
    d = d % n;
    vector<int> ar;
     for(int i=d;i<n;i++)
     {
         ar.push_back(arr[i]);
     }
     for(int i=0;i<d;i++)
     {
         ar.push_back(arr[i]);
     }
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    
}

// Function to print an arra
int main()
{
    vector<int> arr{ 1, 2, 3, 4, 5,6,7};//6,7,1,2,3,4,5 //3,4,5,6,7,1,2

    int d = 2;
 
    // Function call
    cout<<"\n"<<"left: ";
   leftRotate(arr,d,7);
   cout<<"\n";
    cout<<"right: ";
    rightRotate(arr, d, 7);
    //printArray(arr, 9);
   
}
