#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}

/*
enter into 1st for loop
then enter into 2nd for loop
then print 1 as count = 1
then increment the value of count by 1
then again go into 1st for loop this time j=2 so check condition 2<=1 so its false so come out of the loop and execute a new line
now i=2 because it is incremented in 1st for loop
then in 2nd for loop j=1 so 1<=2 so its true then we will print count's value as 2 because it was incremented by 1
then again go into 2nd for loop and now j=2 because it is incremented so 2<=2 so its true then the value of count will be 3
then again go into 2nd for loop and now j=3 because it is incremented so 3<=2 so its false  so come out of the loop and execute a new line
and so on...
*/