#include<iostream>
// #include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int originalNumber = n;
    while(n>0){
        int lastdigit = n%10;
        sum += lastdigit*lastdigit*lastdigit;         // sum += pow(lastdigit,3);
        n = n/10;
    }
    if(sum == originalNumber){
        cout<<"Armstrong number";
    }
    else{
        cout<<"Not armstrong number";
    }
    return 0;
}