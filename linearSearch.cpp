// #include<iostream>
// using namespace std;
// int linearSearch(int array[], int n, int key){
//     for(int i=0; i<n; i++){
//         if(array[i] == key){
//             return i;
//         }
//     }
//     return -1;
// }
// int main(){
//     int n;
//     cin>>n;
//     int array[n];
//     for(int i=0; i<n; i++){
//         cin>>array[i];
//     }
//     int key;
//     cin>>key;
//     cout<<linearSearch(array, n, key)<<endl;
//     return 0;
// }

// cin uses the insertion operator (>>) while cout uses the extraction operator (<<).








// ##############  The Binary Search Technique ############## //

#include<iostream>
using namespace std;
int binarySearch(int array[], int n, int key){          // array = {12,13 14,15,16,18,19} here 15 is the middle element
    int s=0;  // s stands for starting element
    int e=n;   // e stands for the last/ending element 
    while(s<=e){
        int mid = (s+e)/2;
        if(array[mid] == key){ // mid means middle element
            return mid;
        }else if(array[mid>key]){
            e = mid-1;
        }else{
            s = mid+1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i];
    }
    int key;
    cin>>key;
    cout<<binarySearch(array, n, key)<<endl;
    return 0;
}


