#include<iostream>
using namespace std;
int main()
{
    string s1 = "This is a normal string.";
    string s2 = R"(This is the raw string.\n)";
    cout<<s1<<endl<<s2;
    return 0;
}