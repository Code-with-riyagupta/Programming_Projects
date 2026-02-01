 #include<iostream>
using namespace std;
class Bike{
    public:
    int tyreSize;
    Bike(int tyreSize){                 //Parameterized Constructor
        this->tyreSize=tyreSize;
        cout<<"Constructor Call hua"<<endl;
    }
~Bike(){                                 //Destructor
    cout<<"destructor call hua"<<endl;
}};
int main(){
    Bike tvs(12);
    Bike honda(13);
    Bike Bajaj(20);
    cout<<tvs.tyreSize<<endl;
    cout<<honda.tyreSize<<endl;
    cout<<Bajaj.tyreSize<<endl;

}
