//Sum of two numbers using pointers
#include<iostream>
using namespace std;
int main(){
int x,y;
int*ptr1=&x;
int*ptr2=&y;
cout<<"Enter 1st number";
cin>>*ptr1;
cout<<"Enter 2nd pointer";
cin>>*ptr2;
cout<<x+y;
}
