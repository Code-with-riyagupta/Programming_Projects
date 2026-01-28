#include<iostream>
using namespace std;
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
    fact*=i;
    } return fact;
}
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int r;
    cout<<"Enter the value of r ";
    cin>>r;
    int nfact=fact(n);
    int rfact=fact(r);
    int nrfact=fact(n-r);
    int ncr=nfact/(rfact*nrfact);
    cout<<"Total possible combinations are"<<ncr<<endl;
    int npr=fact(n)/fact(n-r);
    cout<<"Total possible permutations are"<<npr<<endl;
}
