#include<iostream>
using namespace std;
int main()
{
    int singleDimensionalArrayNumber[5] = {10,20,30,40,50};
    for(int i=0; i<5; i++)
    {
        cout<<"Number at the single dimensional array index["<<i<<"] = "<<singleDimensionalArrayNumber[i];
        cout<<endl;
    }
    return 0;
}