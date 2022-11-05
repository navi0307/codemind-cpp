#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0,av=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    int cnt=0;
    av=sum/n;
    for(int i=0;i<n;i++){
        if(arr[i]<=av){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}