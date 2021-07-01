#include<iostream>
using namespace std;
class Animal{
    
    void speak(){
        cout<<"Animals are speaking.";
    }
};
class Dog:Animal{
   public:
    void speak(){
        cout<<"The dog is barking";
    }

};
int main(){
    Dog d = Dog();
    d.speak();
    return 0;
}