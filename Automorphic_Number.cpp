#include <iostream>
using namespace std;
int automorphic(int n){
    int sqr = n*n;
    while(n){
        if(n%10 != sqr%10)  return 0;
        n/=10;
        sqr/=10;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(automorphic(n))
        cout<<"Automorphic Number";
    else
        cout<<"Not an Automorphic Number";
}