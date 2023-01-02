#include <bits/stdc++.h>
using namespace std;

// that means vector of array
vector<int> v[3];

int main()
{
    // v[0],v[1],v[2] is a vector
    v[0]={1,2,3};
    v[1]={4,5};
    v[2]={7,8,9,10,20};

    for (int i = 0; i < 3; i++)
    {
        for(auto val:v[i])
        {
            cout<<val<<",";
        }
        cout<<endl;
    }
    

    return 0;
}