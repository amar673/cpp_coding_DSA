#include <bits/stdc++.h>
using namespace std;

bool isSort(int arr[],int n){
    if( n == 0 and n == 1) return true;
    
    if(arr[0]>arr[1]) return false;
    
    isSort(arr+1,n-1);
    return true;
}

int main() {
    
    int number;
    cin>>number;
    int arr[number];
    for(int i = 0; i< number ;i++){
        cin>>arr[i];
    }
    if(isSort(arr,number)){
     cout<<"Sorted Array";   
    }
    else{
        cout<<"Unsorted Array";
    }
    return 0;
}