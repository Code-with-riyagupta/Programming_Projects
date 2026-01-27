#include<iostream>
using namespace std ;
int main (){
    float wt,ht,BMI ;
    cout<<"Enter your weight in kg" ;
    cin>>wt ;
    cout<<"Enter your height in metre" ;
    cin>>ht ;
    BMI=wt/(ht*ht) ;
    cout<<"Your Body mass index is"<<BMI;       
    if(BMI<18.5) {
        cout<<" You are underweight & need to gain weight " ;  
    }  else if(BMI>=18.5 && BMI<=24.9) {
         cout<<"You are normal weight" ;
            }   
    else {
        cout<<"You are overweight & need to loose weight" ;
            }}
