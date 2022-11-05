#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sum=0,avg=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    avg=sum/n;
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=avg){
            cnt++;
        }
    }
    printf("%i",cnt);
}