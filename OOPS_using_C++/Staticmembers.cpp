#include<iostream>
using namespace std;
class Bike{
    public:
    static int noofBikes;
    int tyresize;
    Bike(int tyreSize){                
        this->tyresize=tyresize;
    }
     static void increaseNoofBikes(){
    noofBikes++;
}};
int Bike::noofBikes=10;
int main(){
    Bike royalEnfield(15);
    Bike bajaj(13);
    cout<<royalEnfield.noofBikes<<endl;
    cout<<bajaj.noofBikes<<endl;
    bajaj.increaseNoofBikes();
    cout<<royalEnfield.noofBikes<<endl;
    cout<<bajaj.noofBikes<<endl;
    Bike::increaseNoofBikes();
    cout<<bajaj.noofBikes<<endl;
}
