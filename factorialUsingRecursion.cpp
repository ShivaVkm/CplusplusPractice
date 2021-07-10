#include<iostream>
using namespace std;
int main()
{
    int factorial(int);
    int n;
    int fact;
    cout<<"Enter the number to find its factorial:";
    cin>>n;
    fact = factorial(n);
    cout<<"The factorial of "<<n<<" is "<<fact;
    return 0;
}

int factorial(int n1)
{
    if(n1<0)
    {
        return -1;
    }
    else if(n1 == 0)
    {
        return 1;
    }
    else
    {
        return (n1 * factorial(n1 - 1));
    }
}