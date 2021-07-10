#include<iostream>
using namespace std;
int main()
{
    int number;
    cout<<"Enter the size to print the half pyramid after 180 degree rotation:";
    cin>>number;
    for(int i=1; i<=number; i++)
    {
        for(int j=1; j<=number; j++)
        {
            if(j<=number-i)
            {
                cout<<"  ";
            }
            else
            {
                cout<<" *";
            }
        }
        cout<<endl;
    }
    return 0;
}