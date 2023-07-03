#include <bits/stdc++.h>
//using namespace std;

std::vector<int> shift_at_end(std::vector<int> f, int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
       if (f[i] != 0) {
            std::swap(f[j], f[i]);
            j++;
        }
    }
    return f;
    
}
int main()
{
    std::vector<int> c{4,0,-5,7,0,7,-6,0};

    for(auto i: shift_at_end(c,8))
    {
        std::cout<<i<<" ";
    }

    return 0;
}
