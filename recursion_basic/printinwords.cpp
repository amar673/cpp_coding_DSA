#include <bits/stdc++.h>
using namespace std;

void pritnInchar(int n , unordered_map<int,string>ump)
{
    if(n == 0) return ;
    pritnInchar(n/10,ump);
    
    cout<<ump[n%10]<<" ";

}
//You have been given a number of stairs. 
//Initially, you are at the 0th stair, and you need to reach the Nth stair. 
//Each time you can either climb one step or two steps. 
//You are supposed to return the number of distinct ways in which you can climb from the 0th step to Nth step.
int main() {
    
    int number;
    cin>>number;
    unordered_map<int,string>ump;
    ump[1]="one";
    ump[2]="TWO";
    ump[3]="THREE";
    ump[4]="FOUR";
    ump[5]="FIVE";
    ump[6]="SIX";
    ump[7]="SEVEN";
    ump[8]="EIGHT";
    ump[9]="NINE";
    ump[0]="ZERO";
    
    pritnInchar(number,ump);
    
    return 0;
}