#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int evensum=0 , oddsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(!(i%2)) evensum+=arr[i];
        if(i%2)   oddsum+=arr[i];
    }
    cout<<abs(evensum - oddsum)<<endl;
}