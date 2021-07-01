#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    int ans = 0;
    for(int i=1; i<=n; i++)
        ans += 1;
    return ans;
    
    
}
int main(){

    int n;
    cin>>n;
    cout<<sum(n)<<endl;
    return 0;
    
}

// #include<iostream>
// using namespace std;
// int main(){
//     int n = 7;
//     if(!(n & 1)){
//         cout<<"option A";
//     }else
//     {
//         cout<<"option B";
//     }
//     int a=1,b=2;
//     if(a & b){
//         cout<<"true";
//     }
//     else{
//         cout<<"false";
//     }
//     return 0;
// }


