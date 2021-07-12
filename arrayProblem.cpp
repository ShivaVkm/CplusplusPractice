/*
Write a program to accept 5 unique integers from the user. 
Make sure if the integer being entered is already present in the list 
your code displays the message “Item already present” and ask the user to re-enter the integer.
*/

#include<iostream>
using namespace std;
int main()
{
    int listOfNumbers[5];
    cout<<"Enter the 5 unique integers:";
    for(int i=1; i<=5; i++)
    {
    	cin>>listOfNumbers[i];
    }
    if(listOfNumbers[0] == listOfNumbers[1] || listOfNumbers[0] == listOfNumbers[2] || listOfNumbers[0] == listOfNumbers[3] || listOfNumbers[0] == listOfNumbers[4] ||
    listOfNumbers[1] == listOfNumbers[2] || listOfNumbers[1] == listOfNumbers[3] || listOfNumbers[1] == listOfNumbers[4] || listOfNumbers[2] == listOfNumbers[3] || listOfNumbers[2] == listOfNumbers[4] || listOfNumbers[3] == listOfNumbers[4])
    {
    	cout<<"Item already present"<<endl;
    	cout<<"Re-enter the integers:";
    	for(int i=1; i<=5; i++)
    	{
    		cin>>listOfNumbers[i];
   	 	}

        for(int i=1; i<=5; i++)
    	{
    		cout<<listOfNumbers[i]<<" ";
   	 	}
        
    }
    else
    {
    	for(int i=1; i<=5; i++)
    	{
    		cout<<listOfNumbers[i]<<" ";
   	 	}
    }
	return 0;
}