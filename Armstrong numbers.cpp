#include<iostream>
using namespace std;
int main(){
    int sum,lastdigit;
    cout<<"The armstrong numbers are"<<endl;;
 for(int i=1;i<=500;i++){
    int n=i;
    sum=0;
    while(n>0){
        lastdigit=n%10;
        sum+=lastdigit*lastdigit*lastdigit;
        n/=10;
    }
    if(sum==i){
        cout<<i<<endl;
    }
 }
return 0;
}
