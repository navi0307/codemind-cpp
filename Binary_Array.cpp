#include<iostream>
using namespace std;

void acha(int arr[],int n)
{
    int k=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0 || arr[i]==1){
            k=1;   
        }
        else{
        k=0;
        break;    
        }
    }
    if(k==1)    cout<<"True";
    else cout<<"False";
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    acha(arr,n);
}