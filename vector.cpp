#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;

    int x;
    
    while(x!=-1)
    {
        cout<<"Enter element:";
        cin>>x;
        if(x!=-1)
        {
            a.push_back(x);
        }
    }
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<"\n";
    }
    int i=0;
    return 0;
}
