#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for(int i=2; i<=n; i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int n, r;
    cin>>n>>r;
    int nCrResult = factorial(n)/(factorial(r) * factorial(n-r));
    cout<<nCrResult;
    return 0;
}