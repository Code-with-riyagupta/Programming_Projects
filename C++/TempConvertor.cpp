//Real life project: A temperature Convertor
#include<iostream>
using namespace std;
int main() {
 int choice;
 double temp,C,F,K;
 cout<<"1.Celsius to Farenhiet";
 cout<<"2.Celsius to kelvin";
 cout<<"3.farenhiet to celsius";
 cout<<"4.farenhiet to kelvin";
 cout<<"5.Kelvin to Celsius";
 cout<<"6.Kelvin to farenhiet"; 
  cout<<"Enter your choice number in the given above";
 cin>>choice;
 cout<<"Enter the value of temperature";
 cin>>temp;
 switch(choice) {
    case 1:
    F=(9*temp)/5+32;
    cout<<"In farenhiet it is:"<<F<<endl;
    break;
    case 2:
    K=273+temp;
    cout<<"In kelvin it is:"<<K;
    break;
    case 3:
    C=(temp-32)*5/9;
    cout<<"In celsius it is:"<<C;
     break;
    case 4:
    K=(temp-32)*5/9 + 273;
    cout<<"In kelvin it is:"<<K;
     break;
    case 5:
    C=temp-273;
    cout<<"In celsius it is:"<<C;
     break;
    case 6:
    C=273-temp;
    F=(9*C)/5+32;
    cout<<"In farenhiet it is:"<<F;
     break;
 }}
