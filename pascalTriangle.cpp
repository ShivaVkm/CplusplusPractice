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
    int n;
    cout<<"Enter the number of rows to find the Pascal's Triangle:";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<factorial(i)/(factorial(j)*factorial(i-j))<<" ";
        }
        cout<<endl;
    }

    return 0;
}