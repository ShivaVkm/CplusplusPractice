#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cin>>n;
    for(int i=2;i<=n;i=i++){
        if(n%i==0)
        {
            count++;
        }
              

    }
    if(count == 1){
            cout<<"Prime no.";
        }
        else
        {
            cout<<"Non-prime no.";
        }
    return 0;
}