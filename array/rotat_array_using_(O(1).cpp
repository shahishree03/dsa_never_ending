#include <iostream> 
#include<vector>
using namespace std;

// Function to left rotate arr[] of size n by d
void leftRotate(vector<int> arr, int d, int n)
{
     if (d == 0)
        return;
    int mod = d % n;
    for (int i = 0; i < n; i++)
        cout << (arr[(n-mod + i) % n]) << " ";
 
    cout << "\n";
    
}

 void rightRotate(vector<int> arr, int d, int n)
{
     if (d == 0)
        return;
    int mod = d % n;
    for (int i = 0; i < n; i++)
        cout << (arr[(mod + i) % n]) << " ";
 
    cout << "\n";
    
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
