//In this program I made a simple class with all basic concepts of Object Oriented Programming
#include<iostream>
using namespace std;
class Player{          //Class 
    public:          //Access Modifier
    int score;        //Data members
    int health;                      
    void showhealth(){         //Member functions 
        cout<<"Health is:"<<health; 
    }
    void showscore(){
        cout<<"Score is:"<<score<<endl;
    }};
    int main(){
        Player amit;        //Creating Object
        amit.score=90;      //Assigning values to data members
        amit.health=100;
        amit.showscore();      //Function Calling
        amit.showhealth();
    }
