#include<bits/stdc++.h>
std::vector<std::vector<int>> getAllSubarrays(const std::vector<int>& arr )
{
    std::vector<std::vector<int>> subarrays;
    int n = arr.size();
    for(int i=0;i<n;i++)
    {
        std::vector<int> subarray;
        for(int j=i;j<n;j++)
        {
            subarray.push_back(arr[j]);
            subarrays.push_back(subarray);
        }
    }
    return subarrays;
}
int main()
{
    std::vector<int> arr ={1,2,3};
    std::vector<std::vector<int>> subarrays = getAllSubarrays(arr);
    for(const auto& subarray : subarrays){
        for (const auto& element : subarray)
        {
            std::cout<<element<<" ";
        }
        std::cout<<std::endl;
    }
    
}
