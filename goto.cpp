#include<iostream>
using namespace std;
int main(){
    int age;
     isNotEligible:
        cout<<"Not eligible to vote\n";
    cout<<"Enter the age ";
    cin>>age;
   
    if(age<18){
        goto isNotEligible;

    }else{
        cout<<"You are eligible to vote";
    }
    return 0;
}