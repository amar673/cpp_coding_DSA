#include <bits/stdc++.h>
using namespace std;

int Sum(int arr[],int n){
    if( n == 0) return arr[n];

    
    return arr[n]+Sum(arr,n-1);
}

int main() {
    
    int number;
    cin>>number;
    int arr[number];
    for(int i = 0; i< number ;i++){
        cin>>arr[i];
    }
    cout<<Sum(arr,number-1);
    return 0;
}