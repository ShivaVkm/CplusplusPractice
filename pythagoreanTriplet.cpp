#include<bits/stdc++.h>
using namespace std;
bool isPythagoreanTriplet(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if(a == x)
    {
        b = y;
        c = z;
    }
    else if(a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    if(a*a == b*b + c*c)
    {
        return true;
    }
    else
    {
        return false;
    }

   
}
int32_t main()
{
    int x, y, z;
    cout<<"Enter the three numbers for the pythagorean triplets:";
    cin>>x>>y>>z;
    if(isPythagoreanTriplet(x, y, z))
    {
        cout<<x<<","<<y<<","<<z<<" are the pythagorean triplets";
    }   
    else
    {
        cout<<x<<","<<y<<","<<z<<" are not the pythagorean triplets";
    }
    return 0;
}