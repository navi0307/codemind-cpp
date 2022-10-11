#include<bits/stdc++.h>
using namespace std;

void nearestFibonacci(int num){
    //base case
    if(num==0){
        cout<<0<<endl;
        return;
    }

    int first = 0, second = 1, third = first + second;

    while(third <= num){
        first = second;
        second = third;
        third = first + second;
    }
    if(abs(third - num) > abs(second - num))    cout<<second;
    else if(abs(third - num) == abs(second - num))   cout<<second<<" "<<third;
    else cout<<third;
}

int main()
{
    int n;
    cin>>n;
    nearestFibonacci(n);
    return 0;
}