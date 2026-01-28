// Here I wanna show you the wonderful advantage of using functions that is without writing codes multiple times for repeating star triangle pattern of different sizes,
// there is a function named starTriangle by which we can make any number of Traingles of any size by just calling it.

#include<iostream>
using namespace std;
void starTriangle(int n){ //Function declaration
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }cout<<endl;
    }}
    int main(){
        starTriangle(3); //Function calling
        starTriangle(4); //Function calling
        starTriangle(5); //Function calling
    }
