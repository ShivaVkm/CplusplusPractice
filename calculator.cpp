#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;
    cout<<"Enter the two numbers:";
    cin>>num1>>num2;
    cout<<"\nEnter the operator to perform:";
    cin>>op;
    switch(op){
        case '+':
            cout<<num1+num2;
            break;
        case '-':
            cout<<num1-num2;
            break;
        case '*':
            cout<<num1*num2;
            break;
        case '/':
            cout<<num1/num2;
            break;
        case '%':
            cout<<num1%num2;
            break;
        default:
            cout<<"Operator not found";            

    }
    return 0;
}