#include<iostream>
using namespace std;
int main()
{
    int twoDimensionalArrayNumber[3][3] = {
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<"Number at two dimensional array index["<<i<<"]["<<j<<"] = "<<twoDimensionalArrayNumber[i][j];
            cout<<endl;
        }
    }
    return 0;
}