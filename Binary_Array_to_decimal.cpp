#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int acha=n-1;
    int sum=0;
    for(int i=0;i<n;i++,acha--){
        sum+=pow(2,acha)*arr[i];
    }
    cout<<sum<<endl;
}