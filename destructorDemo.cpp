#include<iostream>
using namespace std;
class demo{
    public:
        demo(){
            cout<<"This is constructor.\n";
        }
        ~demo(){
            cout<<"This is destructor.\n";
        }
};
int main()
{
    demo d;
    demo d1;
    return 0;
    
}