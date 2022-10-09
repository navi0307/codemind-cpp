#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int a,b;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            a=i;    break;
        }
    }
    
    for(int j=n-1;j>=0;j--){
        if(arr[j]%2==0){
            b=j;    break;
        }
    }
    
    for(int i=a+1;i<b;i++){
        if(!(arr[i]%2)){
            cnt++;
        }
    }
    
    cout<<cnt<<endl;
    
    return 0;
}