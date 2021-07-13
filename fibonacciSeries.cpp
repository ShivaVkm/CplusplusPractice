#include<iostream>
using namespace std;
void fibonacciSeries(int n)
{
    int term1 = 0;
    int term2 = 1;
    int nextTerm;
    for(int i=1; i<=n; i++)
    {
        cout<<term1<<endl;
        nextTerm = term1+term2;
        term1 = term2;
        term2 = nextTerm;
        
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter the number to find its fibonacci series:";
    cin>>n;
    fibonacciSeries(n);
    return 0;
}