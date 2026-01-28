//Printing area of a circle using functions
#include<iostream>
using namespace std;
float area(int r){
    float area=3.14*r*r;
    return area;
}
int main(){
    float r;
    cout<<"Enter the radius";
    cin>>r;
    cout<<"Area "<<area(r);
    return 0;
}
