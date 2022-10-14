#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int k=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(i%2==0 && arr[i]%2==0){
            k=1;
        }
        else if(i%2!=0 && arr[i]%2==0){
            k=0;
            break;
        }
        else if(arr[0]%2==0)    k=1;
    }
    if(k==0)    cout<<"False";
    else cout<<"True";
}