// #include <iostream>
// #include <conio.h>

// using namespace std;

// int main()
// {
// int no;
// char student_name[100];
// string subject_name;
// float marks[10], per=0, total=0;
// cout<<"Enter Student name: ";
// cin.get(student_name, 100);

// cout<<"Enter no. of subjects: ";
// cin>> no;
// for(int i=0; i<no; i++)
// {
//      cout<<"Enter subject"<<i+1<<" name: ";
//      getline(cin, subject_name);
// }
// for(int i=0; i<no; i++)
// {
//     cout<<"Enter marks of "<<i+1<<" subject out of 100 is: ";
//     cin>>marks[i];
// }
// for(int i=0; i<no; i++)
// {
//     total=total+marks[i];
// }
// cout<<"Student name is: "<<student_name<<endl;
// cout<<"The total marks scored is: "<<total<<endl;
// per=total*100/(no*100);
// cout<<"The Percentage is: "<<per;
// return 0;
// }










// #include <iostream>    
// using namespace std;    
// class Cal {    
//     public:    
// static int add(int a,int b){      
//         return a + b;      
//     }      
// static int add(int a, int b, int c)      
//     {      
//         return a + b + c;      
//     }      
// };     
// int main(void) {    
//     Cal C;                                                    //     class object declaration.   
//     cout<<C.add(10, 20)<<endl;      
//     cout<<C.add(12, 20, 23);     
//    return 0;    
// }  




// #include<iostream>
// using namespace std;
// int main(){
//     int n, m, a=0;
//     cin>>n>>m;
//     for(int i=1 ; i<=n; i++)
//     {
//         for(int j=1; j<=m; j++)
//         {
//             a = a + rand();
//             cout<<a<<endl;
//         }
//     }
//     for(int i=1; i<=n; i++)
//         {
//             a = a + rand();
//             cout<<a<<endl;
//         }
//     return 0;
// }











// #include<iostream>
// using namespace std;
// int main()
// {
//     int n, sum = 0;
//     cout<<"Enter the positive integer: ";
//     cin>>n;
//     for(int count = 1; count <= n; count++)
//     {
//         sum = sum + count;
//     }
//     cout<<sum;
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     return 0;
// }




// #include<iostream>
// using namespace std;
// int main()
// {
//     int numberArrays[] = {1,2,3,4,5,6,7,8,9,10};
//     for(int n : numberArrays)
//     {
//         cout<<n<<"  ";
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     for(int i=0; i<n; i++){
//         cout<<array[i]<<endl;
//     }
//     return 0;
// }





// #include<iostream>
// using namespace std;
// int main(){
//     int numbers[5] = {10,0,20,0,30};
//     for(int i=0; i<5; i++){
//         cout<<numbers[i]<<endl;
//     }
//     return 0;
// }




// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//  int arr[5]={10, 0, 20, 0, 30};  //creating and initializing array    
//         //traversing array    
//         for (int i = 0; i < 5; i++)    
//         {    
//             cout<<arr[i]<<"\n";    
//         }   
//         return 0; 
// }





// #include <iostream>  
// using namespace std;  
// int main()  
// {  
//  int arr[5]={10, 0, 20, 0, 30}; //creating and initializing array    
//         //traversing array    
//        for (int i: arr)     
//         {    
//             cout<<i<<"\n";    
//         }    
// }







// #include<iostream>
// using namespace std;
// int main(){
//     int array[3][2] = {{12,13},{14,15},{16,17}};
//     for(int i=0; i<3; i++){
//         for(int j=0; j<2; j++){
//             cout<<i<<"   "<<j<<": "<<array[i][j]<<endl;
//         }
//     }
//     return 0;
// }








