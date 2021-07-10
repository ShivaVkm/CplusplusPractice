#include<iostream>
using namespace std;
int maximumNumber(int num1, int num2)
{
    if(num1 > num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}
int main()
{
    int n1, n2;
    cout<<"Enter the two numbers to find the maximum numbers between them:";
    cin>>n1>>n2;
    int maximumNumberResult = maximumNumber(n1, n2);
    cout<<"The maximum number between "<<n1<<" and "<<n2<<" is "<<maximumNumberResult;
    return 0;
}