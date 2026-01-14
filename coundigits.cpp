#include<iostream>
using namespace std;
int count_digit(int n){
    int count=0;
    while(n>0){
        n/=10;
        count++;    
    }
    cout<<count;
    }    
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    count_digit(n);
}
