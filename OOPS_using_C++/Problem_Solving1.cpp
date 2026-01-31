//Q Create a class 'Book' with name , price and no.ofPages as it's attributes.The Class should contain following data member functions:
// CountBooks(int price):This Function will return count of all the books that have a price less than the given price.
//isBookPresent(string Title): This will return a boolean value indicating whether any book with the given title
#include<iostream>
using namespace std;
class Book{
    public:
    string name;
    int price;
    int noofpages;
    int countBooks(int p){
        if(price<p)
        return 1;
        else return 0;
    }
    int isBookPresent(string book){
        if(name==book)
            return true;
            else 
             return false;
        }};
        int main(){
            Book H;
            H.name="HarryPotter";
            H.price=1000;
            H.noofpages=500;
            cout<<H.countBooks(2000)<<endl;
            cout<<H.isBookPresent("HarryPotter");
        }
