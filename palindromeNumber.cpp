#include<iostream>
using namespace std;
int main(){
    int num;
    int remainder;
    int reverse = 0;
    cout<<"Enter a number to find whether it is palindrome number or not:";
    cin>>num;
    int temporaryNumber = num;
    while(num>0){
        remainder = num%10;
        reverse = reverse*10 + remainder;
        num = num/10;
    }
    if(temporaryNumber == reverse){
        cout<<temporaryNumber<<" is a palindrome number.";
    }
    else{
        cout<<temporaryNumber<<" is not a palindrome number.";
    }
    return 0;
}