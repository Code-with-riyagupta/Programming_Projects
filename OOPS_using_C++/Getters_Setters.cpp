//Getters Setters functions have wonderful use, we can't directly access private data members outside the class by the objects but with the help of theses functions we can access them
#include<iostream>
using namespace std;
class Player{
    private:
    int score;
    int health;
    public:
    void setscore(int s){
        this->score=s;
    }
    void setHealth(int h){
        this->health=h;
    }
    int getscore(){
        return score;
    }
    int gethealth(){
        return health;
    }};
    int main(){
        Player harsh;
        harsh.setscore(10);
        harsh.setHealth(50);
        cout<<harsh.getscore()<<endl;
        cout<<harsh.gethealth();
    }
