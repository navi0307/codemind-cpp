#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==1)    return 0;
    bool flag=0;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=1; break;
        }
    }
    return flag==0?1:0;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(prime(arr[i])){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}