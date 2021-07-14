#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans = ans + i;
    }
    return ans;
}
int32_t main()
{
    int n;
    cout<<"Enter the number to find the sum of the whole numbers till that number:";
    cin>>n;
    cout<<sum(n);
    return 0;
}
