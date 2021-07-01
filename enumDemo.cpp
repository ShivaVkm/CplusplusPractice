#include<iostream>
using namespace std;
enum week{Monday,Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
int main(){
    week day;
    day = Saturday;
    cout<<day+1;
    return 0;
}
